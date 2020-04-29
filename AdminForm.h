#pragma once
#include "Concerts.h"
#include "Festivals.h"
#include "People.h"
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
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
		{
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
private: bool dragging;
private: Point offset;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Panel^  panel1;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel10;
private: ns1::BunifuThinButton2^  bunifuThinButton26;
private: System::Windows::Forms::Panel^  Editpanel;
private: ns1::BunifuImageButton^  bunifuImageButton2;
private: ns1::BunifuImageButton^  bunifuImageButton1;
private: ns1::BunifuThinButton2^  bunifuThinButton25;
private: ns1::BunifuThinButton2^  bunifuThinButton24;
private: ns1::BunifuThinButton2^  bunifuThinButton23;
private: ns1::BunifuThinButton2^  bunifuThinButton22;
private: ns1::BunifuThinButton2^  bunifuThinButton21;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel2;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel1;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel7;
private: System::Windows::Forms::DataGridView^  admindataGridView;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ConcID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  CFName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ConcDate;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  City;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ConcTicketsAmount;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Price;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
private: System::Windows::Forms::DataGridView^  peopleGridView;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  PersName;	
private: System::Windows::Forms::DataGridViewTextBoxColumn^  PersSecName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  PersEmail;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  CardName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  CardSecondName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  CardExpiration;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  CardNumber;
private: ns1::BunifuThinButton2^  bunifuThinButton27;
private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton2 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton1 = (gcnew ns1::BunifuImageButton());
			this->bunifuCustomLabel10 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton26 = (gcnew ns1::BunifuThinButton2());
			this->Editpanel = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton27 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel2 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel1 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel7 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton25 = (gcnew ns1::BunifuThinButton2());
			this->bunifuThinButton24 = (gcnew ns1::BunifuThinButton2());
			this->bunifuThinButton23 = (gcnew ns1::BunifuThinButton2());
			this->bunifuThinButton22 = (gcnew ns1::BunifuThinButton2());
			this->bunifuThinButton21 = (gcnew ns1::BunifuThinButton2());
			this->admindataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->ConcID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CFName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ConcDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->City = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ConcTicketsAmount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->peopleGridView = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PersName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PersSecName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PersEmail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CardName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CardSecondName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CardExpiration = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CardNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->Editpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->admindataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->peopleGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(238, 593);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(912, 89);
			this->panel3->TabIndex = 50;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panel1->Controls->Add(this->bunifuImageButton2);
			this->panel1->Controls->Add(this->bunifuImageButton1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(238, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(912, 74);
			this->panel1->TabIndex = 48;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminForm::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminForm::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminForm::panel1_MouseUp);
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(856, 3);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(26, 25);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 32;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			this->bunifuImageButton2->Click += gcnew System::EventHandler(this, &AdminForm::bunifuImageButton2_Click);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(888, 6);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 31;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &AdminForm::bunifuImageButton1_Click);
			// 
			// bunifuCustomLabel10
			// 
			this->bunifuCustomLabel10->AutoSize = true;
			this->bunifuCustomLabel10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel10->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel10->Location = System::Drawing::Point(21, 24);
			this->bunifuCustomLabel10->Name = L"bunifuCustomLabel10";
			this->bunifuCustomLabel10->Size = System::Drawing::Size(201, 32);
			this->bunifuCustomLabel10->TabIndex = 44;
			this->bunifuCustomLabel10->Text = L"Admin\'s panel";
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
			this->bunifuThinButton26->ButtonText = L"Enter";
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
			this->bunifuThinButton26->Location = System::Drawing::Point(19, 531);
			this->bunifuThinButton26->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton26->Name = L"bunifuThinButton26";
			this->bunifuThinButton26->Size = System::Drawing::Size(203, 58);
			this->bunifuThinButton26->TabIndex = 52;
			this->bunifuThinButton26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton26->Click += gcnew System::EventHandler(this, &AdminForm::bunifuThinButton26_Click);
			// 
			// Editpanel
			// 
			this->Editpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->Editpanel->Controls->Add(this->bunifuThinButton27);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel2);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel1);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel7);
			this->Editpanel->Controls->Add(this->bunifuThinButton25);
			this->Editpanel->Controls->Add(this->bunifuThinButton24);
			this->Editpanel->Controls->Add(this->bunifuThinButton23);
			this->Editpanel->Controls->Add(this->bunifuThinButton22);
			this->Editpanel->Controls->Add(this->bunifuThinButton21);
			this->Editpanel->Controls->Add(this->bunifuThinButton26);
			this->Editpanel->Controls->Add(this->bunifuCustomLabel10);
			this->Editpanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->Editpanel->Location = System::Drawing::Point(0, 0);
			this->Editpanel->Name = L"Editpanel";
			this->Editpanel->Size = System::Drawing::Size(238, 682);
			this->Editpanel->TabIndex = 47;
			// 
			// bunifuThinButton27
			// 
			this->bunifuThinButton27->ActiveBorderThickness = 2;
			this->bunifuThinButton27->ActiveCornerRadius = 30;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton27.BackgroundImage")));
			this->bunifuThinButton27->ButtonText = L"Open CF Report";
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton27->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleBorderThickness = 2;
			this->bunifuThinButton27->IdleCornerRadius = 30;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton27->Location = System::Drawing::Point(29, 609);
			this->bunifuThinButton27->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton27->Name = L"bunifuThinButton27";
			this->bunifuThinButton27->Size = System::Drawing::Size(182, 49);
			this->bunifuThinButton27->TabIndex = 66;
			this->bunifuThinButton27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton27->Click += gcnew System::EventHandler(this, &AdminForm::bunifuThinButton27_Click);
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel2->Location = System::Drawing::Point(76, 434);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(83, 24);
			this->bunifuCustomLabel2->TabIndex = 65;
			this->bunifuCustomLabel2->Text = L"People";
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel1->Location = System::Drawing::Point(74, 254);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(92, 24);
			this->bunifuCustomLabel1->TabIndex = 64;
			this->bunifuCustomLabel1->Text = L"Festivals";
			// 
			// bunifuCustomLabel7
			// 
			this->bunifuCustomLabel7->AutoSize = true;
			this->bunifuCustomLabel7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel7->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel7->Location = System::Drawing::Point(73, 81);
			this->bunifuCustomLabel7->Name = L"bunifuCustomLabel7";
			this->bunifuCustomLabel7->Size = System::Drawing::Size(103, 24);
			this->bunifuCustomLabel7->TabIndex = 63;
			this->bunifuCustomLabel7->Text = L"Concerts";
			// 
			// bunifuThinButton25
			// 
			this->bunifuThinButton25->ActiveBorderThickness = 2;
			this->bunifuThinButton25->ActiveCornerRadius = 30;
			this->bunifuThinButton25->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton25->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton25->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton25.BackgroundImage")));
			this->bunifuThinButton25->ButtonText = L"Show";
			this->bunifuThinButton25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton25->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton25->IdleBorderThickness = 2;
			this->bunifuThinButton25->IdleCornerRadius = 30;
			this->bunifuThinButton25->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton25->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton25->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton25->Location = System::Drawing::Point(19, 463);
			this->bunifuThinButton25->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton25->Name = L"bunifuThinButton25";
			this->bunifuThinButton25->Size = System::Drawing::Size(203, 58);
			this->bunifuThinButton25->TabIndex = 57;
			this->bunifuThinButton25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton25->Click += gcnew System::EventHandler(this, &AdminForm::bunifuThinButton25_Click);
			// 
			// bunifuThinButton24
			// 
			this->bunifuThinButton24->ActiveBorderThickness = 2;
			this->bunifuThinButton24->ActiveCornerRadius = 30;
			this->bunifuThinButton24->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton24->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton24->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton24.BackgroundImage")));
			this->bunifuThinButton24->ButtonText = L"Enter";
			this->bunifuThinButton24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton24->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton24->IdleBorderThickness = 2;
			this->bunifuThinButton24->IdleCornerRadius = 30;
			this->bunifuThinButton24->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton24->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton24->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton24->Location = System::Drawing::Point(19, 351);
			this->bunifuThinButton24->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton24->Name = L"bunifuThinButton24";
			this->bunifuThinButton24->Size = System::Drawing::Size(203, 58);
			this->bunifuThinButton24->TabIndex = 56;
			this->bunifuThinButton24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton24->Click += gcnew System::EventHandler(this, &AdminForm::bunifuThinButton24_Click);
			// 
			// bunifuThinButton23
			// 
			this->bunifuThinButton23->ActiveBorderThickness = 2;
			this->bunifuThinButton23->ActiveCornerRadius = 30;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton23.BackgroundImage")));
			this->bunifuThinButton23->ButtonText = L"Show";
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton23->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleBorderThickness = 2;
			this->bunifuThinButton23->IdleCornerRadius = 30;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton23->Location = System::Drawing::Point(19, 283);
			this->bunifuThinButton23->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton23->Name = L"bunifuThinButton23";
			this->bunifuThinButton23->Size = System::Drawing::Size(203, 58);
			this->bunifuThinButton23->TabIndex = 55;
			this->bunifuThinButton23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton23->Click += gcnew System::EventHandler(this, &AdminForm::bunifuThinButton23_Click);
			// 
			// bunifuThinButton22
			// 
			this->bunifuThinButton22->ActiveBorderThickness = 2;
			this->bunifuThinButton22->ActiveCornerRadius = 30;
			this->bunifuThinButton22->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton22->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton22->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton22.BackgroundImage")));
			this->bunifuThinButton22->ButtonText = L"Enter";
			this->bunifuThinButton22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton22->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleBorderThickness = 2;
			this->bunifuThinButton22->IdleCornerRadius = 30;
			this->bunifuThinButton22->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton22->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton22->Location = System::Drawing::Point(19, 178);
			this->bunifuThinButton22->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton22->Name = L"bunifuThinButton22";
			this->bunifuThinButton22->Size = System::Drawing::Size(203, 58);
			this->bunifuThinButton22->TabIndex = 54;
			this->bunifuThinButton22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton22->Click += gcnew System::EventHandler(this, &AdminForm::bunifuThinButton22_Click);
			// 
			// bunifuThinButton21
			// 
			this->bunifuThinButton21->ActiveBorderThickness = 2;
			this->bunifuThinButton21->ActiveCornerRadius = 30;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton21.BackgroundImage")));
			this->bunifuThinButton21->ButtonText = L"Show";
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton21->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleBorderThickness = 2;
			this->bunifuThinButton21->IdleCornerRadius = 30;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton21->Location = System::Drawing::Point(19, 110);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->Size = System::Drawing::Size(203, 58);
			this->bunifuThinButton21->TabIndex = 53;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton21->Click += gcnew System::EventHandler(this, &AdminForm::bunifuThinButton21_Click);
			// 
			// admindataGridView
			// 
			this->admindataGridView->AllowUserToAddRows = false;
			this->admindataGridView->AllowUserToDeleteRows = false;
			this->admindataGridView->AllowUserToResizeColumns = false;
			this->admindataGridView->AllowUserToResizeRows = false;
			this->admindataGridView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->admindataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->admindataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
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
			this->admindataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->admindataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->admindataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->ConcID,
					this->CFName, this->ConcDate, this->City, this->ConcTicketsAmount, this->Price, this->Column1
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
			this->admindataGridView->DefaultCellStyle = dataGridViewCellStyle2;
			this->admindataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->admindataGridView->EnableHeadersVisualStyles = false;
			this->admindataGridView->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->admindataGridView->Location = System::Drawing::Point(238, 74);
			this->admindataGridView->Name = L"admindataGridView";
			this->admindataGridView->ReadOnly = true;
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
			this->admindataGridView->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->admindataGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->admindataGridView->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->admindataGridView->Size = System::Drawing::Size(912, 519);
			this->admindataGridView->TabIndex = 51;
			// 
			// ConcID
			// 
			this->ConcID->HeaderText = L"ID";
			this->ConcID->Name = L"ConcID";
			this->ConcID->ReadOnly = true;
			// 
			// CFName
			// 
			this->CFName->HeaderText = L"Name";
			this->CFName->Name = L"CFName";
			this->CFName->ReadOnly = true;
			this->CFName->Width = 130;
			// 
			// ConcDate
			// 
			this->ConcDate->HeaderText = L"Date";
			this->ConcDate->Name = L"ConcDate";
			this->ConcDate->ReadOnly = true;
			this->ConcDate->Width = 135;
			// 
			// City
			// 
			this->City->HeaderText = L"City";
			this->City->Name = L"City";
			this->City->ReadOnly = true;
			this->City->Width = 135;
			// 
			// ConcTicketsAmount
			// 
			this->ConcTicketsAmount->HeaderText = L"Tickets Amount";
			this->ConcTicketsAmount->Name = L"ConcTicketsAmount";
			this->ConcTicketsAmount->ReadOnly = true;
			this->ConcTicketsAmount->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Price
			// 
			this->Price->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Price->HeaderText = L"Price Coefficient";
			this->Price->Name = L"Price";
			this->Price->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Camping Price Coefficient";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// panel2
			// 
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(1080, 74);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(70, 519);
			this->panel2->TabIndex = 51;
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
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->peopleGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->peopleGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->peopleGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn1,
					this->PersName, this->PersSecName, this->PersEmail, this->CardName, this->CardSecondName, this->CardExpiration, this->CardNumber
			});
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->peopleGridView->DefaultCellStyle = dataGridViewCellStyle6;
			this->peopleGridView->EnableHeadersVisualStyles = false;
			this->peopleGridView->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->peopleGridView->Location = System::Drawing::Point(238, 75);
			this->peopleGridView->Name = L"peopleGridView";
			this->peopleGridView->ReadOnly = true;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->peopleGridView->RowHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->peopleGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->peopleGridView->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->peopleGridView->Size = System::Drawing::Size(941, 518);
			this->peopleGridView->TabIndex = 52;
			this->peopleGridView->Visible = false;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
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
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(1150, 682);
			this->ControlBox = false;
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->peopleGridView);
			this->Controls->Add(this->admindataGridView);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Editpanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AdminForm";
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->Editpanel->ResumeLayout(false);
			this->Editpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->admindataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->peopleGridView))->EndInit();
			this->ResumeLayout(false);
		}
#pragma endregion
	private: System::Void AdminForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		this->dragging = false;
		glob::conc.ReadFromFile();
		glob::conc.SortDate();
		glob::fest.ReadFromFile();
		glob::fest.SortDate();
		glob::pers.ReadPersonDataFromFile();
		glob::pers.SortPersonName();
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
	private: System::Void bunifuThinButton22_Click(System::Object^  sender, System::EventArgs^  e) {
		Concerts^ input = gcnew Concerts();
		input->Show();
	}
	private: System::Void bunifuThinButton24_Click(System::Object^  sender, System::EventArgs^  e) {
		Festivals^ input = gcnew Festivals();
		input->Show();
	}
	private: System::Void bunifuThinButton26_Click(System::Object^  sender, System::EventArgs^  e) {
		People^ input = gcnew People();
		input->Show();
	}
	private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void bunifuImageButton2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void bunifuThinButton21_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ print;
		peopleGridView->Visible = false;
		admindataGridView->Rows->Clear();
		for (int i = 0; i < glob::conc.conc_number; i++)
		{
			admindataGridView->Rows->Add();
			admindataGridView->Rows[i]->Height = 50;
			print = gcnew String(glob::conc.Concerts[i].conc_ID.c_str());
			admindataGridView[0, i]->Value = print;
			print = gcnew String(glob::conc.Concerts[i].conc_name.c_str());
			admindataGridView[1, i]->Value = print;
			print = gcnew String(glob::conc.Concerts[i].conc_date.c_str());
			admindataGridView[2, i]->Value = print;
			print = gcnew String(glob::conc.Concerts[i].conc_place.c_str());
			admindataGridView[3, i]->Value = print;
			admindataGridView[4, i]->Value = glob::conc.Concerts[i].conc_tickets;
			admindataGridView[5, i]->Value = glob::conc.Concerts[i].conc_ticket_price_coef;
			admindataGridView[6, i]->Value = "-";
		}
	}
	private: System::Void bunifuThinButton23_Click(System::Object^  sender, System::EventArgs^  e) {
		peopleGridView->Visible = false;
		String^ print;
		admindataGridView->Rows->Clear();
		for (int i = 0; i < glob::fest.fest_number; i++)
		{
			admindataGridView->Rows->Add();
			admindataGridView->Rows[i]->Height = 50;
			print = gcnew String(glob::fest.Festivals[i].fest_ID.c_str());
			admindataGridView[0, i]->Value = print;
			print = gcnew String(glob::fest.Festivals[i].fest_name.c_str());
			admindataGridView[1, i]->Value = print;
			print = gcnew String(glob::fest.Festivals[i].fest_date.c_str());
			admindataGridView[2, i]->Value = print;
			print = gcnew String(glob::fest.Festivals[i].fest_place.c_str());
			admindataGridView[3, i]->Value = print;
			admindataGridView[4, i]->Value = glob::fest.Festivals[i].fest_tickets;
			admindataGridView[5, i]->Value = glob::fest.Festivals[i].fest_ticket_price_coef;
			admindataGridView[6, i]->Value = glob::fest.Festivals[i].fest_camping_price_coef;
		}
	}
private: System::Void bunifuThinButton25_Click(System::Object^  sender, System::EventArgs^  e) {
	peopleGridView->Visible = true;
	String^ print;
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
	}
}
private: System::Void bunifuThinButton27_Click(System::Object^  sender, System::EventArgs^  e) {
	system("CFReport.txt");
}
};
}

