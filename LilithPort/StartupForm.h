#pragma once

#include "stdafx.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace LilithPort {

	/// <summary>
	///StartupForm概述
	///
	///警告:如果更改此类的名称，则与此类依赖的所有. resx文件相关联。
	///对托管资源编译器工具使用'资源文件名'属性
	///需要进行更改。如果不进行此更改，
	///设计器和与此表单相关联的本地化资源，
	///将无法正确相互利用。
	/// </summary>
	public ref class StartupForm : public System::Windows::Forms::Form
	{
	public:
		StartupForm(void)
		{
			InitializeComponent();
			//
			//TODO:在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		///清理所有正在使用的资源。
		/// </summary>
		~StartupForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  radioButtonServer;
	private: System::Windows::Forms::RadioButton^  radioButtonHost;
	private: System::Windows::Forms::RadioButton^  radioButtonClient;
	private: System::Windows::Forms::Label^  labelServerName;
	private: System::Windows::Forms::TextBox^  textBoxIP;
	private: System::Windows::Forms::Label^  labelOpenPort;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownOpenPort;
	private: System::Windows::Forms::Button^  buttonOK;
	private: System::Windows::Forms::Button^  buttonCancel;
	private: System::Windows::Forms::Label^  labelName;
	private: System::Windows::Forms::TextBox^  textBoxName;



	private: System::Windows::Forms::Label^  labelComment;
	private: System::Windows::Forms::TextBox^  textBoxComment;
	private: System::Windows::Forms::GroupBox^  groupBoxStartMode;
	private: System::Windows::Forms::TextBox^  textBoxServerName;
	private: System::Windows::Forms::GroupBox^  groupBoxConnection;


	private: System::Windows::Forms::GroupBox^  groupBoxProfile;
	private: System::Windows::Forms::GroupBox^  groupBoxWelcome;
	private: System::Windows::Forms::RichTextBox^  textBoxWelcome;
	private: System::Windows::Forms::ToolTip^  toolTipStartupForm;
	private: System::Windows::Forms::Button^  buttonConnect;
	private: System::Windows::Forms::Button^  buttonOpenPortUPnP;
	private: System::Windows::Forms::Button^  buttonClosePortUPnP;
	private: System::Windows::Forms::Label^  labelButtonUPnP;







	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		///必要的设计变量。
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		///这是设计器支持所需的方法。此方法的内容是
		///请不要在代码编辑器中进行更改。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StartupForm::typeid));
			this->radioButtonServer = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonHost = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonClient = (gcnew System::Windows::Forms::RadioButton());
			this->labelServerName = (gcnew System::Windows::Forms::Label());
			this->textBoxIP = (gcnew System::Windows::Forms::TextBox());
			this->labelOpenPort = (gcnew System::Windows::Forms::Label());
			this->numericUpDownOpenPort = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->textBoxComment = (gcnew System::Windows::Forms::TextBox());
			this->labelComment = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->groupBoxStartMode = (gcnew System::Windows::Forms::GroupBox());
			this->labelButtonUPnP = (gcnew System::Windows::Forms::Label());
			this->buttonClosePortUPnP = (gcnew System::Windows::Forms::Button());
			this->buttonOpenPortUPnP = (gcnew System::Windows::Forms::Button());
			this->textBoxServerName = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxConnection = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxProfile = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxWelcome = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxWelcome = (gcnew System::Windows::Forms::RichTextBox());
			this->toolTipStartupForm = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->buttonConnect = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownOpenPort))->BeginInit();
			this->groupBoxStartMode->SuspendLayout();
			this->groupBoxConnection->SuspendLayout();
			this->groupBoxProfile->SuspendLayout();
			this->groupBoxWelcome->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButtonServer
			// 
			this->radioButtonServer->AccessibleDescription = nullptr;
			this->radioButtonServer->AccessibleName = nullptr;
			resources->ApplyResources(this->radioButtonServer, L"radioButtonServer");
			this->radioButtonServer->BackgroundImage = nullptr;
			this->radioButtonServer->Font = nullptr;
			this->radioButtonServer->Name = L"radioButtonServer";
			this->toolTipStartupForm->SetToolTip(this->radioButtonServer, resources->GetString(L"radioButtonServer.ToolTip"));
			this->radioButtonServer->UseVisualStyleBackColor = true;
			this->radioButtonServer->CheckedChanged += gcnew System::EventHandler(this, &StartupForm::radioButtonServer_CheckedChanged);
			// 
			// radioButtonHost
			// 
			this->radioButtonHost->AccessibleDescription = nullptr;
			this->radioButtonHost->AccessibleName = nullptr;
			resources->ApplyResources(this->radioButtonHost, L"radioButtonHost");
			this->radioButtonHost->BackgroundImage = nullptr;
			this->radioButtonHost->Font = nullptr;
			this->radioButtonHost->Name = L"radioButtonHost";
			this->toolTipStartupForm->SetToolTip(this->radioButtonHost, resources->GetString(L"radioButtonHost.ToolTip"));
			this->radioButtonHost->UseVisualStyleBackColor = true;
			this->radioButtonHost->CheckedChanged += gcnew System::EventHandler(this, &StartupForm::radioButtonHost_CheckedChanged);
			// 
			// radioButtonClient
			// 
			this->radioButtonClient->AccessibleDescription = nullptr;
			this->radioButtonClient->AccessibleName = nullptr;
			resources->ApplyResources(this->radioButtonClient, L"radioButtonClient");
			this->radioButtonClient->BackgroundImage = nullptr;
			this->radioButtonClient->Font = nullptr;
			this->radioButtonClient->Name = L"radioButtonClient";
			this->toolTipStartupForm->SetToolTip(this->radioButtonClient, resources->GetString(L"radioButtonClient.ToolTip"));
			this->radioButtonClient->UseVisualStyleBackColor = true;
			this->radioButtonClient->CheckedChanged += gcnew System::EventHandler(this, &StartupForm::radioButtonClient_CheckedChanged);
			// 
			// labelServerName
			// 
			this->labelServerName->AccessibleDescription = nullptr;
			this->labelServerName->AccessibleName = nullptr;
			resources->ApplyResources(this->labelServerName, L"labelServerName");
			this->labelServerName->Font = nullptr;
			this->labelServerName->Name = L"labelServerName";
			this->toolTipStartupForm->SetToolTip(this->labelServerName, resources->GetString(L"labelServerName.ToolTip"));
			this->labelServerName->MouseLeave += gcnew System::EventHandler(this, &StartupForm::label_MouseLeave);
			this->labelServerName->MouseEnter += gcnew System::EventHandler(this, &StartupForm::label_MouseEnter);
			// 
			// textBoxIP
			// 
			this->textBoxIP->AccessibleDescription = nullptr;
			this->textBoxIP->AccessibleName = nullptr;
			resources->ApplyResources(this->textBoxIP, L"textBoxIP");
			this->textBoxIP->BackgroundImage = nullptr;
			this->textBoxIP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxIP->Font = nullptr;
			this->textBoxIP->Name = L"textBoxIP";
			this->toolTipStartupForm->SetToolTip(this->textBoxIP, resources->GetString(L"textBoxIP.ToolTip"));
			// 
			// labelOpenPort
			// 
			this->labelOpenPort->AccessibleDescription = nullptr;
			this->labelOpenPort->AccessibleName = nullptr;
			resources->ApplyResources(this->labelOpenPort, L"labelOpenPort");
			this->labelOpenPort->Font = nullptr;
			this->labelOpenPort->Name = L"labelOpenPort";
			this->toolTipStartupForm->SetToolTip(this->labelOpenPort, resources->GetString(L"labelOpenPort.ToolTip"));
			this->labelOpenPort->MouseLeave += gcnew System::EventHandler(this, &StartupForm::label_MouseLeave);
			this->labelOpenPort->MouseEnter += gcnew System::EventHandler(this, &StartupForm::label_MouseEnter);
			// 
			// numericUpDownOpenPort
			// 
			this->numericUpDownOpenPort->AccessibleDescription = nullptr;
			this->numericUpDownOpenPort->AccessibleName = nullptr;
			resources->ApplyResources(this->numericUpDownOpenPort, L"numericUpDownOpenPort");
			this->numericUpDownOpenPort->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDownOpenPort->Font = nullptr;
			this->numericUpDownOpenPort->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numericUpDownOpenPort->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1024, 0, 0, 0});
			this->numericUpDownOpenPort->Name = L"numericUpDownOpenPort";
			this->numericUpDownOpenPort->Tag = L"";
			this->toolTipStartupForm->SetToolTip(this->numericUpDownOpenPort, resources->GetString(L"numericUpDownOpenPort.ToolTip"));
			this->numericUpDownOpenPort->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {7500, 0, 0, 0});
			// 
			// buttonOK
			// 
			this->buttonOK->AccessibleDescription = nullptr;
			this->buttonOK->AccessibleName = nullptr;
			resources->ApplyResources(this->buttonOK, L"buttonOK");
			this->buttonOK->BackgroundImage = nullptr;
			this->buttonOK->Font = nullptr;
			this->buttonOK->Name = L"buttonOK";
			this->toolTipStartupForm->SetToolTip(this->buttonOK, resources->GetString(L"buttonOK.ToolTip"));
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &StartupForm::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->AccessibleDescription = nullptr;
			this->buttonCancel->AccessibleName = nullptr;
			resources->ApplyResources(this->buttonCancel, L"buttonCancel");
			this->buttonCancel->BackgroundImage = nullptr;
			this->buttonCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonCancel->Font = nullptr;
			this->buttonCancel->Name = L"buttonCancel";
			this->toolTipStartupForm->SetToolTip(this->buttonCancel, resources->GetString(L"buttonCancel.ToolTip"));
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &StartupForm::buttonCancel_Click);
			// 
			// textBoxComment
			// 
			this->textBoxComment->AccessibleDescription = nullptr;
			this->textBoxComment->AccessibleName = nullptr;
			resources->ApplyResources(this->textBoxComment, L"textBoxComment");
			this->textBoxComment->BackgroundImage = nullptr;
			this->textBoxComment->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxComment->Font = nullptr;
			this->textBoxComment->Name = L"textBoxComment";
			this->toolTipStartupForm->SetToolTip(this->textBoxComment, resources->GetString(L"textBoxComment.ToolTip"));
			// 
			// labelComment
			// 
			this->labelComment->AccessibleDescription = nullptr;
			this->labelComment->AccessibleName = nullptr;
			resources->ApplyResources(this->labelComment, L"labelComment");
			this->labelComment->Font = nullptr;
			this->labelComment->Name = L"labelComment";
			this->toolTipStartupForm->SetToolTip(this->labelComment, resources->GetString(L"labelComment.ToolTip"));
			this->labelComment->MouseLeave += gcnew System::EventHandler(this, &StartupForm::label_MouseLeave);
			this->labelComment->MouseEnter += gcnew System::EventHandler(this, &StartupForm::label_MouseEnter);
			// 
			// textBoxName
			// 
			this->textBoxName->AccessibleDescription = nullptr;
			this->textBoxName->AccessibleName = nullptr;
			resources->ApplyResources(this->textBoxName, L"textBoxName");
			this->textBoxName->BackgroundImage = nullptr;
			this->textBoxName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxName->Font = nullptr;
			this->textBoxName->Name = L"textBoxName";
			this->toolTipStartupForm->SetToolTip(this->textBoxName, resources->GetString(L"textBoxName.ToolTip"));
			// 
			// labelName
			// 
			this->labelName->AccessibleDescription = nullptr;
			this->labelName->AccessibleName = nullptr;
			resources->ApplyResources(this->labelName, L"labelName");
			this->labelName->Font = nullptr;
			this->labelName->Name = L"labelName";
			this->toolTipStartupForm->SetToolTip(this->labelName, resources->GetString(L"labelName.ToolTip"));
			this->labelName->MouseLeave += gcnew System::EventHandler(this, &StartupForm::label_MouseLeave);
			this->labelName->MouseEnter += gcnew System::EventHandler(this, &StartupForm::label_MouseEnter);
			// 
			// groupBoxStartMode
			// 
			this->groupBoxStartMode->AccessibleDescription = nullptr;
			this->groupBoxStartMode->AccessibleName = nullptr;
			resources->ApplyResources(this->groupBoxStartMode, L"groupBoxStartMode");
			this->groupBoxStartMode->BackgroundImage = nullptr;
			this->groupBoxStartMode->Controls->Add(this->labelButtonUPnP);
			this->groupBoxStartMode->Controls->Add(this->buttonClosePortUPnP);
			this->groupBoxStartMode->Controls->Add(this->buttonOpenPortUPnP);
			this->groupBoxStartMode->Controls->Add(this->textBoxServerName);
			this->groupBoxStartMode->Controls->Add(this->radioButtonServer);
			this->groupBoxStartMode->Controls->Add(this->labelOpenPort);
			this->groupBoxStartMode->Controls->Add(this->labelServerName);
			this->groupBoxStartMode->Controls->Add(this->numericUpDownOpenPort);
			this->groupBoxStartMode->Controls->Add(this->radioButtonHost);
			this->groupBoxStartMode->Controls->Add(this->radioButtonClient);
			this->groupBoxStartMode->Font = nullptr;
			this->groupBoxStartMode->Name = L"groupBoxStartMode";
			this->groupBoxStartMode->TabStop = false;
			this->toolTipStartupForm->SetToolTip(this->groupBoxStartMode, resources->GetString(L"groupBoxStartMode.ToolTip"));
			// 
			// labelButtonUPnP
			// 
			this->labelButtonUPnP->AccessibleDescription = nullptr;
			this->labelButtonUPnP->AccessibleName = nullptr;
			resources->ApplyResources(this->labelButtonUPnP, L"labelButtonUPnP");
			this->labelButtonUPnP->Font = nullptr;
			this->labelButtonUPnP->Name = L"labelButtonUPnP";
			this->toolTipStartupForm->SetToolTip(this->labelButtonUPnP, resources->GetString(L"labelButtonUPnP.ToolTip"));
			this->labelButtonUPnP->MouseLeave += gcnew System::EventHandler(this, &StartupForm::label_MouseLeave);
			this->labelButtonUPnP->MouseEnter += gcnew System::EventHandler(this, &StartupForm::label_MouseEnter);
			// 
			// buttonClosePortUPnP
			// 
			this->buttonClosePortUPnP->AccessibleDescription = nullptr;
			this->buttonClosePortUPnP->AccessibleName = nullptr;
			resources->ApplyResources(this->buttonClosePortUPnP, L"buttonClosePortUPnP");
			this->buttonClosePortUPnP->BackgroundImage = nullptr;
			this->buttonClosePortUPnP->Font = nullptr;
			this->buttonClosePortUPnP->Name = L"buttonClosePortUPnP";
			this->toolTipStartupForm->SetToolTip(this->buttonClosePortUPnP, resources->GetString(L"buttonClosePortUPnP.ToolTip"));
			this->buttonClosePortUPnP->UseVisualStyleBackColor = true;
			this->buttonClosePortUPnP->Click += gcnew System::EventHandler(this, &StartupForm::buttonClosePortUPnP_Click);
			// 
			// buttonOpenPortUPnP
			// 
			this->buttonOpenPortUPnP->AccessibleDescription = nullptr;
			this->buttonOpenPortUPnP->AccessibleName = nullptr;
			resources->ApplyResources(this->buttonOpenPortUPnP, L"buttonOpenPortUPnP");
			this->buttonOpenPortUPnP->BackgroundImage = nullptr;
			this->buttonOpenPortUPnP->Font = nullptr;
			this->buttonOpenPortUPnP->Name = L"buttonOpenPortUPnP";
			this->toolTipStartupForm->SetToolTip(this->buttonOpenPortUPnP, resources->GetString(L"buttonOpenPortUPnP.ToolTip"));
			this->buttonOpenPortUPnP->UseVisualStyleBackColor = true;
			this->buttonOpenPortUPnP->Click += gcnew System::EventHandler(this, &StartupForm::buttonOpenPortUPnP_Click);
			// 
			// textBoxServerName
			// 
			this->textBoxServerName->AccessibleDescription = nullptr;
			this->textBoxServerName->AccessibleName = nullptr;
			resources->ApplyResources(this->textBoxServerName, L"textBoxServerName");
			this->textBoxServerName->BackgroundImage = nullptr;
			this->textBoxServerName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxServerName->Font = nullptr;
			this->textBoxServerName->Name = L"textBoxServerName";
			this->toolTipStartupForm->SetToolTip(this->textBoxServerName, resources->GetString(L"textBoxServerName.ToolTip"));
			// 
			// groupBoxConnection
			// 
			this->groupBoxConnection->AccessibleDescription = nullptr;
			this->groupBoxConnection->AccessibleName = nullptr;
			resources->ApplyResources(this->groupBoxConnection, L"groupBoxConnection");
			this->groupBoxConnection->BackgroundImage = nullptr;
			this->groupBoxConnection->Controls->Add(this->textBoxIP);
			this->groupBoxConnection->Font = nullptr;
			this->groupBoxConnection->Name = L"groupBoxConnection";
			this->groupBoxConnection->TabStop = false;
			this->toolTipStartupForm->SetToolTip(this->groupBoxConnection, resources->GetString(L"groupBoxConnection.ToolTip"));
			// 
			// groupBoxProfile
			// 
			this->groupBoxProfile->AccessibleDescription = nullptr;
			this->groupBoxProfile->AccessibleName = nullptr;
			resources->ApplyResources(this->groupBoxProfile, L"groupBoxProfile");
			this->groupBoxProfile->BackgroundImage = nullptr;
			this->groupBoxProfile->Controls->Add(this->labelComment);
			this->groupBoxProfile->Controls->Add(this->textBoxComment);
			this->groupBoxProfile->Controls->Add(this->textBoxName);
			this->groupBoxProfile->Controls->Add(this->labelName);
			this->groupBoxProfile->Font = nullptr;
			this->groupBoxProfile->Name = L"groupBoxProfile";
			this->groupBoxProfile->TabStop = false;
			this->toolTipStartupForm->SetToolTip(this->groupBoxProfile, resources->GetString(L"groupBoxProfile.ToolTip"));
			// 
			// groupBoxWelcome
			// 
			this->groupBoxWelcome->AccessibleDescription = nullptr;
			this->groupBoxWelcome->AccessibleName = nullptr;
			resources->ApplyResources(this->groupBoxWelcome, L"groupBoxWelcome");
			this->groupBoxWelcome->BackgroundImage = nullptr;
			this->groupBoxWelcome->Controls->Add(this->textBoxWelcome);
			this->groupBoxWelcome->Font = nullptr;
			this->groupBoxWelcome->Name = L"groupBoxWelcome";
			this->groupBoxWelcome->TabStop = false;
			this->toolTipStartupForm->SetToolTip(this->groupBoxWelcome, resources->GetString(L"groupBoxWelcome.ToolTip"));
			// 
			// textBoxWelcome
			// 
			this->textBoxWelcome->AccessibleDescription = nullptr;
			this->textBoxWelcome->AccessibleName = nullptr;
			resources->ApplyResources(this->textBoxWelcome, L"textBoxWelcome");
			this->textBoxWelcome->BackgroundImage = nullptr;
			this->textBoxWelcome->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxWelcome->Font = nullptr;
			this->textBoxWelcome->Name = L"textBoxWelcome";
			this->toolTipStartupForm->SetToolTip(this->textBoxWelcome, resources->GetString(L"textBoxWelcome.ToolTip"));
			// 
			// toolTipStartupForm
			// 
			this->toolTipStartupForm->AutomaticDelay = 0;
			this->toolTipStartupForm->AutoPopDelay = 30000;
			this->toolTipStartupForm->InitialDelay = 0;
			this->toolTipStartupForm->ReshowDelay = 0;
			this->toolTipStartupForm->UseAnimation = false;
			this->toolTipStartupForm->UseFading = false;
			// 
			// buttonConnect
			// 
			this->buttonConnect->AccessibleDescription = nullptr;
			this->buttonConnect->AccessibleName = nullptr;
			resources->ApplyResources(this->buttonConnect, L"buttonConnect");
			this->buttonConnect->BackgroundImage = nullptr;
			this->buttonConnect->Font = nullptr;
			this->buttonConnect->Name = L"buttonConnect";
			this->toolTipStartupForm->SetToolTip(this->buttonConnect, resources->GetString(L"buttonConnect.ToolTip"));
			this->buttonConnect->UseVisualStyleBackColor = true;
			this->buttonConnect->Click += gcnew System::EventHandler(this, &StartupForm::buttonOK_Click);
			// 
			// StartupForm
			// 
			this->AccessibleDescription = nullptr;
			this->AccessibleName = nullptr;
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = nullptr;
			this->CancelButton = this->buttonCancel;
			this->Controls->Add(this->buttonConnect);
			this->Controls->Add(this->groupBoxWelcome);
			this->Controls->Add(this->groupBoxProfile);
			this->Controls->Add(this->groupBoxConnection);
			this->Controls->Add(this->groupBoxStartMode);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->buttonCancel);
			this->Font = nullptr;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"StartupForm";
			this->Opacity = 0.85;
			this->ShowInTaskbar = false;
			this->toolTipStartupForm->SetToolTip(this, resources->GetString(L"$this.ToolTip"));
			this->Load += gcnew System::EventHandler(this, &StartupForm::StartupForm_Load);
			this->Shown += gcnew System::EventHandler(this, &StartupForm::StartupForm_Shown);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &StartupForm::StartupForm_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownOpenPort))->EndInit();
			this->groupBoxStartMode->ResumeLayout(false);
			this->groupBoxStartMode->PerformLayout();
			this->groupBoxConnection->ResumeLayout(false);
			this->groupBoxConnection->PerformLayout();
			this->groupBoxProfile->ResumeLayout(false);
			this->groupBoxProfile->PerformLayout();
			this->groupBoxWelcome->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	protected:

		// StartupForm.cpp
		bool StartupForm::CheckValidate();

	private:

		// 用于从控制窗口识别关闭
		static bool ConnectionStart = false;

		System::Void StartupForm_Load(System::Object^  sender, System::EventArgs^  e) {
			ConnectionStart = false;

			textBoxServerName->MaxLength      = MAX_NAME;
			textBoxIP->MaxLength              = MAX_ARRAY;
			textBoxName->MaxLength            = MAX_NAME;
			textBoxComment->MaxLength         = MAX_NAME;

			switch(MTOPTION.CONNECTION_TYPE){
			case CT_SERVER:
			default:
				radioButtonServer->Checked = true;

				break;
			case CT_HOST:
				radioButtonHost->Checked = true;

				break;
			case CT_CLIENT:
				radioButtonClient->Checked = true;

				numericUpDownOpenPort->Enabled = false;
				break;
			}

			textBoxServerName->Text = gcnew String(MTOPTION.SERVER_NAME);
			textBoxIP->Text = gcnew String(MTOPTION.CONNECTION_IP);
			
			numericUpDownOpenPort->Value = MTOPTION.OPEN_PORT;
			textBoxName->Text = gcnew String(MTOPTION.NAME);

			textBoxComment->Text = gcnew String(MTOPTION.COMMENT);
			// 将制表符改为换行
			ReplaceWelcomeTab(true);
			textBoxWelcome->Text = gcnew String(MTOPTION.WELCOME);

		}
		System::Void StartupForm_Shown(System::Object^  sender, System::EventArgs^  e) {
			if(radioButtonServer->Checked){
				buttonOK->Focus();
			}else{
				buttonConnect->Focus();
			}
		}
		System::Void buttonOK_Click(System::Object^  sender, System::EventArgs^  e) {
			// 启动·连接按钮
			if(!CheckValidate()){
				return;
			}
			ConnectionStart = true;

			this->Close();
		}
		System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e) {
			// 关闭按钮
			MTOPTION.CONNECTION_TYPE = CT_FREE;
			ConnectionStart = false;

			this->Close();
		}
		System::Void StartupForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			if(!ConnectionStart){
				MTOPTION.CONNECTION_TYPE = CT_FREE;
			}
		}
		System::Void radioButtonServer_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			numericUpDownOpenPort->Enabled = true;
			labelOpenPort->Enabled         = true;
			labelServerName->Enabled       = true;
			textBoxServerName->Enabled     = true;
			textBoxIP->Enabled             = false;
			groupBoxConnection->Enabled    = false;
			groupBoxWelcome->Enabled       = true;

			labelButtonUPnP->Enabled       = true;
			buttonOpenPortUPnP->Enabled    = true;
			buttonClosePortUPnP->Enabled   = true;

			buttonOK->Enabled = true;
			buttonConnect->Enabled = false;
		}

		System::Void radioButtonHost_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			numericUpDownOpenPort->Enabled = true;
			labelOpenPort->Enabled         = true;
			labelServerName->Enabled       = false;
			textBoxServerName->Enabled     = false;
			textBoxIP->Enabled             = true;
			groupBoxConnection->Enabled    = true;
			groupBoxWelcome->Enabled       = false;

			labelButtonUPnP->Enabled       = true;
			buttonOpenPortUPnP->Enabled    = true;
			buttonClosePortUPnP->Enabled   = true;

			buttonOK->Enabled = false;
			buttonConnect->Enabled = true;
		}
		System::Void radioButtonClient_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			numericUpDownOpenPort->Enabled = false;
			labelOpenPort->Enabled         = false;
			labelServerName->Enabled       = false;
			textBoxServerName->Enabled     = false;
			textBoxIP->Enabled             = true;
			groupBoxConnection->Enabled    = true;
			groupBoxWelcome->Enabled       = false;

			labelButtonUPnP->Enabled       = false;
			buttonOpenPortUPnP->Enabled    = false;
			buttonClosePortUPnP->Enabled   = false;

			buttonOK->Enabled = false;
			buttonConnect->Enabled = true;
		}
		System::Void label_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			// 鼠标悬停时标签显示下划线
			Label^ obj = (Label^)sender;
			obj->Font = gcnew System::Drawing::Font(this->Font, FontStyle::Underline);
		}
		System::Void label_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			Label^ obj = (Label^)sender;
			obj->Font = gcnew System::Drawing::Font(this->Font, FontStyle::Regular);
		}
		System::Void buttonOpenPortUPnP_Click(System::Object^  sender, System::EventArgs^  e) {
			// 端口开放按钮
			buttonOpenPortUPnP->Enabled = false;
			buttonClosePortUPnP->Enabled = false;

			MTOPTION.OPEN_PORT = (UINT)numericUpDownOpenPort->Value;
			UPnP_PortOpenClose(true, false);

			buttonOpenPortUPnP->Enabled = true;
			buttonClosePortUPnP->Enabled = true;
		}
		System::Void buttonClosePortUPnP_Click(System::Object^  sender, System::EventArgs^  e) {
			// 关闭端口按钮
			buttonOpenPortUPnP->Enabled = false;
			buttonClosePortUPnP->Enabled = false;

			MTOPTION.OPEN_PORT = (UINT)numericUpDownOpenPort->Value;
			UPnP_PortOpenClose(false, false);

			buttonOpenPortUPnP->Enabled = true;
			buttonClosePortUPnP->Enabled = true;
		}
	};
}
