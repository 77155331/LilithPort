#pragma once

#include "stdafx.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Diagnostics;

namespace LilithPort {

	/// <summary>
	/// 的概述
	///
	/// 警告：如果更改此类的名称，与此类相关的所有 .resx 文件也会被影响
	///          对管理资源编译器工具的 '资源文件名' 属性
	///          需要更改。如果不进行这个更改的话，
	///          设计师和与此表单相关的本地化资源，
	///          无法正确互相使用了。
	/// </summary>
	public ref class OptionForm : public System::Windows::Forms::Form
	{
	public:
		OptionForm(void)
		{
			InitializeComponent();
			//
			//TODO: 在这里添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~OptionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonOK;
	private: System::Windows::Forms::Button^  buttonApply;
	private: System::Windows::Forms::Button^  buttonCancel;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;

	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::TabPage^  tabPageSound;
	private: System::Windows::Forms::TabPage^  tabPagePath;
	private: System::Windows::Forms::TextBox^  textBoxGameExe;
	private: System::Windows::Forms::Button^  buttonReplayFolder;
	private: System::Windows::Forms::Button^  buttonGameExe;
	private: System::Windows::Forms::TextBox^  textBoxReplayFolder;
	private: System::Windows::Forms::TextBox^  textBoxVSSound;
	private: System::Windows::Forms::Button^  buttonNoticeSound;
	private: System::Windows::Forms::Button^  buttonVSSound;
	private: System::Windows::Forms::TextBox^  textBoxNoticeSound;
	private: System::Windows::Forms::TabControl^  tabControlOption;
	private: System::Windows::Forms::TabPage^  tabPageGame;





	private: System::Windows::Forms::GroupBox^  groupBoxRun;
	private: System::Windows::Forms::CheckBox^  checkBoxWindowSize;
	private: System::Windows::Forms::CheckBox^  checkBoxHitJudge;
	private: System::Windows::Forms::GroupBox^  groupBoxNet;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownMaxConnection;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBoxView;
	private: System::Windows::Forms::CheckBox^  checkBoxVersus;
	private: System::Windows::Forms::CheckBox^  checkBoxName;
	private: System::Windows::Forms::CheckBox^  checkBoxFramerate;
	private: System::Windows::Forms::CheckBox^  checkBoxRand;
	private: System::Windows::Forms::GroupBox^  groupBoxSetting;

	private: System::Windows::Forms::NumericUpDown^  numericUpDownMaxStage;
	private: System::Windows::Forms::Label^  labelMaxStage;
	private: System::Windows::Forms::Label^  labelStageSelect;

	private: System::Windows::Forms::NumericUpDown^  numericUpDownStageSelect;

	private: System::Windows::Forms::CheckBox^  checkBoxDivide;
	private: System::Windows::Forms::RadioButton^  radioButtonReplayVersion2;
	private: System::Windows::Forms::RadioButton^  radioButtonReplayVersion1;
	private: System::Windows::Forms::TabPage^  tabPageColor;
	private: System::Windows::Forms::GroupBox^  groupBoxMessageColor;
	private: System::Windows::Forms::Button^  buttonDebugMessage;
	private: System::Windows::Forms::Button^  buttonErrorMessage;
	private: System::Windows::Forms::Button^  buttonSystemMessage;
	private: System::Windows::Forms::GroupBox^  groupBoxOthersColor;
	private: System::Windows::Forms::Button^  buttonSecret;
	private: System::Windows::Forms::Button^  buttonCommentBack;
	private: System::Windows::Forms::Button^  buttonNoticeBack;
	private: System::Windows::Forms::GroupBox^  groupBoxStateColor;
	private: System::Windows::Forms::Button^  buttonWatchState;
	private: System::Windows::Forms::Button^  buttonVSState;
	private: System::Windows::Forms::Button^  buttonRestState;
	private: System::Windows::Forms::Button^  buttonSeekState;
	private: System::Windows::Forms::GroupBox^  groupBoxNameColor;
	private: System::Windows::Forms::Button^  buttonClientName;
	private: System::Windows::Forms::Button^  buttonHostName;
	private: System::Windows::Forms::Button^  buttonServerName;
	private: System::Windows::Forms::GroupBox^  groupBoxNoticeSound;
	private: System::Windows::Forms::GroupBox^  groupBoxVSSound;
	private: System::Windows::Forms::GroupBox^  groupBoxEnterSound;
	private: System::Windows::Forms::TextBox^  textBoxEnterSound;
	private: System::Windows::Forms::Button^  buttonEnterSound;
	private: System::Windows::Forms::GroupBox^  groupBoxReplayFolder;
	private: System::Windows::Forms::GroupBox^  groupBoxGameExe;
	private: System::Windows::Forms::GroupBox^  groupBoxSimulate;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownSimDelay;
	private: System::Windows::Forms::Label^  labelSimDelay;


	private: System::Windows::Forms::TextBox^  textBoxComment;
	private: System::Windows::Forms::Label^  labelComment;
	private: System::Windows::Forms::GroupBox^  groupBoxSave;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownRound;
	private: System::Windows::Forms::Label^  labelRound;
	private: System::Windows::Forms::Label^  labelTimer;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownTimer;

	private: System::Windows::Forms::TabPage^  tabPageVolume;
	private: System::Windows::Forms::GroupBox^  groupBoxSE;
	private: System::Windows::Forms::Label^  labelSE;
	private: System::Windows::Forms::TrackBar^  trackBarSE;
	private: System::Windows::Forms::GroupBox^  groupBoxBGM;
	private: System::Windows::Forms::Label^  labelBGM;
	private: System::Windows::Forms::TrackBar^  trackBarBGM;
	private: System::Windows::Forms::GroupBox^  groupBoxMidi;
	private: System::Windows::Forms::Label^  labelMidi;
	private: System::Windows::Forms::TrackBar^  trackBarMidi;
private: System::Windows::Forms::TabPage^  tabPageIP;
private: System::Windows::Forms::GroupBox^  Base64groupBox;
private: System::Windows::Forms::TextBox^  Base64textBox;

private: System::Windows::Forms::GroupBox^  IPgroupBox;
private: System::Windows::Forms::Button^  Convertbutton;
private: System::Windows::Forms::TextBox^  IPtextBox;
private: System::Windows::Forms::Label^  discriptionlabel;
private: System::Windows::Forms::Button^  AddPortbutton;
private: System::Windows::Forms::GroupBox^  groupBoxName;
private: System::Windows::Forms::Button^  buttonNameSound;



private: System::Windows::Forms::TextBox^  textBoxNameSound;
private: System::Windows::Forms::TabPage^  tabPageDetails;
private: System::Windows::Forms::GroupBox^  groupBoxDetails;
private: System::Windows::Forms::CheckBox^  checkBoxTalkFlash;

private: System::Windows::Forms::CheckBox^  checkBoxNameFlash;
private: System::Windows::Forms::GroupBox^  groupBoxTalkSound;
private: System::Windows::Forms::CheckBox^  checkBoxNameSound;
private: System::Windows::Forms::CheckBox^  checkBoxEnterSound;
private: System::Windows::Forms::CheckBox^  checkBoxNoticeSound;
private: System::Windows::Forms::CheckBox^  checkBoxVSSound;
private: System::Windows::Forms::CheckBox^  checkBoxTalkSound;
private: System::Windows::Forms::Button^  buttonTalkSound;
private: System::Windows::Forms::TextBox^  textBoxTalkSound;
private: System::Windows::Forms::CheckBox^  checkBoxGetIP;
private: System::Windows::Forms::Button^  buttonNoticeSoundPlay;

private: System::Windows::Forms::Button^  buttonVSSoundPlay;
private: System::Windows::Forms::Button^  buttonEnterSoundPlay;
private: System::Windows::Forms::Button^  buttonTalkSoundPlay;
private: System::Windows::Forms::Button^  buttonNameSoundPlay;
private: System::Windows::Forms::GroupBox^  groupBoxSeekSound;
private: System::Windows::Forms::Button^  buttonSeekSound;

private: System::Windows::Forms::TextBox^  textBoxSeekSound;
private: System::Windows::Forms::Button^  buttonSeekSoundPlay;
private: System::Windows::Forms::CheckBox^  checkBoxSeekSound;
private: System::Windows::Forms::GroupBox^  groupBoxKeywordSound;
private: System::Windows::Forms::TextBox^  textBoxKeywordSoundPath;

private: System::Windows::Forms::Label^  labelKeywordSound;
private: System::Windows::Forms::TextBox^  textBoxKeyword;

private: System::Windows::Forms::Button^  buttonKeywordSound;
private: System::Windows::Forms::Button^  buttonKeywordSoundPlay;
private: System::Windows::Forms::CheckBox^  checkBoxKeywordSound;
private: System::Windows::Forms::GroupBox^  groupBoxTeamOption;
private: System::Windows::Forms::CheckBox^  checkBoxTeamRoundHP;
private: System::Windows::Forms::Label^  labelTeamRoundHP;
private: System::Windows::Forms::CheckBox^  checkBoxShowGameOption;
private: System::Windows::Forms::GroupBox^  groupBoxProfile;
private: System::Windows::Forms::ComboBox^  comboBoxProfile;
private: System::Windows::Forms::Button^  buttonCopyProfile;
private: System::Windows::Forms::Button^  buttonDeleteProfile;
private: System::Windows::Forms::TextBox^  textBoxProfileName;

private: System::Windows::Forms::Button^  buttonAddProfile;
private: System::Windows::Forms::Label^  labelProfileName;
private: System::Windows::Forms::Button^  buttonSaveProfile;
private: System::Windows::Forms::TextBox^  textBoxMTAddr;

private: System::Windows::Forms::Label^  labelAddrBase64;
private: System::Windows::Forms::Label^  labelAddrMT;
private: System::Windows::Forms::CheckBox^  checkBoxShowResult;
private: System::Windows::Forms::GroupBox^  groupBoxLog;
private: System::Windows::Forms::RadioButton^  radioButtonLogRTF;
private: System::Windows::Forms::RadioButton^  radioButtonLogTXT;
private: System::Windows::Forms::CheckBox^  checkBoxLogClearWithoutWelcome;








	private:
		/// <summary>
		/// 这是必要的设计师变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 这是设计师支持所需的方法。这个方法的内容是
		/// 不要在代码编辑器里改动哦。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OptionForm::typeid));
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonApply = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->tabPageSound = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxKeywordSound = (gcnew System::Windows::Forms::GroupBox());
			this->buttonKeywordSoundPlay = (gcnew System::Windows::Forms::Button());
			this->checkBoxKeywordSound = (gcnew System::Windows::Forms::CheckBox());
			this->buttonKeywordSound = (gcnew System::Windows::Forms::Button());
			this->textBoxKeywordSoundPath = (gcnew System::Windows::Forms::TextBox());
			this->labelKeywordSound = (gcnew System::Windows::Forms::Label());
			this->textBoxKeyword = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxSeekSound = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSeekSoundPlay = (gcnew System::Windows::Forms::Button());
			this->checkBoxSeekSound = (gcnew System::Windows::Forms::CheckBox());
			this->buttonSeekSound = (gcnew System::Windows::Forms::Button());
			this->textBoxSeekSound = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxTalkSound = (gcnew System::Windows::Forms::GroupBox());
			this->buttonTalkSoundPlay = (gcnew System::Windows::Forms::Button());
			this->checkBoxTalkSound = (gcnew System::Windows::Forms::CheckBox());
			this->buttonTalkSound = (gcnew System::Windows::Forms::Button());
			this->textBoxTalkSound = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxName = (gcnew System::Windows::Forms::GroupBox());
			this->buttonNameSoundPlay = (gcnew System::Windows::Forms::Button());
			this->checkBoxNameSound = (gcnew System::Windows::Forms::CheckBox());
			this->buttonNameSound = (gcnew System::Windows::Forms::Button());
			this->textBoxNameSound = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxEnterSound = (gcnew System::Windows::Forms::GroupBox());
			this->buttonEnterSoundPlay = (gcnew System::Windows::Forms::Button());
			this->checkBoxEnterSound = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxEnterSound = (gcnew System::Windows::Forms::TextBox());
			this->buttonEnterSound = (gcnew System::Windows::Forms::Button());
			this->groupBoxNoticeSound = (gcnew System::Windows::Forms::GroupBox());
			this->buttonNoticeSoundPlay = (gcnew System::Windows::Forms::Button());
			this->checkBoxNoticeSound = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxNoticeSound = (gcnew System::Windows::Forms::TextBox());
			this->buttonNoticeSound = (gcnew System::Windows::Forms::Button());
			this->groupBoxVSSound = (gcnew System::Windows::Forms::GroupBox());
			this->buttonVSSoundPlay = (gcnew System::Windows::Forms::Button());
			this->checkBoxVSSound = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxVSSound = (gcnew System::Windows::Forms::TextBox());
			this->buttonVSSound = (gcnew System::Windows::Forms::Button());
			this->tabPagePath = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxProfile = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSaveProfile = (gcnew System::Windows::Forms::Button());
			this->buttonAddProfile = (gcnew System::Windows::Forms::Button());
			this->labelProfileName = (gcnew System::Windows::Forms::Label());
			this->buttonDeleteProfile = (gcnew System::Windows::Forms::Button());
			this->textBoxProfileName = (gcnew System::Windows::Forms::TextBox());
			this->buttonCopyProfile = (gcnew System::Windows::Forms::Button());
			this->comboBoxProfile = (gcnew System::Windows::Forms::ComboBox());
			this->groupBoxReplayFolder = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxReplayFolder = (gcnew System::Windows::Forms::TextBox());
			this->buttonReplayFolder = (gcnew System::Windows::Forms::Button());
			this->checkBoxDivide = (gcnew System::Windows::Forms::CheckBox());
			this->groupBoxNet = (gcnew System::Windows::Forms::GroupBox());
			this->labelComment = (gcnew System::Windows::Forms::Label());
			this->numericUpDownMaxConnection = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxComment = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBoxGameExe = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxGameExe = (gcnew System::Windows::Forms::TextBox());
			this->buttonGameExe = (gcnew System::Windows::Forms::Button());
			this->groupBoxSave = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonReplayVersion1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonReplayVersion2 = (gcnew System::Windows::Forms::RadioButton());
			this->tabControlOption = (gcnew System::Windows::Forms::TabControl());
			this->tabPageGame = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxTeamOption = (gcnew System::Windows::Forms::GroupBox());
			this->labelTeamRoundHP = (gcnew System::Windows::Forms::Label());
			this->checkBoxTeamRoundHP = (gcnew System::Windows::Forms::CheckBox());
			this->groupBoxSimulate = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownSimDelay = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelSimDelay = (gcnew System::Windows::Forms::Label());
			this->groupBoxRun = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxWindowSize = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxHitJudge = (gcnew System::Windows::Forms::CheckBox());
			this->groupBoxView = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxShowResult = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxVersus = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxName = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxFramerate = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxRand = (gcnew System::Windows::Forms::CheckBox());
			this->groupBoxSetting = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownRound = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelRound = (gcnew System::Windows::Forms::Label());
			this->labelTimer = (gcnew System::Windows::Forms::Label());
			this->numericUpDownTimer = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownMaxStage = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelMaxStage = (gcnew System::Windows::Forms::Label());
			this->labelStageSelect = (gcnew System::Windows::Forms::Label());
			this->numericUpDownStageSelect = (gcnew System::Windows::Forms::NumericUpDown());
			this->tabPageColor = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxMessageColor = (gcnew System::Windows::Forms::GroupBox());
			this->buttonDebugMessage = (gcnew System::Windows::Forms::Button());
			this->buttonErrorMessage = (gcnew System::Windows::Forms::Button());
			this->buttonSystemMessage = (gcnew System::Windows::Forms::Button());
			this->groupBoxOthersColor = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSecret = (gcnew System::Windows::Forms::Button());
			this->buttonCommentBack = (gcnew System::Windows::Forms::Button());
			this->buttonNoticeBack = (gcnew System::Windows::Forms::Button());
			this->groupBoxStateColor = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSeekState = (gcnew System::Windows::Forms::Button());
			this->buttonWatchState = (gcnew System::Windows::Forms::Button());
			this->buttonVSState = (gcnew System::Windows::Forms::Button());
			this->buttonRestState = (gcnew System::Windows::Forms::Button());
			this->groupBoxNameColor = (gcnew System::Windows::Forms::GroupBox());
			this->buttonClientName = (gcnew System::Windows::Forms::Button());
			this->buttonHostName = (gcnew System::Windows::Forms::Button());
			this->buttonServerName = (gcnew System::Windows::Forms::Button());
			this->tabPageVolume = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxMidi = (gcnew System::Windows::Forms::GroupBox());
			this->labelMidi = (gcnew System::Windows::Forms::Label());
			this->trackBarMidi = (gcnew System::Windows::Forms::TrackBar());
			this->groupBoxSE = (gcnew System::Windows::Forms::GroupBox());
			this->labelSE = (gcnew System::Windows::Forms::Label());
			this->trackBarSE = (gcnew System::Windows::Forms::TrackBar());
			this->groupBoxBGM = (gcnew System::Windows::Forms::GroupBox());
			this->labelBGM = (gcnew System::Windows::Forms::Label());
			this->trackBarBGM = (gcnew System::Windows::Forms::TrackBar());
			this->tabPageIP = (gcnew System::Windows::Forms::TabPage());
			this->AddPortbutton = (gcnew System::Windows::Forms::Button());
			this->discriptionlabel = (gcnew System::Windows::Forms::Label());
			this->Convertbutton = (gcnew System::Windows::Forms::Button());
			this->Base64groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->labelAddrMT = (gcnew System::Windows::Forms::Label());
			this->textBoxMTAddr = (gcnew System::Windows::Forms::TextBox());
			this->labelAddrBase64 = (gcnew System::Windows::Forms::Label());
			this->Base64textBox = (gcnew System::Windows::Forms::TextBox());
			this->IPgroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->IPtextBox = (gcnew System::Windows::Forms::TextBox());
			this->tabPageDetails = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxLog = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonLogTXT = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonLogRTF = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxDetails = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxLogClearWithoutWelcome = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxShowGameOption = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxNameFlash = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxGetIP = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxTalkFlash = (gcnew System::Windows::Forms::CheckBox());
			this->tabPageSound->SuspendLayout();
			this->groupBoxKeywordSound->SuspendLayout();
			this->groupBoxSeekSound->SuspendLayout();
			this->groupBoxTalkSound->SuspendLayout();
			this->groupBoxName->SuspendLayout();
			this->groupBoxEnterSound->SuspendLayout();
			this->groupBoxNoticeSound->SuspendLayout();
			this->groupBoxVSSound->SuspendLayout();
			this->tabPagePath->SuspendLayout();
			this->groupBoxProfile->SuspendLayout();
			this->groupBoxReplayFolder->SuspendLayout();
			this->groupBoxNet->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownMaxConnection))->BeginInit();
			this->groupBoxGameExe->SuspendLayout();
			this->groupBoxSave->SuspendLayout();
			this->tabControlOption->SuspendLayout();
			this->tabPageGame->SuspendLayout();
			this->groupBoxTeamOption->SuspendLayout();
			this->groupBoxSimulate->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownSimDelay))->BeginInit();
			this->groupBoxRun->SuspendLayout();
			this->groupBoxView->SuspendLayout();
			this->groupBoxSetting->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownRound))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownTimer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownMaxStage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownStageSelect))->BeginInit();
			this->tabPageColor->SuspendLayout();
			this->groupBoxMessageColor->SuspendLayout();
			this->groupBoxOthersColor->SuspendLayout();
			this->groupBoxStateColor->SuspendLayout();
			this->groupBoxNameColor->SuspendLayout();
			this->tabPageVolume->SuspendLayout();
			this->groupBoxMidi->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMidi))->BeginInit();
			this->groupBoxSE->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarSE))->BeginInit();
			this->groupBoxBGM->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarBGM))->BeginInit();
			this->tabPageIP->SuspendLayout();
			this->Base64groupBox->SuspendLayout();
			this->IPgroupBox->SuspendLayout();
			this->tabPageDetails->SuspendLayout();
			this->groupBoxLog->SuspendLayout();
			this->groupBoxDetails->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonOK
			// 
			resources->ApplyResources(this->buttonOK, L"buttonOK");
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &OptionForm::buttonOK_Click);
			// 
			// buttonApply
			// 
			resources->ApplyResources(this->buttonApply, L"buttonApply");
			this->buttonApply->Name = L"buttonApply";
			this->buttonApply->UseVisualStyleBackColor = true;
			this->buttonApply->Click += gcnew System::EventHandler(this, &OptionForm::buttonApply_Click);
			// 
			// buttonCancel
			// 
			resources->ApplyResources(this->buttonCancel, L"buttonCancel");
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &OptionForm::buttonCancel_Click);
			// 
			// folderBrowserDialog1
			// 
			resources->ApplyResources(this->folderBrowserDialog1, L"folderBrowserDialog1");
			// 
			// colorDialog1
			// 
			this->colorDialog1->FullOpen = true;
			// 
			// tabPageSound
			// 
			resources->ApplyResources(this->tabPageSound, L"tabPageSound");
			this->tabPageSound->Controls->Add(this->groupBoxKeywordSound);
			this->tabPageSound->Controls->Add(this->groupBoxSeekSound);
			this->tabPageSound->Controls->Add(this->groupBoxTalkSound);
			this->tabPageSound->Controls->Add(this->groupBoxName);
			this->tabPageSound->Controls->Add(this->groupBoxEnterSound);
			this->tabPageSound->Controls->Add(this->groupBoxNoticeSound);
			this->tabPageSound->Controls->Add(this->groupBoxVSSound);
			this->tabPageSound->Name = L"tabPageSound";
			this->tabPageSound->UseVisualStyleBackColor = true;
			// 
			// groupBoxKeywordSound
			// 
			this->groupBoxKeywordSound->Controls->Add(this->buttonKeywordSoundPlay);
			this->groupBoxKeywordSound->Controls->Add(this->checkBoxKeywordSound);
			this->groupBoxKeywordSound->Controls->Add(this->buttonKeywordSound);
			this->groupBoxKeywordSound->Controls->Add(this->textBoxKeywordSoundPath);
			this->groupBoxKeywordSound->Controls->Add(this->labelKeywordSound);
			this->groupBoxKeywordSound->Controls->Add(this->textBoxKeyword);
			resources->ApplyResources(this->groupBoxKeywordSound, L"groupBoxKeywordSound");
			this->groupBoxKeywordSound->Name = L"groupBoxKeywordSound";
			this->groupBoxKeywordSound->TabStop = false;
			// 
			// buttonKeywordSoundPlay
			// 
			resources->ApplyResources(this->buttonKeywordSoundPlay, L"buttonKeywordSoundPlay");
			this->buttonKeywordSoundPlay->Name = L"buttonKeywordSoundPlay";
			this->buttonKeywordSoundPlay->UseVisualStyleBackColor = true;
			this->buttonKeywordSoundPlay->Click += gcnew System::EventHandler(this, &OptionForm::buttonKeywordSoundPlay_Click);
			// 
			// checkBoxKeywordSound
			// 
			resources->ApplyResources(this->checkBoxKeywordSound, L"checkBoxKeywordSound");
			this->checkBoxKeywordSound->Name = L"checkBoxKeywordSound";
			this->checkBoxKeywordSound->UseVisualStyleBackColor = true;
			this->checkBoxKeywordSound->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// buttonKeywordSound
			// 
			resources->ApplyResources(this->buttonKeywordSound, L"buttonKeywordSound");
			this->buttonKeywordSound->Name = L"buttonKeywordSound";
			this->buttonKeywordSound->UseVisualStyleBackColor = true;
			this->buttonKeywordSound->Click += gcnew System::EventHandler(this, &OptionForm::buttonKeywordSound_Click);
			// 
			// textBoxKeywordSoundPath
			// 
			this->textBoxKeywordSoundPath->AllowDrop = true;
			this->textBoxKeywordSoundPath->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBoxKeywordSoundPath, L"textBoxKeywordSoundPath");
			this->textBoxKeywordSoundPath->Name = L"textBoxKeywordSoundPath";
			this->textBoxKeywordSoundPath->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxKeywordSoundPath->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxKeywordSound_DragDrop);
			this->textBoxKeywordSoundPath->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxSound_DragEnter);
			// 
			// labelKeywordSound
			// 
			resources->ApplyResources(this->labelKeywordSound, L"labelKeywordSound");
			this->labelKeywordSound->Name = L"labelKeywordSound";
			// 
			// textBoxKeyword
			// 
			this->textBoxKeyword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBoxKeyword, L"textBoxKeyword");
			this->textBoxKeyword->Name = L"textBoxKeyword";
			this->textBoxKeyword->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// groupBoxSeekSound
			// 
			this->groupBoxSeekSound->Controls->Add(this->buttonSeekSoundPlay);
			this->groupBoxSeekSound->Controls->Add(this->checkBoxSeekSound);
			this->groupBoxSeekSound->Controls->Add(this->buttonSeekSound);
			this->groupBoxSeekSound->Controls->Add(this->textBoxSeekSound);
			resources->ApplyResources(this->groupBoxSeekSound, L"groupBoxSeekSound");
			this->groupBoxSeekSound->Name = L"groupBoxSeekSound";
			this->groupBoxSeekSound->TabStop = false;
			// 
			// buttonSeekSoundPlay
			// 
			resources->ApplyResources(this->buttonSeekSoundPlay, L"buttonSeekSoundPlay");
			this->buttonSeekSoundPlay->Name = L"buttonSeekSoundPlay";
			this->buttonSeekSoundPlay->UseVisualStyleBackColor = true;
			this->buttonSeekSoundPlay->Click += gcnew System::EventHandler(this, &OptionForm::buttonSeekSoundPlay_Click);
			// 
			// checkBoxSeekSound
			// 
			resources->ApplyResources(this->checkBoxSeekSound, L"checkBoxSeekSound");
			this->checkBoxSeekSound->Name = L"checkBoxSeekSound";
			this->checkBoxSeekSound->UseVisualStyleBackColor = true;
			this->checkBoxSeekSound->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// buttonSeekSound
			// 
			resources->ApplyResources(this->buttonSeekSound, L"buttonSeekSound");
			this->buttonSeekSound->Name = L"buttonSeekSound";
			this->buttonSeekSound->UseVisualStyleBackColor = true;
			this->buttonSeekSound->Click += gcnew System::EventHandler(this, &OptionForm::buttonSeekSound_Click);
			// 
			// textBoxSeekSound
			// 
			this->textBoxSeekSound->AllowDrop = true;
			this->textBoxSeekSound->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBoxSeekSound, L"textBoxSeekSound");
			this->textBoxSeekSound->Name = L"textBoxSeekSound";
			this->textBoxSeekSound->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxSeekSound->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxSeekSound_DragDrop);
			this->textBoxSeekSound->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxSound_DragEnter);
			// 
			// groupBoxTalkSound
			// 
			this->groupBoxTalkSound->Controls->Add(this->buttonTalkSoundPlay);
			this->groupBoxTalkSound->Controls->Add(this->checkBoxTalkSound);
			this->groupBoxTalkSound->Controls->Add(this->buttonTalkSound);
			this->groupBoxTalkSound->Controls->Add(this->textBoxTalkSound);
			resources->ApplyResources(this->groupBoxTalkSound, L"groupBoxTalkSound");
			this->groupBoxTalkSound->Name = L"groupBoxTalkSound";
			this->groupBoxTalkSound->TabStop = false;
			// 
			// buttonTalkSoundPlay
			// 
			resources->ApplyResources(this->buttonTalkSoundPlay, L"buttonTalkSoundPlay");
			this->buttonTalkSoundPlay->Name = L"buttonTalkSoundPlay";
			this->buttonTalkSoundPlay->UseVisualStyleBackColor = true;
			this->buttonTalkSoundPlay->Click += gcnew System::EventHandler(this, &OptionForm::buttonTalkSoundPlay_Click);
			// 
			// checkBoxTalkSound
			// 
			resources->ApplyResources(this->checkBoxTalkSound, L"checkBoxTalkSound");
			this->checkBoxTalkSound->Name = L"checkBoxTalkSound";
			this->checkBoxTalkSound->UseVisualStyleBackColor = true;
			this->checkBoxTalkSound->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// buttonTalkSound
			// 
			resources->ApplyResources(this->buttonTalkSound, L"buttonTalkSound");
			this->buttonTalkSound->Name = L"buttonTalkSound";
			this->buttonTalkSound->UseVisualStyleBackColor = true;
			this->buttonTalkSound->Click += gcnew System::EventHandler(this, &OptionForm::buttonTalkSound_Click);
			// 
			// textBoxTalkSound
			// 
			this->textBoxTalkSound->AllowDrop = true;
			this->textBoxTalkSound->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBoxTalkSound, L"textBoxTalkSound");
			this->textBoxTalkSound->Name = L"textBoxTalkSound";
			this->textBoxTalkSound->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxTalkSound->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxTalkSound_DragDrop);
			this->textBoxTalkSound->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxSound_DragEnter);
			// 
			// groupBoxName
			// 
			this->groupBoxName->Controls->Add(this->buttonNameSoundPlay);
			this->groupBoxName->Controls->Add(this->checkBoxNameSound);
			this->groupBoxName->Controls->Add(this->buttonNameSound);
			this->groupBoxName->Controls->Add(this->textBoxNameSound);
			resources->ApplyResources(this->groupBoxName, L"groupBoxName");
			this->groupBoxName->Name = L"groupBoxName";
			this->groupBoxName->TabStop = false;
			// 
			// buttonNameSoundPlay
			// 
			resources->ApplyResources(this->buttonNameSoundPlay, L"buttonNameSoundPlay");
			this->buttonNameSoundPlay->Name = L"buttonNameSoundPlay";
			this->buttonNameSoundPlay->UseVisualStyleBackColor = true;
			this->buttonNameSoundPlay->Click += gcnew System::EventHandler(this, &OptionForm::buttonNameSoundPlay_Click);
			// 
			// checkBoxNameSound
			// 
			resources->ApplyResources(this->checkBoxNameSound, L"checkBoxNameSound");
			this->checkBoxNameSound->Name = L"checkBoxNameSound";
			this->checkBoxNameSound->UseVisualStyleBackColor = true;
			this->checkBoxNameSound->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// buttonNameSound
			// 
			resources->ApplyResources(this->buttonNameSound, L"buttonNameSound");
			this->buttonNameSound->Name = L"buttonNameSound";
			this->buttonNameSound->UseVisualStyleBackColor = true;
			this->buttonNameSound->Click += gcnew System::EventHandler(this, &OptionForm::buttonNameSound_Click);
			// 
			// textBoxNameSound
			// 
			this->textBoxNameSound->AllowDrop = true;
			this->textBoxNameSound->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBoxNameSound, L"textBoxNameSound");
			this->textBoxNameSound->Name = L"textBoxNameSound";
			this->textBoxNameSound->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxNameSound->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxNameSound_DragDrop);
			this->textBoxNameSound->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxSound_DragEnter);
			// 
			// groupBoxEnterSound
			// 
			this->groupBoxEnterSound->Controls->Add(this->buttonEnterSoundPlay);
			this->groupBoxEnterSound->Controls->Add(this->checkBoxEnterSound);
			this->groupBoxEnterSound->Controls->Add(this->textBoxEnterSound);
			this->groupBoxEnterSound->Controls->Add(this->buttonEnterSound);
			resources->ApplyResources(this->groupBoxEnterSound, L"groupBoxEnterSound");
			this->groupBoxEnterSound->Name = L"groupBoxEnterSound";
			this->groupBoxEnterSound->TabStop = false;
			// 
			// buttonEnterSoundPlay
			// 
			resources->ApplyResources(this->buttonEnterSoundPlay, L"buttonEnterSoundPlay");
			this->buttonEnterSoundPlay->Name = L"buttonEnterSoundPlay";
			this->buttonEnterSoundPlay->UseVisualStyleBackColor = true;
			this->buttonEnterSoundPlay->Click += gcnew System::EventHandler(this, &OptionForm::buttonEnterSoundPlay_Click);
			// 
			// checkBoxEnterSound
			// 
			resources->ApplyResources(this->checkBoxEnterSound, L"checkBoxEnterSound");
			this->checkBoxEnterSound->Name = L"checkBoxEnterSound";
			this->checkBoxEnterSound->UseVisualStyleBackColor = true;
			this->checkBoxEnterSound->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// textBoxEnterSound
			// 
			this->textBoxEnterSound->AllowDrop = true;
			this->textBoxEnterSound->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBoxEnterSound, L"textBoxEnterSound");
			this->textBoxEnterSound->Name = L"textBoxEnterSound";
			this->textBoxEnterSound->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxEnterSound->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxEnterSound_DragDrop);
			this->textBoxEnterSound->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxSound_DragEnter);
			// 
			// buttonEnterSound
			// 
			resources->ApplyResources(this->buttonEnterSound, L"buttonEnterSound");
			this->buttonEnterSound->Name = L"buttonEnterSound";
			this->buttonEnterSound->UseVisualStyleBackColor = true;
			this->buttonEnterSound->Click += gcnew System::EventHandler(this, &OptionForm::buttonEnterSound_Click);
			// 
			// groupBoxNoticeSound
			// 
			this->groupBoxNoticeSound->Controls->Add(this->buttonNoticeSoundPlay);
			this->groupBoxNoticeSound->Controls->Add(this->checkBoxNoticeSound);
			this->groupBoxNoticeSound->Controls->Add(this->textBoxNoticeSound);
			this->groupBoxNoticeSound->Controls->Add(this->buttonNoticeSound);
			resources->ApplyResources(this->groupBoxNoticeSound, L"groupBoxNoticeSound");
			this->groupBoxNoticeSound->Name = L"groupBoxNoticeSound";
			this->groupBoxNoticeSound->TabStop = false;
			// 
			// buttonNoticeSoundPlay
			// 
			resources->ApplyResources(this->buttonNoticeSoundPlay, L"buttonNoticeSoundPlay");
			this->buttonNoticeSoundPlay->Name = L"buttonNoticeSoundPlay";
			this->buttonNoticeSoundPlay->UseVisualStyleBackColor = true;
			this->buttonNoticeSoundPlay->Click += gcnew System::EventHandler(this, &OptionForm::buttonNoticeSoundPlay_Click);
			// 
			// checkBoxNoticeSound
			// 
			resources->ApplyResources(this->checkBoxNoticeSound, L"checkBoxNoticeSound");
			this->checkBoxNoticeSound->Name = L"checkBoxNoticeSound";
			this->checkBoxNoticeSound->UseVisualStyleBackColor = true;
			this->checkBoxNoticeSound->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// textBoxNoticeSound
			// 
			this->textBoxNoticeSound->AllowDrop = true;
			this->textBoxNoticeSound->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBoxNoticeSound, L"textBoxNoticeSound");
			this->textBoxNoticeSound->Name = L"textBoxNoticeSound";
			this->textBoxNoticeSound->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxNoticeSound->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxNoticeSound_DragDrop);
			this->textBoxNoticeSound->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxSound_DragEnter);
			// 
			// buttonNoticeSound
			// 
			resources->ApplyResources(this->buttonNoticeSound, L"buttonNoticeSound");
			this->buttonNoticeSound->Name = L"buttonNoticeSound";
			this->buttonNoticeSound->UseVisualStyleBackColor = true;
			this->buttonNoticeSound->Click += gcnew System::EventHandler(this, &OptionForm::buttonNoticeSound_Click);
			// 
			// groupBoxVSSound
			// 
			this->groupBoxVSSound->Controls->Add(this->buttonVSSoundPlay);
			this->groupBoxVSSound->Controls->Add(this->checkBoxVSSound);
			this->groupBoxVSSound->Controls->Add(this->textBoxVSSound);
			this->groupBoxVSSound->Controls->Add(this->buttonVSSound);
			resources->ApplyResources(this->groupBoxVSSound, L"groupBoxVSSound");
			this->groupBoxVSSound->Name = L"groupBoxVSSound";
			this->groupBoxVSSound->TabStop = false;
			// 
			// buttonVSSoundPlay
			// 
			resources->ApplyResources(this->buttonVSSoundPlay, L"buttonVSSoundPlay");
			this->buttonVSSoundPlay->Name = L"buttonVSSoundPlay";
			this->buttonVSSoundPlay->UseVisualStyleBackColor = true;
			this->buttonVSSoundPlay->Click += gcnew System::EventHandler(this, &OptionForm::buttonVSSoundPlay_Click);
			// 
			// checkBoxVSSound
			// 
			resources->ApplyResources(this->checkBoxVSSound, L"checkBoxVSSound");
			this->checkBoxVSSound->Name = L"checkBoxVSSound";
			this->checkBoxVSSound->UseVisualStyleBackColor = true;
			this->checkBoxVSSound->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// textBoxVSSound
			// 
			this->textBoxVSSound->AllowDrop = true;
			this->textBoxVSSound->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBoxVSSound, L"textBoxVSSound");
			this->textBoxVSSound->Name = L"textBoxVSSound";
			this->textBoxVSSound->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxVSSound->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxVSSound_DragDrop);
			this->textBoxVSSound->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxSound_DragEnter);
			// 
			// buttonVSSound
			// 
			resources->ApplyResources(this->buttonVSSound, L"buttonVSSound");
			this->buttonVSSound->Name = L"buttonVSSound";
			this->buttonVSSound->UseVisualStyleBackColor = true;
			this->buttonVSSound->Click += gcnew System::EventHandler(this, &OptionForm::buttonVSSound_Click);
			// 
			// tabPagePath
			// 
			resources->ApplyResources(this->tabPagePath, L"tabPagePath");
			this->tabPagePath->Controls->Add(this->groupBoxProfile);
			this->tabPagePath->Controls->Add(this->groupBoxReplayFolder);
			this->tabPagePath->Controls->Add(this->groupBoxNet);
			this->tabPagePath->Controls->Add(this->groupBoxGameExe);
			this->tabPagePath->Name = L"tabPagePath";
			this->tabPagePath->UseVisualStyleBackColor = true;
			// 
			// groupBoxProfile
			// 
			this->groupBoxProfile->Controls->Add(this->buttonSaveProfile);
			this->groupBoxProfile->Controls->Add(this->buttonAddProfile);
			this->groupBoxProfile->Controls->Add(this->labelProfileName);
			this->groupBoxProfile->Controls->Add(this->buttonDeleteProfile);
			this->groupBoxProfile->Controls->Add(this->textBoxProfileName);
			this->groupBoxProfile->Controls->Add(this->buttonCopyProfile);
			this->groupBoxProfile->Controls->Add(this->comboBoxProfile);
			resources->ApplyResources(this->groupBoxProfile, L"groupBoxProfile");
			this->groupBoxProfile->Name = L"groupBoxProfile";
			this->groupBoxProfile->TabStop = false;
			// 
			// buttonSaveProfile
			// 
			resources->ApplyResources(this->buttonSaveProfile, L"buttonSaveProfile");
			this->buttonSaveProfile->Name = L"buttonSaveProfile";
			this->buttonSaveProfile->UseVisualStyleBackColor = true;
			this->buttonSaveProfile->Click += gcnew System::EventHandler(this, &OptionForm::buttonSaveProfile_Click);
			// 
			// buttonAddProfile
			// 
			resources->ApplyResources(this->buttonAddProfile, L"buttonAddProfile");
			this->buttonAddProfile->Name = L"buttonAddProfile";
			this->buttonAddProfile->UseVisualStyleBackColor = true;
			this->buttonAddProfile->Click += gcnew System::EventHandler(this, &OptionForm::buttonAddProfile_Click);
			// 
			// labelProfileName
			// 
			resources->ApplyResources(this->labelProfileName, L"labelProfileName");
			this->labelProfileName->Name = L"labelProfileName";
			// 
			// buttonDeleteProfile
			// 
			resources->ApplyResources(this->buttonDeleteProfile, L"buttonDeleteProfile");
			this->buttonDeleteProfile->Name = L"buttonDeleteProfile";
			this->buttonDeleteProfile->UseVisualStyleBackColor = true;
			this->buttonDeleteProfile->Click += gcnew System::EventHandler(this, &OptionForm::buttonDeleteProfile_Click);
			// 
			// textBoxProfileName
			// 
			this->textBoxProfileName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBoxProfileName, L"textBoxProfileName");
			this->textBoxProfileName->Name = L"textBoxProfileName";
			this->textBoxProfileName->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// buttonCopyProfile
			// 
			resources->ApplyResources(this->buttonCopyProfile, L"buttonCopyProfile");
			this->buttonCopyProfile->Name = L"buttonCopyProfile";
			this->buttonCopyProfile->UseVisualStyleBackColor = true;
			this->buttonCopyProfile->Click += gcnew System::EventHandler(this, &OptionForm::buttonCopyProfile_Click);
			// 
			// comboBoxProfile
			// 
			this->comboBoxProfile->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxProfile->FormattingEnabled = true;
			resources->ApplyResources(this->comboBoxProfile, L"comboBoxProfile");
			this->comboBoxProfile->Name = L"comboBoxProfile";
			this->comboBoxProfile->SelectedIndexChanged += gcnew System::EventHandler(this, &OptionForm::comboBoxProfile_SelectedIndexChanged);
			// 
			// groupBoxReplayFolder
			// 
			this->groupBoxReplayFolder->Controls->Add(this->textBoxReplayFolder);
			this->groupBoxReplayFolder->Controls->Add(this->buttonReplayFolder);
			this->groupBoxReplayFolder->Controls->Add(this->checkBoxDivide);
			resources->ApplyResources(this->groupBoxReplayFolder, L"groupBoxReplayFolder");
			this->groupBoxReplayFolder->Name = L"groupBoxReplayFolder";
			this->groupBoxReplayFolder->TabStop = false;
			// 
			// textBoxReplayFolder
			// 
			this->textBoxReplayFolder->AllowDrop = true;
			this->textBoxReplayFolder->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBoxReplayFolder, L"textBoxReplayFolder");
			this->textBoxReplayFolder->Name = L"textBoxReplayFolder";
			this->textBoxReplayFolder->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxReplayFolder->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxReplayFolder_DragDrop);
			this->textBoxReplayFolder->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxReplayFolder_DragEnter);
			// 
			// buttonReplayFolder
			// 
			resources->ApplyResources(this->buttonReplayFolder, L"buttonReplayFolder");
			this->buttonReplayFolder->Name = L"buttonReplayFolder";
			this->buttonReplayFolder->UseVisualStyleBackColor = true;
			this->buttonReplayFolder->Click += gcnew System::EventHandler(this, &OptionForm::buttonReplayFolder_Click);
			// 
			// checkBoxDivide
			// 
			resources->ApplyResources(this->checkBoxDivide, L"checkBoxDivide");
			this->checkBoxDivide->Name = L"checkBoxDivide";
			this->checkBoxDivide->UseVisualStyleBackColor = true;
			this->checkBoxDivide->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// groupBoxNet
			// 
			this->groupBoxNet->Controls->Add(this->labelComment);
			this->groupBoxNet->Controls->Add(this->numericUpDownMaxConnection);
			this->groupBoxNet->Controls->Add(this->textBoxComment);
			this->groupBoxNet->Controls->Add(this->label5);
			resources->ApplyResources(this->groupBoxNet, L"groupBoxNet");
			this->groupBoxNet->Name = L"groupBoxNet";
			this->groupBoxNet->TabStop = false;
			// 
			// labelComment
			// 
			resources->ApplyResources(this->labelComment, L"labelComment");
			this->labelComment->Name = L"labelComment";
			// 
			// numericUpDownMaxConnection
			// 
			this->numericUpDownMaxConnection->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->numericUpDownMaxConnection, L"numericUpDownMaxConnection");
			this->numericUpDownMaxConnection->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99999999, 0, 0, 0});
			this->numericUpDownMaxConnection->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDownMaxConnection->Name = L"numericUpDownMaxConnection";
			this->numericUpDownMaxConnection->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {9999, 0, 0, 0});
			this->numericUpDownMaxConnection->ValueChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// textBoxComment
			// 
			this->textBoxComment->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBoxComment, L"textBoxComment");
			this->textBoxComment->Name = L"textBoxComment";
			this->textBoxComment->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// groupBoxGameExe
			// 
			this->groupBoxGameExe->Controls->Add(this->textBoxGameExe);
			this->groupBoxGameExe->Controls->Add(this->buttonGameExe);
			resources->ApplyResources(this->groupBoxGameExe, L"groupBoxGameExe");
			this->groupBoxGameExe->Name = L"groupBoxGameExe";
			this->groupBoxGameExe->TabStop = false;
			// 
			// textBoxGameExe
			// 
			this->textBoxGameExe->AllowDrop = true;
			this->textBoxGameExe->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBoxGameExe, L"textBoxGameExe");
			this->textBoxGameExe->Name = L"textBoxGameExe";
			this->textBoxGameExe->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxGameExe->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxGameExe_DragDrop);
			this->textBoxGameExe->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxGameExe_DragEnter);
			// 
			// buttonGameExe
			// 
			resources->ApplyResources(this->buttonGameExe, L"buttonGameExe");
			this->buttonGameExe->Name = L"buttonGameExe";
			this->buttonGameExe->UseVisualStyleBackColor = true;
			this->buttonGameExe->Click += gcnew System::EventHandler(this, &OptionForm::buttonGameExe_Click);
			// 
			// groupBoxSave
			// 
			this->groupBoxSave->Controls->Add(this->radioButtonReplayVersion1);
			this->groupBoxSave->Controls->Add(this->radioButtonReplayVersion2);
			resources->ApplyResources(this->groupBoxSave, L"groupBoxSave");
			this->groupBoxSave->Name = L"groupBoxSave";
			this->groupBoxSave->TabStop = false;
			// 
			// radioButtonReplayVersion1
			// 
			resources->ApplyResources(this->radioButtonReplayVersion1, L"radioButtonReplayVersion1");
			this->radioButtonReplayVersion1->Name = L"radioButtonReplayVersion1";
			this->radioButtonReplayVersion1->TabStop = true;
			this->radioButtonReplayVersion1->UseVisualStyleBackColor = true;
			this->radioButtonReplayVersion1->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// radioButtonReplayVersion2
			// 
			resources->ApplyResources(this->radioButtonReplayVersion2, L"radioButtonReplayVersion2");
			this->radioButtonReplayVersion2->Name = L"radioButtonReplayVersion2";
			this->radioButtonReplayVersion2->TabStop = true;
			this->radioButtonReplayVersion2->UseVisualStyleBackColor = true;
			this->radioButtonReplayVersion2->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// tabControlOption
			// 
			this->tabControlOption->Controls->Add(this->tabPagePath);
			this->tabControlOption->Controls->Add(this->tabPageSound);
			this->tabControlOption->Controls->Add(this->tabPageGame);
			this->tabControlOption->Controls->Add(this->tabPageColor);
			this->tabControlOption->Controls->Add(this->tabPageVolume);
			this->tabControlOption->Controls->Add(this->tabPageIP);
			this->tabControlOption->Controls->Add(this->tabPageDetails);
			resources->ApplyResources(this->tabControlOption, L"tabControlOption");
			this->tabControlOption->Name = L"tabControlOption";
			this->tabControlOption->SelectedIndex = 0;
			// 
			// tabPageGame
			// 
			resources->ApplyResources(this->tabPageGame, L"tabPageGame");
			this->tabPageGame->Controls->Add(this->groupBoxTeamOption);
			this->tabPageGame->Controls->Add(this->groupBoxSave);
			this->tabPageGame->Controls->Add(this->groupBoxSimulate);
			this->tabPageGame->Controls->Add(this->groupBoxRun);
			this->tabPageGame->Controls->Add(this->groupBoxView);
			this->tabPageGame->Controls->Add(this->groupBoxSetting);
			this->tabPageGame->Name = L"tabPageGame";
			this->tabPageGame->UseVisualStyleBackColor = true;
			// 
			// groupBoxTeamOption
			// 
			this->groupBoxTeamOption->Controls->Add(this->labelTeamRoundHP);
			this->groupBoxTeamOption->Controls->Add(this->checkBoxTeamRoundHP);
			resources->ApplyResources(this->groupBoxTeamOption, L"groupBoxTeamOption");
			this->groupBoxTeamOption->Name = L"groupBoxTeamOption";
			this->groupBoxTeamOption->TabStop = false;
			// 
			// labelTeamRoundHP
			// 
			resources->ApplyResources(this->labelTeamRoundHP, L"labelTeamRoundHP");
			this->labelTeamRoundHP->Name = L"labelTeamRoundHP";
			// 
			// checkBoxTeamRoundHP
			// 
			resources->ApplyResources(this->checkBoxTeamRoundHP, L"checkBoxTeamRoundHP");
			this->checkBoxTeamRoundHP->Name = L"checkBoxTeamRoundHP";
			this->checkBoxTeamRoundHP->UseVisualStyleBackColor = true;
			this->checkBoxTeamRoundHP->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// groupBoxSimulate
			// 
			this->groupBoxSimulate->Controls->Add(this->numericUpDownSimDelay);
			this->groupBoxSimulate->Controls->Add(this->labelSimDelay);
			resources->ApplyResources(this->groupBoxSimulate, L"groupBoxSimulate");
			this->groupBoxSimulate->Name = L"groupBoxSimulate";
			this->groupBoxSimulate->TabStop = false;
			// 
			// numericUpDownSimDelay
			// 
			this->numericUpDownSimDelay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->numericUpDownSimDelay, L"numericUpDownSimDelay");
			this->numericUpDownSimDelay->Name = L"numericUpDownSimDelay";
			this->numericUpDownSimDelay->ValueChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// labelSimDelay
			// 
			resources->ApplyResources(this->labelSimDelay, L"labelSimDelay");
			this->labelSimDelay->Name = L"labelSimDelay";
			// 
			// groupBoxRun
			// 
			this->groupBoxRun->Controls->Add(this->checkBoxWindowSize);
			this->groupBoxRun->Controls->Add(this->checkBoxHitJudge);
			resources->ApplyResources(this->groupBoxRun, L"groupBoxRun");
			this->groupBoxRun->Name = L"groupBoxRun";
			this->groupBoxRun->TabStop = false;
			// 
			// checkBoxWindowSize
			// 
			resources->ApplyResources(this->checkBoxWindowSize, L"checkBoxWindowSize");
			this->checkBoxWindowSize->Name = L"checkBoxWindowSize";
			this->checkBoxWindowSize->UseVisualStyleBackColor = true;
			this->checkBoxWindowSize->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// checkBoxHitJudge
			// 
			resources->ApplyResources(this->checkBoxHitJudge, L"checkBoxHitJudge");
			this->checkBoxHitJudge->Name = L"checkBoxHitJudge";
			this->checkBoxHitJudge->UseVisualStyleBackColor = true;
			this->checkBoxHitJudge->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// groupBoxView
			// 
			this->groupBoxView->Controls->Add(this->checkBoxShowResult);
			this->groupBoxView->Controls->Add(this->checkBoxVersus);
			this->groupBoxView->Controls->Add(this->checkBoxName);
			this->groupBoxView->Controls->Add(this->checkBoxFramerate);
			this->groupBoxView->Controls->Add(this->checkBoxRand);
			resources->ApplyResources(this->groupBoxView, L"groupBoxView");
			this->groupBoxView->Name = L"groupBoxView";
			this->groupBoxView->TabStop = false;
			// 
			// checkBoxShowResult
			// 
			resources->ApplyResources(this->checkBoxShowResult, L"checkBoxShowResult");
			this->checkBoxShowResult->Checked = true;
			this->checkBoxShowResult->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxShowResult->Name = L"checkBoxShowResult";
			this->checkBoxShowResult->UseVisualStyleBackColor = true;
			this->checkBoxShowResult->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// checkBoxVersus
			// 
			resources->ApplyResources(this->checkBoxVersus, L"checkBoxVersus");
			this->checkBoxVersus->Checked = true;
			this->checkBoxVersus->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxVersus->Name = L"checkBoxVersus";
			this->checkBoxVersus->UseVisualStyleBackColor = true;
			this->checkBoxVersus->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// checkBoxName
			// 
			resources->ApplyResources(this->checkBoxName, L"checkBoxName");
			this->checkBoxName->Checked = true;
			this->checkBoxName->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxName->Name = L"checkBoxName";
			this->checkBoxName->UseVisualStyleBackColor = true;
			this->checkBoxName->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// checkBoxFramerate
			// 
			resources->ApplyResources(this->checkBoxFramerate, L"checkBoxFramerate");
			this->checkBoxFramerate->Name = L"checkBoxFramerate";
			this->checkBoxFramerate->UseVisualStyleBackColor = true;
			this->checkBoxFramerate->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// checkBoxRand
			// 
			resources->ApplyResources(this->checkBoxRand, L"checkBoxRand");
			this->checkBoxRand->Name = L"checkBoxRand";
			this->checkBoxRand->UseVisualStyleBackColor = true;
			this->checkBoxRand->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// groupBoxSetting
			// 
			this->groupBoxSetting->Controls->Add(this->numericUpDownRound);
			this->groupBoxSetting->Controls->Add(this->labelRound);
			this->groupBoxSetting->Controls->Add(this->labelTimer);
			this->groupBoxSetting->Controls->Add(this->numericUpDownTimer);
			this->groupBoxSetting->Controls->Add(this->numericUpDownMaxStage);
			this->groupBoxSetting->Controls->Add(this->labelMaxStage);
			this->groupBoxSetting->Controls->Add(this->labelStageSelect);
			this->groupBoxSetting->Controls->Add(this->numericUpDownStageSelect);
			resources->ApplyResources(this->groupBoxSetting, L"groupBoxSetting");
			this->groupBoxSetting->Name = L"groupBoxSetting";
			this->groupBoxSetting->TabStop = false;
			// 
			// numericUpDownRound
			// 
			this->numericUpDownRound->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->numericUpDownRound, L"numericUpDownRound");
			this->numericUpDownRound->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9, 0, 0, 0});
			this->numericUpDownRound->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDownRound->Name = L"numericUpDownRound";
			this->numericUpDownRound->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDownRound->ValueChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// labelRound
			// 
			resources->ApplyResources(this->labelRound, L"labelRound");
			this->labelRound->Name = L"labelRound";
			// 
			// labelTimer
			// 
			resources->ApplyResources(this->labelTimer, L"labelTimer");
			this->labelTimer->Name = L"labelTimer";
			// 
			// numericUpDownTimer
			// 
			this->numericUpDownTimer->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->numericUpDownTimer, L"numericUpDownTimer");
			this->numericUpDownTimer->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDownTimer->Name = L"numericUpDownTimer";
			this->numericUpDownTimer->ValueChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// numericUpDownMaxStage
			// 
			this->numericUpDownMaxStage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->numericUpDownMaxStage, L"numericUpDownMaxStage");
			this->numericUpDownMaxStage->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDownMaxStage->Name = L"numericUpDownMaxStage";
			this->numericUpDownMaxStage->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDownMaxStage->ValueChanged += gcnew System::EventHandler(this, &OptionForm::numericUpDownStage_ValueChanged);
			// 
			// labelMaxStage
			// 
			resources->ApplyResources(this->labelMaxStage, L"labelMaxStage");
			this->labelMaxStage->Name = L"labelMaxStage";
			// 
			// labelStageSelect
			// 
			resources->ApplyResources(this->labelStageSelect, L"labelStageSelect");
			this->labelStageSelect->Name = L"labelStageSelect";
			// 
			// numericUpDownStageSelect
			// 
			this->numericUpDownStageSelect->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->numericUpDownStageSelect, L"numericUpDownStageSelect");
			this->numericUpDownStageSelect->Name = L"numericUpDownStageSelect";
			this->numericUpDownStageSelect->ValueChanged += gcnew System::EventHandler(this, &OptionForm::numericUpDownStage_ValueChanged);
			// 
			// tabPageColor
			// 
			this->tabPageColor->Controls->Add(this->groupBoxMessageColor);
			this->tabPageColor->Controls->Add(this->groupBoxOthersColor);
			this->tabPageColor->Controls->Add(this->groupBoxStateColor);
			this->tabPageColor->Controls->Add(this->groupBoxNameColor);
			resources->ApplyResources(this->tabPageColor, L"tabPageColor");
			this->tabPageColor->Name = L"tabPageColor";
			this->tabPageColor->UseVisualStyleBackColor = true;
			// 
			// groupBoxMessageColor
			// 
			this->groupBoxMessageColor->Controls->Add(this->buttonDebugMessage);
			this->groupBoxMessageColor->Controls->Add(this->buttonErrorMessage);
			this->groupBoxMessageColor->Controls->Add(this->buttonSystemMessage);
			resources->ApplyResources(this->groupBoxMessageColor, L"groupBoxMessageColor");
			this->groupBoxMessageColor->Name = L"groupBoxMessageColor";
			this->groupBoxMessageColor->TabStop = false;
			// 
			// buttonDebugMessage
			// 
			this->buttonDebugMessage->BackColor = System::Drawing::SystemColors::Window;
			resources->ApplyResources(this->buttonDebugMessage, L"buttonDebugMessage");
			this->buttonDebugMessage->Name = L"buttonDebugMessage";
			this->buttonDebugMessage->UseVisualStyleBackColor = false;
			this->buttonDebugMessage->Click += gcnew System::EventHandler(this, &OptionForm::buttonDebugMessage_Click);
			this->buttonDebugMessage->ForeColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// buttonErrorMessage
			// 
			this->buttonErrorMessage->BackColor = System::Drawing::SystemColors::Window;
			resources->ApplyResources(this->buttonErrorMessage, L"buttonErrorMessage");
			this->buttonErrorMessage->Name = L"buttonErrorMessage";
			this->buttonErrorMessage->UseVisualStyleBackColor = false;
			this->buttonErrorMessage->Click += gcnew System::EventHandler(this, &OptionForm::buttonErrorMessage_Click);
			this->buttonErrorMessage->ForeColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// buttonSystemMessage
			// 
			this->buttonSystemMessage->BackColor = System::Drawing::SystemColors::Window;
			resources->ApplyResources(this->buttonSystemMessage, L"buttonSystemMessage");
			this->buttonSystemMessage->Name = L"buttonSystemMessage";
			this->buttonSystemMessage->UseVisualStyleBackColor = false;
			this->buttonSystemMessage->Click += gcnew System::EventHandler(this, &OptionForm::buttonSystemMessage_Click);
			this->buttonSystemMessage->ForeColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// groupBoxOthersColor
			// 
			this->groupBoxOthersColor->Controls->Add(this->buttonSecret);
			this->groupBoxOthersColor->Controls->Add(this->buttonCommentBack);
			this->groupBoxOthersColor->Controls->Add(this->buttonNoticeBack);
			resources->ApplyResources(this->groupBoxOthersColor, L"groupBoxOthersColor");
			this->groupBoxOthersColor->Name = L"groupBoxOthersColor";
			this->groupBoxOthersColor->TabStop = false;
			// 
			// buttonSecret
			// 
			this->buttonSecret->BackColor = System::Drawing::SystemColors::Window;
			resources->ApplyResources(this->buttonSecret, L"buttonSecret");
			this->buttonSecret->Name = L"buttonSecret";
			this->buttonSecret->UseVisualStyleBackColor = false;
			this->buttonSecret->Click += gcnew System::EventHandler(this, &OptionForm::buttonSecret_Click);
			this->buttonSecret->ForeColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// buttonCommentBack
			// 
			this->buttonCommentBack->ForeColor = System::Drawing::SystemColors::WindowText;
			resources->ApplyResources(this->buttonCommentBack, L"buttonCommentBack");
			this->buttonCommentBack->Name = L"buttonCommentBack";
			this->buttonCommentBack->UseVisualStyleBackColor = false;
			this->buttonCommentBack->BackColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonCommentBack->Click += gcnew System::EventHandler(this, &OptionForm::buttonCommentBack_Click);
			// 
			// buttonNoticeBack
			// 
			this->buttonNoticeBack->ForeColor = System::Drawing::SystemColors::WindowText;
			resources->ApplyResources(this->buttonNoticeBack, L"buttonNoticeBack");
			this->buttonNoticeBack->Name = L"buttonNoticeBack";
			this->buttonNoticeBack->UseVisualStyleBackColor = false;
			this->buttonNoticeBack->BackColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonNoticeBack->Click += gcnew System::EventHandler(this, &OptionForm::buttonNoticeBack_Click);
			// 
			// groupBoxStateColor
			// 
			this->groupBoxStateColor->Controls->Add(this->buttonSeekState);
			this->groupBoxStateColor->Controls->Add(this->buttonWatchState);
			this->groupBoxStateColor->Controls->Add(this->buttonVSState);
			this->groupBoxStateColor->Controls->Add(this->buttonRestState);
			resources->ApplyResources(this->groupBoxStateColor, L"groupBoxStateColor");
			this->groupBoxStateColor->Name = L"groupBoxStateColor";
			this->groupBoxStateColor->TabStop = false;
			// 
			// buttonSeekState
			// 
			resources->ApplyResources(this->buttonSeekState, L"buttonSeekState");
			this->buttonSeekState->Name = L"buttonSeekState";
			this->buttonSeekState->UseVisualStyleBackColor = true;
			this->buttonSeekState->BackColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonSeekState->Click += gcnew System::EventHandler(this, &OptionForm::buttonSeekState_Click);
			// 
			// buttonWatchState
			// 
			this->buttonWatchState->ForeColor = System::Drawing::SystemColors::WindowText;
			resources->ApplyResources(this->buttonWatchState, L"buttonWatchState");
			this->buttonWatchState->Name = L"buttonWatchState";
			this->buttonWatchState->UseVisualStyleBackColor = false;
			this->buttonWatchState->BackColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonWatchState->Click += gcnew System::EventHandler(this, &OptionForm::buttonWatchState_Click);
			// 
			// buttonVSState
			// 
			this->buttonVSState->ForeColor = System::Drawing::SystemColors::WindowText;
			resources->ApplyResources(this->buttonVSState, L"buttonVSState");
			this->buttonVSState->Name = L"buttonVSState";
			this->buttonVSState->UseVisualStyleBackColor = false;
			this->buttonVSState->BackColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonVSState->Click += gcnew System::EventHandler(this, &OptionForm::buttonVSState_Click);
			// 
			// buttonRestState
			// 
			this->buttonRestState->ForeColor = System::Drawing::SystemColors::WindowText;
			resources->ApplyResources(this->buttonRestState, L"buttonRestState");
			this->buttonRestState->Name = L"buttonRestState";
			this->buttonRestState->UseVisualStyleBackColor = false;
			this->buttonRestState->BackColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonRestState->Click += gcnew System::EventHandler(this, &OptionForm::buttonRestState_Click);
			// 
			// groupBoxNameColor
			// 
			this->groupBoxNameColor->Controls->Add(this->buttonClientName);
			this->groupBoxNameColor->Controls->Add(this->buttonHostName);
			this->groupBoxNameColor->Controls->Add(this->buttonServerName);
			resources->ApplyResources(this->groupBoxNameColor, L"groupBoxNameColor");
			this->groupBoxNameColor->Name = L"groupBoxNameColor";
			this->groupBoxNameColor->TabStop = false;
			// 
			// buttonClientName
			// 
			this->buttonClientName->BackColor = System::Drawing::SystemColors::Window;
			resources->ApplyResources(this->buttonClientName, L"buttonClientName");
			this->buttonClientName->Name = L"buttonClientName";
			this->buttonClientName->UseVisualStyleBackColor = false;
			this->buttonClientName->Click += gcnew System::EventHandler(this, &OptionForm::buttonClientName_Click);
			this->buttonClientName->ForeColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// buttonHostName
			// 
			this->buttonHostName->BackColor = System::Drawing::SystemColors::Window;
			resources->ApplyResources(this->buttonHostName, L"buttonHostName");
			this->buttonHostName->Name = L"buttonHostName";
			this->buttonHostName->UseVisualStyleBackColor = false;
			this->buttonHostName->Click += gcnew System::EventHandler(this, &OptionForm::buttonHostName_Click);
			this->buttonHostName->ForeColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// buttonServerName
			// 
			this->buttonServerName->BackColor = System::Drawing::SystemColors::Window;
			resources->ApplyResources(this->buttonServerName, L"buttonServerName");
			this->buttonServerName->Name = L"buttonServerName";
			this->buttonServerName->UseVisualStyleBackColor = false;
			this->buttonServerName->Click += gcnew System::EventHandler(this, &OptionForm::buttonServerName_Click);
			this->buttonServerName->ForeColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// tabPageVolume
			// 
			this->tabPageVolume->Controls->Add(this->groupBoxMidi);
			this->tabPageVolume->Controls->Add(this->groupBoxSE);
			this->tabPageVolume->Controls->Add(this->groupBoxBGM);
			resources->ApplyResources(this->tabPageVolume, L"tabPageVolume");
			this->tabPageVolume->Name = L"tabPageVolume";
			this->tabPageVolume->UseVisualStyleBackColor = true;
			// 
			// groupBoxMidi
			// 
			this->groupBoxMidi->Controls->Add(this->labelMidi);
			this->groupBoxMidi->Controls->Add(this->trackBarMidi);
			resources->ApplyResources(this->groupBoxMidi, L"groupBoxMidi");
			this->groupBoxMidi->Name = L"groupBoxMidi";
			this->groupBoxMidi->TabStop = false;
			// 
			// labelMidi
			// 
			resources->ApplyResources(this->labelMidi, L"labelMidi");
			this->labelMidi->Name = L"labelMidi";
			// 
			// trackBarMidi
			// 
			resources->ApplyResources(this->trackBarMidi, L"trackBarMidi");
			this->trackBarMidi->LargeChange = 10;
			this->trackBarMidi->Maximum = 100;
			this->trackBarMidi->Name = L"trackBarMidi";
			this->trackBarMidi->TickFrequency = 10;
			this->trackBarMidi->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
			this->trackBarMidi->Scroll += gcnew System::EventHandler(this, &OptionForm::trackBarMidi_Scroll);
			// 
			// groupBoxSE
			// 
			this->groupBoxSE->Controls->Add(this->labelSE);
			this->groupBoxSE->Controls->Add(this->trackBarSE);
			resources->ApplyResources(this->groupBoxSE, L"groupBoxSE");
			this->groupBoxSE->Name = L"groupBoxSE";
			this->groupBoxSE->TabStop = false;
			// 
			// labelSE
			// 
			resources->ApplyResources(this->labelSE, L"labelSE");
			this->labelSE->Name = L"labelSE";
			// 
			// trackBarSE
			// 
			resources->ApplyResources(this->trackBarSE, L"trackBarSE");
			this->trackBarSE->LargeChange = 2;
			this->trackBarSE->Maximum = 20;
			this->trackBarSE->Name = L"trackBarSE";
			this->trackBarSE->TickFrequency = 2;
			this->trackBarSE->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
			this->trackBarSE->Scroll += gcnew System::EventHandler(this, &OptionForm::trackBarSE_Scroll);
			// 
			// groupBoxBGM
			// 
			this->groupBoxBGM->Controls->Add(this->labelBGM);
			this->groupBoxBGM->Controls->Add(this->trackBarBGM);
			resources->ApplyResources(this->groupBoxBGM, L"groupBoxBGM");
			this->groupBoxBGM->Name = L"groupBoxBGM";
			this->groupBoxBGM->TabStop = false;
			// 
			// labelBGM
			// 
			resources->ApplyResources(this->labelBGM, L"labelBGM");
			this->labelBGM->Name = L"labelBGM";
			// 
			// trackBarBGM
			// 
			resources->ApplyResources(this->trackBarBGM, L"trackBarBGM");
			this->trackBarBGM->LargeChange = 2;
			this->trackBarBGM->Maximum = 20;
			this->trackBarBGM->Name = L"trackBarBGM";
			this->trackBarBGM->TickFrequency = 2;
			this->trackBarBGM->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
			this->trackBarBGM->Scroll += gcnew System::EventHandler(this, &OptionForm::trackBarBGM_Scroll);
			// 
			// tabPageIP
			// 
			this->tabPageIP->Controls->Add(this->AddPortbutton);
			this->tabPageIP->Controls->Add(this->discriptionlabel);
			this->tabPageIP->Controls->Add(this->Convertbutton);
			this->tabPageIP->Controls->Add(this->Base64groupBox);
			this->tabPageIP->Controls->Add(this->IPgroupBox);
			resources->ApplyResources(this->tabPageIP, L"tabPageIP");
			this->tabPageIP->Name = L"tabPageIP";
			this->tabPageIP->UseVisualStyleBackColor = true;
			// 
			// AddPortbutton
			// 
			resources->ApplyResources(this->AddPortbutton, L"AddPortbutton");
			this->AddPortbutton->Name = L"AddPortbutton";
			this->AddPortbutton->UseVisualStyleBackColor = true;
			this->AddPortbutton->Click += gcnew System::EventHandler(this, &OptionForm::AddPortbutton_Click);
			// 
			// discriptionlabel
			// 
			resources->ApplyResources(this->discriptionlabel, L"discriptionlabel");
			this->discriptionlabel->Name = L"discriptionlabel";
			// 
			// Convertbutton
			// 
			resources->ApplyResources(this->Convertbutton, L"Convertbutton");
			this->Convertbutton->Name = L"Convertbutton";
			this->Convertbutton->UseVisualStyleBackColor = true;
			this->Convertbutton->Click += gcnew System::EventHandler(this, &OptionForm::Convertbutton_Click);
			// 
			// Base64groupBox
			// 
			this->Base64groupBox->Controls->Add(this->labelAddrMT);
			this->Base64groupBox->Controls->Add(this->textBoxMTAddr);
			this->Base64groupBox->Controls->Add(this->labelAddrBase64);
			this->Base64groupBox->Controls->Add(this->Base64textBox);
			resources->ApplyResources(this->Base64groupBox, L"Base64groupBox");
			this->Base64groupBox->Name = L"Base64groupBox";
			this->Base64groupBox->TabStop = false;
			// 
			// labelAddrMT
			// 
			resources->ApplyResources(this->labelAddrMT, L"labelAddrMT");
			this->labelAddrMT->Name = L"labelAddrMT";
			// 
			// textBoxMTAddr
			// 
			this->textBoxMTAddr->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBoxMTAddr, L"textBoxMTAddr");
			this->textBoxMTAddr->Name = L"textBoxMTAddr";
			this->textBoxMTAddr->ReadOnly = true;
			// 
			// labelAddrBase64
			// 
			resources->ApplyResources(this->labelAddrBase64, L"labelAddrBase64");
			this->labelAddrBase64->Name = L"labelAddrBase64";
			// 
			// Base64textBox
			// 
			this->Base64textBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->Base64textBox, L"Base64textBox");
			this->Base64textBox->Name = L"Base64textBox";
			this->Base64textBox->ReadOnly = true;
			// 
			// IPgroupBox
			// 
			this->IPgroupBox->Controls->Add(this->IPtextBox);
			resources->ApplyResources(this->IPgroupBox, L"IPgroupBox");
			this->IPgroupBox->Name = L"IPgroupBox";
			this->IPgroupBox->TabStop = false;
			// 
			// IPtextBox
			// 
			resources->ApplyResources(this->IPtextBox, L"IPtextBox");
			this->IPtextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->IPtextBox->Name = L"IPtextBox";
			this->IPtextBox->TextChanged += gcnew System::EventHandler(this, &OptionForm::IPtextBox_TextChanged);
			// 
			// tabPageDetails
			// 
			this->tabPageDetails->Controls->Add(this->groupBoxLog);
			this->tabPageDetails->Controls->Add(this->groupBoxDetails);
			resources->ApplyResources(this->tabPageDetails, L"tabPageDetails");
			this->tabPageDetails->Name = L"tabPageDetails";
			this->tabPageDetails->UseVisualStyleBackColor = true;
			// 
			// groupBoxLog
			// 
			this->groupBoxLog->Controls->Add(this->radioButtonLogTXT);
			this->groupBoxLog->Controls->Add(this->radioButtonLogRTF);
			resources->ApplyResources(this->groupBoxLog, L"groupBoxLog");
			this->groupBoxLog->Name = L"groupBoxLog";
			this->groupBoxLog->TabStop = false;
			// 
			// radioButtonLogTXT
			// 
			resources->ApplyResources(this->radioButtonLogTXT, L"radioButtonLogTXT");
			this->radioButtonLogTXT->Name = L"radioButtonLogTXT";
			this->radioButtonLogTXT->UseVisualStyleBackColor = true;
			this->radioButtonLogTXT->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::radioButtonLogTXT_CheckedChanged);
			// 
			// radioButtonLogRTF
			// 
			resources->ApplyResources(this->radioButtonLogRTF, L"radioButtonLogRTF");
			this->radioButtonLogRTF->Checked = true;
			this->radioButtonLogRTF->Name = L"radioButtonLogRTF";
			this->radioButtonLogRTF->TabStop = true;
			this->radioButtonLogRTF->UseVisualStyleBackColor = true;
			this->radioButtonLogRTF->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::radioButtonLogRTF_CheckedChanged);
			// 
			// groupBoxDetails
			// 
			this->groupBoxDetails->Controls->Add(this->checkBoxLogClearWithoutWelcome);
			this->groupBoxDetails->Controls->Add(this->checkBoxShowGameOption);
			this->groupBoxDetails->Controls->Add(this->checkBoxNameFlash);
			this->groupBoxDetails->Controls->Add(this->checkBoxGetIP);
			this->groupBoxDetails->Controls->Add(this->checkBoxTalkFlash);
			resources->ApplyResources(this->groupBoxDetails, L"groupBoxDetails");
			this->groupBoxDetails->Name = L"groupBoxDetails";
			this->groupBoxDetails->TabStop = false;
			// 
			// checkBoxLogClearWithoutWelcome
			// 
			resources->ApplyResources(this->checkBoxLogClearWithoutWelcome, L"checkBoxLogClearWithoutWelcome");
			this->checkBoxLogClearWithoutWelcome->Checked = true;
			this->checkBoxLogClearWithoutWelcome->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxLogClearWithoutWelcome->Name = L"checkBoxLogClearWithoutWelcome";
			this->checkBoxLogClearWithoutWelcome->UseVisualStyleBackColor = true;
			this->checkBoxLogClearWithoutWelcome->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// checkBoxShowGameOption
			// 
			resources->ApplyResources(this->checkBoxShowGameOption, L"checkBoxShowGameOption");
			this->checkBoxShowGameOption->Checked = true;
			this->checkBoxShowGameOption->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxShowGameOption->Name = L"checkBoxShowGameOption";
			this->checkBoxShowGameOption->UseVisualStyleBackColor = true;
			this->checkBoxShowGameOption->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// checkBoxNameFlash
			// 
			resources->ApplyResources(this->checkBoxNameFlash, L"checkBoxNameFlash");
			this->checkBoxNameFlash->Checked = true;
			this->checkBoxNameFlash->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxNameFlash->Name = L"checkBoxNameFlash";
			this->checkBoxNameFlash->UseVisualStyleBackColor = true;
			this->checkBoxNameFlash->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// checkBoxGetIP
			// 
			resources->ApplyResources(this->checkBoxGetIP, L"checkBoxGetIP");
			this->checkBoxGetIP->Checked = true;
			this->checkBoxGetIP->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxGetIP->Name = L"checkBoxGetIP";
			this->checkBoxGetIP->UseVisualStyleBackColor = true;
			this->checkBoxGetIP->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// checkBoxTalkFlash
			// 
			resources->ApplyResources(this->checkBoxTalkFlash, L"checkBoxTalkFlash");
			this->checkBoxTalkFlash->Checked = true;
			this->checkBoxTalkFlash->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxTalkFlash->Name = L"checkBoxTalkFlash";
			this->checkBoxTalkFlash->UseVisualStyleBackColor = true;
			this->checkBoxTalkFlash->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// OptionForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->tabControlOption);
			this->Controls->Add(this->buttonApply);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"OptionForm";
			this->Opacity = 0.85;
			this->ShowInTaskbar = false;
			this->Load += gcnew System::EventHandler(this, &OptionForm::OptionForm_Load);
			this->Shown += gcnew System::EventHandler(this, &OptionForm::OptionForm_Shown);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &OptionForm::OptionForm_FormClosed);
			this->tabPageSound->ResumeLayout(false);
			this->groupBoxKeywordSound->ResumeLayout(false);
			this->groupBoxKeywordSound->PerformLayout();
			this->groupBoxSeekSound->ResumeLayout(false);
			this->groupBoxSeekSound->PerformLayout();
			this->groupBoxTalkSound->ResumeLayout(false);
			this->groupBoxTalkSound->PerformLayout();
			this->groupBoxName->ResumeLayout(false);
			this->groupBoxName->PerformLayout();
			this->groupBoxEnterSound->ResumeLayout(false);
			this->groupBoxEnterSound->PerformLayout();
			this->groupBoxNoticeSound->ResumeLayout(false);
			this->groupBoxNoticeSound->PerformLayout();
			this->groupBoxVSSound->ResumeLayout(false);
			this->groupBoxVSSound->PerformLayout();
			this->tabPagePath->ResumeLayout(false);
			this->groupBoxProfile->ResumeLayout(false);
			this->groupBoxProfile->PerformLayout();
			this->groupBoxReplayFolder->ResumeLayout(false);
			this->groupBoxReplayFolder->PerformLayout();
			this->groupBoxNet->ResumeLayout(false);
			this->groupBoxNet->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownMaxConnection))->EndInit();
			this->groupBoxGameExe->ResumeLayout(false);
			this->groupBoxGameExe->PerformLayout();
			this->groupBoxSave->ResumeLayout(false);
			this->groupBoxSave->PerformLayout();
			this->tabControlOption->ResumeLayout(false);
			this->tabPageGame->ResumeLayout(false);
			this->groupBoxTeamOption->ResumeLayout(false);
			this->groupBoxTeamOption->PerformLayout();
			this->groupBoxSimulate->ResumeLayout(false);
			this->groupBoxSimulate->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownSimDelay))->EndInit();
			this->groupBoxRun->ResumeLayout(false);
			this->groupBoxRun->PerformLayout();
			this->groupBoxView->ResumeLayout(false);
			this->groupBoxView->PerformLayout();
			this->groupBoxSetting->ResumeLayout(false);
			this->groupBoxSetting->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownRound))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownTimer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownMaxStage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownStageSelect))->EndInit();
			this->tabPageColor->ResumeLayout(false);
			this->groupBoxMessageColor->ResumeLayout(false);
			this->groupBoxOthersColor->ResumeLayout(false);
			this->groupBoxStateColor->ResumeLayout(false);
			this->groupBoxNameColor->ResumeLayout(false);
			this->tabPageVolume->ResumeLayout(false);
			this->groupBoxMidi->ResumeLayout(false);
			this->groupBoxMidi->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMidi))->EndInit();
			this->groupBoxSE->ResumeLayout(false);
			this->groupBoxSE->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarSE))->EndInit();
			this->groupBoxBGM->ResumeLayout(false);
			this->groupBoxBGM->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarBGM))->EndInit();
			this->tabPageIP->ResumeLayout(false);
			this->tabPageIP->PerformLayout();
			this->Base64groupBox->ResumeLayout(false);
			this->Base64groupBox->PerformLayout();
			this->IPgroupBox->ResumeLayout(false);
			this->IPgroupBox->PerformLayout();
			this->tabPageDetails->ResumeLayout(false);
			this->groupBoxLog->ResumeLayout(false);
			this->groupBoxLog->PerformLayout();
			this->groupBoxDetails->ResumeLayout(false);
			this->groupBoxDetails->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	protected:
		HMIXER hMixer;
		DWORD MixerControlID;
		DWORD MixerVolumeMin, MixerVolumeMax;

		void AdviceGameExe(){
			textBoxGameExe->Text = gcnew String("请按右侧按钮设置路径");
			textBoxGameExe->Focus();
		}

		void CheckStageValue(){
			if(numericUpDownStageSelect->Value > numericUpDownMaxStage->Value){
				labelMaxStage->Text    = gcnew String("开始关卡");
				labelStageSelect->Text = gcnew String("终端阶段");
			}
			else{
				labelMaxStage->Text    = gcnew String("最大关卡数");
				labelStageSelect->Text = gcnew String("对战舞台");
			}

			if(numericUpDownStageSelect->Value == 0){
				labelStageSelect->Text = gcnew String("随机关卡");
			}
		}

		// OptionForm.cpp
		void SaveOption(bool apply);
		void CloseOption();
		void DeleteProfile(String^ buf);
		bool CheckTextProfileName(String^ buf);
		void OverWriteProfile(String^ buf);

	public:
		bool GameExePathError;

		void SetGameExePath(String^% path){
			textBoxGameExe->Text = path;
		}

	private:
		System::Void OptionForm_Load(System::Object^  sender, System::EventArgs^  e) {

			textBoxGameExe->MaxLength          = _MAX_PATH;
			textBoxReplayFolder->MaxLength     = _MAX_PATH;
			textBoxVSSound->MaxLength          = _MAX_PATH;
			textBoxNoticeSound->MaxLength      = _MAX_PATH;
			textBoxEnterSound->MaxLength       = _MAX_PATH;
			textBoxTalkSound->MaxLength        = _MAX_PATH;
			textBoxSeekSound->MaxLength        = _MAX_PATH;
			textBoxKeywordSoundPath->MaxLength = _MAX_PATH;

			textBoxComment->MaxLength = MAX_NAME;

			comboBoxProfile->Items->Clear();
			for(int i=0; i < Profile::ProfileList->Count; i++){
				comboBoxProfile->Items->Add(Profile::ProfileList[i]);
				if(Profile::ProfileList[i] == gcnew String(MTOPTION.PROFILE)){
					comboBoxProfile->SelectedIndex = i;
				}
			}

			textBoxGameExe->Text          = gcnew String(MTOPTION.GAME_EXE);
			textBoxReplayFolder->Text     = gcnew String(MTOPTION.REPLAY_FOLDER);
			textBoxComment->Text          = gcnew String(MTOPTION.COMMENT);
			textBoxVSSound->Text          = gcnew String(MTOPTION.VS_SOUND);
			textBoxNoticeSound->Text      = gcnew String(MTOPTION.NOTICE_SOUND);
			textBoxEnterSound->Text       = gcnew String(MTOPTION.ENTER_SOUND);
			textBoxNameSound->Text        = gcnew String(MTOPTION.NAME_SOUND);
			textBoxTalkSound->Text        = gcnew String(MTOPTION.TALK_SOUND);
			textBoxSeekSound->Text        = gcnew String(MTOPTION.SEEK_SOUND);
			textBoxKeywordSoundPath->Text = gcnew String(MTOPTION.KEYWORD_SOUND);
			textBoxKeyword->Text          = gcnew String(MTOPTION.KEYWORD);

			// 把路径选择放到末尾
			textBoxGameExe->SelectionStart          = textBoxGameExe->Text->Length;
			textBoxReplayFolder->SelectionStart     = textBoxReplayFolder->Text->Length;
			textBoxComment->SelectionStart          = textBoxComment->Text->Length;
			textBoxVSSound->SelectionStart          = textBoxVSSound->Text->Length;
			textBoxNoticeSound->SelectionStart      = textBoxNoticeSound->Text->Length;
			textBoxEnterSound->SelectionStart       = textBoxEnterSound->Text->Length;
			textBoxNameSound->SelectionStart        = textBoxNameSound->Text->Length;
			textBoxTalkSound->SelectionStart        = textBoxTalkSound->Text->Length;
			textBoxSeekSound->SelectionStart        = textBoxSeekSound->Text->Length;
			textBoxKeywordSoundPath->SelectionStart = textBoxKeywordSoundPath->Text->Length;

			checkBoxVSSound->Checked          = MTOPTION.VS_SOUND_ENABLE;
			checkBoxNoticeSound->Checked      = MTOPTION.NOTICE_SOUND_ENABLE;
			checkBoxEnterSound->Checked       = MTOPTION.ENTER_SOUND_ENABLE;
			checkBoxNameSound->Checked        = MTOPTION.NAME_SOUND_ENABLE;
			checkBoxTalkSound->Checked        = MTOPTION.TALK_SOUND_ENABLE;
			checkBoxSeekSound->Checked        = MTOPTION.SEEK_SOUND_ENABLE;
			checkBoxKeywordSound->Checked     = MTOPTION.KEYWORD_SOUND_ENABLE;

			checkBoxGetIP->Checked            = MTOPTION.GET_IP_ENABLE;
			checkBoxShowGameOption->Checked   = MTOPTION.SHOW_GAME_OPTION;
			checkBoxShowResult->Checked       = MTOPTION.SHOW_RESULT;
			checkBoxLogClearWithoutWelcome->Checked = MTOPTION.LOG_CLEAR_WITHOUT_WELCOME;

			numericUpDownMaxConnection->Value = MTOPTION.MAX_CONNECTION;
			trackBarBGM->Value                = MTOPTION.BGM_VOLUME / 5;
			trackBarSE->Value                 = MTOPTION.SE_VOLUME / 5;
			numericUpDownMaxStage->Value      = MTOPTION.MAX_STAGE;
			numericUpDownStageSelect->Value   = MTOPTION.STAGE_SELECT;
			numericUpDownRound->Value         = MTOPTION.ROUND;
			numericUpDownTimer->Value         = MTOPTION.TIMER;
			numericUpDownSimDelay->Value      = MTOPTION.SIMULATE_DELAY;
			checkBoxHitJudge->Checked         = MTOPTION.HIT_JUDGE;
			checkBoxName->Checked             = MTOPTION.DISPLAY_NAME;
			checkBoxVersus->Checked           = MTOPTION.DISPLAY_VERSUS;
			checkBoxFramerate->Checked        = MTOPTION.DISPLAY_FRAMERATE;
			checkBoxRand->Checked             = MTOPTION.DISPLAY_RAND;
			checkBoxDivide->Checked           = MTOPTION.REPLAY_DIVIDE;
			checkBoxWindowSize->Checked       = MTOPTION.CHANGE_WINDOW_SIZE;

			if(MTOPTION.LOG_FORMAT_RTF){
				radioButtonLogRTF->Checked    = true;
				radioButtonLogTXT->Checked    = false;
			}else{
				radioButtonLogRTF->Checked    = false;
				radioButtonLogTXT->Checked    = true;
			}

			checkBoxTalkFlash->Checked        = MTOPTION.TALK_FLASH;
			checkBoxNameFlash->Checked        = MTOPTION.NAME_FLASH;
			checkBoxTeamRoundHP->Checked      = MTOPTION.TEAM_ROUND_HP;

			CheckStageValue();

			labelBGM->Text = String::Format("{0,3}%", trackBarBGM->Value * 5);
			labelSE->Text = String::Format("{0,3}%", trackBarSE->Value * 5);

			if(MTOPTION.REPLAY_VERSION == 2){
				radioButtonReplayVersion1->Checked = false;
				radioButtonReplayVersion2->Checked = true;
			}
			else{
				radioButtonReplayVersion1->Checked = true;
				radioButtonReplayVersion2->Checked = false;
			}

			buttonServerName->ForeColor    = Color::FromArgb(MTCOLOR.SERVER_NAME);
			buttonHostName->ForeColor      = Color::FromArgb(MTCOLOR.HOST_NAME);
			buttonClientName->ForeColor    = Color::FromArgb(MTCOLOR.CLIENT_NAME);
			buttonRestState->BackColor     = Color::FromArgb(MTCOLOR.REST_STATE);
			buttonVSState->BackColor       = Color::FromArgb(MTCOLOR.VS_STATE);
			buttonWatchState->BackColor    = Color::FromArgb(MTCOLOR.WATCH_STATE);
			buttonSeekState->BackColor     = Color::FromArgb(MTCOLOR.SEEK_STATE);

			buttonSystemMessage->ForeColor = Color::FromArgb(MTCOLOR.SYSTEM_MESSAGE);
			buttonErrorMessage->ForeColor  = Color::FromArgb(MTCOLOR.ERROR_MESSAGE);
			buttonDebugMessage->ForeColor  = Color::FromArgb(MTCOLOR.DEBUG_MESSAGE);
			buttonNoticeBack->BackColor    = Color::FromArgb(MTCOLOR.NOTICE_BACK);
			buttonCommentBack->BackColor   = Color::FromArgb(MTCOLOR.COMMENT_BACK);
			buttonSecret->ForeColor        = Color::FromArgb(MTCOLOR.SECRET);

			// SW合成器
			try{
				hMixer = NULL;
				pin_ptr<HMIXER> p_hm = &hMixer;

				if(mixerOpen(p_hm, 0, 0, 0, MIXER_OBJECTF_MIXER) != MMSYSERR_NOERROR){
					throw gcnew Exception;
				}
				else{
					// 准备
					MIXERLINE line;
					MIXERLINECONTROLS lc;
					MIXERCONTROL ctrl;

					line.cbStruct        = sizeof(MIXERLINE);
					line.dwComponentType = MIXERLINE_COMPONENTTYPE_SRC_SYNTHESIZER;

					if(mixerGetLineInfo((HMIXEROBJ)hMixer, &line, MIXER_OBJECTF_HMIXER | MIXER_GETLINEINFOF_COMPONENTTYPE) != MMSYSERR_NOERROR){
						throw gcnew Exception;
					}

					lc.cbStruct      = sizeof(MIXERLINECONTROLS);
					lc.dwLineID      = line.dwLineID;
					lc.dwControlType = MIXERCONTROL_CONTROLTYPE_VOLUME;
					lc.cControls     = 1;
					lc.cbmxctrl      = sizeof(MIXERCONTROL);
					lc.pamxctrl      = &ctrl;

					if(mixerGetLineControls((HMIXEROBJ)hMixer, &lc, MIXER_OBJECTF_HMIXER | MIXER_GETLINECONTROLSF_ONEBYTYPE) != MMSYSERR_NOERROR){
						throw gcnew Exception;
					}

					MixerControlID = ctrl.dwControlID;
					MixerVolumeMin = ctrl.Bounds.dwMinimum;
					MixerVolumeMax = ctrl.Bounds.dwMaximum;

					// 壒検庢摼
					MIXERCONTROLDETAILS mcd;
					MIXERCONTROLDETAILS_UNSIGNED vol;

					mcd.cbStruct       = sizeof(MIXERCONTROLDETAILS);
					mcd.dwControlID    = ctrl.dwControlID;
					mcd.cChannels      = 1;
					mcd.cMultipleItems = 0;
					mcd.cbDetails      = sizeof(MIXERCONTROLDETAILS_UNSIGNED);
					mcd.paDetails      = &vol;

					if(mixerGetControlDetails((HMIXEROBJ)hMixer, &mcd, MIXER_OBJECTF_HMIXER | MIXER_GETCONTROLDETAILSF_VALUE) != MMSYSERR_NOERROR){
						throw gcnew Exception;
					}

					DWORD delta = MixerVolumeMax - MixerVolumeMin;
					trackBarMidi->Value = ((vol.dwValue - MixerVolumeMin)*100 + delta/2)/delta;

					labelMidi->Text = String::Format("{0,3}%", trackBarMidi->Value);
				}
			}
			catch(Exception^){
				if(hMixer != NULL){
					mixerClose(hMixer);
					hMixer = NULL;
				}

				labelMidi->Text = gcnew String("xxx");
				groupBoxMidi->Enabled = false;
			}

			if(MTWS.DIALOG_LEFT > 0 && MTWS.DIALOG_TOP > 0){
				this->StartPosition = FormStartPosition::Manual;
				this->Location = Point(MTWS.DIALOG_LEFT, MTWS.DIALOG_TOP);
			}

			buttonApply->Enabled = false;
		}

		System::Void OptionForm_Shown(System::Object^  sender, System::EventArgs^  e) {
			if(GameExePathError){
				AdviceGameExe();
			}
		}

		System::Void OptionForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			if(hMixer != NULL){
				mixerClose(hMixer);
				hMixer = NULL;
			}

			MTWS.DIALOG_LEFT = this->Location.X;
			MTWS.DIALOG_TOP  = this->Location.Y;

			CloseOption();

			this->Owner->Focus();
		}

		System::Void buttonOK_Click(System::Object^  sender, System::EventArgs^  e) {
			if(buttonApply->Enabled){
				buttonApply->Enabled = false;

				SaveOption(false);
			}

			this->Close();
		}

		System::Void buttonApply_Click(System::Object^  sender, System::EventArgs^  e) {
			buttonApply->Enabled = false;

			SaveOption(true);
		}

		System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		}

		System::Void buttonGameExe_Click(System::Object^  sender, System::EventArgs^  e) {
			openFileDialog1->Title  = gcnew String("格斗游戏的可执行文件");
			openFileDialog1->Filter = gcnew String("exe file (*.exe)|*.exe");

			if(openFileDialog1->ShowDialog() == ::DialogResult::OK){
				FileVersionInfo^ info = FileVersionInfo::GetVersionInfo(openFileDialog1->FileName);

				if(info->FileDescription == "２Ｄ格闘ツクール2nd." || info->FileDescription == "２Ｄ格闘ツクール９５"){
					textBoxGameExe->Text = openFileDialog1->FileName;
				}
				else{
					textBoxGameExe->Text = "这不是格斗游戏的可执行文件";
					textBoxGameExe->SelectAll();
					textBoxGameExe->Focus();
				}
			}
		}

		System::Void buttonReplayFolder_Click(System::Object^  sender, System::EventArgs^  e) {
			if(folderBrowserDialog1->ShowDialog() == ::DialogResult::OK){
				textBoxReplayFolder->Text = folderBrowserDialog1->SelectedPath;
			}
		}

		System::Void buttonVSSound_Click(System::Object^  sender, System::EventArgs^  e) {
			openFileDialog1->Title  = gcnew String("对战时播放的音频文件");
			openFileDialog1->Filter = gcnew String("wav file (*.wav)|*.wav");

			if(openFileDialog1->ShowDialog() == ::DialogResult::OK){
				textBoxVSSound->Text = openFileDialog1->FileName;
			}
		}

		System::Void buttonNoticeSound_Click(System::Object^  sender, System::EventArgs^  e) {
			openFileDialog1->Title  = gcnew String("通知接收时播放的音频文件");
			openFileDialog1->Filter = gcnew String("wav file (*.wav)|*.wav");

			if(openFileDialog1->ShowDialog() == ::DialogResult::OK){
				textBoxNoticeSound->Text = openFileDialog1->FileName;
			}
		}

		System::Void buttonEnterSound_Click(System::Object^  sender, System::EventArgs^  e) {
			openFileDialog1->Title  = gcnew String("成员进入房间时播放的音频文件");
			openFileDialog1->Filter = gcnew String("wav file (*.wav)|*.wav");

			if(openFileDialog1->ShowDialog() == ::DialogResult::OK){
				textBoxEnterSound->Text = openFileDialog1->FileName;
			}
		}

		System::Void buttonNameSound_Click(System::Object^  sender, System::EventArgs^  e) {
			openFileDialog1->Title  = gcnew String("昵称被叫时播放的音频文件");
			openFileDialog1->Filter = gcnew String("wav file (*.wav)|*.wav");

			if(openFileDialog1->ShowDialog() == ::DialogResult::OK){
				textBoxNameSound->Text = openFileDialog1->FileName;
			}
		}

		System::Void buttonTalkSound_Click(System::Object^  sender, System::EventArgs^  e) {
			openFileDialog1->Title  = gcnew String("发言时播放的音频文件");
			openFileDialog1->Filter = gcnew String("wav file (*.wav)|*.wav");

			if(openFileDialog1->ShowDialog() == ::DialogResult::OK){
				textBoxTalkSound->Text = openFileDialog1->FileName;
			}
		}

		System::Void buttonSeekSound_Click(System::Object^  sender, System::EventArgs^  e) {
			openFileDialog1->Title  = gcnew String("对战招募中播放的音频文件");
			openFileDialog1->Filter = gcnew String("wav file (*.wav)|*.wav");

			if(openFileDialog1->ShowDialog() == ::DialogResult::OK){
				textBoxSeekSound->Text = openFileDialog1->FileName;
			}
		}

		System::Void buttonKeywordSound_Click(System::Object^  sender, System::EventArgs^  e) {
			openFileDialog1->Title  = gcnew String("发现关键字播放的音频文件");
			openFileDialog1->Filter = gcnew String("wav file (*.wav)|*.wav");

			if(openFileDialog1->ShowDialog() == ::DialogResult::OK){
				textBoxKeywordSoundPath->Text = openFileDialog1->FileName;
			}
		}

		System::Void ApplyButtonEnable(System::Object^  sender, System::EventArgs^  e) {
			buttonApply->Enabled = true;
		}

		System::Void numericUpDownStage_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			buttonApply->Enabled = true;

			CheckStageValue();
		}

		System::Void buttonServerName_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonServerName->ForeColor = colorDialog1->Color;
			}
		}

		System::Void buttonHostName_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonHostName->ForeColor = colorDialog1->Color;
			}
		}

		System::Void buttonClientName_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonClientName->ForeColor = colorDialog1->Color;
			}
		}

		System::Void buttonRestState_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonRestState->BackColor = colorDialog1->Color;
			}
		}

		System::Void buttonVSState_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonVSState->BackColor = colorDialog1->Color;
			}
		}

		System::Void buttonWatchState_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonWatchState->BackColor = colorDialog1->Color;
			}
		}

		System::Void buttonSeekState_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonSeekState->BackColor = colorDialog1->Color;
			}
		}

		System::Void buttonSystemMessage_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonSystemMessage->ForeColor = colorDialog1->Color;
			}
		}

		System::Void buttonErrorMessage_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonErrorMessage->ForeColor = colorDialog1->Color;
			}
		}

		System::Void buttonDebugMessage_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonDebugMessage->ForeColor = colorDialog1->Color;
			}
		}

		System::Void buttonNoticeBack_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonNoticeBack->BackColor = colorDialog1->Color;
			}
		}

		System::Void buttonCommentBack_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonCommentBack->BackColor = colorDialog1->Color;
			}
		}

		System::Void buttonSecret_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonSecret->ForeColor = colorDialog1->Color;
			}
		}

		System::Void trackBarBGM_Scroll(System::Object^  sender, System::EventArgs^  e) {
			buttonApply->Enabled = true;

			labelBGM->Text = String::Format("{0,3}%", trackBarBGM->Value * 5);
		}

		System::Void trackBarSE_Scroll(System::Object^  sender, System::EventArgs^  e) {
			buttonApply->Enabled = true;

			labelSE->Text = String::Format("{0,3}%", trackBarSE->Value * 5);
		}

		System::Void trackBarMidi_Scroll(System::Object^  sender, System::EventArgs^  e) {
			labelMidi->Text = String::Format("{0,3}%", trackBarMidi->Value);

			MIXERCONTROLDETAILS mcd;
			MIXERCONTROLDETAILS_UNSIGNED vol;

			vol.dwValue = trackBarMidi->Value*(MixerVolumeMax - MixerVolumeMin)/100 + MixerVolumeMin;

			mcd.cbStruct       = sizeof(MIXERCONTROLDETAILS);
			mcd.dwControlID    = MixerControlID;
			mcd.cChannels      = 1;
			mcd.cMultipleItems = 0;
			mcd.cbDetails      = sizeof(MIXERCONTROLDETAILS_UNSIGNED);
			mcd.paDetails      = &vol;

			if(mixerSetControlDetails((HMIXEROBJ)hMixer, &mcd, MIXER_OBJECTF_HMIXER | MIXER_SETCONTROLDETAILSF_VALUE) != MMSYSERR_NOERROR){
				if(hMixer != NULL){
					mixerClose(hMixer);
					hMixer = NULL;
				}

				labelMidi->Text = gcnew String("xxx");
				groupBoxMidi->Enabled = false;
			}
		}

		System::Void textBoxGameExe_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			e->Effect = DragDropEffects::None;

			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				array<String^>^ file = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false));
				String^ extension = Path::GetExtension(file[0])->ToLower();
				FileVersionInfo^ info = FileVersionInfo::GetVersionInfo(file[0]);

				if(extension == ".exe" && (info->FileDescription == "２Ｄ格闘ツクール2nd." || info->FileDescription == "２Ｄ格闘ツクール９５")){
					e->Effect = DragDropEffects::All;
				}
			}
		}

		System::Void textBoxGameExe_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxGameExe->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}

		System::Void textBoxReplayFolder_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			e->Effect = DragDropEffects::None;

			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				array<String^>^ file = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false));
				String^ extension = Path::GetExtension(file[0]);

				if(extension == String::Empty){
					e->Effect = DragDropEffects::All;
				}
			}
		}

		System::Void textBoxReplayFolder_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxReplayFolder->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}

		System::Void textBoxSound_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			e->Effect = DragDropEffects::None;

			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				array<String^>^ file = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false));
				String^ extension = Path::GetExtension(file[0])->ToLower();

				if(extension == ".wav"){
					e->Effect = DragDropEffects::All;
				}
			}
		}

		System::Void textBoxVSSound_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxVSSound->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}

		System::Void textBoxNoticeSound_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxNoticeSound->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}

		System::Void textBoxEnterSound_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxEnterSound->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}

		System::Void textBoxNameSound_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxNameSound->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}

		System::Void textBoxTalkSound_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxTalkSound->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}

		System::Void textBoxSeekSound_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxSeekSound->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}

		System::Void textBoxKeywordSound_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxKeywordSoundPath->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}

		// 播放按钮
		System::Void buttonVSSoundPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			try{
				Media::SoundPlayer^ wav = gcnew Media::SoundPlayer(gcnew String(MTOPTION.VS_SOUND));
				wav->Play();
			}
			catch(Exception^){
			}
		}
		System::Void buttonEnterSoundPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			try{
				Media::SoundPlayer^ wav = gcnew Media::SoundPlayer(gcnew String(MTOPTION.ENTER_SOUND));
				wav->Play();
			}
			catch(Exception^){
			}
		}
		System::Void buttonNoticeSoundPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			try{
				Media::SoundPlayer^ wav = gcnew Media::SoundPlayer(gcnew String(MTOPTION.NOTICE_SOUND));
				wav->Play();
			}
			catch(Exception^){
			}
		}
		System::Void buttonNameSoundPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			try{
				Media::SoundPlayer^ wav = gcnew Media::SoundPlayer(gcnew String(MTOPTION.NAME_SOUND));
				wav->Play();
			}
			catch(Exception^){
			}
		}
		System::Void buttonTalkSoundPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			try{
				Media::SoundPlayer^ wav = gcnew Media::SoundPlayer(gcnew String(MTOPTION.TALK_SOUND));
				wav->Play();
			}
			catch(Exception^){
			}
		}
		System::Void buttonSeekSoundPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			try{
				Media::SoundPlayer^ wav = gcnew Media::SoundPlayer(gcnew String(MTOPTION.SEEK_SOUND));
				wav->Play();
			}
			catch(Exception^){
			}
		}
		System::Void buttonKeywordSoundPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			try{
				Media::SoundPlayer^ wav = gcnew Media::SoundPlayer(gcnew String(MTOPTION.KEYWORD_SOUND));
				wav->Play();
			}
			catch(Exception^){
			}
		}

		// IP输入检查
		System::Void IPtextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			if(Net::IPAddress::TryParse(IPtextBox->Text, gcnew Net::IPAddress(0)) == false){
				Convertbutton->Enabled = false;
				AddPortbutton->Enabled = false;
			}
			else{
				Convertbutton->Enabled = true;
				AddPortbutton->Enabled = true;
			}
		}
		// IP转换
		System::Void Convertbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			Base64textBox->Text = EncryptionIP(IPtextBox->Text);
			textBoxMTAddr->Text = MTEncryptionIP(IPtextBox->Text);
		}
		// 带端口的IP转换
		System::Void AddPortbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			Base64textBox->Text = String::Format("{0}:{1}", EncryptionIP(IPtextBox->Text), MTOPTION.OPEN_PORT);
			textBoxMTAddr->Text = String::Format("{0}:{1}", MTEncryptionIP(IPtextBox->Text), MTOPTION.OPEN_PORT);
		}
		// 更改配置文件组合框
		System::Void comboBoxProfile_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ buf = ((ComboBox^)sender)->Text;
			String^ bufProfile = gcnew String(MTOPTION.PROFILE);

			if(buf != bufProfile){
				// 切换
				IntPtr mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(buf);
				_tcscpy_s(MTOPTION.PROFILE, static_cast<PTCHAR>(mp.ToPointer()));
				Runtime::InteropServices::Marshal::FreeHGlobal(mp);

				LoadMTOption();

				// 更新个人资料部分的设置值
				textBoxGameExe->Text                = gcnew String(MTOPTION.GAME_EXE);
				textBoxReplayFolder->Text           = gcnew String(MTOPTION.REPLAY_FOLDER);
				textBoxGameExe->SelectionStart      = textBoxGameExe->Text->Length;
				textBoxReplayFolder->SelectionStart = textBoxReplayFolder->Text->Length;
				numericUpDownMaxStage->Value        = MTOPTION.MAX_STAGE;
				numericUpDownStageSelect->Value     = MTOPTION.STAGE_SELECT;
				numericUpDownRound->Value           = MTOPTION.ROUND;
				numericUpDownTimer->Value           = MTOPTION.TIMER;
				numericUpDownSimDelay->Value        = MTOPTION.SIMULATE_DELAY;
				checkBoxHitJudge->Checked           = MTOPTION.HIT_JUDGE;
				checkBoxName->Checked               = MTOPTION.DISPLAY_NAME;
				checkBoxVersus->Checked             = MTOPTION.DISPLAY_VERSUS;
				checkBoxFramerate->Checked          = MTOPTION.DISPLAY_FRAMERATE;
				checkBoxRand->Checked               = MTOPTION.DISPLAY_RAND;
				checkBoxDivide->Checked             = MTOPTION.REPLAY_DIVIDE;
				checkBoxWindowSize->Checked         = MTOPTION.CHANGE_WINDOW_SIZE;
				checkBoxTeamRoundHP->Checked        = MTOPTION.TEAM_ROUND_HP;
				CheckStageValue();
				if(MTOPTION.REPLAY_VERSION == 2){
					radioButtonReplayVersion1->Checked = false;
					radioButtonReplayVersion2->Checked = true;
				}
				else{
					radioButtonReplayVersion1->Checked = true;
					radioButtonReplayVersion2->Checked = false;
				}
			}
			textBoxProfileName->Text = buf;
			buttonApply->Enabled = false;
		}
		System::Void buttonCopyProfile_Click(System::Object^ sender, System::EventArgs^ e) {
			// 复制资料
			String^ mes;
			String^ buf = comboBoxProfile->Items[comboBoxProfile->SelectedIndex]->ToString();
			String^ bufClone = String::Format("{0}{1}", buf, "_");
			if(buf->Length > MAX_ARRAY-1){
				mes = "配置文件名称太长。\n要进行复制，请缩短配置文件名称。";
			}
			for(int i=0; i < Profile::ProfileList->Count; i++){
				if(Profile::ProfileList[i] == bufClone){
					mes = "已经存在复制的配置文件。";
				}
			}
			if(Profile::ProfileList->Count > 31){
				mes = "无法创建更多配置文件。";
				return;
			}
			if(mes != nullptr){
				MessageBox::Show(mes, "配置文件复制", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}
			Profile::ProfileList->Add(bufClone);
			comboBoxProfile->Items->Add(bufClone);

			IntPtr mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(bufClone);
			_tcscpy_s(MTOPTION.PROFILE, static_cast<PTCHAR>(mp.ToPointer()));
			Runtime::InteropServices::Marshal::FreeHGlobal(mp);

			SaveOption(true);

			comboBoxProfile->SelectedIndex = comboBoxProfile->Items->Count-1;
			buttonApply->Enabled = false;

		}
		System::Void buttonDeleteProfile_Click(System::Object^ sender, System::EventArgs^ e) {
			// 删除个人资料
			int index = comboBoxProfile->SelectedIndex;
			String^ buf = comboBoxProfile->Items[index]->ToString();
			if(MessageBox::Show(String::Format("删除{0}。\n可以吗?", buf), "删除配置文件", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::DialogResult::Yes){
				Profile::ProfileList->RemoveAt(index);
				comboBoxProfile->Items->RemoveAt(index);

				DeleteProfile(buf);

				comboBoxProfile->SelectedIndex = 0;
			}else{
				return;
			}
		}
		System::Void buttonAddProfile_Click(System::Object^ sender, System::EventArgs^ e) {
			// 添加档案
			String^ bufText = textBoxProfileName->Text;
			if(CheckTextProfileName(bufText)){
				return;
			}
			if(Profile::ProfileList->Count > 31){
				MessageBox::Show("无法创建更多配置文件。", "添加配置文件", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}

			Profile::ProfileList->Add(bufText);
			comboBoxProfile->Items->Add(bufText);

			SaveOption(true);

			buttonApply->Enabled = false;
		}
		System::Void buttonSaveProfile_Click(System::Object^ sender, System::EventArgs^ e) {
			// 保存配置文件
			String^ bufText         = textBoxProfileName->Text;
			String^ bufSelectedItem = comboBoxProfile->SelectedItem->ToString();
			if(CheckTextProfileName(bufText)){
				return;
			}
			// 覆盖
			if(bufText != bufSelectedItem){
				for(int i=0; i < Profile::ProfileList->Count; i++){
					if(Profile::ProfileList[i] == gcnew String(MTOPTION.PROFILE)){
						Profile::ProfileList[i] = bufText;
					}
				}
				OverWriteProfile(bufText);

				comboBoxProfile->Items[comboBoxProfile->SelectedIndex] = bufText;
			}
		}
		System::Void radioButtonLogRTF_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			// 日志保存格式 > rtf
			buttonApply->Enabled = true;
		}
		System::Void radioButtonLogTXT_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			// 日志保存格式 > txt
			buttonApply->Enabled = true;
		}
	};
}
