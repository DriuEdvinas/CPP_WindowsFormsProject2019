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
	/// Summary for BuyFestivalTicket
	/// </summary>
	public ref class BuyFestivalTicket : public System::Windows::Forms::Form
	{
	public:
		BuyFestivalTicket(void)
		{
			InitializeComponent();
			festival();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BuyFestivalTicket()
		{
			if (components)
			{
				delete components;
			}
	}
private: ns1::BunifuDragControl^  bunifuDragControl1;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel12;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel11;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel10;
private: ns1::BunifuCustomLabel^  PriceLabel2;
private: System::Windows::Forms::PictureBox^  pictureBox8;
private: ns1::BunifuCustomLabel^  PriceLabel3;
private: System::Windows::Forms::PictureBox^  pictureBox7;
private: System::Windows::Forms::PictureBox^  pictureBox6;
private: ns1::BunifuCustomLabel^  PriceLabel1;
private: ns1::BunifuThinButton2^  mainPanel;
private: ns1::BunifuImageButton^  bunifuImageButton6;
private: System::Windows::Forms::Panel^  panel2;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel9;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel8;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel7;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel6;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel5;
private: ns1::BunifuThinButton2^  bunifuThinButton24;
private: ns1::BunifuThinButton2^  bunifuThinButton23;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel4;
private: ns1::BunifuThinButton2^  bunifuThinButton22;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel3;
private: ns1::BunifuThinButton2^  bunifuThinButton21;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel2;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel1;
private: ns1::BunifuThinButton2^  bunifuThinButton;
private: ns1::BunifuImageButton^  bunifuImageButton2;
private: ns1::BunifuImageButton^  bunifuImageButton1;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: ns1::BunifuImageButton^  bunifuImageButton9;
private: ns1::BunifuImageButton^  bunifuImageButton7;
private: ns1::BunifuImageButton^  bunifuImageButton5;
private: ns1::BunifuImageButton^  bunifuImageButton4;
private: ns1::BunifuImageButton^  bunifuImageButton3;
private: ns1::BunifuImageButton^  bunifuImageButton8;
private: System::Windows::Forms::Panel^  panel1;
internal: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::PictureBox^  pictureBox4;
internal:
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel14;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel13;
private: ns1::BunifuImageButton^  bunifuImageButton14;
private: ns1::BunifuImageButton^  bunifuImageButton13;
private: ns1::BunifuImageButton^  bunifuImageButton12;
private: ns1::BunifuImageButton^  bunifuImageButton11;
private: ns1::BunifuImageButton^  bunifuImageButton10;
private: ns1::BunifuImageButton^  AddTicket;
private: ns1::BunifuCustomLabel^  TicketsAmount3;
private: ns1::BunifuCustomLabel^  TicketsAmount2;
private: ns1::BunifuCustomLabel^  TicketsAmount;
internal: System::Windows::Forms::Label^  label2;
internal: System::Windows::Forms::Label^  label5;
internal: System::Windows::Forms::Label^  label4;
internal: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::PictureBox^  pictureBox9;
internal:
private: System::Windows::Forms::PictureBox^  pictureBox5;
private: ns1::BunifuDragControl^  bunifuDragControl2;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label11;
	private: System::ComponentModel::IContainer^  components;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BuyFestivalTicket::typeid));
			this->bunifuDragControl1 = (gcnew ns1::BunifuDragControl(this->components));
			this->bunifuCustomLabel5 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton24 = (gcnew ns1::BunifuThinButton2());
			this->bunifuThinButton23 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel4 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton22 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel12 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel11 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel10 = (gcnew ns1::BunifuCustomLabel());
			this->PriceLabel2 = (gcnew ns1::BunifuCustomLabel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuCustomLabel3 = (gcnew ns1::BunifuCustomLabel());
			this->PriceLabel3 = (gcnew ns1::BunifuCustomLabel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuCustomLabel8 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel7 = (gcnew ns1::BunifuCustomLabel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomLabel9 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel6 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton21 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel2 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel1 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton = (gcnew ns1::BunifuThinButton2());
			this->PriceLabel1 = (gcnew ns1::BunifuCustomLabel());
			this->mainPanel = (gcnew ns1::BunifuThinButton2());
			this->bunifuImageButton6 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton2 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton1 = (gcnew ns1::BunifuImageButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuImageButton8 = (gcnew ns1::BunifuImageButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton3 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton4 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton5 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton7 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton9 = (gcnew ns1::BunifuImageButton());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuCustomLabel13 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel14 = (gcnew ns1::BunifuCustomLabel());
			this->TicketsAmount = (gcnew ns1::BunifuCustomLabel());
			this->TicketsAmount2 = (gcnew ns1::BunifuCustomLabel());
			this->TicketsAmount3 = (gcnew ns1::BunifuCustomLabel());
			this->AddTicket = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton10 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton11 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton12 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton13 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton14 = (gcnew ns1::BunifuImageButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuDragControl2 = (gcnew ns1::BunifuDragControl(this->components));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton8))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddTicket))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// bunifuDragControl1
			// 
			this->bunifuDragControl1->Fixed = true;
			this->bunifuDragControl1->Horizontal = true;
			this->bunifuDragControl1->TargetControl = this;
			this->bunifuDragControl1->Vertical = true;
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel5->Location = System::Drawing::Point(30, 106);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(173, 22);
			this->bunifuCustomLabel5->TabIndex = 39;
			this->bunifuCustomLabel5->Text = L"Festival name";
			this->bunifuCustomLabel5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->bunifuThinButton24->ButtonText = L"Add to Cart";
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
			this->bunifuThinButton24->Location = System::Drawing::Point(13, 488);
			this->bunifuThinButton24->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton24->Name = L"bunifuThinButton24";
			this->bunifuThinButton24->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton24->Size = System::Drawing::Size(203, 58);
			this->bunifuThinButton24->TabIndex = 38;
			this->bunifuThinButton24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton24->Click += gcnew System::EventHandler(this, &BuyFestivalTicket::bunifuThinButton24_Click);
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
			this->bunifuThinButton23->Location = System::Drawing::Point(13, 385);
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
			this->bunifuCustomLabel4->Location = System::Drawing::Point(61, 358);
			this->bunifuCustomLabel4->Name = L"bunifuCustomLabel4";
			this->bunifuCustomLabel4->Size = System::Drawing::Size(111, 22);
			this->bunifuCustomLabel4->TabIndex = 36;
			this->bunifuCustomLabel4->Text = L"Ticket Price";
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
			this->bunifuThinButton22->Location = System::Drawing::Point(13, 277);
			this->bunifuThinButton22->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton22->Name = L"bunifuThinButton22";
			this->bunifuThinButton22->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton22->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton22->TabIndex = 35;
			this->bunifuThinButton22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel12
			// 
			this->bunifuCustomLabel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel12->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel12->Location = System::Drawing::Point(373, 490);
			this->bunifuCustomLabel12->Name = L"bunifuCustomLabel12";
			this->bunifuCustomLabel12->Size = System::Drawing::Size(32, 22);
			this->bunifuCustomLabel12->TabIndex = 90;
			this->bunifuCustomLabel12->Text = L"€";
			this->bunifuCustomLabel12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// bunifuCustomLabel11
			// 
			this->bunifuCustomLabel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel11->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel11->Location = System::Drawing::Point(373, 420);
			this->bunifuCustomLabel11->Name = L"bunifuCustomLabel11";
			this->bunifuCustomLabel11->Size = System::Drawing::Size(32, 22);
			this->bunifuCustomLabel11->TabIndex = 89;
			this->bunifuCustomLabel11->Text = L"€";
			this->bunifuCustomLabel11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// bunifuCustomLabel10
			// 
			this->bunifuCustomLabel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel10->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel10->Location = System::Drawing::Point(373, 314);
			this->bunifuCustomLabel10->Name = L"bunifuCustomLabel10";
			this->bunifuCustomLabel10->Size = System::Drawing::Size(32, 22);
			this->bunifuCustomLabel10->TabIndex = 76;
			this->bunifuCustomLabel10->Text = L"€";
			this->bunifuCustomLabel10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// PriceLabel2
			// 
			this->PriceLabel2->AutoSize = true;
			this->PriceLabel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PriceLabel2->ForeColor = System::Drawing::Color::White;
			this->PriceLabel2->Location = System::Drawing::Point(299, 414);
			this->PriceLabel2->Name = L"PriceLabel2";
			this->PriceLabel2->Size = System::Drawing::Size(72, 30);
			this->PriceLabel2->TabIndex = 85;
			this->PriceLabel2->Text = L"Price";
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->pictureBox8->Location = System::Drawing::Point(262, 415);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(19, 30);
			this->pictureBox8->TabIndex = 82;
			this->pictureBox8->TabStop = false;
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->AutoSize = true;
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel3->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel3->Location = System::Drawing::Point(50, 250);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(139, 22);
			this->bunifuCustomLabel3->TabIndex = 34;
			this->bunifuCustomLabel3->Text = L"City / Country";
			// 
			// PriceLabel3
			// 
			this->PriceLabel3->AutoSize = true;
			this->PriceLabel3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PriceLabel3->ForeColor = System::Drawing::Color::White;
			this->PriceLabel3->Location = System::Drawing::Point(299, 485);
			this->PriceLabel3->Name = L"PriceLabel3";
			this->PriceLabel3->Size = System::Drawing::Size(72, 30);
			this->PriceLabel3->TabIndex = 86;
			this->PriceLabel3->Text = L"Price";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->pictureBox7->Location = System::Drawing::Point(262, 488);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(19, 30);
			this->pictureBox7->TabIndex = 81;
			this->pictureBox7->TabStop = false;
			// 
			// bunifuCustomLabel8
			// 
			this->bunifuCustomLabel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel8->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel8->Location = System::Drawing::Point(65, 396);
			this->bunifuCustomLabel8->Name = L"bunifuCustomLabel8";
			this->bunifuCustomLabel8->Size = System::Drawing::Size(95, 22);
			this->bunifuCustomLabel8->TabIndex = 42;
			this->bunifuCustomLabel8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel7
			// 
			this->bunifuCustomLabel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel7->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel7->Location = System::Drawing::Point(26, 288);
			this->bunifuCustomLabel7->Name = L"bunifuCustomLabel7";
			this->bunifuCustomLabel7->Size = System::Drawing::Size(177, 22);
			this->bunifuCustomLabel7->TabIndex = 41;
			this->bunifuCustomLabel7->Text = L"City";
			this->bunifuCustomLabel7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(131)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->pictureBox6->Location = System::Drawing::Point(262, 310);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(19, 30);
			this->pictureBox6->TabIndex = 80;
			this->pictureBox6->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panel2->Controls->Add(this->bunifuCustomLabel9);
			this->panel2->Controls->Add(this->bunifuCustomLabel8);
			this->panel2->Controls->Add(this->bunifuCustomLabel7);
			this->panel2->Controls->Add(this->bunifuCustomLabel6);
			this->panel2->Controls->Add(this->bunifuCustomLabel5);
			this->panel2->Controls->Add(this->bunifuThinButton24);
			this->panel2->Controls->Add(this->bunifuThinButton23);
			this->panel2->Controls->Add(this->bunifuCustomLabel4);
			this->panel2->Controls->Add(this->bunifuThinButton22);
			this->panel2->Controls->Add(this->bunifuCustomLabel3);
			this->panel2->Controls->Add(this->bunifuThinButton21);
			this->panel2->Controls->Add(this->bunifuCustomLabel2);
			this->panel2->Controls->Add(this->bunifuCustomLabel1);
			this->panel2->Controls->Add(this->bunifuThinButton);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(238, 584);
			this->panel2->TabIndex = 72;
			// 
			// bunifuCustomLabel9
			// 
			this->bunifuCustomLabel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel9->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel9->Location = System::Drawing::Point(155, 396);
			this->bunifuCustomLabel9->Name = L"bunifuCustomLabel9";
			this->bunifuCustomLabel9->Size = System::Drawing::Size(27, 22);
			this->bunifuCustomLabel9->TabIndex = 43;
			this->bunifuCustomLabel9->Text = L"€";
			this->bunifuCustomLabel9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// bunifuCustomLabel6
			// 
			this->bunifuCustomLabel6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuCustomLabel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel6->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel6->Location = System::Drawing::Point(30, 199);
			this->bunifuCustomLabel6->Name = L"bunifuCustomLabel6";
			this->bunifuCustomLabel6->Size = System::Drawing::Size(173, 22);
			this->bunifuCustomLabel6->TabIndex = 40;
			this->bunifuCustomLabel6->Text = L"Date";
			this->bunifuCustomLabel6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->bunifuThinButton21->Location = System::Drawing::Point(13, 188);
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
			this->bunifuCustomLabel2->Location = System::Drawing::Point(87, 161);
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
			this->bunifuCustomLabel1->Location = System::Drawing::Point(50, 68);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(136, 22);
			this->bunifuCustomLabel1->TabIndex = 31;
			this->bunifuCustomLabel1->Text = L"Festival name";
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
			this->bunifuThinButton->Location = System::Drawing::Point(13, 95);
			this->bunifuThinButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton->Name = L"bunifuThinButton";
			this->bunifuThinButton->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton->Size = System::Drawing::Size(203, 44);
			this->bunifuThinButton->TabIndex = 29;
			this->bunifuThinButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PriceLabel1
			// 
			this->PriceLabel1->AutoSize = true;
			this->PriceLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PriceLabel1->ForeColor = System::Drawing::Color::White;
			this->PriceLabel1->Location = System::Drawing::Point(299, 309);
			this->PriceLabel1->Name = L"PriceLabel1";
			this->PriceLabel1->Size = System::Drawing::Size(72, 30);
			this->PriceLabel1->TabIndex = 79;
			this->PriceLabel1->Text = L"Price";
			// 
			// mainPanel
			// 
			this->mainPanel->ActiveBorderThickness = 3;
			this->mainPanel->ActiveCornerRadius = 30;
			this->mainPanel->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->mainPanel->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->mainPanel->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->mainPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->mainPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mainPanel.BackgroundImage")));
			this->mainPanel->ButtonText = L"";
			this->mainPanel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->mainPanel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainPanel->ForeColor = System::Drawing::Color::White;
			this->mainPanel->IdleBorderThickness = 3;
			this->mainPanel->IdleCornerRadius = 30;
			this->mainPanel->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->mainPanel->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->mainPanel->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->mainPanel->Location = System::Drawing::Point(482, 241);
			this->mainPanel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->mainPanel->Size = System::Drawing::Size(396, 343);
			this->mainPanel->TabIndex = 78;
			this->mainPanel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuImageButton6
			// 
			this->bunifuImageButton6->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton6.Image")));
			this->bunifuImageButton6->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton6.ImageActive")));
			this->bunifuImageButton6->Location = System::Drawing::Point(569, 265);
			this->bunifuImageButton6->Name = L"bunifuImageButton6";
			this->bunifuImageButton6->Size = System::Drawing::Size(230, 297);
			this->bunifuImageButton6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->bunifuImageButton6->TabIndex = 67;
			this->bunifuImageButton6->TabStop = false;
			this->bunifuImageButton6->Zoom = 0;
			this->bunifuImageButton6->Click += gcnew System::EventHandler(this, &BuyFestivalTicket::bunifuImageButton6_Click);
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(815, 12);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(26, 25);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 63;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			this->bunifuImageButton2->Click += gcnew System::EventHandler(this, &BuyFestivalTicket::bunifuImageButton2_Click);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(847, 15);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 62;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &BuyFestivalTicket::bunifuImageButton1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(235, 59);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(646, 182);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 61;
			this->pictureBox1->TabStop = false;
			// 
			// bunifuImageButton8
			// 
			this->bunifuImageButton8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(131)), static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->bunifuImageButton8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton8.Image")));
			this->bunifuImageButton8->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton8.ImageActive")));
			this->bunifuImageButton8->Location = System::Drawing::Point(703, 512);
			this->bunifuImageButton8->Name = L"bunifuImageButton8";
			this->bunifuImageButton8->Size = System::Drawing::Size(91, 45);
			this->bunifuImageButton8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton8->TabIndex = 69;
			this->bunifuImageButton8->TabStop = false;
			this->bunifuImageButton8->Zoom = 0;
			this->bunifuImageButton8->Click += gcnew System::EventHandler(this, &BuyFestivalTicket::bunifuImageButton8_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(6, 40);
			this->label1->Margin = System::Windows::Forms::Padding(0, 3, 3, 0);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label1->Size = System::Drawing::Size(58, 21);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Scene";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(495, 354);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(68, 107);
			this->panel1->TabIndex = 71;
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.Image")));
			this->bunifuImageButton3->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.ImageActive")));
			this->bunifuImageButton3->Location = System::Drawing::Point(805, 420);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(62, 143);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 93;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 0;
			this->bunifuImageButton3->Click += gcnew System::EventHandler(this, &BuyFestivalTicket::bunifuImageButton3_Click);
			// 
			// bunifuImageButton4
			// 
			this->bunifuImageButton4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton4.Image")));
			this->bunifuImageButton4->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton4.ImageActive")));
			this->bunifuImageButton4->Location = System::Drawing::Point(805, 265);
			this->bunifuImageButton4->Name = L"bunifuImageButton4";
			this->bunifuImageButton4->Size = System::Drawing::Size(62, 149);
			this->bunifuImageButton4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton4->TabIndex = 94;
			this->bunifuImageButton4->TabStop = false;
			this->bunifuImageButton4->Zoom = 0;
			this->bunifuImageButton4->Click += gcnew System::EventHandler(this, &BuyFestivalTicket::bunifuImageButton4_Click);
			// 
			// bunifuImageButton5
			// 
			this->bunifuImageButton5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(131)), static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->bunifuImageButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton5.Image")));
			this->bunifuImageButton5->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton5.ImageActive")));
			this->bunifuImageButton5->Location = System::Drawing::Point(588, 512);
			this->bunifuImageButton5->Name = L"bunifuImageButton5";
			this->bunifuImageButton5->Size = System::Drawing::Size(91, 45);
			this->bunifuImageButton5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton5->TabIndex = 95;
			this->bunifuImageButton5->TabStop = false;
			this->bunifuImageButton5->Zoom = 0;
			this->bunifuImageButton5->Click += gcnew System::EventHandler(this, &BuyFestivalTicket::bunifuImageButton5_Click);
			// 
			// bunifuImageButton7
			// 
			this->bunifuImageButton7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(131)), static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->bunifuImageButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton7.Image")));
			this->bunifuImageButton7->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton7.ImageActive")));
			this->bunifuImageButton7->Location = System::Drawing::Point(588, 270);
			this->bunifuImageButton7->Name = L"bunifuImageButton7";
			this->bunifuImageButton7->Size = System::Drawing::Size(91, 45);
			this->bunifuImageButton7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton7->TabIndex = 96;
			this->bunifuImageButton7->TabStop = false;
			this->bunifuImageButton7->Zoom = 0;
			this->bunifuImageButton7->Click += gcnew System::EventHandler(this, &BuyFestivalTicket::bunifuImageButton7_Click);
			// 
			// bunifuImageButton9
			// 
			this->bunifuImageButton9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(131)), static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->bunifuImageButton9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton9.Image")));
			this->bunifuImageButton9->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton9.ImageActive")));
			this->bunifuImageButton9->Location = System::Drawing::Point(703, 270);
			this->bunifuImageButton9->Name = L"bunifuImageButton9";
			this->bunifuImageButton9->Size = System::Drawing::Size(91, 45);
			this->bunifuImageButton9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton9->TabIndex = 97;
			this->bunifuImageButton9->TabStop = false;
			this->bunifuImageButton9->Zoom = 0;
			this->bunifuImageButton9->Click += gcnew System::EventHandler(this, &BuyFestivalTicket::bunifuImageButton9_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(131)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(774, 346);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(15, 125);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 98;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(514, 265);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(49, 85);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 99;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(514, 467);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(49, 95);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 100;
			this->pictureBox4->TabStop = false;
			// 
			// bunifuCustomLabel13
			// 
			this->bunifuCustomLabel13->AutoSize = true;
			this->bunifuCustomLabel13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel13->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel13->Location = System::Drawing::Point(279, 369);
			this->bunifuCustomLabel13->Name = L"bunifuCustomLabel13";
			this->bunifuCustomLabel13->Size = System::Drawing::Size(126, 30);
			this->bunifuCustomLabel13->TabIndex = 101;
			this->bunifuCustomLabel13->Text = L"Camping";
			// 
			// bunifuCustomLabel14
			// 
			this->bunifuCustomLabel14->AutoSize = true;
			this->bunifuCustomLabel14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel14->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel14->Location = System::Drawing::Point(291, 265);
			this->bunifuCustomLabel14->Name = L"bunifuCustomLabel14";
			this->bunifuCustomLabel14->Size = System::Drawing::Size(102, 30);
			this->bunifuCustomLabel14->TabIndex = 102;
			this->bunifuCustomLabel14->Text = L"Festival";
			// 
			// TicketsAmount
			// 
			this->TicketsAmount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->TicketsAmount->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicketsAmount->ForeColor = System::Drawing::Color::White;
			this->TicketsAmount->Location = System::Drawing::Point(411, 310);
			this->TicketsAmount->Name = L"TicketsAmount";
			this->TicketsAmount->Size = System::Drawing::Size(44, 29);
			this->TicketsAmount->TabIndex = 104;
			this->TicketsAmount->Text = L"0";
			this->TicketsAmount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TicketsAmount2
			// 
			this->TicketsAmount2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->TicketsAmount2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicketsAmount2->ForeColor = System::Drawing::Color::White;
			this->TicketsAmount2->Location = System::Drawing::Point(411, 413);
			this->TicketsAmount2->Name = L"TicketsAmount2";
			this->TicketsAmount2->Size = System::Drawing::Size(44, 29);
			this->TicketsAmount2->TabIndex = 105;
			this->TicketsAmount2->Text = L"0";
			this->TicketsAmount2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TicketsAmount3
			// 
			this->TicketsAmount3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->TicketsAmount3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicketsAmount3->ForeColor = System::Drawing::Color::White;
			this->TicketsAmount3->Location = System::Drawing::Point(411, 486);
			this->TicketsAmount3->Name = L"TicketsAmount3";
			this->TicketsAmount3->Size = System::Drawing::Size(44, 29);
			this->TicketsAmount3->TabIndex = 106;
			this->TicketsAmount3->Text = L"0";
			this->TicketsAmount3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AddTicket
			// 
			this->AddTicket->BackColor = System::Drawing::Color::Transparent;
			this->AddTicket->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddTicket.Image")));
			this->AddTicket->ImageActive = nullptr;
			this->AddTicket->Location = System::Drawing::Point(450, 298);
			this->AddTicket->Name = L"AddTicket";
			this->AddTicket->Size = System::Drawing::Size(25, 25);
			this->AddTicket->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->AddTicket->TabIndex = 107;
			this->AddTicket->TabStop = false;
			this->AddTicket->Zoom = 5;
			this->AddTicket->Click += gcnew System::EventHandler(this, &BuyFestivalTicket::AddTicket_Click);
			// 
			// bunifuImageButton10
			// 
			this->bunifuImageButton10->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton10.Image")));
			this->bunifuImageButton10->ImageActive = nullptr;
			this->bunifuImageButton10->Location = System::Drawing::Point(450, 399);
			this->bunifuImageButton10->Name = L"bunifuImageButton10";
			this->bunifuImageButton10->Size = System::Drawing::Size(25, 25);
			this->bunifuImageButton10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton10->TabIndex = 108;
			this->bunifuImageButton10->TabStop = false;
			this->bunifuImageButton10->Zoom = 5;
			this->bunifuImageButton10->Click += gcnew System::EventHandler(this, &BuyFestivalTicket::bunifuImageButton10_Click);
			// 
			// bunifuImageButton11
			// 
			this->bunifuImageButton11->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton11.Image")));
			this->bunifuImageButton11->ImageActive = nullptr;
			this->bunifuImageButton11->Location = System::Drawing::Point(450, 474);
			this->bunifuImageButton11->Name = L"bunifuImageButton11";
			this->bunifuImageButton11->Size = System::Drawing::Size(25, 25);
			this->bunifuImageButton11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton11->TabIndex = 109;
			this->bunifuImageButton11->TabStop = false;
			this->bunifuImageButton11->Zoom = 5;
			this->bunifuImageButton11->Click += gcnew System::EventHandler(this, &BuyFestivalTicket::bunifuImageButton11_Click);
			// 
			// bunifuImageButton12
			// 
			this->bunifuImageButton12->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton12.Image")));
			this->bunifuImageButton12->ImageActive = nullptr;
			this->bunifuImageButton12->Location = System::Drawing::Point(450, 329);
			this->bunifuImageButton12->Name = L"bunifuImageButton12";
			this->bunifuImageButton12->Size = System::Drawing::Size(25, 25);
			this->bunifuImageButton12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton12->TabIndex = 110;
			this->bunifuImageButton12->TabStop = false;
			this->bunifuImageButton12->Zoom = 5;
			this->bunifuImageButton12->Click += gcnew System::EventHandler(this, &BuyFestivalTicket::bunifuImageButton12_Click);
			// 
			// bunifuImageButton13
			// 
			this->bunifuImageButton13->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton13.Image")));
			this->bunifuImageButton13->ImageActive = nullptr;
			this->bunifuImageButton13->Location = System::Drawing::Point(450, 430);
			this->bunifuImageButton13->Name = L"bunifuImageButton13";
			this->bunifuImageButton13->Size = System::Drawing::Size(25, 25);
			this->bunifuImageButton13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton13->TabIndex = 111;
			this->bunifuImageButton13->TabStop = false;
			this->bunifuImageButton13->Zoom = 5;
			this->bunifuImageButton13->Click += gcnew System::EventHandler(this, &BuyFestivalTicket::bunifuImageButton13_Click);
			// 
			// bunifuImageButton14
			// 
			this->bunifuImageButton14->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton14.Image")));
			this->bunifuImageButton14->ImageActive = nullptr;
			this->bunifuImageButton14->Location = System::Drawing::Point(450, 505);
			this->bunifuImageButton14->Name = L"bunifuImageButton14";
			this->bunifuImageButton14->Size = System::Drawing::Size(25, 25);
			this->bunifuImageButton14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton14->TabIndex = 112;
			this->bunifuImageButton14->TabStop = false;
			this->bunifuImageButton14->Zoom = 5;
			this->bunifuImageButton14->Click += gcnew System::EventHandler(this, &BuyFestivalTicket::bunifuImageButton14_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->label2->Enabled = false;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(596, 281);
			this->label2->Margin = System::Windows::Forms::Padding(0, 3, 3, 0);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label2->Size = System::Drawing::Size(76, 20);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Camping";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->label3->Enabled = false;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(711, 281);
			this->label3->Margin = System::Windows::Forms::Padding(0, 3, 3, 0);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label3->Size = System::Drawing::Size(76, 20);
			this->label3->TabIndex = 113;
			this->label3->Text = L"Camping";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->label4->Enabled = false;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(596, 524);
			this->label4->Margin = System::Windows::Forms::Padding(0, 3, 3, 0);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label4->Size = System::Drawing::Size(76, 20);
			this->label4->TabIndex = 114;
			this->label4->Text = L"Camping";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->label5->Enabled = false;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(711, 524);
			this->label5->Margin = System::Windows::Forms::Padding(0, 3, 3, 0);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label5->Size = System::Drawing::Size(76, 20);
			this->label5->TabIndex = 115;
			this->label5->Text = L"Camping";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->pictureBox5->Enabled = false;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(826, 298);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(20, 76);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 116;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->pictureBox9->Enabled = false;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(826, 454);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(20, 76);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 117;
			this->pictureBox9->TabStop = false;
			// 
			// bunifuDragControl2
			// 
			this->bunifuDragControl2->Fixed = true;
			this->bunifuDragControl2->Horizontal = true;
			this->bunifuDragControl2->TargetControl = this->panel2;
			this->bunifuDragControl2->Vertical = true;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Location = System::Drawing::Point(236, 59);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(186, 182);
			this->panel3->TabIndex = 132;
			this->panel3->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label6->Location = System::Drawing::Point(43, 118);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 24);
			this->label6->TabIndex = 2;
			this->label6->Text = L"10 tickets";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label7->Location = System::Drawing::Point(41, 76);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 24);
			this->label7->TabIndex = 1;
			this->label7->Text = L"maximum";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label8->Location = System::Drawing::Point(22, 36);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(145, 24);
			this->label8->TabIndex = 0;
			this->label8->Text = L"You can pick";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Location = System::Drawing::Point(419, 59);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(186, 182);
			this->panel4->TabIndex = 133;
			this->panel4->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label12->Location = System::Drawing::Point(5, 129);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(178, 24);
			this->label12->TabIndex = 3;
			this->label12->Text = L"camping places";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label9->Location = System::Drawing::Point(146, 77);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(22, 24);
			this->label9->TabIndex = 2;
			this->label9->Text = L"5";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label10->Location = System::Drawing::Point(21, 77);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(113, 24);
			this->label10->TabIndex = 1;
			this->label10->Text = L"maximum";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label11->Location = System::Drawing::Point(17, 36);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(145, 24);
			this->label11->TabIndex = 0;
			this->label11->Text = L"You can pick";
			// 
			// BuyFestivalTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(881, 584);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->bunifuImageButton14);
			this->Controls->Add(this->bunifuImageButton13);
			this->Controls->Add(this->bunifuImageButton12);
			this->Controls->Add(this->bunifuImageButton11);
			this->Controls->Add(this->bunifuImageButton10);
			this->Controls->Add(this->AddTicket);
			this->Controls->Add(this->TicketsAmount3);
			this->Controls->Add(this->TicketsAmount2);
			this->Controls->Add(this->TicketsAmount);
			this->Controls->Add(this->bunifuCustomLabel14);
			this->Controls->Add(this->bunifuCustomLabel13);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->bunifuImageButton9);
			this->Controls->Add(this->bunifuImageButton7);
			this->Controls->Add(this->bunifuImageButton5);
			this->Controls->Add(this->bunifuImageButton4);
			this->Controls->Add(this->bunifuImageButton3);
			this->Controls->Add(this->bunifuImageButton8);
			this->Controls->Add(this->bunifuCustomLabel12);
			this->Controls->Add(this->bunifuCustomLabel11);
			this->Controls->Add(this->bunifuCustomLabel10);
			this->Controls->Add(this->PriceLabel2);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->PriceLabel3);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->PriceLabel1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->bunifuImageButton2);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->bunifuImageButton6);
			this->Controls->Add(this->mainPanel);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"BuyFestivalTicket";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"BuyFestivalTicket";
			this->Load += gcnew System::EventHandler(this, &BuyFestivalTicket::BuyFestivalTicket_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton8))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddTicket))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void bunifuImageButton2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void BuyFestivalTicket_Load(System::Object^  sender, System::EventArgs^  e) {
		
		glob::allTicketsAmount = 0;
		glob::allCampingsAmount = 0;
		glob::ticketPriceSumFest[glob::lineF] = 0; 
		glob::festTicketAmount_1[glob::lineF] = 0;
		glob::festTicketAmount_2[glob::lineF] = 0;
		glob::festTicketAmount_3[glob::lineF] = 0;
		
		String ^ temp;
		temp = gcnew String(glob::fest.Festivals[glob::lineF].fest_name.c_str());
		bunifuCustomLabel5->Text = temp;
		temp = gcnew String(glob::fest.Festivals[glob::lineF].fest_date.c_str());
		bunifuCustomLabel6->Text = temp;
		temp = gcnew String(glob::fest.Festivals[glob::lineF].fest_place.c_str());
		bunifuCustomLabel7->Text = temp;

		glob::FestPrice_1[glob::lineF] = 20 * glob::fest.Festivals[glob::lineF].fest_ticket_price_coef;
		glob::FestPrice_2[glob::lineF] = 15 * glob::fest.Festivals[glob::lineF].fest_ticket_price_coef;
		glob::FestPrice_3[glob::lineF] = 10 * glob::fest.Festivals[glob::lineF].fest_ticket_price_coef;

		PriceLabel1->Text = glob::FestPrice_1[glob::lineF].ToString();
		PriceLabel2->Text = glob::FestPrice_2[glob::lineF].ToString();
		PriceLabel3->Text = glob::FestPrice_3[glob::lineF].ToString();

	}
	private: System::Void bunifuImageButton6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (glob::allTicketsAmount != 10 && glob::fest.Festivals[glob::lineF].fest_tickets - glob::allTicketsAmount > 0)
		{
			glob::ticketPriceSumFest[glob::lineF] += glob::FestPrice_1[glob::lineF];
			bunifuCustomLabel8->Text = glob::ticketPriceSumFest[glob::lineF].ToString();
			glob::festTicketAmount_1[glob::lineF] += 1;
			glob::allTicketsAmount += 1;
			TicketsAmount->Text = glob::festTicketAmount_1[glob::lineF].ToString();
		}
		else
			panel3->Visible = true;
	}
	private: System::Void bunifuImageButton7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (glob::allCampingsAmount != 5)
		{
			glob::ticketPriceSumFest[glob::lineF] += glob::FestPrice_2[glob::lineF];
			bunifuCustomLabel8->Text = glob::ticketPriceSumFest[glob::lineF].ToString();
			glob::festTicketAmount_2[glob::lineF] += 1;
			glob::allCampingsAmount += 1;
			TicketsAmount2->Text = glob::festTicketAmount_2[glob::lineF].ToString();
		}
		else
			panel4->Visible = true;
	}
	private: System::Void bunifuImageButton9_Click(System::Object^  sender, System::EventArgs^  e) {
		if (glob::allCampingsAmount != 5)
		{
			glob::ticketPriceSumFest[glob::lineF] += glob::FestPrice_2[glob::lineF];
			bunifuCustomLabel8->Text = glob::ticketPriceSumFest[glob::lineF].ToString();
			glob::festTicketAmount_2[glob::lineF] += 1;
			glob::allCampingsAmount += 1;
			TicketsAmount2->Text = glob::festTicketAmount_2[glob::lineF].ToString();
		}
		else
			panel4->Visible = true;
	}
	private: System::Void bunifuImageButton5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (glob::allCampingsAmount != 5)
		{
			glob::ticketPriceSumFest[glob::lineF] += glob::FestPrice_2[glob::lineF];
			bunifuCustomLabel8->Text = glob::ticketPriceSumFest[glob::lineF].ToString();
			glob::festTicketAmount_2[glob::lineF] += 1;
			glob::allCampingsAmount += 1;
			TicketsAmount2->Text = glob::festTicketAmount_2[glob::lineF].ToString();
		}
			else
				panel4->Visible = true;		
	}
	private: System::Void bunifuImageButton8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (glob::allCampingsAmount != 5)
		{
			glob::ticketPriceSumFest[glob::lineF] += glob::FestPrice_2[glob::lineF];
			bunifuCustomLabel8->Text = glob::ticketPriceSumFest[glob::lineF].ToString();
			glob::festTicketAmount_2[glob::lineF] += 1;
			glob::allCampingsAmount += 1;
			TicketsAmount2->Text = glob::festTicketAmount_2[glob::lineF].ToString();
		}
		else
			panel4->Visible = true;
	}
	private: System::Void bunifuImageButton4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (glob::allCampingsAmount != 5)
		{
			glob::ticketPriceSumFest[glob::lineF] += glob::FestPrice_3[glob::lineF];
			bunifuCustomLabel8->Text = glob::ticketPriceSumFest[glob::lineF].ToString();
			glob::festTicketAmount_3[glob::lineF] += 1;
			glob::allCampingsAmount += 1;
			TicketsAmount3->Text = glob::festTicketAmount_3[glob::lineF].ToString();
		}
		else
			panel4->Visible = true;
	}
	private: System::Void bunifuImageButton3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (glob::allCampingsAmount != 5)
		{
			glob::ticketPriceSumFest[glob::lineF] += glob::FestPrice_3[glob::lineF];
			bunifuCustomLabel8->Text = glob::ticketPriceSumFest[glob::lineF].ToString();
			glob::festTicketAmount_3[glob::lineF] += 1;
			glob::allCampingsAmount += 1;
			TicketsAmount3->Text = glob::festTicketAmount_3[glob::lineF].ToString();
		}
		else
			panel4->Visible = true;
	}
	
	private: System::Void AddTicket_Click(System::Object^  sender, System::EventArgs^  e) {
		if (glob::allTicketsAmount != 10)
		{
			glob::ticketPriceSumFest[glob::lineF] += glob::FestPrice_1[glob::lineF];
			bunifuCustomLabel8->Text = glob::ticketPriceSumFest[glob::lineF].ToString();
			glob::festTicketAmount_1[glob::lineF] += 1;
			glob::allTicketsAmount += 1;
			TicketsAmount->Text = glob::festTicketAmount_1[glob::lineF].ToString();
		}
		else
			panel3->Visible = true;
	}
	private: System::Void bunifuImageButton10_Click(System::Object^  sender, System::EventArgs^  e) {
		if (glob::allCampingsAmount != 5)
		{
			glob::ticketPriceSumFest[glob::lineF] += glob::FestPrice_2[glob::lineF];
			bunifuCustomLabel8->Text = glob::ticketPriceSumFest[glob::lineF].ToString();
			glob::festTicketAmount_2[glob::lineF] += 1;
			glob::allCampingsAmount += 1;
			TicketsAmount2->Text = glob::festTicketAmount_2[glob::lineF].ToString();
		}
		else
			panel4->Visible = true;
	}
	private: System::Void bunifuImageButton11_Click(System::Object^  sender, System::EventArgs^  e) {
		if (glob::allCampingsAmount != 5)
		{
			glob::ticketPriceSumFest[glob::lineF] += glob::FestPrice_3[glob::lineF];
			bunifuCustomLabel8->Text = glob::ticketPriceSumFest[glob::lineF].ToString();
			glob::festTicketAmount_3[glob::lineF] += 1;
			glob::allCampingsAmount += 1;
			TicketsAmount3->Text = glob::festTicketAmount_3[glob::lineF].ToString();
		}
		else
			panel4->Visible = true;
	}
	private: System::Void bunifuImageButton12_Click(System::Object^  sender, System::EventArgs^  e) {
		if (glob::festTicketAmount_1[glob::lineF] > 0)
		{
			panel3->Visible = false;
			glob::ticketPriceSumFest[glob::lineF] -= glob::FestPrice_1[glob::lineF];
			bunifuCustomLabel8->Text = glob::ticketPriceSumFest[glob::lineF].ToString();
			glob::festTicketAmount_1[glob::lineF] -= 1;
			glob::allTicketsAmount -= 1;
			TicketsAmount->Text = glob::festTicketAmount_1[glob::lineF].ToString();
		}
	}
	private: System::Void bunifuImageButton13_Click(System::Object^  sender, System::EventArgs^  e) {
		if (glob::festTicketAmount_2[glob::lineF] > 0)
		{
			panel4->Visible = false;
			glob::ticketPriceSumFest[glob::lineF] -= glob::FestPrice_2[glob::lineF];
			bunifuCustomLabel8->Text = glob::ticketPriceSumFest[glob::lineF].ToString();
			glob::festTicketAmount_2[glob::lineF] -= 1;
			glob::allCampingsAmount -= 1;
			TicketsAmount2->Text = glob::festTicketAmount_2[glob::lineF].ToString();
		}
	}
	private: System::Void bunifuImageButton14_Click(System::Object^  sender, System::EventArgs^  e) {
		if (glob::festTicketAmount_3[glob::lineF] > 0)
		{
			panel4->Visible = false;
			glob::ticketPriceSumFest[glob::lineF] -= glob::FestPrice_3[glob::lineF];
			bunifuCustomLabel8->Text = glob::ticketPriceSumFest[glob::lineF].ToString();
			glob::festTicketAmount_3[glob::lineF] -= 1;
			glob::allCampingsAmount -= 1;
			TicketsAmount3->Text = glob::festTicketAmount_3[glob::lineF].ToString();
		}
}
private: System::Void bunifuThinButton24_Click(System::Object^  sender, System::EventArgs^  e) {
	if (bunifuCustomLabel8->Text != bunifuCustomLabel8->Text->Empty && glob::allTicketsAmount != 0)
		if (glob::allCampingsAmount != 0)
		{
			int persNumber = glob::pers.pers_number;
			int persFestTicketNum = glob::pers.People[persNumber].GetPersonFestTicketNum();
			glob::pers.People[persNumber].InsertPersonFestTicketID(persNumber, persFestTicketNum,glob::lineF);
			glob::ticketSumFest[persFestTicketNum] = glob::allTicketsAmount;
			glob::ticketPriceSumFest[persFestTicketNum] = glob::ticketPriceSumFest[glob::lineF];
			persFestTicketNum++;
			glob::pers.People[persNumber].InsertPersonFestTicketnum(persNumber, persFestTicketNum);
			glob::shoppingCart_num++;
			glob::Check = 1;
			Close();
		}
	else 
	MessageBox::Show("You have choosen 0 camping tickets.");
	else
	MessageBox::Show("You have choosen 0 tickets.");
}
};
}
