// LilithPort.cpp : 主项目文件。

#include "stdafx.h"
#include "MainForm.h"
#include <math.h>

using namespace LilithPort;

// グローバル
MT_SP_INFORMATION  MTINFO;
MT_SP_OPTION       MTOPTION;
MT_SP_WINDOW_STATE MTWS;
MT_SP_COLOR        MTCOLOR;

CRITICAL_SECTION CS_CAPTION;

// ---------------------------------------------------------------------------
// Command line interface
// ---------------------------------------------------------------------------
MT_SP_COMMAND_LINE MTCMD;

static void CLICopyTchar(String^ src, TCHAR* dst, int size)
{
	if(dst == nullptr || size <= 0) return;

	if(src == nullptr){
		dst[0] = 0;
		return;
	}

	IntPtr mp = System::Runtime::InteropServices::Marshal::StringToHGlobalAuto(src);
	_tcsncpy_s(dst, size, static_cast<PTCHAR>(mp.ToPointer()), _TRUNCATE);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(mp);
	dst[size - 1] = 0;
}

static bool CLIStringToUInt(String^ s, UINT& result)
{
	if(s == nullptr) return false;

	s = s->Trim();
	if(s->Length == 0) return false;

	try{
		result = (UINT)Convert::ToUInt32(s);
		return true;
	}
	catch(Exception^){
		return false;
	}
}

static String^ CLIGetValue(array<String^>^ args, int& index, String^ inlineValue)
{
	if(inlineValue != nullptr) return inlineValue;

	if(index + 1 < args->Length){
		index++;
		return args[index];
	}

	return nullptr;
}

// Same GAME.INI that is read when the game exe is dropped onto the window
bool LoadGameIniOption()
{
	if(!System::IO::File::Exists(gcnew String(MTOPTION.GAME_EXE))) return false;

	System::Diagnostics::FileVersionInfo^ info;

	try{
		info = System::Diagnostics::FileVersionInfo::GetVersionInfo(gcnew String(MTOPTION.GAME_EXE));
	}
	catch(Exception^){
		return false;
	}

	bool b2nd = (info->FileDescription == L"\uFF12\uFF24\u683C\u95D8\u30C4\u30AF\u30FC\u30EB2nd.");

	if(!b2nd && info->FileDescription != L"\uFF12\uFF24\u683C\u95D8\u30C4\u30AF\u30FC\u30EB\uFF19\uFF15"){
		return false;
	}

	TCHAR ini[_MAX_PATH], dirBuf[_MAX_PATH], driveBuf[_MAX_DRIVE], nameBuf[_MAX_PATH];

	_tsplitpath_s(MTOPTION.GAME_EXE, driveBuf, _MAX_DRIVE, dirBuf, _MAX_DIR, NULL, 0, NULL, 0);

	if(b2nd){
		_tcscpy_s(nameBuf, _countof(nameBuf), _T("GAME.INI"));
	}
	else{
		_tcscpy_s(nameBuf, _countof(nameBuf), L"\uFF12\uFF24\u683C\u95D8\u30C4\u30AF\u30FC\u30EB\uFF19\uFF15.INI");
	}

	_stprintf_s(ini, _countof(ini), _T("%s%s%s"), driveBuf, dirBuf, nameBuf);

	if(!System::IO::File::Exists(gcnew String(ini))){
		return false;
	}

	UINT stage = (UINT)GetPrivateProfileInt(L"\u6E38\u620F\u8BBE\u7F6E", L"\u7F16\u8F91\u5668.\u6D4B\u8BD5\u6E38\u620F.\u573A\u666F\u53F7", 0, ini) + 1;
	UINT round = (UINT)GetPrivateProfileInt(L"\u6E38\u620F\u8BBE\u7F6E", L"\u7F16\u8F91\u5668.\u6D4B\u8BD5\u6E38\u620F.VS\u5355\u4EBA\u6E38\u620F", 0, ini);
	UINT timer = (UINT)GetPrivateProfileInt(L"\u6E38\u620F\u8BBE\u7F6E", L"\u7F16\u8F91\u5668.\u6D4B\u8BD5\u6E38\u620F.\u65F6\u95F4", 0, ini);

	MTOPTION.MAX_STAGE    = stage < 1 ? 1 : stage;
	MTOPTION.ROUND        = (b2nd && round > 0) ? round : 2;
	MTOPTION.TIMER        = timer;
	MTOPTION.STAGE_SELECT = MTOPTION.MAX_STAGE == 1 ? 1 : 0;

	return true;
}

// Parse the command line. Must be called after LoadMTOption()/CheckMTOption()
bool ParseCommandLine(array<String^>^ args)
{
	MTCMD.ACTIVE     = false;
	MTCMD.AUTOSTART  = false;
	MTCMD.HELP       = false;
	MTCMD.GAME_TYPE  = (UINT)RT_FREE;
	MTCMD.STAGE      = 0;
	MTCMD.ROUND      = 0;
	MTCMD.TIMER      = 0;
	MTCMD.REPLAY_FILE[0] = 0;

	if(args == nullptr || args->Length == 0){
		return false;
	}

	String^ optGame    = nullptr;
	String^ optNick    = nullptr;
	String^ optRoom    = nullptr;
	String^ optConnect = nullptr;
	String^ optReplay  = nullptr;
	String^ optMotd    = nullptr;
	String^ optSign    = nullptr;

	bool flagHost     = false;
	bool flagClient   = false;
	bool flagFree     = false;
	bool flagJoinHost = false;
	bool portGiven    = false;
	UINT optPort      = 0;
	UINT tmpPort      = 0;

	for(int i = 0; i < args->Length; i++){
		if(args[i] == nullptr) continue;

		String^ key = args[i];
		String^ val = nullptr;

		// --key=value form
		if(key->StartsWith("--")){
			int eq = key->IndexOf('=');
			if(eq > 0){
				val = key->Substring(eq + 1);
				key = key->Substring(0, eq);
			}
		}

		key = key->ToLower();

		if(key == "-h" || key == "--help" || key == "-?" || key == "--?" || key == "/?"){
			MTCMD.HELP = true;
			return false;
		}
		else if(key == "-c" || key == "--connect" || key == "-connect" || key == "-ip" || key == "--ip"){
			String^ v = CLIGetValue(args, i, val);
			if(v != nullptr && v->Length > 0 && !v->StartsWith("-")){
				optConnect = v;
				flagClient = true;
			}
		}
		else if(key == "-jh" || key == "--join-host" || key == "-joinhost"){
			String^ v = CLIGetValue(args, i, val);
			if(v != nullptr && v->Length > 0 && !v->StartsWith("-")){
				optConnect   = v;
				flagClient   = true;
				flagJoinHost = true;
			}
		}
		else if(key == "-s" || key == "--server" || key == "-server" || key == "-host" || key == "--host"){
			flagHost = true;

			if(val != nullptr){
				if(CLIStringToUInt(val, tmpPort) && tmpPort > 0 && tmpPort < 65536){
					optPort   = tmpPort;
					portGiven = true;
				}
			}
			else if(i + 1 < args->Length && CLIStringToUInt(args[i + 1], tmpPort) && tmpPort > 0 && tmpPort < 65536){
				i++;
				optPort   = tmpPort;
				portGiven = true;
			}
		}
		else if(key == "-p" || key == "--port" || key == "-port"){
			String^ v = CLIGetValue(args, i, val);
			if(v != nullptr && CLIStringToUInt(v, tmpPort) && tmpPort > 0 && tmpPort < 65536){
				optPort   = tmpPort;
				portGiven = true;
			}
		}
		else if(key == "-n" || key == "--nick" || key == "--name" || key == "-name"){
			String^ v = CLIGetValue(args, i, val);
			if(v != nullptr && v->Length > 0){
				optNick = v;
			}
		}
		else if(key == "-room" || key == "--room" || key == "-title" || key == "--title"){
			String^ v = CLIGetValue(args, i, val);
			if(v != nullptr && v->Length > 0){
				optRoom = v;
			}
		}
		else if(key == "-g" || key == "--game" || key == "-game" || key == "--exe"){
			String^ v = CLIGetValue(args, i, val);
			if(v != nullptr && v->Length > 0){
				optGame = v;
			}
		}
		else if(key == "-a" || key == "--autostart" || key == "-start" || key == "--start" || key == "-play" || key == "--play"){
			MTCMD.AUTOSTART = true;
			MTCMD.GAME_TYPE = (UINT)RT_FREE;
		}
		else if(key == "-replay" || key == "--replay" || key == "-r"){
			String^ v = CLIGetValue(args, i, val);
			if(v != nullptr && v->Length > 0){
				optReplay       = v;
				MTCMD.AUTOSTART = true;
				MTCMD.GAME_TYPE = (UINT)RT_PLAYBACK;
			}
		}
		else if(key == "-motd" || key == "--motd" || key == "-notice" || key == "--notice" || key == "-welcome" || key == "--welcome"){
			String^ v = CLIGetValue(args, i, val);
			if(v != nullptr && v->Length > 0){
				optMotd = v;
			}
		}
		else if(key == "-sign" || key == "--sign" || key == "-comment" || key == "--comment" || key == "-sig" || key == "--sig"){
			String^ v = CLIGetValue(args, i, val);
			if(v != nullptr && v->Length > 0){
				optSign = v;
			}
		}
		else if(key == "-stage" || key == "--stage"){
			String^ v = CLIGetValue(args, i, val);
			if(v != nullptr && CLIStringToUInt(v, tmpPort)) MTCMD.STAGE = tmpPort;
		}
		else if(key == "-round" || key == "--round"){
			String^ v = CLIGetValue(args, i, val);
			if(v != nullptr && CLIStringToUInt(v, tmpPort)) MTCMD.ROUND = tmpPort;
		}
		else if(key == "-timer" || key == "--timer"){
			String^ v = CLIGetValue(args, i, val);
			if(v != nullptr && CLIStringToUInt(v, tmpPort)) MTCMD.TIMER = tmpPort;
		}
		else if(key == "-f" || key == "--free" || key == "-free"){
			flagFree = true;
		}
		// unknown arguments are ignored
	}

	// ---------------------------- apply to global settings
	if(flagHost){
		MTOPTION.CONNECTION_TYPE = CT_SERVER;
		if(portGiven) MTOPTION.OPEN_PORT = optPort;
	}
	else if(flagClient){
		if(flagJoinHost){
			MTOPTION.CONNECTION_TYPE = CT_HOST;
		}
		else{
			MTOPTION.CONNECTION_TYPE = CT_CLIENT;
		}

		if(optConnect != nullptr){
			String^ ip = optConnect;

			// allow the ip:port form
			int colon = ip->LastIndexOf(':');
			if(colon > 0 && colon < ip->Length - 1){
				UINT p = 0;
				try{
					p = (UINT)Convert::ToUInt32(ip->Substring(colon + 1));
				}
				catch(Exception^){
					p = 0;
				}
				if(p > 0 && p < 65536){
					optPort   = p;
					portGiven = true;
					ip        = ip->Substring(0, colon);
				}
			}

			CLICopyTchar(ip, MTOPTION.CONNECTION_IP, MAX_ARRAY);
		}

		if(portGiven) MTOPTION.PORT = optPort;
	}
	else{
		// no -s / -c / -jh given: run as offline single player
		MTOPTION.CONNECTION_TYPE = CT_FREE;
	}

	if(optNick != nullptr){
		CLICopyTchar(optNick, MTOPTION.NAME, MAX_NAME);
	}

	// Signature (the text shown after the nickname in the member list)
	if(optSign != nullptr && optSign->Length > 0){
		CLICopyTchar(optSign, MTOPTION.COMMENT, MAX_NAME);
	}

	if(optRoom != nullptr){
		CLICopyTchar(optRoom, MTOPTION.SERVER_NAME, MAX_NAME);
	}
	else if(flagHost && MTOPTION.SERVER_NAME[0] == 0){
		CLICopyTchar(L"LilithPort", MTOPTION.SERVER_NAME, MAX_NAME);
	}

	// Server announcement (MOTD). MTOPTION.WELCOME is exactly what Begin()
	// prints as the server notice and what is sent to every player who joins.
	if(optMotd != nullptr && optMotd->Length > 0){
		String^ motd = optMotd;

		// _ is used as a line break
		motd = motd->Replace("_", "\n");

		// the notice packet keeps the byte length in a single byte (length * 2 <= 255)
		if(motd->Length > 120){
			motd = motd->Substring(0, 120);
		}

		CLICopyTchar(motd, MTOPTION.WELCOME, MAX_WELCOME);
	}

	if(optGame != nullptr){
		String^ path = optGame;

		if(!System::IO::Path::IsPathRooted(path)){
			path = System::IO::Path::Combine(gcnew String(MTOPTION.PATH), path);
		}

		try{
			path = System::IO::Path::GetFullPath(path);
		}
		catch(Exception^){
		}

		CLICopyTchar(path, MTOPTION.GAME_EXE, _MAX_PATH);
		MTOPTION.GAME_EXE[0] = _totupper(MTOPTION.GAME_EXE[0]);

		LoadGameIniOption();
	}

	if(optReplay != nullptr){
		String^ path = optReplay;

		if(!System::IO::Path::IsPathRooted(path)){
			path = System::IO::Path::Combine(gcnew String(MTOPTION.PATH), path);
		}

		try{
			path = System::IO::Path::GetFullPath(path);
		}
		catch(Exception^){
		}

		CLICopyTchar(path, MTCMD.REPLAY_FILE, _MAX_PATH);
	}

	if(MTCMD.STAGE > 0){
		if(MTOPTION.MAX_STAGE == 0 || MTCMD.STAGE > MTOPTION.MAX_STAGE){
			MTOPTION.MAX_STAGE = MTCMD.STAGE;
		}
		MTOPTION.STAGE_SELECT = MTCMD.STAGE;
	}

	if(MTCMD.ROUND > 0){
		MTOPTION.ROUND = MTCMD.ROUND;
	}

	if(MTCMD.TIMER > 0){
		MTOPTION.TIMER = MTCMD.TIMER;
	}

	MTCMD.ACTIVE = (flagHost || flagClient || flagFree || MTCMD.AUTOSTART
		|| optNick != nullptr || optRoom != nullptr || optGame != nullptr
		|| optReplay != nullptr || MTCMD.STAGE > 0 || MTCMD.ROUND > 0 || MTCMD.TIMER > 0);

	return MTCMD.ACTIVE;
}

void ShowCommandLineHelp()
{
	MessageBox::Show(L"LilithPort \u547D\u4EE4\u884C\u542F\u52A8\u53C2\u6570\n\n\u8FDE\u63A5 / \u623F\u95F4\n  -c, --connect <ip[:port]>   \u76F4\u8FDE\u670D\u52A1\u5668\u5E76\u8FDB\u623F\n  -ip <ip[:port]>             \u540C -c\n  -jh, --join-host <ip[:port]>  \u4EE5\u4E3B\u673A\u8EAB\u4EFD\u8FDB\u522B\u4EBA\u7684\u623F\n  -s, --server [port]         \u672C\u673A\u5F00\u623F(\u670D\u52A1\u5668\u6A21\u5F0F)\n  -host [port]                \u540C -s\n  -p, --port <port>           \u8FDE\u63A5/\u76D1\u542C\u7AEF\u53E3\n  -room, --room <name>        \u623F\u95F4\u540D(\u670D\u52A1\u5668\u663E\u793A\u540D)\n  -n, --nick <name>           \u6635\u79F0\n  -motd <text>                \u670D\u52A1\u5668\u516C\u544A (_ = \u6362\u884C, \u4E0D\u8D85\u8FC7 120 \u5B57)\n  -sign <text>                \u6635\u79F0\u540E\u9762\u7684\u7B7E\u540D (\u4E0D\u8D85\u8FC7 32 \u5B57)\n  -f, --free                  \u5355\u673A\u6A21\u5F0F(\u4E0D\u8054\u7F51)\n\n\u6E38\u620F\n  -g, --game <exe>            \u6307\u5B9A 2DFM \u6E38\u620F\u53EF\u6267\u884C\u6587\u4EF6\n  -a, --autostart             \u542F\u52A8\u540E\u81EA\u52A8\u8FD0\u884C\u6E38\u620F(\u5355\u673A\u5BF9\u6218)\n  -replay <file.mtr>          \u542F\u52A8\u540E\u81EA\u52A8\u64AD\u653E\u5F55\u50CF\n  -stage <n>                  \u6307\u5B9A\u573A\u666F\u53F7(\u4ECE 1 \u5F00\u59CB)\n  -round <n>                  \u9ED8\u8BA4\u56DE\u5408\u6570\n  -timer <n>                  \u9ED8\u8BA4\u65F6\u95F4(\u79D2, 0=\u4E0D\u9650)\n\n\u5176\u5B83\n  -h, --help                  \u663E\u793A\u672C\u5E2E\u52A9", _T("LilithPort"), MessageBoxButtons::OK, MessageBoxIcon::Information);
}


[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// 在控件创建之前，启用 Windows XP 视觉效果
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(true);

	// 自程序的路径
	TCHAR drive[_MAX_DRIVE], dir[_MAX_DIR];

	GetModuleFileName(NULL, MTOPTION.PATH, _MAX_PATH);
	_tsplitpath_s(MTOPTION.PATH, drive, _MAX_DRIVE, dir, _MAX_DIR, NULL, 0, NULL, 0);
	_stprintf_s(MTOPTION.PATH, _T("%s%s"), drive, dir);

	// 命令行参数
	if(args->Length > 0){
		if(args[0] == "-s"){
			MTINFO.SERVER_MODE = true;
			if(args->Length > 1){
				try{
					MTINFO.SERVER_MODE_PORT = (UINT)Convert::ToInt32(args[1]);
				}
				catch(Exception^){
					MTINFO.SERVER_MODE_PORT = 0;
				}
			}else{
				MTINFO.SERVER_MODE_PORT = 0;
			}
		}
		
	}

#ifdef _DEBUG
	MTINFO.DEBUG = true;
#endif

	LoadMTOption();
	CheckMTOption();
	// command line: override the settings from the ini
	if(ParseCommandLine(args)){
		// applied; MainForm_Shown skips the startup dialog
	}
	else if(MTCMD.HELP){
		ShowCommandLineHelp();
		return 0;
	}


	// 随机数初始化 & 混合混合
	XorShift((UINT)DateTime::Now.Ticks);
	XorShift();
	XorShift();
	XorShift();

	// 事先计算好音量(dB)
	MTINFO.VOLUME[0] = -10000;

	for(int i = 1; i < 21; i++){
		// -6dB 音量减半，在 DirectSound 上大约是 -600
		// 19.931568f = -6.0f / log10(0.5f); 
		MTINFO.VOLUME[i] = (INT32)(19.931568f*log10((float)(i*5)/100.0f)*100.0f);
	}

	InitializeCriticalSection(&CS_CAPTION);

	// 捕获未处理的异常
	Application::ThreadException += gcnew ThreadExceptionEventHandler(ApplicationThreadException);
	Threading::Thread::GetDomain()->UnhandledException += gcnew UnhandledExceptionEventHandler(ApplicationUnhandledException);

	// 创建主窗口并运行
	Application::Run(gcnew MainForm());

	DeleteCriticalSection(&CS_CAPTION);

	if(!MTCMD.ACTIVE) SaveMTOption();

	return 0;
}
