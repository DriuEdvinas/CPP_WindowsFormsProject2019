#pragma once
#include "class_body.h"
#include "GLOB.h"
#include <string>
namespace Project {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Concerts
	/// </summary>
	public ref class Concerts : public System::Windows::Forms::Form
	{
	public:
		Concerts(void)
		{
			InitializeComponent();
			concertList();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Concerts()
		{
			if (components)
			{
				delete components;
			}
		}
private: System::Windows::Forms::Panel^  Editpanel;
private: bool dragging;
private: Point offset;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel5;
private: ns1::BunifuThinButton2^  bunifuThinButton23;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel4;
private: ns1::BunifuThinButton2^  bunifuThinButton22;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel3;
private: ns1::BunifuThinButton2^  bunifuThinButton21;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel2;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel1;
private: ns1::BunifuThinButton2^  bunifuThinButton;
private: System::Windows::Forms::Panel^  panel1;
private: ns1::BunifuImageButton^  bunifuImageButton2;
private: ns1::BunifuImageButton^  bunifuImageButton1;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel12;
private: ns1::BunifuThinButton2^  bunifuThinButton24;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel10;
private: ns1::BunifuThinButton2^  bunifuThinButton25;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel14;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel6;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::TextBox^  textBox2;
private: ns1::BunifuThinButton2^  bunifuThinButton26;
private: System::Windows::Forms::DataGridView^  concertdataGridView;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::TextBox^  textBox7;
private: ns1::BunifuThinButton2^  bunifuThinButton27;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel7;
private: ns1::BunifuDragControl^  bunifuDragControl1;
private: System::Windows::Forms::Panel^  Addpanel;
private: System::Windows::Forms::TextBox^  textBox8;
private: ns1::BunifuThinButton2^  bunifuThinButton28;
private: System::Windows::Forms::TextBox^  textBox9;
private: System::Windows::Forms::TextBox^  textBox10;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::TextBox^  textBox13;
private: ns1::BunifuThinButton2^  bunifuThinButton29;
private: System::Windows::Forms::TextBox^  textBox14;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel8;
private: ns1::BunifuThinButton2^  bunifuThinButton210;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel9;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel11;
private: ns1::BunifuThinButton2^  bunifuThinButton211;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel13;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel15;
private: ns1::BunifuThinButton2^  bunifuThinButton212;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel16;
private: ns1::BunifuThinButton2^  bunifuThinButton213;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel17;
private: ns1::BunifuThinButton2^  bunifuThinButton214;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel18;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel19;
private: ns1::BunifuThinButton2^  bunifuThinButton215;
private: System::Windows::Forms::Panel^  panel4;
private: ns1::BunifuThinButton2^  bunifuThinButton216;
private: ns1::BunifuThinButton2^  bunifuThinButton217;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: ns1::BunifuImageButton^  bunifuImageButton3;
private: ns1::BunifuImageButton^  bunifuImageButton4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ConcID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ConcName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ConcDate;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  City;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Price;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ConcTicketsAmount;
private: System::Windows::Forms::DataGridViewButtonColumn^  Artists;
private: System::Windows::Forms::DataGridViewButtonColumn^  Delete;
private: System::Windows::Forms::Panel^  Artistsboxlittle;
private: System::Windows::Forms::TextBox^  textBox18;
private: ns1::BunifuImageButton^  bunifuImageButton9;
private: System::Windows::Forms::ListBox^  listBox1;
private: System::Windows::Forms::Panel^  Artistspanel;
private: System::Windows::Forms::TextBox^  textBox19;
private: System::Windows::Forms::ListBox^  ArtiststextBox;
private: System::Windows::Forms::Label^  label5;
private: ns1::BunifuImageButton^  bunifuImageButton6;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel22;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel20;
private: ns1::BunifuImageButton^  bunifuImageButton5;
private: ns1::BunifuImageButton^  HelpIconButton;
private: System::Windows::Forms::Panel^  panel5;
private: ns1::BunifuImageButton^  bunifuImageButton7;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel26;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel25;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel24;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel23;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel21;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox5;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox4;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox3;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox2;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox1;
private: System::Windows::Forms::Panel^  panel6;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel29;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel28;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel27;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox6;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox7;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox8;
private: System::Windows::Forms::Panel^  panel7;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Panel^  panel8;
private: ns1::BunifuImageButton^  bunifuImageButton8;
private: ns1::BunifuCheckbox^  bunifuCheckbox1;
private: System::Windows::Forms::Panel^  panel9;
private: ns1::BunifuMetroTextbox^  bunifuMetroTextbox9;
private: System::ComponentModel::IContainer^  components;
protected:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Concerts::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->Editpanel = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomLabel22 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuImageButton6 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton3 = (gcnew ns1::BunifuImageButton());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->bunifuThinButton27 = (gcnew ns1::BunifuThinButton2());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
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
			this->bunifuCustomLabel5 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton23 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel4 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton22 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel3 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton21 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel2 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel1 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton = (gcnew ns1::BunifuThinButton2());
			this->Addpanel = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomLabel20 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuImageButton5 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton4 = (gcnew ns1::BunifuImageButton());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->bunifuThinButton28 = (gcnew ns1::BunifuThinButton2());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->bunifuThinButton29 = (gcnew ns1::BunifuThinButton2());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->bunifuCustomLabel8 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton210 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel9 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel11 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton211 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel13 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel15 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton212 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel16 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton213 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel17 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton214 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel18 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel19 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton215 = (gcnew ns1::BunifuThinButton2());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->bunifuMetroTextbox9 = (gcnew ns1::BunifuMetroTextbox());
			this->HelpIconButton = (gcnew ns1::BunifuImageButton());
			this->bunifuCustomLabel7 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuImageButton2 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton1 = (gcnew ns1::BunifuImageButton());
			this->concertdataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->ConcID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ConcName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ConcDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->City = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ConcTicketsAmount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Artists = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Delete = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->bunifuDragControl1 = (gcnew ns1::BunifuDragControl(this->components));
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuThinButton216 = (gcnew ns1::BunifuThinButton2());
			this->bunifuThinButton217 = (gcnew ns1::BunifuThinButton2());
			this->Artistsboxlittle = (gcnew System::Windows::Forms::Panel());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->bunifuImageButton9 = (gcnew ns1::BunifuImageButton());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->Artistspanel = (gcnew System::Windows::Forms::Panel());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->ArtiststextBox = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton7 = (gcnew ns1::BunifuImageButton());
			this->bunifuCustomLabel26 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel25 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel24 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel23 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel21 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuMetroTextbox5 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuMetroTextbox4 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuMetroTextbox3 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuMetroTextbox2 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuMetroTextbox1 = (gcnew ns1::BunifuMetroTextbox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomLabel29 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel28 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel27 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuMetroTextbox6 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuMetroTextbox7 = (gcnew ns1::BunifuMetroTextbox());
			this->bunifuMetroTextbox8 = (gcnew ns1::BunifuMetroTextbox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton8 = (gcnew ns1::BunifuImageButton());
			this->bunifuCheckbox1 = (gcnew ns1::BunifuCheckbox());
			this->Editpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			this->Addpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HelpIconButton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->concertdataGridView))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Artistsboxlittle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton9))->BeginInit();
			this->Artistspanel->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton7))->BeginInit();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton8))->BeginInit();
			this->SuspendLayout();
			// 
			// Editpanel
			// 
			this->Editpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->Editpanel->Controls->Add(this->bunifuCustomLabel22);
			this->Editpanel->Controls->Add(this->bunifuImageButton6);
			this->Editpanel->Controls->Add(this->bunifuImageButton3);
			this->Editpanel->Controls->Add(this->textBox7);
			this->Editpanel->Controls->Add(this->bunifuThinButton27);
			this->Editpanel->Controls->Add(this->textBox6);
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
			this->Editpanel->Controls->Add(this->bunifuCustomLabel5);
			this->Editpanel->Controls->Add(this->bunifuThinButton23);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel4);
			this->Editpanel->Controls->Add(this->bunifuThinButton22);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel3);
			this->Editpanel->Controls->Add(this->bunifuThinButton21);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel2);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel1);
			this->Editpanel->Controls->Add(this->bunifuThinButton);
			this->Editpanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->Editpanel->Location = System::Drawing::Point(0, 0);
			this->Editpanel->Name = L"Editpanel";
			this->Editpanel->Size = System::Drawing::Size(238, 690);
			this->Editpanel->TabIndex = 42;
			this->Editpanel->Visible = false;
			// 
			// bunifuCustomLabel22
			// 
			this->bunifuCustomLabel22->AutoSize = true;
			this->bunifuCustomLabel22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel22->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel22->Location = System::Drawing::Point(126, 522);
			this->bunifuCustomLabel22->Name = L"bunifuCustomLabel22";
			this->bunifuCustomLabel22->Size = System::Drawing::Size(45, 22);
			this->bunifuCustomLabel22->TabIndex = 77;
			this->bunifuCustomLabel22->Text = L"Info";
			// 
			// bunifuImageButton6
			// 
			this->bunifuImageButton6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuImageButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton6.Image")));
			this->bunifuImageButton6->ImageActive = nullptr;
			this->bunifuImageButton6->Location = System::Drawing::Point(184, 524);
			this->bunifuImageButton6->Name = L"bunifuImageButton6";
			this->bunifuImageButton6->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton6->TabIndex = 76;
			this->bunifuImageButton6->TabStop = false;
			this->bunifuImageButton6->Zoom = 10;
			this->bunifuImageButton6->Click += gcnew System::EventHandler(this, &Concerts::bunifuImageButton6_Click);
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuImageButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.Image")));
			this->bunifuImageButton3->ImageActive = nullptr;
			this->bunifuImageButton3->Location = System::Drawing::Point(6, 3);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(226, 25);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 62;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 10;
			this->bunifuImageButton3->Click += gcnew System::EventHandler(this, &Concerts::bunifuImageButton3_Click);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox7->Location = System::Drawing::Point(32, 561);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(175, 20);
			this->textBox7->TabIndex = 61;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// bunifuThinButton27
			// 
			this->bunifuThinButton27->ActiveBorderThickness = 2;
			this->bunifuThinButton27->ActiveCornerRadius = 30;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton27.BackgroundImage")));
			this->bunifuThinButton27->ButtonText = L"";
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton27->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleBorderThickness = 2;
			this->bunifuThinButton27->IdleCornerRadius = 30;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton27->Location = System::Drawing::Point(17, 549);
			this->bunifuThinButton27->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton27->Name = L"bunifuThinButton27";
			this->bunifuThinButton27->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton27->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton27->TabIndex = 60;
			this->bunifuThinButton27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->textBox6->Location = System::Drawing::Point(32, 489);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(175, 20);
			this->textBox6->TabIndex = 57;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->textBox5->Location = System::Drawing::Point(32, 413);
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
			this->textBox4->Location = System::Drawing::Point(32, 341);
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
			this->textBox3->Location = System::Drawing::Point(32, 266);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(175, 20);
			this->textBox3->TabIndex = 54;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox2->Location = System::Drawing::Point(32, 194);
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
			this->bunifuThinButton26->Location = System::Drawing::Point(17, 601);
			this->bunifuThinButton26->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton26->Name = L"bunifuThinButton26";
			this->bunifuThinButton26->Size = System::Drawing::Size(203, 58);
			this->bunifuThinButton26->TabIndex = 52;
			this->bunifuThinButton26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton26->Click += gcnew System::EventHandler(this, &Concerts::bunifuThinButton26_Click);
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
			this->textBox1->Location = System::Drawing::Point(32, 116);
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
			this->bunifuCustomLabel6->Location = System::Drawing::Point(34, 522);
			this->bunifuCustomLabel6->Name = L"bunifuCustomLabel6";
			this->bunifuCustomLabel6->Size = System::Drawing::Size(62, 22);
			this->bunifuCustomLabel6->TabIndex = 50;
			this->bunifuCustomLabel6->Text = L"Artists";
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
			this->bunifuThinButton25->Location = System::Drawing::Point(17, 401);
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
			this->bunifuCustomLabel14->Location = System::Drawing::Point(45, 374);
			this->bunifuCustomLabel14->Name = L"bunifuCustomLabel14";
			this->bunifuCustomLabel14->Size = System::Drawing::Size(159, 22);
			this->bunifuCustomLabel14->TabIndex = 48;
			this->bunifuCustomLabel14->Text = L"Price Coefficient";
			// 
			// bunifuCustomLabel12
			// 
			this->bunifuCustomLabel12->AutoSize = true;
			this->bunifuCustomLabel12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel12->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel12->Location = System::Drawing::Point(61, 77);
			this->bunifuCustomLabel12->Name = L"bunifuCustomLabel12";
			this->bunifuCustomLabel12->Size = System::Drawing::Size(110, 22);
			this->bunifuCustomLabel12->TabIndex = 46;
			this->bunifuCustomLabel12->Text = L"Concert ID";
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
			this->bunifuThinButton24->Location = System::Drawing::Point(17, 104);
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
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel5->Location = System::Drawing::Point(34, 116);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(173, 22);
			this->bunifuCustomLabel5->TabIndex = 39;
			this->bunifuCustomLabel5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->bunifuThinButton23->Location = System::Drawing::Point(17, 477);
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
			this->bunifuCustomLabel4->Location = System::Drawing::Point(49, 450);
			this->bunifuCustomLabel4->Name = L"bunifuCustomLabel4";
			this->bunifuCustomLabel4->Size = System::Drawing::Size(147, 22);
			this->bunifuCustomLabel4->TabIndex = 36;
			this->bunifuCustomLabel4->Text = L"Tickets amount";
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
			this->bunifuThinButton22->Location = System::Drawing::Point(17, 253);
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
			this->bunifuCustomLabel3->Location = System::Drawing::Point(93, 302);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(46, 22);
			this->bunifuCustomLabel3->TabIndex = 34;
			this->bunifuCustomLabel3->Text = L"City";
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
			this->bunifuThinButton21->Location = System::Drawing::Point(17, 329);
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
			this->bunifuCustomLabel2->Location = System::Drawing::Point(92, 230);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(56, 22);
			this->bunifuCustomLabel2->TabIndex = 32;
			this->bunifuCustomLabel2->Text = L"Date";
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel1->Location = System::Drawing::Point(48, 154);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(145, 22);
			this->bunifuCustomLabel1->TabIndex = 31;
			this->bunifuCustomLabel1->Text = L"Concert name";
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
			this->bunifuThinButton->Location = System::Drawing::Point(17, 181);
			this->bunifuThinButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton->Name = L"bunifuThinButton";
			this->bunifuThinButton->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton->TabIndex = 29;
			this->bunifuThinButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Addpanel
			// 
			this->Addpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->Addpanel->Controls->Add(this->bunifuCustomLabel20);
			this->Addpanel->Controls->Add(this->bunifuImageButton5);
			this->Addpanel->Controls->Add(this->bunifuImageButton4);
			this->Addpanel->Controls->Add(this->textBox8);
			this->Addpanel->Controls->Add(this->bunifuThinButton28);
			this->Addpanel->Controls->Add(this->textBox9);
			this->Addpanel->Controls->Add(this->textBox10);
			this->Addpanel->Controls->Add(this->textBox11);
			this->Addpanel->Controls->Add(this->textBox12);
			this->Addpanel->Controls->Add(this->textBox13);
			this->Addpanel->Controls->Add(this->bunifuThinButton29);
			this->Addpanel->Controls->Add(this->textBox14);
			this->Addpanel->Controls->Add(this->bunifuCustomLabel8);
			this->Addpanel->Controls->Add(this->bunifuThinButton210);
			this->Addpanel->Controls->Add(this->bunifuCustomLabel9);
			this->Addpanel->Controls->Add(this->bunifuCustomLabel11);
			this->Addpanel->Controls->Add(this->bunifuThinButton211);
			this->Addpanel->Controls->Add(this->bunifuCustomLabel13);
			this->Addpanel->Controls->Add(this->bunifuCustomLabel15);
			this->Addpanel->Controls->Add(this->bunifuThinButton212);
			this->Addpanel->Controls->Add(this->bunifuCustomLabel16);
			this->Addpanel->Controls->Add(this->bunifuThinButton213);
			this->Addpanel->Controls->Add(this->bunifuCustomLabel17);
			this->Addpanel->Controls->Add(this->bunifuThinButton214);
			this->Addpanel->Controls->Add(this->bunifuCustomLabel18);
			this->Addpanel->Controls->Add(this->bunifuCustomLabel19);
			this->Addpanel->Controls->Add(this->bunifuThinButton215);
			this->Addpanel->Location = System::Drawing::Point(0, 0);
			this->Addpanel->Name = L"Addpanel";
			this->Addpanel->Size = System::Drawing::Size(238, 690);
			this->Addpanel->TabIndex = 62;
			this->Addpanel->Visible = false;
			// 
			// bunifuCustomLabel20
			// 
			this->bunifuCustomLabel20->AutoSize = true;
			this->bunifuCustomLabel20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel20->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel20->Location = System::Drawing::Point(133, 526);
			this->bunifuCustomLabel20->Name = L"bunifuCustomLabel20";
			this->bunifuCustomLabel20->Size = System::Drawing::Size(45, 22);
			this->bunifuCustomLabel20->TabIndex = 79;
			this->bunifuCustomLabel20->Text = L"Info";
			// 
			// bunifuImageButton5
			// 
			this->bunifuImageButton5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuImageButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton5.Image")));
			this->bunifuImageButton5->ImageActive = nullptr;
			this->bunifuImageButton5->Location = System::Drawing::Point(191, 528);
			this->bunifuImageButton5->Name = L"bunifuImageButton5";
			this->bunifuImageButton5->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton5->TabIndex = 78;
			this->bunifuImageButton5->TabStop = false;
			this->bunifuImageButton5->Zoom = 10;
			this->bunifuImageButton5->Click += gcnew System::EventHandler(this, &Concerts::bunifuImageButton5_Click);
			// 
			// bunifuImageButton4
			// 
			this->bunifuImageButton4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuImageButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton4.Image")));
			this->bunifuImageButton4->ImageActive = nullptr;
			this->bunifuImageButton4->Location = System::Drawing::Point(6, 3);
			this->bunifuImageButton4->Name = L"bunifuImageButton4";
			this->bunifuImageButton4->Size = System::Drawing::Size(226, 25);
			this->bunifuImageButton4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton4->TabIndex = 63;
			this->bunifuImageButton4->TabStop = false;
			this->bunifuImageButton4->Zoom = 10;
			this->bunifuImageButton4->Click += gcnew System::EventHandler(this, &Concerts::bunifuImageButton4_Click);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox8->Location = System::Drawing::Point(32, 561);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(175, 20);
			this->textBox8->TabIndex = 61;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// bunifuThinButton28
			// 
			this->bunifuThinButton28->ActiveBorderThickness = 2;
			this->bunifuThinButton28->ActiveCornerRadius = 30;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton28.BackgroundImage")));
			this->bunifuThinButton28->ButtonText = L"";
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton28->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleBorderThickness = 2;
			this->bunifuThinButton28->IdleCornerRadius = 30;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton28->Location = System::Drawing::Point(17, 549);
			this->bunifuThinButton28->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton28->Name = L"bunifuThinButton28";
			this->bunifuThinButton28->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton28->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton28->TabIndex = 60;
			this->bunifuThinButton28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox9->Location = System::Drawing::Point(32, 490);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(175, 20);
			this->textBox9->TabIndex = 57;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox10->Location = System::Drawing::Point(32, 414);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(175, 20);
			this->textBox10->TabIndex = 56;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox11->Location = System::Drawing::Point(32, 342);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(175, 20);
			this->textBox11->TabIndex = 55;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox12->Location = System::Drawing::Point(32, 266);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(175, 20);
			this->textBox12->TabIndex = 54;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox13->Location = System::Drawing::Point(32, 195);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(175, 20);
			this->textBox13->TabIndex = 53;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// bunifuThinButton29
			// 
			this->bunifuThinButton29->ActiveBorderThickness = 2;
			this->bunifuThinButton29->ActiveCornerRadius = 30;
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton29.BackgroundImage")));
			this->bunifuThinButton29->ButtonText = L"Add";
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton29->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton29->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleBorderThickness = 2;
			this->bunifuThinButton29->IdleCornerRadius = 30;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton29->Location = System::Drawing::Point(17, 601);
			this->bunifuThinButton29->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton29->Name = L"bunifuThinButton29";
			this->bunifuThinButton29->Size = System::Drawing::Size(203, 58);
			this->bunifuThinButton29->TabIndex = 52;
			this->bunifuThinButton29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton29->Click += gcnew System::EventHandler(this, &Concerts::bunifuThinButton29_Click);
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
			this->textBox14->Location = System::Drawing::Point(32, 117);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(175, 20);
			this->textBox14->TabIndex = 51;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// bunifuCustomLabel8
			// 
			this->bunifuCustomLabel8->AutoSize = true;
			this->bunifuCustomLabel8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel8->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel8->Location = System::Drawing::Point(34, 524);
			this->bunifuCustomLabel8->Name = L"bunifuCustomLabel8";
			this->bunifuCustomLabel8->Size = System::Drawing::Size(62, 22);
			this->bunifuCustomLabel8->TabIndex = 50;
			this->bunifuCustomLabel8->Text = L"Artists";
			// 
			// bunifuThinButton210
			// 
			this->bunifuThinButton210->ActiveBorderThickness = 2;
			this->bunifuThinButton210->ActiveCornerRadius = 30;
			this->bunifuThinButton210->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton210->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton210->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton210->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton210->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton210.BackgroundImage")));
			this->bunifuThinButton210->ButtonText = L"";
			this->bunifuThinButton210->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton210->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton210->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton210->IdleBorderThickness = 2;
			this->bunifuThinButton210->IdleCornerRadius = 30;
			this->bunifuThinButton210->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton210->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton210->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton210->Location = System::Drawing::Point(17, 401);
			this->bunifuThinButton210->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton210->Name = L"bunifuThinButton210";
			this->bunifuThinButton210->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton210->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton210->TabIndex = 49;
			this->bunifuThinButton210->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel9
			// 
			this->bunifuCustomLabel9->AutoSize = true;
			this->bunifuCustomLabel9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel9->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel9->Location = System::Drawing::Point(45, 374);
			this->bunifuCustomLabel9->Name = L"bunifuCustomLabel9";
			this->bunifuCustomLabel9->Size = System::Drawing::Size(159, 22);
			this->bunifuCustomLabel9->TabIndex = 48;
			this->bunifuCustomLabel9->Text = L"Price Coefficient";
			// 
			// bunifuCustomLabel11
			// 
			this->bunifuCustomLabel11->AutoSize = true;
			this->bunifuCustomLabel11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel11->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel11->Location = System::Drawing::Point(61, 77);
			this->bunifuCustomLabel11->Name = L"bunifuCustomLabel11";
			this->bunifuCustomLabel11->Size = System::Drawing::Size(110, 22);
			this->bunifuCustomLabel11->TabIndex = 46;
			this->bunifuCustomLabel11->Text = L"Concert ID";
			// 
			// bunifuThinButton211
			// 
			this->bunifuThinButton211->ActiveBorderThickness = 2;
			this->bunifuThinButton211->ActiveCornerRadius = 30;
			this->bunifuThinButton211->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton211->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton211->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton211->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton211->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton211.BackgroundImage")));
			this->bunifuThinButton211->ButtonText = L"";
			this->bunifuThinButton211->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton211->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton211->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton211->IdleBorderThickness = 2;
			this->bunifuThinButton211->IdleCornerRadius = 30;
			this->bunifuThinButton211->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton211->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton211->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton211->Location = System::Drawing::Point(17, 104);
			this->bunifuThinButton211->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton211->Name = L"bunifuThinButton211";
			this->bunifuThinButton211->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton211->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton211->TabIndex = 45;
			this->bunifuThinButton211->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel13
			// 
			this->bunifuCustomLabel13->AutoSize = true;
			this->bunifuCustomLabel13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel13->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel13->Location = System::Drawing::Point(80, 25);
			this->bunifuCustomLabel13->Name = L"bunifuCustomLabel13";
			this->bunifuCustomLabel13->Size = System::Drawing::Size(71, 32);
			this->bunifuCustomLabel13->TabIndex = 44;
			this->bunifuCustomLabel13->Text = L"Add";
			// 
			// bunifuCustomLabel15
			// 
			this->bunifuCustomLabel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel15->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel15->Location = System::Drawing::Point(34, 116);
			this->bunifuCustomLabel15->Name = L"bunifuCustomLabel15";
			this->bunifuCustomLabel15->Size = System::Drawing::Size(173, 22);
			this->bunifuCustomLabel15->TabIndex = 39;
			this->bunifuCustomLabel15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton212
			// 
			this->bunifuThinButton212->ActiveBorderThickness = 2;
			this->bunifuThinButton212->ActiveCornerRadius = 30;
			this->bunifuThinButton212->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton212->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton212->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton212->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton212->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton212.BackgroundImage")));
			this->bunifuThinButton212->ButtonText = L"";
			this->bunifuThinButton212->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton212->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton212->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton212->IdleBorderThickness = 2;
			this->bunifuThinButton212->IdleCornerRadius = 30;
			this->bunifuThinButton212->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton212->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton212->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton212->Location = System::Drawing::Point(17, 477);
			this->bunifuThinButton212->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton212->Name = L"bunifuThinButton212";
			this->bunifuThinButton212->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton212->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton212->TabIndex = 37;
			this->bunifuThinButton212->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel16
			// 
			this->bunifuCustomLabel16->AutoSize = true;
			this->bunifuCustomLabel16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel16->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel16->Location = System::Drawing::Point(49, 450);
			this->bunifuCustomLabel16->Name = L"bunifuCustomLabel16";
			this->bunifuCustomLabel16->Size = System::Drawing::Size(147, 22);
			this->bunifuCustomLabel16->TabIndex = 36;
			this->bunifuCustomLabel16->Text = L"Tickets amount";
			// 
			// bunifuThinButton213
			// 
			this->bunifuThinButton213->ActiveBorderThickness = 2;
			this->bunifuThinButton213->ActiveCornerRadius = 30;
			this->bunifuThinButton213->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton213->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton213->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton213->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton213->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton213.BackgroundImage")));
			this->bunifuThinButton213->ButtonText = L"";
			this->bunifuThinButton213->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton213->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton213->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton213->IdleBorderThickness = 2;
			this->bunifuThinButton213->IdleCornerRadius = 30;
			this->bunifuThinButton213->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton213->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton213->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton213->Location = System::Drawing::Point(17, 253);
			this->bunifuThinButton213->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton213->Name = L"bunifuThinButton213";
			this->bunifuThinButton213->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton213->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton213->TabIndex = 35;
			this->bunifuThinButton213->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel17
			// 
			this->bunifuCustomLabel17->AutoSize = true;
			this->bunifuCustomLabel17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel17->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel17->Location = System::Drawing::Point(54, 304);
			this->bunifuCustomLabel17->Name = L"bunifuCustomLabel17";
			this->bunifuCustomLabel17->Size = System::Drawing::Size(139, 22);
			this->bunifuCustomLabel17->TabIndex = 34;
			this->bunifuCustomLabel17->Text = L"City / Country";
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
			this->bunifuThinButton214->Location = System::Drawing::Point(17, 329);
			this->bunifuThinButton214->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton214->Name = L"bunifuThinButton214";
			this->bunifuThinButton214->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton214->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton214->TabIndex = 33;
			this->bunifuThinButton214->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel18
			// 
			this->bunifuCustomLabel18->AutoSize = true;
			this->bunifuCustomLabel18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel18->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel18->Location = System::Drawing::Point(92, 230);
			this->bunifuCustomLabel18->Name = L"bunifuCustomLabel18";
			this->bunifuCustomLabel18->Size = System::Drawing::Size(56, 22);
			this->bunifuCustomLabel18->TabIndex = 32;
			this->bunifuCustomLabel18->Text = L"Date";
			// 
			// bunifuCustomLabel19
			// 
			this->bunifuCustomLabel19->AutoSize = true;
			this->bunifuCustomLabel19->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel19->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel19->Location = System::Drawing::Point(48, 154);
			this->bunifuCustomLabel19->Name = L"bunifuCustomLabel19";
			this->bunifuCustomLabel19->Size = System::Drawing::Size(145, 22);
			this->bunifuCustomLabel19->TabIndex = 31;
			this->bunifuCustomLabel19->Text = L"Concert name";
			// 
			// bunifuThinButton215
			// 
			this->bunifuThinButton215->ActiveBorderThickness = 2;
			this->bunifuThinButton215->ActiveCornerRadius = 30;
			this->bunifuThinButton215->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton215->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton215->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton215->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton215->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton215.BackgroundImage")));
			this->bunifuThinButton215->ButtonText = L"";
			this->bunifuThinButton215->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton215->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton215->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton215->IdleBorderThickness = 2;
			this->bunifuThinButton215->IdleCornerRadius = 30;
			this->bunifuThinButton215->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton215->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton215->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton215->Location = System::Drawing::Point(17, 181);
			this->bunifuThinButton215->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton215->Name = L"bunifuThinButton215";
			this->bunifuThinButton215->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton215->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton215->TabIndex = 29;
			this->bunifuThinButton215->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->HelpIconButton);
			this->panel1->Controls->Add(this->bunifuCustomLabel7);
			this->panel1->Controls->Add(this->bunifuImageButton2);
			this->panel1->Controls->Add(this->bunifuImageButton1);
			this->panel1->Location = System::Drawing::Point(238, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1000, 74);
			this->panel1->TabIndex = 43;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Concerts::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Concerts::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Concerts::panel1_MouseUp);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->panel9->Controls->Add(this->bunifuMetroTextbox9);
			this->panel9->Location = System::Drawing::Point(732, 33);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(210, 38);
			this->panel9->TabIndex = 83;
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
			this->bunifuMetroTextbox9->Location = System::Drawing::Point(3, 3);
			this->bunifuMetroTextbox9->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox9->Name = L"bunifuMetroTextbox9";
			this->bunifuMetroTextbox9->Size = System::Drawing::Size(202, 32);
			this->bunifuMetroTextbox9->TabIndex = 85;
			this->bunifuMetroTextbox9->Text = L"Check if you want to delete";
			this->bunifuMetroTextbox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// HelpIconButton
			// 
			this->HelpIconButton->BackColor = System::Drawing::Color::Transparent;
			this->HelpIconButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HelpIconButton.Image")));
			this->HelpIconButton->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HelpIconButton.ImageActive")));
			this->HelpIconButton->Location = System::Drawing::Point(9, 12);
			this->HelpIconButton->Name = L"HelpIconButton";
			this->HelpIconButton->Size = System::Drawing::Size(60, 50);
			this->HelpIconButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->HelpIconButton->TabIndex = 63;
			this->HelpIconButton->TabStop = false;
			this->HelpIconButton->Zoom = 10;
			this->HelpIconButton->Click += gcnew System::EventHandler(this, &Concerts::HelpIconButton_Click);
			// 
			// bunifuCustomLabel7
			// 
			this->bunifuCustomLabel7->AutoSize = true;
			this->bunifuCustomLabel7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel7->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel7->Location = System::Drawing::Point(428, 21);
			this->bunifuCustomLabel7->Name = L"bunifuCustomLabel7";
			this->bunifuCustomLabel7->Size = System::Drawing::Size(132, 32);
			this->bunifuCustomLabel7->TabIndex = 62;
			this->bunifuCustomLabel7->Text = L"Concerts";
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(943, 3);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(26, 25);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 30;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			this->bunifuImageButton2->Click += gcnew System::EventHandler(this, &Concerts::bunifuImageButton2_Click);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(975, 6);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 29;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &Concerts::bunifuImageButton1_Click);
			// 
			// concertdataGridView
			// 
			this->concertdataGridView->AllowUserToAddRows = false;
			this->concertdataGridView->AllowUserToDeleteRows = false;
			this->concertdataGridView->AllowUserToResizeColumns = false;
			this->concertdataGridView->AllowUserToResizeRows = false;
			this->concertdataGridView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->concertdataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->concertdataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
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
			this->concertdataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->concertdataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->concertdataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->ConcID,
					this->ConcName, this->ConcDate, this->City, this->Price, this->ConcTicketsAmount, this->Artists, this->Delete
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
			this->concertdataGridView->DefaultCellStyle = dataGridViewCellStyle2;
			this->concertdataGridView->EnableHeadersVisualStyles = false;
			this->concertdataGridView->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->concertdataGridView->Location = System::Drawing::Point(238, 74);
			this->concertdataGridView->Name = L"concertdataGridView";
			this->concertdataGridView->ReadOnly = true;
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
			this->concertdataGridView->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->concertdataGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->concertdataGridView->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->concertdataGridView->Size = System::Drawing::Size(943, 527);
			this->concertdataGridView->TabIndex = 31;
			this->concertdataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Concerts::concertdataGridView_CellContentClick);
			// 
			// ConcID
			// 
			this->ConcID->HeaderText = L"ID";
			this->ConcID->Name = L"ConcID";
			this->ConcID->ReadOnly = true;
			this->ConcID->Width = 110;
			// 
			// ConcName
			// 
			this->ConcName->HeaderText = L"Concert Name";
			this->ConcName->Name = L"ConcName";
			this->ConcName->ReadOnly = true;
			this->ConcName->Width = 130;
			// 
			// ConcDate
			// 
			this->ConcDate->HeaderText = L"Date";
			this->ConcDate->Name = L"ConcDate";
			this->ConcDate->ReadOnly = true;
			this->ConcDate->Width = 130;
			// 
			// City
			// 
			this->City->HeaderText = L"City";
			this->City->Name = L"City";
			this->City->ReadOnly = true;
			this->City->Width = 130;
			// 
			// Price
			// 
			this->Price->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Price->HeaderText = L"Price Coefficient";
			this->Price->Name = L"Price";
			this->Price->ReadOnly = true;
			// 
			// ConcTicketsAmount
			// 
			this->ConcTicketsAmount->HeaderText = L"Tickets Amount";
			this->ConcTicketsAmount->Name = L"ConcTicketsAmount";
			this->ConcTicketsAmount->ReadOnly = true;
			this->ConcTicketsAmount->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Artists
			// 
			this->Artists->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Artists->HeaderText = L"Artists";
			this->Artists->Name = L"Artists";
			this->Artists->ReadOnly = true;
			// 
			// Delete
			// 
			this->Delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Delete->HeaderText = L"Delete";
			this->Delete->Name = L"Delete";
			this->Delete->ReadOnly = true;
			// 
			// panel2
			// 
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(1181, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(57, 690);
			this->panel2->TabIndex = 44;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(238, 601);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(943, 89);
			this->panel3->TabIndex = 45;
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
			this->panel4->Controls->Add(this->bunifuThinButton217);
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(238, 690);
			this->panel4->TabIndex = 63;
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
			this->bunifuThinButton216->Location = System::Drawing::Point(13, 349);
			this->bunifuThinButton216->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton216->Name = L"bunifuThinButton216";
			this->bunifuThinButton216->Size = System::Drawing::Size(203, 58);
			this->bunifuThinButton216->TabIndex = 53;
			this->bunifuThinButton216->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton216->Click += gcnew System::EventHandler(this, &Concerts::bunifuThinButton216_Click);
			// 
			// bunifuThinButton217
			// 
			this->bunifuThinButton217->ActiveBorderThickness = 2;
			this->bunifuThinButton217->ActiveCornerRadius = 30;
			this->bunifuThinButton217->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton217->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton217->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton217->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton217->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton217.BackgroundImage")));
			this->bunifuThinButton217->ButtonText = L"Add";
			this->bunifuThinButton217->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton217->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton217->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleBorderThickness = 2;
			this->bunifuThinButton217->IdleCornerRadius = 30;
			this->bunifuThinButton217->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton217->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton217->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton217->Location = System::Drawing::Point(13, 277);
			this->bunifuThinButton217->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton217->Name = L"bunifuThinButton217";
			this->bunifuThinButton217->Size = System::Drawing::Size(203, 58);
			this->bunifuThinButton217->TabIndex = 52;
			this->bunifuThinButton217->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton217->Click += gcnew System::EventHandler(this, &Concerts::bunifuThinButton217_Click);
			// 
			// Artistsboxlittle
			// 
			this->Artistsboxlittle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Artistsboxlittle->Controls->Add(this->textBox18);
			this->Artistsboxlittle->Controls->Add(this->bunifuImageButton9);
			this->Artistsboxlittle->Controls->Add(this->listBox1);
			this->Artistsboxlittle->Location = System::Drawing::Point(238, 459);
			this->Artistsboxlittle->Name = L"Artistsboxlittle";
			this->Artistsboxlittle->Size = System::Drawing::Size(115, 32);
			this->Artistsboxlittle->TabIndex = 68;
			this->Artistsboxlittle->Visible = false;
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox18->Location = System::Drawing::Point(3, 53);
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox18->Size = System::Drawing::Size(95, 431);
			this->textBox18->TabIndex = 52;
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// bunifuImageButton9
			// 
			this->bunifuImageButton9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuImageButton9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton9.Image")));
			this->bunifuImageButton9->ImageActive = nullptr;
			this->bunifuImageButton9->Location = System::Drawing::Point(49, 3);
			this->bunifuImageButton9->Name = L"bunifuImageButton9";
			this->bunifuImageButton9->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton9->TabIndex = 36;
			this->bunifuImageButton9->TabStop = false;
			this->bunifuImageButton9->Zoom = 10;
			this->bunifuImageButton9->Click += gcnew System::EventHandler(this, &Concerts::bunifuImageButton9_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(8, 59);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(86, 60);
			this->listBox1->TabIndex = 39;
			// 
			// Artistspanel
			// 
			this->Artistspanel->AutoScroll = true;
			this->Artistspanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Artistspanel->Controls->Add(this->textBox19);
			this->Artistspanel->Controls->Add(this->ArtiststextBox);
			this->Artistspanel->Controls->Add(this->label5);
			this->Artistspanel->Location = System::Drawing::Point(238, 488);
			this->Artistspanel->Name = L"Artistspanel";
			this->Artistspanel->Size = System::Drawing::Size(115, 114);
			this->Artistspanel->TabIndex = 67;
			this->Artistspanel->Visible = false;
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->textBox19->Location = System::Drawing::Point(3, 33);
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox19->Size = System::Drawing::Size(95, 451);
			this->textBox19->TabIndex = 52;
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ArtiststextBox
			// 
			this->ArtiststextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ArtiststextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ArtiststextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ArtiststextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->ArtiststextBox->FormattingEnabled = true;
			this->ArtiststextBox->ItemHeight = 20;
			this->ArtiststextBox->Location = System::Drawing::Point(8, 59);
			this->ArtiststextBox->Name = L"ArtiststextBox";
			this->ArtiststextBox->Size = System::Drawing::Size(86, 60);
			this->ArtiststextBox->TabIndex = 39;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label5->Location = System::Drawing::Point(33, 6);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 24);
			this->label5->TabIndex = 37;
			this->label5->Text = L"Info";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->panel5->Controls->Add(this->bunifuImageButton7);
			this->panel5->Controls->Add(this->bunifuCustomLabel26);
			this->panel5->Controls->Add(this->bunifuCustomLabel25);
			this->panel5->Controls->Add(this->bunifuCustomLabel24);
			this->panel5->Controls->Add(this->bunifuCustomLabel23);
			this->panel5->Controls->Add(this->bunifuCustomLabel21);
			this->panel5->Controls->Add(this->bunifuMetroTextbox5);
			this->panel5->Controls->Add(this->bunifuMetroTextbox4);
			this->panel5->Controls->Add(this->bunifuMetroTextbox3);
			this->panel5->Controls->Add(this->bunifuMetroTextbox2);
			this->panel5->Controls->Add(this->bunifuMetroTextbox1);
			this->panel5->Location = System::Drawing::Point(238, 76);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(154, 384);
			this->panel5->TabIndex = 69;
			// 
			// bunifuImageButton7
			// 
			this->bunifuImageButton7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuImageButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton7.Image")));
			this->bunifuImageButton7->ImageActive = nullptr;
			this->bunifuImageButton7->Location = System::Drawing::Point(130, 4);
			this->bunifuImageButton7->Name = L"bunifuImageButton7";
			this->bunifuImageButton7->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton7->TabIndex = 64;
			this->bunifuImageButton7->TabStop = false;
			this->bunifuImageButton7->Zoom = 10;
			this->bunifuImageButton7->Click += gcnew System::EventHandler(this, &Concerts::bunifuImageButton7_Click);
			// 
			// bunifuCustomLabel26
			// 
			this->bunifuCustomLabel26->AutoSize = true;
			this->bunifuCustomLabel26->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel26->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel26->Location = System::Drawing::Point(37, 300);
			this->bunifuCustomLabel26->Name = L"bunifuCustomLabel26";
			this->bunifuCustomLabel26->Size = System::Drawing::Size(87, 20);
			this->bunifuCustomLabel26->TabIndex = 84;
			this->bunifuCustomLabel26->Text = L"Price Coef";
			// 
			// bunifuCustomLabel25
			// 
			this->bunifuCustomLabel25->AutoSize = true;
			this->bunifuCustomLabel25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel25->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel25->Location = System::Drawing::Point(24, 230);
			this->bunifuCustomLabel25->Name = L"bunifuCustomLabel25";
			this->bunifuCustomLabel25->Size = System::Drawing::Size(110, 20);
			this->bunifuCustomLabel25->TabIndex = 83;
			this->bunifuCustomLabel25->Text = L"City / Country";
			// 
			// bunifuCustomLabel24
			// 
			this->bunifuCustomLabel24->AutoSize = true;
			this->bunifuCustomLabel24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel24->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel24->Location = System::Drawing::Point(59, 156);
			this->bunifuCustomLabel24->Name = L"bunifuCustomLabel24";
			this->bunifuCustomLabel24->Size = System::Drawing::Size(45, 20);
			this->bunifuCustomLabel24->TabIndex = 82;
			this->bunifuCustomLabel24->Text = L"Date";
			// 
			// bunifuCustomLabel23
			// 
			this->bunifuCustomLabel23->AutoSize = true;
			this->bunifuCustomLabel23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel23->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel23->Location = System::Drawing::Point(55, 80);
			this->bunifuCustomLabel23->Name = L"bunifuCustomLabel23";
			this->bunifuCustomLabel23->Size = System::Drawing::Size(53, 20);
			this->bunifuCustomLabel23->TabIndex = 81;
			this->bunifuCustomLabel23->Text = L"Name";
			// 
			// bunifuCustomLabel21
			// 
			this->bunifuCustomLabel21->AutoSize = true;
			this->bunifuCustomLabel21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel21->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel21->Location = System::Drawing::Point(69, 6);
			this->bunifuCustomLabel21->Name = L"bunifuCustomLabel21";
			this->bunifuCustomLabel21->Size = System::Drawing::Size(25, 20);
			this->bunifuCustomLabel21->TabIndex = 80;
			this->bunifuCustomLabel21->Text = L"ID";
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
			this->bunifuMetroTextbox5->Location = System::Drawing::Point(1, 328);
			this->bunifuMetroTextbox5->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox5->Name = L"bunifuMetroTextbox5";
			this->bunifuMetroTextbox5->Size = System::Drawing::Size(149, 32);
			this->bunifuMetroTextbox5->TabIndex = 4;
			this->bunifuMetroTextbox5->Text = L"Example:    0.1 - 10";
			this->bunifuMetroTextbox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
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
			this->bunifuMetroTextbox4->Location = System::Drawing::Point(2, 260);
			this->bunifuMetroTextbox4->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox4->Name = L"bunifuMetroTextbox4";
			this->bunifuMetroTextbox4->Size = System::Drawing::Size(148, 32);
			this->bunifuMetroTextbox4->TabIndex = 3;
			this->bunifuMetroTextbox4->Text = L"Example: Oxford, UK";
			this->bunifuMetroTextbox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
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
			this->bunifuMetroTextbox3->Location = System::Drawing::Point(2, 185);
			this->bunifuMetroTextbox3->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox3->Name = L"bunifuMetroTextbox3";
			this->bunifuMetroTextbox3->Size = System::Drawing::Size(148, 32);
			this->bunifuMetroTextbox3->TabIndex = 2;
			this->bunifuMetroTextbox3->Text = L"Example: YY/MM/DD";
			this->bunifuMetroTextbox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
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
			this->bunifuMetroTextbox2->Location = System::Drawing::Point(5, 111);
			this->bunifuMetroTextbox2->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox2->Name = L"bunifuMetroTextbox2";
			this->bunifuMetroTextbox2->Size = System::Drawing::Size(145, 32);
			this->bunifuMetroTextbox2->TabIndex = 1;
			this->bunifuMetroTextbox2->Text = L"Example: Concert";
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
			this->bunifuMetroTextbox1->Location = System::Drawing::Point(5, 30);
			this->bunifuMetroTextbox1->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox1->Name = L"bunifuMetroTextbox1";
			this->bunifuMetroTextbox1->Size = System::Drawing::Size(145, 32);
			this->bunifuMetroTextbox1->TabIndex = 0;
			this->bunifuMetroTextbox1->Text = L"Example: ID01";
			this->bunifuMetroTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->panel6->Controls->Add(this->bunifuCustomLabel29);
			this->panel6->Controls->Add(this->bunifuCustomLabel28);
			this->panel6->Controls->Add(this->bunifuCustomLabel27);
			this->panel6->Controls->Add(this->bunifuMetroTextbox6);
			this->panel6->Controls->Add(this->bunifuMetroTextbox7);
			this->panel6->Controls->Add(this->bunifuMetroTextbox8);
			this->panel6->Location = System::Drawing::Point(353, 454);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(154, 206);
			this->panel6->TabIndex = 70;
			// 
			// bunifuCustomLabel29
			// 
			this->bunifuCustomLabel29->AutoSize = true;
			this->bunifuCustomLabel29->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel29->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel29->Location = System::Drawing::Point(34, 136);
			this->bunifuCustomLabel29->Name = L"bunifuCustomLabel29";
			this->bunifuCustomLabel29->Size = System::Drawing::Size(91, 20);
			this->bunifuCustomLabel29->TabIndex = 87;
			this->bunifuCustomLabel29->Text = L"Info Click +";
			// 
			// bunifuCustomLabel28
			// 
			this->bunifuCustomLabel28->AutoSize = true;
			this->bunifuCustomLabel28->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel28->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel28->Location = System::Drawing::Point(57, 72);
			this->bunifuCustomLabel28->Name = L"bunifuCustomLabel28";
			this->bunifuCustomLabel28->Size = System::Drawing::Size(44, 20);
			this->bunifuCustomLabel28->TabIndex = 86;
			this->bunifuCustomLabel28->Text = L"Artist";
			// 
			// bunifuCustomLabel27
			// 
			this->bunifuCustomLabel27->AutoSize = true;
			this->bunifuCustomLabel27->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel27->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel27->Location = System::Drawing::Point(21, 9);
			this->bunifuCustomLabel27->Name = L"bunifuCustomLabel27";
			this->bunifuCustomLabel27->Size = System::Drawing::Size(116, 20);
			this->bunifuCustomLabel27->TabIndex = 85;
			this->bunifuCustomLabel27->Text = L"Tickets amount";
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
			this->bunifuMetroTextbox6->Location = System::Drawing::Point(3, 160);
			this->bunifuMetroTextbox6->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox6->Name = L"bunifuMetroTextbox6";
			this->bunifuMetroTextbox6->Size = System::Drawing::Size(149, 32);
			this->bunifuMetroTextbox6->TabIndex = 4;
			this->bunifuMetroTextbox6->Text = L"Example:    Info";
			this->bunifuMetroTextbox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
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
			this->bunifuMetroTextbox7->Location = System::Drawing::Point(4, 96);
			this->bunifuMetroTextbox7->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox7->Name = L"bunifuMetroTextbox7";
			this->bunifuMetroTextbox7->Size = System::Drawing::Size(148, 32);
			this->bunifuMetroTextbox7->TabIndex = 3;
			this->bunifuMetroTextbox7->Text = L"Example: Queen";
			this->bunifuMetroTextbox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
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
			this->bunifuMetroTextbox8->Location = System::Drawing::Point(4, 33);
			this->bunifuMetroTextbox8->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMetroTextbox8->Name = L"bunifuMetroTextbox8";
			this->bunifuMetroTextbox8->Size = System::Drawing::Size(148, 32);
			this->bunifuMetroTextbox8->TabIndex = 2;
			this->bunifuMetroTextbox8->Text = L"Example:  158";
			this->bunifuMetroTextbox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// panel7
			// 
			this->panel7->AutoScroll = true;
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->panel7->Controls->Add(this->textBox15);
			this->panel7->Controls->Add(this->label1);
			this->panel7->Location = System::Drawing::Point(877, 145);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(202, 177);
			this->panel7->TabIndex = 71;
			this->panel7->Visible = false;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->ForeColor = System::Drawing::Color::White;
			this->textBox15->Location = System::Drawing::Point(3, 33);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox15->Size = System::Drawing::Size(182, 431);
			this->textBox15->TabIndex = 52;
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label1->Location = System::Drawing::Point(71, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 24);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Artists";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->panel8->Controls->Add(this->bunifuImageButton8);
			this->panel8->Location = System::Drawing::Point(877, 116);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(202, 32);
			this->panel8->TabIndex = 72;
			this->panel8->Visible = false;
			// 
			// bunifuImageButton8
			// 
			this->bunifuImageButton8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuImageButton8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton8.Image")));
			this->bunifuImageButton8->ImageActive = nullptr;
			this->bunifuImageButton8->Location = System::Drawing::Point(93, 3);
			this->bunifuImageButton8->Name = L"bunifuImageButton8";
			this->bunifuImageButton8->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton8->TabIndex = 36;
			this->bunifuImageButton8->TabStop = false;
			this->bunifuImageButton8->Zoom = 10;
			this->bunifuImageButton8->Click += gcnew System::EventHandler(this, &Concerts::bunifuImageButton8_Click);
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
			this->bunifuCheckbox1->Location = System::Drawing::Point(1154, 92);
			this->bunifuCheckbox1->Name = L"bunifuCheckbox1";
			this->bunifuCheckbox1->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox1->TabIndex = 73;
			// 
			// Concerts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->ClientSize = System::Drawing::Size(1238, 690);
			this->Controls->Add(this->bunifuCheckbox1);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->Artistsboxlittle);
			this->Controls->Add(this->Artistspanel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->concertdataGridView);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->Addpanel);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->Editpanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Concerts";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &Concerts::Concerts_Load);
			this->Editpanel->ResumeLayout(false);
			this->Editpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->EndInit();
			this->Addpanel->ResumeLayout(false);
			this->Addpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HelpIconButton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->concertdataGridView))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Artistsboxlittle->ResumeLayout(false);
			this->Artistsboxlittle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton9))->EndInit();
			this->Artistspanel->ResumeLayout(false);
			this->Artistspanel->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton7))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton8))->EndInit();
			this->ResumeLayout(false);
		}
#pragma endregion
		
		void concertList()
		{
			String^ print;
			concertdataGridView->Rows->Clear();
			for (int i = 0; i < glob::conc.conc_number; i++)
			{
				concertdataGridView->Rows->Add();
				concertdataGridView->Rows[i]->Height = 50;
				print = gcnew String(glob::conc.Concerts[i].conc_ID.c_str());
				concertdataGridView[0, i]->Value = print;
				print = gcnew String(glob::conc.Concerts[i].conc_name.c_str());
				concertdataGridView[1, i]->Value = print;
				print = gcnew String(glob::conc.Concerts[i].conc_date.c_str());
				concertdataGridView[2, i]->Value = print;
				print = gcnew String(glob::conc.Concerts[i].conc_place.c_str());
				concertdataGridView[3, i]->Value = print;
				concertdataGridView[4, i]->Value = glob::conc.Concerts[i].conc_ticket_price_coef;
				concertdataGridView[5, i]->Value = glob::conc.Concerts[i].conc_tickets;
				concertdataGridView[6, i]->Value = "Show";
				concertdataGridView[7, i]->Value = "Delete";
			}
		}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void Concerts_Load(System::Object^  sender, System::EventArgs^  e) {
		 this->dragging = false;
		 panel5->Visible = false;
		 panel6->Visible = false;
		 panel7->Visible = false;
		 panel8->Visible = false;
		 panel9->Visible = false;
	 }
	private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		if (this->dragging)
		{
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X,
			currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		this->dragging = false;
	}
private: System::Void bunifuImageButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void bunifuThinButton217_Click(System::Object^  sender, System::EventArgs^  e) {
	panel4->Visible = false;
	Addpanel->Visible = true;
}
private: System::Void bunifuThinButton216_Click(System::Object^  sender, System::EventArgs^  e) {
	panel4->Visible = false;
	Editpanel->Visible = true;
}
private: System::Void bunifuImageButton3_Click(System::Object^  sender, System::EventArgs^  e) {
	panel4->Visible = true;
	Editpanel->Visible = false;
}
private: System::Void bunifuImageButton4_Click(System::Object^  sender, System::EventArgs^  e) {
	panel4->Visible = true;
	Addpanel->Visible = false;
}
private: System::Void concertdataGridView_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	String^ input;
		glob::lineC = concertdataGridView->CurrentRow->Index;
		input = gcnew String(glob::conc.Concerts[glob::lineC].conc_ID.c_str());
		textBox1->Text = input;
		input = gcnew String(glob::conc.Concerts[glob::lineC].conc_name.c_str());
		textBox2->Text = input; 
		input = gcnew String(glob::conc.Concerts[glob::lineC].conc_date.c_str());
		textBox3->Text = input;
		input = gcnew String(glob::conc.Concerts[glob::lineC].conc_place.c_str());
		textBox4->Text = input; 
		input = gcnew String(glob::conc.Concerts[glob::lineC].conc_artist.c_str());
		textBox7->Text = input;	
		input = gcnew String(glob::conc.Concerts[glob::lineC].conc_info.c_str());
		textBox19->Text = input;
		textBox5->Text = glob::conc.Concerts[glob::lineC].conc_ticket_price_coef.ToString();
		textBox6->Text = glob::conc.Concerts[glob::lineC].conc_tickets.ToString();
		if (e->ColumnIndex == 6)
		{
			panel7->Visible = true;
			panel8->Visible = true;
			textBox15->Text = "";
			input = gcnew String(glob::conc.Concerts[glob::lineC].conc_artist.c_str());
			textBox15->Text = textBox15->Text + input + Environment::NewLine;
		}
		if (e->ColumnIndex == 7 && bunifuCheckbox1->Checked == true)
		{
			for (int i = glob::lineC; i < glob::conc.conc_number - 1; i++)
			{	
				glob::conc.Concerts[i] = glob::conc.Concerts[i + 1];
			}
			glob::conc.conc_number--;
			glob::conc.SortDate();
			glob::conc.PrintToFile();
			concertdataGridView->Rows->Clear();
			concertList();
		}	
}
private: System::Void bunifuThinButton29_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ID, ^Name, ^Date, ^Place, ^Artists, ^Info;
	std::string id, name, date, place, artists, info;
	double ticket_price_coef;
	int tickets;		
	if (textBox14->Text != "" &&
	    textBox13->Text != ""&&
	    textBox12->Text != ""&&
	    textBox11->Text != ""&&
	    textBox10->Text != ""&&
	    textBox9->Text != ""&&
	    textBox8->Text != ""&&
	    textBox19->Text != "")
	{
		ID = textBox14->Text;
		Name = textBox13->Text;
		Date = textBox12->Text;
		Place = textBox11->Text;
		Artists = textBox8->Text;
		Info = textBox19->Text;

		ticket_price_coef = double::Parse(textBox10->Text);
		tickets = int::Parse(textBox9->Text);

		id = glob::conc.convert(ID);
		name = glob::conc.convert(Name);
		date = glob::conc.convert(Date);
		place = glob::conc.convert(Place);
		artists = glob::conc.convert(Artists);
		info = glob::conc.convert(Info);
		glob::conc.NewConcert(id, name, place, artists, info, date, ticket_price_coef, tickets);

		textBox14->Text = "";
		textBox13->Text = "";
		textBox12->Text = "";
		textBox11->Text = "";
		textBox10->Text = "";
		textBox9->Text = "";
		textBox8->Text = "";
		textBox19->Text = "";
		concertdataGridView->Rows->Clear();
		Artistsboxlittle->Visible = false;
		Artistspanel->Visible = false;
		glob::conc.SortDate();
		glob::conc.PrintToFile();
		concertList();
	}
	else
		MessageBox::Show("Text boxes cannot be empty.");
}		
private: System::Void bunifuThinButton26_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ID, ^Name, ^Date, ^Place, ^Artists, ^Info;
	std::string id, name, date, place, artists, info;
	double ticket_price_coef;
	int tickets;
	if (textBox1->Text != ""&&
		textBox2->Text != ""&&
		textBox3->Text != ""&&
		textBox4->Text != ""&&
		textBox7->Text != ""&&
		textBox19->Text != ""&&
		textBox5->Text != ""&&
		textBox6->Text != "")
	{
		glob::lineC = concertdataGridView->CurrentRow->Index;
		ID = textBox1->Text;
		Name = textBox2->Text;
		Date = textBox3->Text;
		Place = textBox4->Text;
		Artists = textBox7->Text;
		Info = textBox19->Text;
		ticket_price_coef = double::Parse(textBox5->Text);
		tickets = int::Parse(textBox6->Text);
		
		glob::conc.Concerts[glob::lineC].conc_ID = glob::conc.convert(ID);
		glob::conc.Concerts[glob::lineC].conc_name = glob::conc.convert(Name);
		glob::conc.Concerts[glob::lineC].conc_date = glob::conc.convert(Date);
		glob::conc.Concerts[glob::lineC].conc_place = glob::conc.convert(Place);
		glob::conc.Concerts[glob::lineC].conc_artist = glob::conc.convert(Artists);
		glob::conc.Concerts[glob::lineC].conc_info = glob::conc.convert(Info);
		glob::conc.Concerts[glob::lineC].conc_ticket_price_coef = ticket_price_coef;
		glob::conc.Concerts[glob::lineC].conc_tickets = tickets;
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox7->Text = "";
		textBox19->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		glob::conc.SortDate();
		glob::conc.PrintToFile();
		concertList();
	}
	else
		MessageBox::Show("Text boxes cannot be empty.");
}
private: System::Void bunifuImageButton6_Click(System::Object^  sender, System::EventArgs^  e) {
	Artistsboxlittle->Visible = true;
	Artistspanel->Visible = true;
}
private: System::Void bunifuImageButton5_Click(System::Object^  sender, System::EventArgs^  e) {
	Artistsboxlittle->Visible = true;
	Artistspanel->Visible = true;
}
private: System::Void bunifuImageButton9_Click(System::Object^  sender, System::EventArgs^  e) {
	Artistsboxlittle->Visible = false;
	Artistspanel->Visible = false;
}
private: System::Void HelpIconButton_Click(System::Object^  sender, System::EventArgs^  e) {
	panel5->Visible = true;
	panel6->Visible = true;
	panel9->Visible = true;
}
private: System::Void bunifuImageButton7_Click(System::Object^  sender, System::EventArgs^  e) {
	panel5->Visible = false;
	panel6->Visible = false;
	panel9->Visible = false;
}

private: System::Void bunifuImageButton8_Click(System::Object^  sender, System::EventArgs^  e) {
	panel7->Visible = false;
	panel8->Visible = false;
}
};
}
