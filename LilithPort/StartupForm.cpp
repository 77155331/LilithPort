#include "stdafx.h"
#include "Mainform.h"
//#include "StartupForm.h"

using namespace LilithPort;

bool StartupForm::CheckValidate() {
	// 输入检查
	IntPtr mp;
	TCHAR p1[MAX_ARRAY];
	TCHAR *p2;
	if(radioButtonServer->Checked){
		MTOPTION.CONNECTION_TYPE = CT_SERVER;

		// 服务器名检查
		if(textBoxServerName->Text->Length == 0){
			MessageBox::Show("请输入服务器名称。\n\n要在服务器模式下启动，\n需要输入服务器名称。", "服务器模式错误误", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return false;
		}
		mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxServerName->Text);
		_tcscpy_s(p1, static_cast<PTCHAR>(mp.ToPointer()));
		Runtime::InteropServices::Marshal::FreeHGlobal(mp);
		p2 = _tcschr(p1, _T(','));
		if (p2 != NULL){
			MessageBox::Show("服务器名称中有无法使用的字符(,)。\n请确认服务器名称。", "服务器模式错误", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return false;
		}
	}
	else if(radioButtonHost->Checked){
		MTOPTION.CONNECTION_TYPE = CT_HOST;
	}
	else if(radioButtonClient->Checked){
		MTOPTION.CONNECTION_TYPE = CT_CLIENT;
	}
	else{
		MTOPTION.CONNECTION_TYPE = CT_FREE;
	}
	
	// 服务器名
	if(MTOPTION.CONNECTION_TYPE == CT_SERVER){
		mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxServerName->Text);
		_tcscpy_s(MTOPTION.SERVER_NAME, static_cast<PTCHAR>(mp.ToPointer()));
		Runtime::InteropServices::Marshal::FreeHGlobal(mp);
	}

	// 地址输入检查
	if(MTOPTION.CONNECTION_TYPE == CT_HOST || MTOPTION.CONNECTION_TYPE == CT_CLIENT) {
		if(textBoxIP->Text->Length == 0){
			MessageBox::Show("请输入连接地址。\n\n要在主机端,客户端模式下启动，\n需要输入连接地址。", "主机端，客户端模式错误", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return false;
		}
		mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxIP->Text);
		_tcscpy_s(p1, static_cast<PTCHAR>(mp.ToPointer()));
		p2 = _tcschr(p1, _T(','));
		if (p2 != NULL){
			MessageBox::Show("连接地址中存在无法使用的字符(,)。\n请确认连接地址。", "主机端，客户端模式错误", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return false;
		}

		// 连接地址
		mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxIP->Text);
		_tcscpy_s(MTOPTION.CONNECTION_IP, static_cast<PTCHAR>(mp.ToPointer()));
		Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	}

	// 名字检查
	if(textBoxName->Text->Length == 0){
		textBoxName->Text = gcnew String(MTOPTION.NAME);

		if(textBoxName->Text->Length == 0){
			textBoxName->Text = gcnew String("匿名");
		}
	}

	mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxName->Text);
	_tcscpy_s(MTOPTION.NAME, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	MTOPTION.OPEN_PORT      = (UINT)numericUpDownOpenPort->Value;

	mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxComment->Text);
	_tcscpy_s(MTOPTION.COMMENT, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(textBoxWelcome->Text);
	_tcscpy_s(MTOPTION.WELCOME, static_cast<PTCHAR>(mp.ToPointer()));
	Runtime::InteropServices::Marshal::FreeHGlobal(mp);

	return true;
}


// ---------------------------------------------------------------------------
// LAN / n2n server search
// ---------------------------------------------------------------------------
void StartupForm::InitSearchUI()
{
	SearchTargets = gcnew Generic::List<String^>();

	groupBoxSearch = gcnew GroupBox();
	buttonSearch   = gcnew Button();
	listBoxServers = gcnew ListBox();

	groupBoxSearch->Text     = "服务器搜索 (LAN / n2n)";
	groupBoxSearch->Location = Drawing::Point(12, 236);
	groupBoxSearch->Size     = Drawing::Size(396, 110);

	buttonSearch->Text     = "搜索服务器";
	buttonSearch->Location = Drawing::Point(10, 20);
	buttonSearch->Size     = Drawing::Size(120, 24);
	buttonSearch->Click   += gcnew EventHandler(this, &StartupForm::buttonSearch_Click);

	listBoxServers->Location       = Drawing::Point(10, 50);
	listBoxServers->Size           = Drawing::Size(376, 50);
	listBoxServers->IntegralHeight = false;
	listBoxServers->DoubleClick   += gcnew EventHandler(this, &StartupForm::listBoxServers_DoubleClick);

	groupBoxSearch->Controls->Add(buttonSearch);
	groupBoxSearch->Controls->Add(listBoxServers);
	this->Controls->Add(groupBoxSearch);

	this->ClientSize = Drawing::Size(423, 356);
}

void StartupForm::SearchServers()
{
	listBoxServers->Items->Clear();
	SearchTargets->Clear();

	UdpClient^ udp = nullptr;

	try{
		udp = gcnew UdpClient();
		udp->EnableBroadcast = true;
		udp->Client->ReceiveTimeout = 120;
	}
	catch(Exception^){
		MessageBox::Show("创建搜索套接字失败。", "服务器搜索", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	array<BYTE>^ req = gcnew array<BYTE>(2);
	req[0] = (BYTE)PH_DISCOVER_REQ;
	req[1] = (BYTE)LP_VERSION;

	// limited broadcast
	try{
		udp->Send(req, req->Length, gcnew IPEndPoint(IPAddress::Broadcast, DISCOVERY_PORT));
	}
	catch(Exception^){
	}

	// subnet broadcast of every up interface (covers LAN and n2n virtual adapter)
	try{
		for each(System::Net::NetworkInformation::NetworkInterface^ ni in System::Net::NetworkInformation::NetworkInterface::GetAllNetworkInterfaces()){
			if(ni->OperationalStatus != System::Net::NetworkInformation::OperationalStatus::Up) continue;
			if(ni->NetworkInterfaceType == System::Net::NetworkInformation::NetworkInterfaceType::Loopback) continue;

			for each(System::Net::NetworkInformation::UnicastIPAddressInformation^ ua in ni->GetIPProperties()->UnicastAddresses){
				if(ua->Address->AddressFamily != System::Net::Sockets::AddressFamily::InterNetwork) continue;

				IPAddress^ mask = ua->IPv4Mask;
				if(mask == nullptr) continue;

				array<BYTE>^ addr = ua->Address->GetAddressBytes();
				array<BYTE>^ msk  = mask->GetAddressBytes();
				array<BYTE>^ bca  = gcnew array<BYTE>(4);

				for(int k = 0; k < 4; k++){
					bca[k] = (BYTE)(addr[k] | ((~msk[k]) & 0xFF));
				}

				try{
					udp->Send(req, req->Length, gcnew IPEndPoint(gcnew IPAddress(bca), DISCOVERY_PORT));
				}
				catch(Exception^){
				}
			}
		}
	}
	catch(Exception^){
	}

	UINT start = (UINT)Environment::TickCount;

	while(((UINT)Environment::TickCount - start) < 1500){
		try{
			IPEndPoint^ ep   = gcnew IPEndPoint(IPAddress::Any, 0);
			array<BYTE>^ rcv = udp->Receive(ep);

			if(rcv->Length < 8) continue;

			PacketDivider^ pd = gcnew PacketDivider(rcv);

			if(pd->Divide() != (BYTE)PH_DISCOVER_RES) continue;
			pd->Divide();                                                  // version

			UINT16 port    = BitConverter::ToUInt16(pd->Divide(2), 0);
			UINT16 players = BitConverter::ToUInt16(pd->Divide(2), 0);

			BYTE nlen = pd->Divide();
			array<BYTE>^ nm = pd->Divide(nlen);
			BYTE clen = pd->Divide();
			array<BYTE>^ cm = pd->Divide(clen);

			String^ name = Encoding::Unicode->GetString(nm);
			String^ sign = Encoding::Unicode->GetString(cm);
			String^ ip   = ep->Address->ToString();

			String^ entry = String::Format("{0}  {1}:{2}  人数:{3}", name, ip, port, players);

			if(sign->Length > 0){
				entry = String::Format("{0}  -  {1}", entry, sign);
			}

			SearchTargets->Add(String::Format("{0}:{1}", ip, port));
			listBoxServers->Items->Add(entry);
		}
		catch(Exception^){
			Application::DoEvents();
		}
	}

	try{
		udp->关闭();
	}
	catch(Exception^){
	}

	if(listBoxServers->Items->Count == 0){
		listBoxServers->Items->Add("没有搜到服务器（确认房主已开房，且防火墙放行 UDP 7510）");
	}
}

System::Void StartupForm::buttonSearch_Click(System::Object^ sender, System::EventArgs^ e)
{
	buttonSearch->Enabled = false;

	try{
		SearchServers();
	}
	finally{
		buttonSearch->Enabled = true;
	}
}

System::Void StartupForm::listBoxServers_DoubleClick(System::Object^ sender, System::EventArgs^ e)
{
	int index = listBoxServers->SelectedIndex;

	if(index < 0 || index >= SearchTargets->Count) return;

	textBoxIP->Text = SearchTargets[index];
	radioButtonClient->Checked = true;
}
