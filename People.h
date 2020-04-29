#pragma once
#include "class_body.h"
#include "GLOB.h"
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for People
	/// </summary>
	public ref class People : public System::Windows::Forms::Form
	{
	public:
		People(void)
		{
			InitializeComponent();
			peopleList();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~People()
		{
			if (components)
			{
				delete components;
		}
	}
private: System::Windows::Forms::Panel^  panel1;
private: ns1::BunifuImageButton^  bunifuImageButton2;
private: ns1::BunifuImageButton^  bunifuImageButton1;
private: System::Windows::Forms::Panel^  Editpanel;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::TextBox^  textBox2;
private: ns1::BunifuThinButton2^  bunifuThinButton26;
private: System::Windows::Forms::TextBox^  textBox1;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel6;
private: ns1::BunifuThinButton2^  bunifuThinButton25;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel14;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel12;
private: ns1::BunifuThinButton2^  bunifuThinButton24;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel10;
private: ns1::BunifuThinButton2^  bunifuThinButton23;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel4;
private: ns1::BunifuThinButton2^  bunifuThinButton22;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel3;
private: ns1::BunifuThinButton2^  bunifuThinButton21;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel2;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel1;
private: ns1::BunifuThinButton2^  bunifuThinButton;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::DataGridView^  peopleGridView;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel7;
private: ns1::BunifuDragControl^  bunifuDragControl1;
private: ns1::BunifuImageButton^  bunifuImageButton3;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: ns1::BunifuThinButton2^  bunifuThinButton216;
private: System::Windows::Forms::TextBox^  textBox14;
private: ns1::BunifuThinButton2^  bunifuThinButton214;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel20;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel5;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::ComboBox^  comboBox3;
private: System::Windows::Forms::ComboBox^  comboBox2;
private: System::Windows::Forms::Panel^  panel5;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox9;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox7;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel26;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox6;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel22;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel23;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox8;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox5;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel21;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox4;
private: ns1::BunifuImageButton^  bunifuImageButton7;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel25;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel24;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel30;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel31;

private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox2;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox1;
private: ns1::BunifuCheckbox^  bunifuCheckbox1;
private: System::Windows::Forms::ComboBox^  comboBox6;
private: System::Windows::Forms::ComboBox^  comboBox7;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel27;
private: System::Windows::Forms::ComboBox^  comboBox5;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox10;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel28;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox3;
private: System::Windows::Forms::Panel^  panel9;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ConcID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  PersName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  PersSecName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  PersEmail;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  CardName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  CardSecondName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  CardExpiration;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  CardNumber;
private: System::Windows::Forms::DataGridViewButtonColumn^  Delete;
private: ns1::BunifuImageButton^  HelpIconButton;
private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(People::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->HelpIconButton = (gcnew ns1::BunifuImageButton());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->bunifuMetroTextbox11 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuCustomLabel7 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuImageButton2 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton1 = (gcnew ns1::BunifuImageButton());
			this->Editpanel = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuCustomLabel27 = (gcnew ns1::BunifuCustomLabel());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->bunifuThinButton214 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel20 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel5 = (gcnew ns1::BunifuCustomLabel());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuImageButton3 = (gcnew ns1::BunifuImageButton());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->bunifuThinButton26 = (gcnew ns1::BunifuThinButton2());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->bunifuCustomLabel6 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton25 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel14 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel12 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton24 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel10 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton23 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel4 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton22 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel3 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton21 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel2 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel1 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton = (gcnew ns1::BunifuThinButton2());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->peopleGridView = (gcnew System::Windows::Forms::DataGridView());
			this->ConcID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PersName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PersSecName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PersEmail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CardName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CardSecondName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CardExpiration = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CardNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Delete = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->bunifuDragControl1 = (gcnew ns1::BunifuDragControl(this->components));
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuThinButton216 = (gcnew ns1::BunifuThinButton2());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->bunifuMetroTextbox10 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuCustomLabel28 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuMetroTextbox3 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuMetroTextbox9 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuMetroTextbox7 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuCustomLabel26 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuMetroTextbox6 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuCustomLabel22 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel23 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuMetroTextbox8 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuMetroTextbox5 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuCustomLabel21 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuMetroTextbox4 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuImageButton7 = (gcnew ns1::BunifuImageButton());
			this->bunifuCustomLabel25 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel24 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel30 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel31 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuMetroTextbox2 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuMetroTextbox1 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuCheckbox1 = (gcnew ns1::BunifuCheckbox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HelpIconButton))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->Editpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->peopleGridView))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton7))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panel1->Controls->Add(this->HelpIconButton);
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->bunifuCustomLabel7);
			this->panel1->Controls->Add(this->bunifuImageButton2);
			this->panel1->Controls->Add(this->bunifuImageButton1);
			this->panel1->Location = System::Drawing::Point(238, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1000, 74);
			this->panel1->TabIndex = 44;
			// 
			// HelpIconButton
			// 
			this->HelpIconButton->BackColor = System::Drawing::Color::Transparent;
			this->HelpIconButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HelpIconButton.Image")));
			this->HelpIconButton->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HelpIconButton.ImageActive")));
			this->HelpIconButton->Location = System::Drawing::Point(7, 12);
			this->HelpIconButton->Name = L"HelpIconButton";
			this->HelpIconButton->Size = System::Drawing::Size(60, 50);
			this->HelpIconButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->HelpIconButton->TabIndex = 86;
			this->HelpIconButton->TabStop = false;
			this->HelpIconButton->Zoom = 10;
			this->HelpIconButton->Click += gcnew System::EventHandler(this, &People::HelpIconButton_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->panel9->Controls->Add(this->bunifuMetroTextbox11);
			this->panel9->Location = System::Drawing::Point(731, 36);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(210, 38);
			this->panel9->TabIndex = 83;
			// 
			// bunifuMetroTextbox11
			// 
			this->bunifuMetroTextbox11->BorderColorFocused = System::Drawing::Color::White;
			this->bunifuMetroTextbox11->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuMetroTextbox11->BorderColorMouseHover = System::Drawing::Color::White;
			this->bunifuMetroTextbox11->BorderThickness = 3;
			this->bunifuMetroTextbox11->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox11->Enabled = false;
			this->bunifuMetroTextbox11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox11->ForeColor = System::Drawing::Color::White;
			this->bunifuMetroTextbox11->isPassword = false;
			this->bunifuMetroTextbox11->Location = System::Drawing::Point(3, 3);
			this->bunifuMetroTextbox11->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox11->Name = L"bunifuMetroTextbox11";
			this->bunifuMetroTextbox11->Size = System::Drawing::Size(202, 32);
			this->bunifuMetroTextbox11->TabIndex = 85;
			this->bunifuMetroTextbox11->Text = L"Check if you want to delete";
			this->bunifuMetroTextbox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuCustomLabel7
			// 
			this->bunifuCustomLabel7->AutoSize = true;
			this->bunifuCustomLabel7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel7->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel7->Location = System::Drawing::Point(434, 21);
			this->bunifuCustomLabel7->Name = L"bunifuCustomLabel7";
			this->bunifuCustomLabel7->Size = System::Drawing::Size(105, 32);
			this->bunifuCustomLabel7->TabIndex = 63;
			this->bunifuCustomLabel7->Text = L"People";
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(941, 6);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(26, 25);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 32;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			this->bunifuImageButton2->Click += gcnew System::EventHandler(this, &People::bunifuImageButton2_Click);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(973, 9);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 31;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &People::bunifuImageButton1_Click);
			// 
			// Editpanel
			// 
			this->Editpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->Editpanel->Controls->Add(this->textBox6);
			this->Editpanel->Controls->Add(this->comboBox1);
			this->Editpanel->Controls->Add(this->comboBox6);
			this->Editpanel->Controls->Add(this->comboBox7);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel27);
			this->Editpanel->Controls->Add(this->comboBox5);
			this->Editpanel->Controls->Add(this->textBox14);
			this->Editpanel->Controls->Add(this->bunifuThinButton214);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel20);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel5);
			this->Editpanel->Controls->Add(this->textBox13);
			this->Editpanel->Controls->Add(this->comboBox3);
			this->Editpanel->Controls->Add(this->comboBox2);
			this->Editpanel->Controls->Add(this->bunifuImageButton3);
			this->Editpanel->Controls->Add(this->textBox5);
			this->Editpanel->Controls->Add(this->textBox4);
			this->Editpanel->Controls->Add(this->textBox3);
			this->Editpanel->Controls->Add(this->textBox2);
			this->Editpanel->Controls->Add(this->bunifuThinButton26);
			this->Editpanel->Controls->Add(this->textBox1);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel6);
			this->Editpanel->Controls->Add(this->bunifuThinButton25);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel14);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel12);
			this->Editpanel->Controls->Add(this->bunifuThinButton24);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel10);
			this->Editpanel->Controls->Add(this->bunifuThinButton23);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel4);
			this->Editpanel->Controls->Add(this->bunifuThinButton22);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel3);
			this->Editpanel->Controls->Add(this->bunifuThinButton21);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel2);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel1);
			this->Editpanel->Controls->Add(this->bunifuThinButton);
			this->Editpanel->Location = System::Drawing::Point(0, 0);
			this->Editpanel->Name = L"Editpanel";
			this->Editpanel->Size = System::Drawing::Size(238, 690);
			this->Editpanel->TabIndex = 45;
			this->Editpanel->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox6->Location = System::Drawing::Point(34, 459);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(175, 20);
			this->textBox6->TabIndex = 119;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::Black;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(196) {
				L"Afghanistan", L"Albania", L"Algeria", L"Andorra",
					L"Angola", L"Antigua and Barbuda", L"Argentina", L"Armenia", L"Australia", L"Austria", L"Azerbaijan", L"The Bahamas", L"Bahrain",
					L"Bangladesh", L"Barbados", L"Belarus", L"Belgium", L"Belize", L"Benin", L"Bhutan", L"Bolivia", L"Bosnia and Herzegovina", L"Botswana",
					L"Brazil", L"Brunei", L"Bulgaria", L"Burkina Faso", L"Burundi", L"Cabo Verde", L"Cambodia", L"Cameroon", L"Canada", L"Central African Republic",
					L"Chad", L"Chile", L"China", L"Colombia", L"Comoros", L"Congo, Democratic Republic of the", L"Congo, Republic of the", L"Costa Rica",
					L"Côte d’Ivoire", L"Croatia", L"Cuba", L"Cyprus", L"Czech Republic", L"Denmark", L"Djibouti", L"Dominica", L"Dominican Republic",
					L"East Timor (Timor-Leste)", L"Ecuador", L"Egypt", L"El Salvador", L"Equatorial Guinea", L"Eritrea", L"Estonia", L"Eswatini",
					L"Ethiopia", L"Fiji", L"Finland", L"France", L"Gabon", L"The Gambia", L"Georgia", L"Germany", L"Ghana", L"Greece", L"Grenada",
					L"Guatemala", L"Guinea", L"Guinea-Bissau", L"Guyana", L"Haiti", L"Honduras", L"Hungary", L"Iceland", L"India", L"Indonesia",
					L"Iran", L"Iraq", L"Ireland", L"Israel", L"Italy", L"Jamaica", L"Japan", L"Jordan", L"Kazakhstan", L"Kenya", L"Kiribati", L"Korea, North",
					L"Korea, South", L"Kosovo", L"Kuwait", L"Kyrgyzstan", L"Laos", L"Latvia", L"Lebanon", L"Lesotho", L"Liberia", L"Libya", L"Liechtenstein",
					L"Lithuania", L"Luxembourg", L"Madagascar", L"Malawi", L"Malaysia", L"Maldives", L"Mali", L"Malta", L"Marshall Islands", L"Mauritania",
					L"Mauritius", L"Mexico", L"Micronesia, Federated States of", L"Moldova", L"Monaco", L"Mongolia", L"Montenegro", L"Morocco", L"Mozambique",
					L"Myanmar (Burma)", L"Namibia", L"Nauru", L"Nepal", L"Netherlands", L"New Zealand", L"Nicaragua", L"Niger", L"Nigeria", L"North Macedonia",
					L"Norway", L"Oman", L"Pakistan", L"Palau", L"Panama", L"Papua New Guinea", L"Paraguay", L"Peru", L"Philippines", L"Poland", L"Portugal",
					L"Qatar", L"Romania", L"Russia", L"Rwanda", L"Saint Kitts and Nevis", L"Saint Lucia", L"Saint Vincent and the Grenadines", L"Samoa",
					L"San Marino", L"Sao Tome and Principe", L"Saudi Arabia", L"Senegal", L"Serbia", L"Seychelles", L"Sierra Leone", L"Singapore",
					L"Slovakia", L"Slovenia", L"Solomon Islands", L"Somalia", L"South Africa", L"Spain", L"Sri Lanka", L"Sudan", L"Sudan, South",
					L"Suriname", L"Sweden", L"Switzerland", L"Syria", L"Taiwan", L"Tajikistan", L"Tanzania", L"Thailand", L"Togo", L"Tonga", L"Trinidad and Tobago",
					L"Tunisia", L"Turkey", L"Turkmenistan", L"Tuvalu", L"Uganda", L"Ukraine", L"United Arab Emirates", L"United Kingdom", L"United States",
					L"Uruguay", L"Uzbekistan", L"Vanuatu", L"Vatican City", L"Venezuela", L"Vietnam", L"Yemen", L"Zambia", L"Zimbabwe"
			});
			this->comboBox1->Location = System::Drawing::Point(16, 605);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(200, 30);
			this->comboBox1->TabIndex = 118;
			// 
			// comboBox6
			// 
			this->comboBox6->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(12) {
				L"01", L"02", L"03", L"04",
					L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12"
			});
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox6->ForeColor = System::Drawing::Color::Black;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12"
			});
			this->comboBox6->Location = System::Drawing::Point(104, 322);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(65, 30);
			this->comboBox6->TabIndex = 117;
			// 
			// comboBox7
			// 
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox7->ForeColor = System::Drawing::Color::Black;
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBox7->Location = System::Drawing::Point(177, 322);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(46, 30);
			this->comboBox7->TabIndex = 116;
			// 
			// bunifuCustomLabel27
			// 
			this->bunifuCustomLabel27->AutoSize = true;
			this->bunifuCustomLabel27->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel27->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel27->Location = System::Drawing::Point(76, 297);
			this->bunifuCustomLabel27->Name = L"bunifuCustomLabel27";
			this->bunifuCustomLabel27->Size = System::Drawing::Size(94, 22);
			this->bunifuCustomLabel27->TabIndex = 115;
			this->bunifuCustomLabel27->Text = L"Birthdate";
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->ForeColor = System::Drawing::Color::Black;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(75) {
				L"1930", L"1931", L"1932", L"1933", L"1934", L"1935",
					L"1936", L"1937", L"1938", L"1939", L"1940", L"1941", L"1942", L"1943", L"1944", L"1945", L"1946", L"1947", L"1948", L"1949",
					L"1950", L"1951", L"1952", L"1953", L"1954", L"1955", L"1956", L"1957", L"1958", L"1959", L"1960", L"1961", L"1962", L"1963",
					L"1964", L"1965", L"1966", L"1967", L"1968", L"1969", L"1970", L"1971", L"1972", L"1973", L"1974", L"1975", L"1976", L"1977",
					L"1978", L"1979", L"1980", L"1981", L"1982", L"1983", L"1984", L"1985", L"1986", L"1987", L"1988", L"1989", L"1990", L"1991",
					L"1992", L"1993", L"1994", L"1995", L"1996", L"1997", L"1998", L"1999", L"2000", L"2001", L"2002", L"2003", L"2004"
			});
			this->comboBox5->Location = System::Drawing::Point(12, 322);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(82, 30);
			this->comboBox5->TabIndex = 114;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox14->Location = System::Drawing::Point(32, 577);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(175, 20);
			this->textBox14->TabIndex = 17;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// bunifuThinButton214
			// 
			this->bunifuThinButton214->ActiveBorderThickness = 2;
			this->bunifuThinButton214->ActiveCornerRadius = 30;
			this->bunifuThinButton214->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton214->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton214->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton214->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton214->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton214.BackgroundImage")));
			this->bunifuThinButton214->ButtonText = L"";
			this->bunifuThinButton214->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton214->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton214->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton214->IdleBorderThickness = 2;
			this->bunifuThinButton214->IdleCornerRadius = 30;
			this->bunifuThinButton214->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton214->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton214->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton214->Location = System::Drawing::Point(17, 565);
			this->bunifuThinButton214->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton214->Name = L"bunifuThinButton214";
			this->bunifuThinButton214->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton214->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton214->TabIndex = 70;
			this->bunifuThinButton214->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel20
			// 
			this->bunifuCustomLabel20->AutoSize = true;
			this->bunifuCustomLabel20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel20->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel20->Location = System::Drawing::Point(50, 545);
			this->bunifuCustomLabel20->Name = L"bunifuCustomLabel20";
			this->bunifuCustomLabel20->Size = System::Drawing::Size(136, 22);
			this->bunifuCustomLabel20->TabIndex = 69;
			this->bunifuCustomLabel20->Text = L"Card Number";
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->AutoSize = true;
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel5->Location = System::Drawing::Point(173, 486);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(49, 22);
			this->bunifuCustomLabel5->TabIndex = 68;
			this->bunifuCustomLabel5->Text = L"CSC";
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBox13->Location = System::Drawing::Point(162, 512);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(65, 31);
			this->textBox13->TabIndex = 3;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->ForeColor = System::Drawing::Color::Black;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"2019", L"2020", L"2021", L"2022", L"2023", L"2024",
					L"2025", L"2026", L"2027", L"2028", L"2029", L"2030", L"2031", L"2032", L"2033", L"2034", L"2035", L"2036", L"2037", L"2038",
					L"2039"
			});
			this->comboBox3->Location = System::Drawing::Point(9, 513);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(75, 30);
			this->comboBox3->TabIndex = 66;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12"
			});
			this->comboBox2->Location = System::Drawing::Point(99, 513);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(50, 30);
			this->comboBox2->TabIndex = 65;
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuImageButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.Image")));
			this->bunifuImageButton3->ImageActive = nullptr;
			this->bunifuImageButton3->Location = System::Drawing::Point(9, 3);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(226, 25);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 64;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 10;
			this->bunifuImageButton3->Click += gcnew System::EventHandler(this, &People::bunifuImageButton3_Click);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox5->Location = System::Drawing::Point(34, 389);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(175, 20);
			this->textBox5->TabIndex = 56;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox4->Location = System::Drawing::Point(34, 270);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(175, 20);
			this->textBox4->TabIndex = 55;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox3->Location = System::Drawing::Point(34, 212);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(175, 20);
			this->textBox3->TabIndex = 54;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox2->Location = System::Drawing::Point(34, 153);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(175, 20);
			this->textBox2->TabIndex = 53;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// bunifuThinButton26
			// 
			this->bunifuThinButton26->ActiveBorderThickness = 2;
			this->bunifuThinButton26->ActiveCornerRadius = 30;
			this->bunifuThinButton26->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton26->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton26->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton26.BackgroundImage")));
			this->bunifuThinButton26->ButtonText = L"Edit";
			this->bunifuThinButton26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton26->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton26->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton26->IdleBorderThickness = 2;
			this->bunifuThinButton26->IdleCornerRadius = 30;
			this->bunifuThinButton26->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton26->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton26->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton26->Location = System::Drawing::Point(17, 632);
			this->bunifuThinButton26->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton26->Name = L"bunifuThinButton26";
			this->bunifuThinButton26->Size = System::Drawing::Size(203, 58);
			this->bunifuThinButton26->TabIndex = 52;
			this->bunifuThinButton26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton26->Click += gcnew System::EventHandler(this, &People::bunifuThinButton26_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox1->Location = System::Drawing::Point(32, 96);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 20);
			this->textBox1->TabIndex = 51;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// bunifuCustomLabel6
			// 
			this->bunifuCustomLabel6->AutoSize = true;
			this->bunifuCustomLabel6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel6->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel6->Location = System::Drawing::Point(31, 485);
			this->bunifuCustomLabel6->Name = L"bunifuCustomLabel6";
			this->bunifuCustomLabel6->Size = System::Drawing::Size(98, 22);
			this->bunifuCustomLabel6->TabIndex = 50;
			this->bunifuCustomLabel6->Text = L"Expiration";
			// 
			// bunifuThinButton25
			// 
			this->bunifuThinButton25->ActiveBorderThickness = 2;
			this->bunifuThinButton25->ActiveCornerRadius = 30;
			this->bunifuThinButton25->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton25->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton25->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton25.BackgroundImage")));
			this->bunifuThinButton25->ButtonText = L"";
			this->bunifuThinButton25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton25->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton25->IdleBorderThickness = 2;
			this->bunifuThinButton25->IdleCornerRadius = 30;
			this->bunifuThinButton25->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton25->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton25->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton25->Location = System::Drawing::Point(19, 377);
			this->bunifuThinButton25->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton25->Name = L"bunifuThinButton25";
			this->bunifuThinButton25->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton25->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton25->TabIndex = 49;
			this->bunifuThinButton25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel14
			// 
			this->bunifuCustomLabel14->AutoSize = true;
			this->bunifuCustomLabel14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel14->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel14->Location = System::Drawing::Point(61, 355);
			this->bunifuCustomLabel14->Name = L"bunifuCustomLabel14";
			this->bunifuCustomLabel14->Size = System::Drawing::Size(116, 22);
			this->bunifuCustomLabel14->TabIndex = 48;
			this->bunifuCustomLabel14->Text = L"Card name";
			// 
			// bunifuCustomLabel12
			// 
			this->bunifuCustomLabel12->AutoSize = true;
			this->bunifuCustomLabel12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel12->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel12->Location = System::Drawing::Point(75, 59);
			this->bunifuCustomLabel12->Name = L"bunifuCustomLabel12";
			this->bunifuCustomLabel12->Size = System::Drawing::Size(94, 22);
			this->bunifuCustomLabel12->TabIndex = 46;
			this->bunifuCustomLabel12->Text = L"Person ID";
			// 
			// bunifuThinButton24
			// 
			this->bunifuThinButton24->ActiveBorderThickness = 2;
			this->bunifuThinButton24->ActiveCornerRadius = 30;
			this->bunifuThinButton24->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton24->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton24->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton24.BackgroundImage")));
			this->bunifuThinButton24->ButtonText = L"";
			this->bunifuThinButton24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton24->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton24->IdleBorderThickness = 2;
			this->bunifuThinButton24->IdleCornerRadius = 30;
			this->bunifuThinButton24->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton24->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton24->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton24->Location = System::Drawing::Point(17, 84);
			this->bunifuThinButton24->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton24->Name = L"bunifuThinButton24";
			this->bunifuThinButton24->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton24->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton24->TabIndex = 45;
			this->bunifuThinButton24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel10
			// 
			this->bunifuCustomLabel10->AutoSize = true;
			this->bunifuCustomLabel10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel10->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel10->Location = System::Drawing::Point(87, 25);
			this->bunifuCustomLabel10->Name = L"bunifuCustomLabel10";
			this->bunifuCustomLabel10->Size = System::Drawing::Size(61, 32);
			this->bunifuCustomLabel10->TabIndex = 44;
			this->bunifuCustomLabel10->Text = L"Edit";
			// 
			// bunifuThinButton23
			// 
			this->bunifuThinButton23->ActiveBorderThickness = 2;
			this->bunifuThinButton23->ActiveCornerRadius = 30;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton23.BackgroundImage")));
			this->bunifuThinButton23->ButtonText = L"";
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton23->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleBorderThickness = 2;
			this->bunifuThinButton23->IdleCornerRadius = 30;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton23->Location = System::Drawing::Point(20, 446);
			this->bunifuThinButton23->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton23->Name = L"bunifuThinButton23";
			this->bunifuThinButton23->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton23->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton23->TabIndex = 37;
			this->bunifuThinButton23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel4
			// 
			this->bunifuCustomLabel4->AutoSize = true;
			this->bunifuCustomLabel4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel4->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel4->Location = System::Drawing::Point(30, 423);
			this->bunifuCustomLabel4->Name = L"bunifuCustomLabel4";
			this->bunifuCustomLabel4->Size = System::Drawing::Size(189, 22);
			this->bunifuCustomLabel4->TabIndex = 36;
			this->bunifuCustomLabel4->Text = L"Card second name";
			// 
			// bunifuThinButton22
			// 
			this->bunifuThinButton22->ActiveBorderThickness = 2;
			this->bunifuThinButton22->ActiveCornerRadius = 30;
			this->bunifuThinButton22->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton22->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton22->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton22.BackgroundImage")));
			this->bunifuThinButton22->ButtonText = L"";
			this->bunifuThinButton22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton22->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleBorderThickness = 2;
			this->bunifuThinButton22->IdleCornerRadius = 30;
			this->bunifuThinButton22->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton22->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton22->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton22->Location = System::Drawing::Point(19, 199);
			this->bunifuThinButton22->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton22->Name = L"bunifuThinButton22";
			this->bunifuThinButton22->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton22->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton22->TabIndex = 35;
			this->bunifuThinButton22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->AutoSize = true;
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel3->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel3->Location = System::Drawing::Point(56, 176);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(139, 22);
			this->bunifuCustomLabel3->TabIndex = 34;
			this->bunifuCustomLabel3->Text = L"Second name";
			// 
			// bunifuThinButton21
			// 
			this->bunifuThinButton21->ActiveBorderThickness = 2;
			this->bunifuThinButton21->ActiveCornerRadius = 30;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton21.BackgroundImage")));
			this->bunifuThinButton21->ButtonText = L"";
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton21->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleBorderThickness = 2;
			this->bunifuThinButton21->IdleCornerRadius = 30;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton21->Location = System::Drawing::Point(19, 258);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton21->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton21->TabIndex = 33;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel2->Location = System::Drawing::Point(93, 239);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(56, 22);
			this->bunifuCustomLabel2->TabIndex = 32;
			this->bunifuCustomLabel2->Text = L"Email";
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel1->Location = System::Drawing::Point(86, 124);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(66, 22);
			this->bunifuCustomLabel1->TabIndex = 31;
			this->bunifuCustomLabel1->Text = L"Name";
			// 
			// bunifuThinButton
			// 
			this->bunifuThinButton->ActiveBorderThickness = 2;
			this->bunifuThinButton->ActiveCornerRadius = 30;
			this->bunifuThinButton->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton.BackgroundImage")));
			this->bunifuThinButton->ButtonText = L"";
			this->bunifuThinButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton->IdleBorderThickness = 2;
			this->bunifuThinButton->IdleCornerRadius = 30;
			this->bunifuThinButton->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton->Location = System::Drawing::Point(19, 140);
			this->bunifuThinButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton->Name = L"bunifuThinButton";
			this->bunifuThinButton->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton->TabIndex = 29;
			this->bunifuThinButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(238, 601);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(941, 89);
			this->panel3->TabIndex = 48;
			// 
			// panel2
			// 
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(1179, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(59, 690);
			this->panel2->TabIndex = 47;
			// 
			// peopleGridView
			// 
			this->peopleGridView->AllowUserToAddRows = false;
			this->peopleGridView->AllowUserToDeleteRows = false;
			this->peopleGridView->AllowUserToResizeColumns = false;
			this->peopleGridView->AllowUserToResizeRows = false;
			this->peopleGridView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->peopleGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->peopleGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->peopleGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->peopleGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->peopleGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->ConcID,
					this->PersName, this->PersSecName, this->PersEmail, this->CardName, this->CardSecondName, this->CardExpiration, this->CardNumber,
					this->Delete
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->peopleGridView->DefaultCellStyle = dataGridViewCellStyle2;
			this->peopleGridView->EnableHeadersVisualStyles = false;
			this->peopleGridView->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->peopleGridView->Location = System::Drawing::Point(238, 74);
			this->peopleGridView->Name = L"peopleGridView";
			this->peopleGridView->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->peopleGridView->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->peopleGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->peopleGridView->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->peopleGridView->Size = System::Drawing::Size(1000, 528);
			this->peopleGridView->TabIndex = 46;
			this->peopleGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &People::peopleGridView_CellContentClick);
			// 
			// ConcID
			// 
			this->ConcID->HeaderText = L"ID";
			this->ConcID->Name = L"ConcID";
			this->ConcID->ReadOnly = true;
			// 
			// PersName
			// 
			this->PersName->HeaderText = L"Name";
			this->PersName->Name = L"PersName";
			this->PersName->ReadOnly = true;
			// 
			// PersSecName
			// 
			this->PersSecName->HeaderText = L"Second name";
			this->PersSecName->Name = L"PersSecName";
			this->PersSecName->ReadOnly = true;
			// 
			// PersEmail
			// 
			this->PersEmail->HeaderText = L"Email";
			this->PersEmail->Name = L"PersEmail";
			this->PersEmail->ReadOnly = true;
			// 
			// CardName
			// 
			this->CardName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->CardName->HeaderText = L"Card name";
			this->CardName->Name = L"CardName";
			this->CardName->ReadOnly = true;
			// 
			// CardSecondName
			// 
			this->CardSecondName->HeaderText = L"Card second name";
			this->CardSecondName->Name = L"CardSecondName";
			this->CardSecondName->ReadOnly = true;
			this->CardSecondName->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// CardExpiration
			// 
			this->CardExpiration->HeaderText = L"Expiration";
			this->CardExpiration->Name = L"CardExpiration";
			this->CardExpiration->ReadOnly = true;
			this->CardExpiration->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// CardNumber
			// 
			this->CardNumber->HeaderText = L"Card Number";
			this->CardNumber->Name = L"CardNumber";
			this->CardNumber->ReadOnly = true;
			this->CardNumber->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->CardNumber->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Delete
			// 
			this->Delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Delete->HeaderText = L"Delete";
			this->Delete->Name = L"Delete";
			this->Delete->ReadOnly = true;
			// 
			// bunifuDragControl1
			// 
			this->bunifuDragControl1->Fixed = true;
			this->bunifuDragControl1->Horizontal = true;
			this->bunifuDragControl1->TargetControl = this->panel1;
			this->bunifuDragControl1->Vertical = true;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panel4->Controls->Add(this->pictureBox1);
			this->panel4->Controls->Add(this->bunifuThinButton216);
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(238, 690);
			this->panel4->TabIndex = 64;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(38, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(148, 138);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 54;
			this->pictureBox1->TabStop = false;
			// 
			// bunifuThinButton216
			// 
			this->bunifuThinButton216->ActiveBorderThickness = 2;
			this->bunifuThinButton216->ActiveCornerRadius = 30;
			this->bunifuThinButton216->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton216->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton216->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton216->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton216->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton216.BackgroundImage")));
			this->bunifuThinButton216->ButtonText = L"Edit";
			this->bunifuThinButton216->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton216->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton216->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleBorderThickness = 2;
			this->bunifuThinButton216->IdleCornerRadius = 30;
			this->bunifuThinButton216->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton216->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton216->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton216->Location = System::Drawing::Point(16, 319);
			this->bunifuThinButton216->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton216->Name = L"bunifuThinButton216";
			this->bunifuThinButton216->Size = System::Drawing::Size(203, 58);
			this->bunifuThinButton216->TabIndex = 53;
			this->bunifuThinButton216->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton216->Click += gcnew System::EventHandler(this, &People::bunifuThinButton216_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->panel5->Controls->Add(this->bunifuMetroTextbox10);
			this->panel5->Controls->Add(this->bunifuCustomLabel28);
			this->panel5->Controls->Add(this->bunifuMetroTextbox3);
			this->panel5->Controls->Add(this->bunifuMetroTextbox9);
			this->panel5->Controls->Add(this->bunifuMetroTextbox7);
			this->panel5->Controls->Add(this->bunifuCustomLabel26);
			this->panel5->Controls->Add(this->bunifuMetroTextbox6);
			this->panel5->Controls->Add(this->bunifuCustomLabel22);
			this->panel5->Controls->Add(this->bunifuCustomLabel23);
			this->panel5->Controls->Add(this->bunifuMetroTextbox8);
			this->panel5->Controls->Add(this->bunifuMetroTextbox5);
			this->panel5->Controls->Add(this->bunifuCustomLabel21);
			this->panel5->Controls->Add(this->bunifuMetroTextbox4);
			this->panel5->Controls->Add(this->bunifuImageButton7);
			this->panel5->Controls->Add(this->bunifuCustomLabel25);
			this->panel5->Controls->Add(this->bunifuCustomLabel24);
			this->panel5->Controls->Add(this->bunifuCustomLabel30);
			this->panel5->Controls->Add(this->bunifuCustomLabel31);
			this->panel5->Controls->Add(this->bunifuMetroTextbox2);
			this->panel5->Controls->Add(this->bunifuMetroTextbox1);
			this->panel5->Location = System::Drawing::Point(238, 74);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(203, 585);
			this->panel5->TabIndex = 87;
			// 
			// bunifuMetroTextbox10
			// 
			this->bunifuMetroTextbox10->BorderColorFocused = System::Drawing::Color::White;
			this->bunifuMetroTextbox10->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuMetroTextbox10->BorderColorMouseHover = System::Drawing::Color::White;
			this->bunifuMetroTextbox10->BorderThickness = 3;
			this->bunifuMetroTextbox10->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox10->Enabled = false;
			this->bunifuMetroTextbox10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox10->ForeColor = System::Drawing::Color::White;
			this->bunifuMetroTextbox10->isPassword = false;
			this->bunifuMetroTextbox10->Location = System::Drawing::Point(7, 440);
			this->bunifuMetroTextbox10->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox10->Name = L"bunifuMetroTextbox10";
			this->bunifuMetroTextbox10->Size = System::Drawing::Size(192, 32);
			this->bunifuMetroTextbox10->TabIndex = 99;
			this->bunifuMetroTextbox10->Text = L"Example: YY/MM   CSC: 568";
			this->bunifuMetroTextbox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuCustomLabel28
			// 
			this->bunifuCustomLabel28->AutoSize = true;
			this->bunifuCustomLabel28->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel28->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel28->Location = System::Drawing::Point(50, 416);
			this->bunifuCustomLabel28->Name = L"bunifuCustomLabel28";
			this->bunifuCustomLabel28->Size = System::Drawing::Size(117, 20);
			this->bunifuCustomLabel28->TabIndex = 98;
			this->bunifuCustomLabel28->Text = L"Expiration/CSC";
			// 
			// bunifuMetroTextbox3
			// 
			this->bunifuMetroTextbox3->BorderColorFocused = System::Drawing::Color::White;
			this->bunifuMetroTextbox3->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuMetroTextbox3->BorderColorMouseHover = System::Drawing::Color::White;
			this->bunifuMetroTextbox3->BorderThickness = 3;
			this->bunifuMetroTextbox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox3->Enabled = false;
			this->bunifuMetroTextbox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox3->ForeColor = System::Drawing::Color::White;
			this->bunifuMetroTextbox3->isPassword = false;
			this->bunifuMetroTextbox3->Location = System::Drawing::Point(33, 377);
			this->bunifuMetroTextbox3->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox3->Name = L"bunifuMetroTextbox3";
			this->bunifuMetroTextbox3->Size = System::Drawing::Size(145, 32);
			this->bunifuMetroTextbox3->TabIndex = 97;
			this->bunifuMetroTextbox3->Text = L"Example: Phipps";
			this->bunifuMetroTextbox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMetroTextbox9
			// 
			this->bunifuMetroTextbox9->BorderColorFocused = System::Drawing::Color::White;
			this->bunifuMetroTextbox9->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuMetroTextbox9->BorderColorMouseHover = System::Drawing::Color::White;
			this->bunifuMetroTextbox9->BorderThickness = 3;
			this->bunifuMetroTextbox9->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox9->Enabled = false;
			this->bunifuMetroTextbox9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox9->ForeColor = System::Drawing::Color::White;
			this->bunifuMetroTextbox9->isPassword = false;
			this->bunifuMetroTextbox9->Location = System::Drawing::Point(7, 503);
			this->bunifuMetroTextbox9->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox9->Name = L"bunifuMetroTextbox9";
			this->bunifuMetroTextbox9->Size = System::Drawing::Size(192, 32);
			this->bunifuMetroTextbox9->TabIndex = 96;
			this->bunifuMetroTextbox9->Text = L"Example: 5455526048597689";
			this->bunifuMetroTextbox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMetroTextbox7
			// 
			this->bunifuMetroTextbox7->BorderColorFocused = System::Drawing::Color::White;
			this->bunifuMetroTextbox7->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuMetroTextbox7->BorderColorMouseHover = System::Drawing::Color::White;
			this->bunifuMetroTextbox7->BorderThickness = 3;
			this->bunifuMetroTextbox7->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox7->Enabled = false;
			this->bunifuMetroTextbox7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox7->ForeColor = System::Drawing::Color::White;
			this->bunifuMetroTextbox7->isPassword = false;
			this->bunifuMetroTextbox7->Location = System::Drawing::Point(10, 674);
			this->bunifuMetroTextbox7->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->bunifuMetroTextbox7->Name = L"bunifuMetroTextbox7";
			this->bunifuMetroTextbox7->Size = System::Drawing::Size(264, 41);
			this->bunifuMetroTextbox7->TabIndex = 95;
			this->bunifuMetroTextbox7->Text = L"E: tom.phipps@gmail.com";
			this->bunifuMetroTextbox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuCustomLabel26
			// 
			this->bunifuCustomLabel26->AutoSize = true;
			this->bunifuCustomLabel26->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel26->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel26->Location = System::Drawing::Point(53, 478);
			this->bunifuCustomLabel26->Name = L"bunifuCustomLabel26";
			this->bunifuCustomLabel26->Size = System::Drawing::Size(108, 20);
			this->bunifuCustomLabel26->TabIndex = 94;
			this->bunifuCustomLabel26->Text = L"Card Number";
			// 
			// bunifuMetroTextbox6
			// 
			this->bunifuMetroTextbox6->BorderColorFocused = System::Drawing::Color::White;
			this->bunifuMetroTextbox6->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuMetroTextbox6->BorderColorMouseHover = System::Drawing::Color::White;
			this->bunifuMetroTextbox6->BorderThickness = 3;
			this->bunifuMetroTextbox6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox6->Enabled = false;
			this->bunifuMetroTextbox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox6->ForeColor = System::Drawing::Color::White;
			this->bunifuMetroTextbox6->isPassword = false;
			this->bunifuMetroTextbox6->Location = System::Drawing::Point(31, 250);
			this->bunifuMetroTextbox6->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox6->Name = L"bunifuMetroTextbox6";
			this->bunifuMetroTextbox6->Size = System::Drawing::Size(147, 32);
			this->bunifuMetroTextbox6->TabIndex = 93;
			this->bunifuMetroTextbox6->Text = L"Example: YY/MM/DD";
			this->bunifuMetroTextbox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuCustomLabel22
			// 
			this->bunifuCustomLabel22->AutoSize = true;
			this->bunifuCustomLabel22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel22->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel22->Location = System::Drawing::Point(50, 350);
			this->bunifuCustomLabel22->Name = L"bunifuCustomLabel22";
			this->bunifuCustomLabel22->Size = System::Drawing::Size(111, 20);
			this->bunifuCustomLabel22->TabIndex = 92;
			this->bunifuCustomLabel22->Text = L"Second name";
			// 
			// bunifuCustomLabel23
			// 
			this->bunifuCustomLabel23->AutoSize = true;
			this->bunifuCustomLabel23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel23->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel23->Location = System::Drawing::Point(81, 286);
			this->bunifuCustomLabel23->Name = L"bunifuCustomLabel23";
			this->bunifuCustomLabel23->Size = System::Drawing::Size(53, 20);
			this->bunifuCustomLabel23->TabIndex = 91;
			this->bunifuCustomLabel23->Text = L"Name";
			// 
			// bunifuMetroTextbox8
			// 
			this->bunifuMetroTextbox8->BorderColorFocused = System::Drawing::Color::White;
			this->bunifuMetroTextbox8->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuMetroTextbox8->BorderColorMouseHover = System::Drawing::Color::White;
			this->bunifuMetroTextbox8->BorderThickness = 3;
			this->bunifuMetroTextbox8->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox8->Enabled = false;
			this->bunifuMetroTextbox8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox8->ForeColor = System::Drawing::Color::White;
			this->bunifuMetroTextbox8->isPassword = false;
			this->bunifuMetroTextbox8->Location = System::Drawing::Point(33, 309);
			this->bunifuMetroTextbox8->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox8->Name = L"bunifuMetroTextbox8";
			this->bunifuMetroTextbox8->Size = System::Drawing::Size(145, 32);
			this->bunifuMetroTextbox8->TabIndex = 90;
			this->bunifuMetroTextbox8->Text = L"Example: Tom";
			this->bunifuMetroTextbox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMetroTextbox5
			// 
			this->bunifuMetroTextbox5->BorderColorFocused = System::Drawing::Color::White;
			this->bunifuMetroTextbox5->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuMetroTextbox5->BorderColorMouseHover = System::Drawing::Color::White;
			this->bunifuMetroTextbox5->BorderThickness = 3;
			this->bunifuMetroTextbox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox5->Enabled = false;
			this->bunifuMetroTextbox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox5->ForeColor = System::Drawing::Color::White;
			this->bunifuMetroTextbox5->isPassword = false;
			this->bunifuMetroTextbox5->Location = System::Drawing::Point(7, 196);
			this->bunifuMetroTextbox5->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox5->Name = L"bunifuMetroTextbox5";
			this->bunifuMetroTextbox5->Size = System::Drawing::Size(192, 32);
			this->bunifuMetroTextbox5->TabIndex = 89;
			this->bunifuMetroTextbox5->Text = L"E: tom.phipps@gmail.com";
			this->bunifuMetroTextbox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuCustomLabel21
			// 
			this->bunifuCustomLabel21->AutoSize = true;
			this->bunifuCustomLabel21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel21->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel21->Location = System::Drawing::Point(81, 176);
			this->bunifuCustomLabel21->Name = L"bunifuCustomLabel21";
			this->bunifuCustomLabel21->Size = System::Drawing::Size(46, 20);
			this->bunifuCustomLabel21->TabIndex = 88;
			this->bunifuCustomLabel21->Text = L"Email";
			// 
			// bunifuMetroTextbox4
			// 
			this->bunifuMetroTextbox4->BorderColorFocused = System::Drawing::Color::White;
			this->bunifuMetroTextbox4->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuMetroTextbox4->BorderColorMouseHover = System::Drawing::Color::White;
			this->bunifuMetroTextbox4->BorderThickness = 3;
			this->bunifuMetroTextbox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox4->Enabled = false;
			this->bunifuMetroTextbox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox4->ForeColor = System::Drawing::Color::White;
			this->bunifuMetroTextbox4->isPassword = false;
			this->bunifuMetroTextbox4->Location = System::Drawing::Point(33, 144);
			this->bunifuMetroTextbox4->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox4->Name = L"bunifuMetroTextbox4";
			this->bunifuMetroTextbox4->Size = System::Drawing::Size(145, 32);
			this->bunifuMetroTextbox4->TabIndex = 87;
			this->bunifuMetroTextbox4->Text = L"Example: Phipps";
			this->bunifuMetroTextbox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuImageButton7
			// 
			this->bunifuImageButton7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuImageButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton7.Image")));
			this->bunifuImageButton7->ImageActive = nullptr;
			this->bunifuImageButton7->Location = System::Drawing::Point(179, 3);
			this->bunifuImageButton7->Name = L"bunifuImageButton7";
			this->bunifuImageButton7->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton7->TabIndex = 64;
			this->bunifuImageButton7->TabStop = false;
			this->bunifuImageButton7->Zoom = 10;
			this->bunifuImageButton7->Click += gcnew System::EventHandler(this, &People::bunifuImageButton7_Click);
			// 
			// bunifuCustomLabel25
			// 
			this->bunifuCustomLabel25->AutoSize = true;
			this->bunifuCustomLabel25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel25->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel25->Location = System::Drawing::Point(50, 120);
			this->bunifuCustomLabel25->Name = L"bunifuCustomLabel25";
			this->bunifuCustomLabel25->Size = System::Drawing::Size(111, 20);
			this->bunifuCustomLabel25->TabIndex = 83;
			this->bunifuCustomLabel25->Text = L"Second name";
			// 
			// bunifuCustomLabel24
			// 
			this->bunifuCustomLabel24->AutoSize = true;
			this->bunifuCustomLabel24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel24->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel24->Location = System::Drawing::Point(67, 230);
			this->bunifuCustomLabel24->Name = L"bunifuCustomLabel24";
			this->bunifuCustomLabel24->Size = System::Drawing::Size(75, 20);
			this->bunifuCustomLabel24->TabIndex = 82;
			this->bunifuCustomLabel24->Text = L"Birthdate";
			// 
			// bunifuCustomLabel30
			// 
			this->bunifuCustomLabel30->AutoSize = true;
			this->bunifuCustomLabel30->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel30->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel30->Location = System::Drawing::Point(78, 65);
			this->bunifuCustomLabel30->Name = L"bunifuCustomLabel30";
			this->bunifuCustomLabel30->Size = System::Drawing::Size(53, 20);
			this->bunifuCustomLabel30->TabIndex = 81;
			this->bunifuCustomLabel30->Text = L"Name";
			// 
			// bunifuCustomLabel31
			// 
			this->bunifuCustomLabel31->AutoSize = true;
			this->bunifuCustomLabel31->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel31->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel31->Location = System::Drawing::Point(95, 9);
			this->bunifuCustomLabel31->Name = L"bunifuCustomLabel31";
			this->bunifuCustomLabel31->Size = System::Drawing::Size(25, 20);
			this->bunifuCustomLabel31->TabIndex = 80;
			this->bunifuCustomLabel31->Text = L"ID";
			// 
			// bunifuMetroTextbox2
			// 
			this->bunifuMetroTextbox2->BorderColorFocused = System::Drawing::Color::White;
			this->bunifuMetroTextbox2->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuMetroTextbox2->BorderColorMouseHover = System::Drawing::Color::White;
			this->bunifuMetroTextbox2->BorderThickness = 3;
			this->bunifuMetroTextbox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox2->Enabled = false;
			this->bunifuMetroTextbox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox2->ForeColor = System::Drawing::Color::White;
			this->bunifuMetroTextbox2->isPassword = false;
			this->bunifuMetroTextbox2->Location = System::Drawing::Point(33, 83);
			this->bunifuMetroTextbox2->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox2->Name = L"bunifuMetroTextbox2";
			this->bunifuMetroTextbox2->Size = System::Drawing::Size(145, 32);
			this->bunifuMetroTextbox2->TabIndex = 1;
			this->bunifuMetroTextbox2->Text = L"Example: Tom";
			this->bunifuMetroTextbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMetroTextbox1
			// 
			this->bunifuMetroTextbox1->BorderColorFocused = System::Drawing::Color::White;
			this->bunifuMetroTextbox1->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuMetroTextbox1->BorderColorMouseHover = System::Drawing::Color::White;
			this->bunifuMetroTextbox1->BorderThickness = 3;
			this->bunifuMetroTextbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox1->Enabled = false;
			this->bunifuMetroTextbox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMetroTextbox1->ForeColor = System::Drawing::Color::White;
			this->bunifuMetroTextbox1->isPassword = false;
			this->bunifuMetroTextbox1->Location = System::Drawing::Point(33, 30);
			this->bunifuMetroTextbox1->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox1->Name = L"bunifuMetroTextbox1";
			this->bunifuMetroTextbox1->Size = System::Drawing::Size(145, 32);
			this->bunifuMetroTextbox1->TabIndex = 0;
			this->bunifuMetroTextbox1->Text = L"Example: ID01";
			this->bunifuMetroTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuCheckbox1
			// 
			this->bunifuCheckbox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->bunifuCheckbox1->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->bunifuCheckbox1->Checked = false;
			this->bunifuCheckbox1->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->bunifuCheckbox1->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox1->Location = System::Drawing::Point(1153, 108);
			this->bunifuCheckbox1->Name = L"bunifuCheckbox1";
			this->bunifuCheckbox1->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox1->TabIndex = 86;
			// 
			// People
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->ClientSize = System::Drawing::Size(1238, 690);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->bunifuCheckbox1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->peopleGridView);
			this->Controls->Add(this->Editpanel);
			this->Controls->Add(this->panel4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"People";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"People";
			this->Load += gcnew System::EventHandler(this, &People::People_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HelpIconButton))->EndInit();
			this->panel9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->Editpanel->ResumeLayout(false);
			this->Editpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->peopleGridView))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton7))->EndInit();
			this->ResumeLayout(false);
		}
#pragma endregion
		void peopleList()
		{
			String ^ print;
			peopleGridView->Rows->Clear();
			for (int i = 0; i < glob::pers.pers_number; i++)
			{
				peopleGridView->Rows->Add();
				peopleGridView->Rows[i]->Height = 50;
				print = gcnew String(glob::pers.People[i].GetPersonID().c_str());
				peopleGridView[0, i]->Value = print;
				print = gcnew String(glob::pers.People[i].GetPersonName().c_str());
				peopleGridView[1, i]->Value = print;
				print = gcnew String(glob::pers.People[i].GetPersonSecondName().c_str());
				peopleGridView[2, i]->Value = print;
				print = gcnew String(glob::pers.People[i].GetPersonEmail().c_str());
				peopleGridView[3, i]->Value = print;
				print = gcnew String(glob::pers.People[i].GetCardName().c_str());
				peopleGridView[4, i]->Value = print;
				print = gcnew String(glob::pers.People[i].GetCardSecondName().c_str());
				peopleGridView[5, i]->Value = print;
				print = gcnew String(glob::pers.People[i].GetCardDate().c_str());
				peopleGridView[6, i]->Value = print;
				print = gcnew String(glob::pers.People[i].GetCardNumber().c_str());
				peopleGridView[7, i]->Value = print;
				peopleGridView[8, i]->Value = "Delete";
			}
		}
private: System::Void People_Load(System::Object^  sender, System::EventArgs^  e) {
	panel5->Visible = false;
	panel9->Visible = false;
}
private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
private: System::Void bunifuImageButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void bunifuImageButton3_Click(System::Object^  sender, System::EventArgs^  e) {
	panel4->Visible = true;
	Editpanel->Visible = false;
}
private: System::Void bunifuImageButton4_Click(System::Object^  sender, System::EventArgs^  e) {
	panel4->Visible = true;
}
private: System::Void bunifuThinButton217_Click(System::Object^  sender, System::EventArgs^  e) {
	panel4->Visible = false;
}
private: System::Void bunifuThinButton216_Click(System::Object^  sender, System::EventArgs^  e) {
	panel4->Visible = false;
	Editpanel->Visible = true;
}

private: System::Void bunifuImageButton7_Click(System::Object^  sender, System::EventArgs^  e) {
	panel5->Visible = false;
	panel9->Visible = false;
}
private: System::Void peopleGridView_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	String^ input, ^Year, ^Month, ^Day;
	std::string year,month,day,cardYear,cardMonth;

	int lineP = peopleGridView->CurrentRow->Index;
	input = gcnew String(glob::pers.People[lineP].GetPersonID().c_str());
	textBox1->Text = input;
	input = gcnew String(glob::pers.People[lineP].GetPersonName().c_str());
	textBox2->Text = input;
	input = gcnew String(glob::pers.People[lineP].GetPersonSecondName().c_str());
	textBox3->Text = input;
	input = gcnew String(glob::pers.People[lineP].GetPersonEmail().c_str());
	textBox4->Text = input;
	input = gcnew String(glob::pers.People[lineP].GetCardName().c_str());
	textBox5->Text = input;
	input = gcnew String(glob::pers.People[lineP].GetCardSecondName().c_str());
	textBox6->Text = input;
	textBox13->Text = glob::pers.People[lineP].GetCardCSC().ToString();
	input = gcnew String(glob::pers.People[lineP].GetCardNumber().c_str());
	textBox14->Text = input;
	input = gcnew String(glob::pers.People[lineP].GetCardCountry().c_str());
	comboBox1->Text = input;
	std::string date = glob::pers.People[lineP].GetPersonBirthdate();
	year = date.substr(0, 4);
	month = date.substr(4, 4);
	day = date.substr(8, 9);
	Year = gcnew String(year.c_str());
	Month = gcnew String(month.c_str());
	Day = gcnew String(day.c_str());
	comboBox5->Text = Year;
	comboBox6->Text = Month;
	comboBox7->Text = Day;
	std::string CardDate = glob::pers.People[lineP].GetCardDate();
	year = CardDate.substr(0, 4);
	month = CardDate.substr(5, 5);
	Year = gcnew String(year.c_str());
	Month = gcnew String(month.c_str());
	comboBox3->Text = Year;
	comboBox2->Text = Month;
	
	if (e->ColumnIndex == 8 && bunifuCheckbox1->Checked == true)
	{
		int lineP = peopleGridView->CurrentRow->Index;
		for (int i = lineP; i < glob::pers.pers_number - 1; i++)
		{
			glob::pers.People[i] = glob::pers.People[i +1];	
		}
		glob::pers.pers_number--;
		glob::pers.PrintPersonDataToFile();
		peopleGridView->Rows->Clear();
		peopleList();
	}
}
private: System::Void HelpIconButton_Click(System::Object^  sender, System::EventArgs^  e) {
	panel5->Visible = true;
	panel9->Visible = true;
}
private: System::Void bunifuThinButton26_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ID, ^Name, ^SecondName,^Year, ^Month, ^Day, ^Email,
		   ^CardName, ^CardSecondName, ^CardCountry,^CardYear, ^CardMonth, ^CardNumber;
	std::string id, name, secondname, birthdate, year, month, day, email, 
		cardName,cardSecondName,cardCountry,cardDate, cardYear, cardMonth,cardNumber;
	int cardCSC, 
		concTicketNum = glob::pers.People[glob::pers.pers_number].GetPersonConcTicketNum(),
		festTicketNum = glob::pers.People[glob::pers.pers_number].GetPersonFestTicketNum();
	if (textBox1->Text != ""&&
		textBox2->Text != ""&&
		textBox3->Text != ""&&
		textBox4->Text != ""&&	
		textBox5->Text != ""&&
		textBox6->Text != ""&&
		textBox13->Text != ""&&
		textBox14->Text != ""&&
		comboBox1->Text != ""&&
		comboBox3->Text != ""&&
		comboBox2->Text != ""&&
		comboBox5->Text != ""&&
		comboBox6->Text != ""&&
		comboBox7->Text != "")
	{
		int lineP = peopleGridView->CurrentRow->Index;
		
		ID = textBox1->Text;
		Name = textBox2->Text;
		SecondName = textBox3->Text;
		Email = textBox4->Text;
		Year = comboBox5->Text;
		Month = comboBox6->Text;
		Day = comboBox7->Text;
		CardName = textBox2->Text;
		CardSecondName = textBox3->Text;
		CardYear = comboBox3->Text;
		CardMonth = comboBox2->Text;
		CardCountry = comboBox1->Text;
		CardNumber = textBox14->Text;

		id = glob::pers.People[lineP].convert(ID);
		name = glob::pers.People[lineP].convert(Name);
		secondname = glob::pers.People[lineP].convert(SecondName);
		email = glob::pers.People[lineP].convert(Email);
		day = glob::pers.People[lineP].convert(Day);
		month = glob::pers.People[lineP].convert(Month);
		year = glob::pers.People[lineP].convert(Year);
		birthdate = year + "/" + month + "/" + day;
		
		cardName = glob::pers.People[lineP].convert(CardName);
		cardSecondName = glob::pers.People[lineP].convert(CardSecondName);
		cardYear = glob::pers.People[lineP].convert(CardYear);
		cardMonth = glob::pers.People[lineP].convert(CardMonth);
		cardDate = cardYear + "/" + cardMonth;
		cardCountry = glob::pers.People[lineP].convert(CardCountry);	
		cardNumber = glob::pers.People[lineP].convert(CardNumber);
		cardCSC = int::Parse(textBox13->Text);
		glob::pers.People[lineP].InsertPersonData(lineP,id, name, secondname, birthdate, email);
		glob::pers.People[lineP].InsertPersonCardData(lineP,cardName, cardSecondName, cardCountry, cardDate, cardNumber, cardCSC);
		glob::pers.People[lineP].InsertPersonConcTicketnum(lineP, concTicketNum);
		glob::pers.People[lineP].InsertPersonFestTicketnum(lineP, festTicketNum);
		
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox13->Text = "";
		textBox14->Text = "";
		comboBox1->Text = "";
		comboBox3->Text = "";
		comboBox2->Text = "";
		comboBox5->Text = "";
		comboBox6->Text = "";
		comboBox7->Text = "";
		glob::pers.SortPersonName();
		glob::pers.PrintPersonDataToFile();
		glob::pers.ReadPersonDataFromFile();
		peopleList();
	}
	else
		MessageBox::Show("Text boxes cannot be empty.");
}
};
}
