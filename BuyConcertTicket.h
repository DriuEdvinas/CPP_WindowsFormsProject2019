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
	/// Summary for BuyConcertTicket
	/// </summary>
	public ref class BuyConcertTicket : public System::Windows::Forms::Form
	{
	public:
		BuyConcertTicket(void)
		{
			InitializeComponent();
			concert();		
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BuyConcertTicket()
		{
			if (components)
			{
				delete components;
		}
	}
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: ns1::BunifuImageButton^  bunifuImageButton2;
private: ns1::BunifuImageButton^  bunifuImageButton1;
private: ns1::BunifuThinButton2^  bunifuThinButton;
private: ns1::BunifuImageButton^  bunifuImageButton4;
private: ns1::BunifuImageButton^  bunifuImageButton5;
private: ns1::BunifuImageButton^  bunifuImageButton3;
private: ns1::BunifuImageButton^  bunifuImageButton9;
private: ns1::BunifuImageButton^  bunifuImageButton8;
private: ns1::BunifuImageButton^  bunifuImageButton7;
private: ns1::BunifuImageButton^  bunifuImageButton6;
private: System::Windows::Forms::Panel^  panel1;
internal: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: ns1::BunifuThinButton2^  mainPanel;
private: ns1::BunifuCustomLabel^  PriceLabel1;
private: ns1::BunifuCustomLabel^  PriceLabel5;
private: ns1::BunifuCustomLabel^  PriceLabel4;
private: ns1::BunifuCustomLabel^  PriceLabel3;
private: ns1::BunifuCustomLabel^  PriceLabel2;
private: System::Windows::Forms::PictureBox^  pictureBox10;
private: System::Windows::Forms::PictureBox^  pictureBox9;
private: System::Windows::Forms::PictureBox^  pictureBox8;
private: System::Windows::Forms::PictureBox^  pictureBox7;
private: System::Windows::Forms::PictureBox^  pictureBox6;
private: ns1::BunifuThinButton2^  bunifuThinButton23;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel4;
private: ns1::BunifuThinButton2^  bunifuThinButton22;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel3;
private: ns1::BunifuThinButton2^  bunifuThinButton21;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel2;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel1;
private: ns1::BunifuThinButton2^  bunifuThinButton24;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel8;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel7;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel6;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel5;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel14;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel13;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel12;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel11;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel10;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel9;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel15;
private: ns1::BunifuCustomLabel^  TicketsAmount4;
private: ns1::BunifuCustomLabel^  TicketsAmount3;
private: ns1::BunifuCustomLabel^  TicketsAmount2;
private: ns1::BunifuCustomLabel^  TicketsAmount1;
private: ns1::BunifuCustomLabel^  TicketsAmount;
private: ns1::BunifuImageButton^  bunifuImageButton17;
private: ns1::BunifuImageButton^  bunifuImageButton18;
private: ns1::BunifuImageButton^  bunifuImageButton15;
private: ns1::BunifuImageButton^  bunifuImageButton16;
private: ns1::BunifuImageButton^  bunifuImageButton13;
private: ns1::BunifuImageButton^  bunifuImageButton14;
private: ns1::BunifuImageButton^  bunifuImageButton10;
private: ns1::BunifuImageButton^  bunifuImageButton11;
private: ns1::BunifuImageButton^  bunifuImageButton12;
private: ns1::BunifuImageButton^  AddTicket;
internal: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::PictureBox^  pictureBox11;
private: System::Windows::Forms::PictureBox^  pictureBox12;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label4;
private: ns1::BunifuDragControl^  bunifuDragControl1;
private: ns1::BunifuDragControl^  bunifuDragControl2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BuyConcertTicket::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuImageButton2 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton1 = (gcnew ns1::BunifuImageButton());
			this->bunifuThinButton = (gcnew ns1::BunifuThinButton2());
			this->bunifuImageButton4 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton5 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton3 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton6 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton7 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton8 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton9 = (gcnew ns1::BunifuImageButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomLabel9 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel8 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel7 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel6 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel5 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton24 = (gcnew ns1::BunifuThinButton2());
			this->bunifuThinButton23 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel4 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton22 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel3 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton21 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel2 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel1 = (gcnew ns1::BunifuCustomLabel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->mainPanel = (gcnew ns1::BunifuThinButton2());
			this->PriceLabel1 = (gcnew ns1::BunifuCustomLabel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->PriceLabel2 = (gcnew ns1::BunifuCustomLabel());
			this->PriceLabel3 = (gcnew ns1::BunifuCustomLabel());
			this->PriceLabel4 = (gcnew ns1::BunifuCustomLabel());
			this->PriceLabel5 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel10 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel11 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel12 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel13 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel14 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel15 = (gcnew ns1::BunifuCustomLabel());
			this->TicketsAmount = (gcnew ns1::BunifuCustomLabel());
			this->TicketsAmount1 = (gcnew ns1::BunifuCustomLabel());
			this->TicketsAmount2 = (gcnew ns1::BunifuCustomLabel());
			this->TicketsAmount3 = (gcnew ns1::BunifuCustomLabel());
			this->TicketsAmount4 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuImageButton12 = (gcnew ns1::BunifuImageButton());
			this->AddTicket = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton10 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton11 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton13 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton14 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton15 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton16 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton17 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton18 = (gcnew ns1::BunifuImageButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bunifuDragControl1 = (gcnew ns1::BunifuDragControl(this->components));
			this->bunifuDragControl2 = (gcnew ns1::BunifuDragControl(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton9))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddTicket))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(236, 59);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(646, 182);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(816, 12);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(26, 25);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 28;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			this->bunifuImageButton2->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton2_Click);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(848, 15);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 27;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton1_Click);
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
			// bunifuImageButton4
			// 
			this->bunifuImageButton4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton4.Image")));
			this->bunifuImageButton4->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton4.ImageActive")));
			this->bunifuImageButton4->Location = System::Drawing::Point(664, 262);
			this->bunifuImageButton4->Name = L"bunifuImageButton4";
			this->bunifuImageButton4->Size = System::Drawing::Size(73, 59);
			this->bunifuImageButton4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton4->TabIndex = 33;
			this->bunifuImageButton4->TabStop = false;
			this->bunifuImageButton4->Zoom = 0;
			this->bunifuImageButton4->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton4_Click);
			// 
			// bunifuImageButton5
			// 
			this->bunifuImageButton5->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton5.Image")));
			this->bunifuImageButton5->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton5.ImageActive")));
			this->bunifuImageButton5->Location = System::Drawing::Point(564, 262);
			this->bunifuImageButton5->Name = L"bunifuImageButton5";
			this->bunifuImageButton5->Size = System::Drawing::Size(96, 59);
			this->bunifuImageButton5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton5->TabIndex = 34;
			this->bunifuImageButton5->TabStop = false;
			this->bunifuImageButton5->Zoom = 0;
			this->bunifuImageButton5->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton5_Click);
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.Image")));
			this->bunifuImageButton3->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.ImageActive")));
			this->bunifuImageButton3->Location = System::Drawing::Point(734, 262);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(132, 295);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 35;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 0;
			this->bunifuImageButton3->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton3_Click);
			// 
			// bunifuImageButton6
			// 
			this->bunifuImageButton6->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton6.Image")));
			this->bunifuImageButton6->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton6.ImageActive")));
			this->bunifuImageButton6->Location = System::Drawing::Point(631, 355);
			this->bunifuImageButton6->Name = L"bunifuImageButton6";
			this->bunifuImageButton6->Size = System::Drawing::Size(108, 107);
			this->bunifuImageButton6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->bunifuImageButton6->TabIndex = 36;
			this->bunifuImageButton6->TabStop = false;
			this->bunifuImageButton6->Zoom = 0;
			this->bunifuImageButton6->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton6_Click);
			// 
			// bunifuImageButton7
			// 
			this->bunifuImageButton7->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton7.Image")));
			this->bunifuImageButton7->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton7.ImageActive")));
			this->bunifuImageButton7->Location = System::Drawing::Point(570, 354);
			this->bunifuImageButton7->Name = L"bunifuImageButton7";
			this->bunifuImageButton7->Size = System::Drawing::Size(52, 108);
			this->bunifuImageButton7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton7->TabIndex = 37;
			this->bunifuImageButton7->TabStop = false;
			this->bunifuImageButton7->Zoom = 0;
			this->bunifuImageButton7->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton7_Click);
			// 
			// bunifuImageButton8
			// 
			this->bunifuImageButton8->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton8.Image")));
			this->bunifuImageButton8->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton8.ImageActive")));
			this->bunifuImageButton8->Location = System::Drawing::Point(553, 502);
			this->bunifuImageButton8->Name = L"bunifuImageButton8";
			this->bunifuImageButton8->Size = System::Drawing::Size(107, 60);
			this->bunifuImageButton8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton8->TabIndex = 38;
			this->bunifuImageButton8->TabStop = false;
			this->bunifuImageButton8->Zoom = 0;
			this->bunifuImageButton8->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton8_Click);
			// 
			// bunifuImageButton9
			// 
			this->bunifuImageButton9->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton9.Image")));
			this->bunifuImageButton9->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton9.ImageActive")));
			this->bunifuImageButton9->Location = System::Drawing::Point(664, 502);
			this->bunifuImageButton9->Name = L"bunifuImageButton9";
			this->bunifuImageButton9->Size = System::Drawing::Size(73, 59);
			this->bunifuImageButton9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton9->TabIndex = 39;
			this->bunifuImageButton9->TabStop = false;
			this->bunifuImageButton9->Zoom = 0;
			this->bunifuImageButton9->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton9_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(496, 354);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(68, 107);
			this->panel1->TabIndex = 40;
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
			this->panel2->TabIndex = 41;
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
			// bunifuCustomLabel8
			// 
			this->bunifuCustomLabel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel8->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel8->Location = System::Drawing::Point(65, 396);
			this->bunifuCustomLabel8->Name = L"bunifuCustomLabel8";
			this->bunifuCustomLabel8->Size = System::Drawing::Size(93, 22);
			this->bunifuCustomLabel8->TabIndex = 42;
			this->bunifuCustomLabel8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel7
			// 
			this->bunifuCustomLabel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel7->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel7->Location = System::Drawing::Point(22, 288);
			this->bunifuCustomLabel7->Name = L"bunifuCustomLabel7";
			this->bunifuCustomLabel7->Size = System::Drawing::Size(181, 22);
			this->bunifuCustomLabel7->TabIndex = 41;
			this->bunifuCustomLabel7->Text = L"City";
			this->bunifuCustomLabel7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel6
			// 
			this->bunifuCustomLabel6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuCustomLabel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel6->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel6->Location = System::Drawing::Point(27, 199);
			this->bunifuCustomLabel6->Name = L"bunifuCustomLabel6";
			this->bunifuCustomLabel6->Size = System::Drawing::Size(176, 22);
			this->bunifuCustomLabel6->TabIndex = 40;
			this->bunifuCustomLabel6->Text = L"Date";
			this->bunifuCustomLabel6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel5->Location = System::Drawing::Point(26, 107);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(177, 22);
			this->bunifuCustomLabel5->TabIndex = 39;
			this->bunifuCustomLabel5->Text = L"Concert name";
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
			this->bunifuThinButton24->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuThinButton24_Click);
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
			this->bunifuCustomLabel1->Location = System::Drawing::Point(44, 68);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(145, 22);
			this->bunifuCustomLabel1->TabIndex = 31;
			this->bunifuCustomLabel1->Text = L"Concert name";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(509, 262);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(49, 59);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 42;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &BuyConcertTicket::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(750, 354);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(37, 117);
			this->pictureBox3->TabIndex = 43;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(734, 327);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(23, 29);
			this->pictureBox4->TabIndex = 44;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(506, 467);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(236, 95);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 45;
			this->pictureBox5->TabStop = false;
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
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
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
			this->mainPanel->Location = System::Drawing::Point(483, 241);
			this->mainPanel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->mainPanel->Size = System::Drawing::Size(396, 343);
			this->mainPanel->TabIndex = 46;
			this->mainPanel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PriceLabel1
			// 
			this->PriceLabel1->AutoSize = true;
			this->PriceLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PriceLabel1->ForeColor = System::Drawing::Color::White;
			this->PriceLabel1->Location = System::Drawing::Point(305, 319);
			this->PriceLabel1->Name = L"PriceLabel1";
			this->PriceLabel1->Size = System::Drawing::Size(72, 30);
			this->PriceLabel1->TabIndex = 47;
			this->PriceLabel1->Text = L"Price";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(131)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->pictureBox6->Location = System::Drawing::Point(268, 319);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(19, 30);
			this->pictureBox6->TabIndex = 48;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->pictureBox7->Location = System::Drawing::Point(268, 520);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(19, 30);
			this->pictureBox7->TabIndex = 49;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->pictureBox8->Location = System::Drawing::Point(268, 418);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(19, 30);
			this->pictureBox8->TabIndex = 50;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(203)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->pictureBox9->Location = System::Drawing::Point(268, 367);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(19, 30);
			this->pictureBox9->TabIndex = 51;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->pictureBox10->Location = System::Drawing::Point(268, 471);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(19, 30);
			this->pictureBox10->TabIndex = 52;
			this->pictureBox10->TabStop = false;
			// 
			// PriceLabel2
			// 
			this->PriceLabel2->AutoSize = true;
			this->PriceLabel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PriceLabel2->ForeColor = System::Drawing::Color::White;
			this->PriceLabel2->Location = System::Drawing::Point(305, 367);
			this->PriceLabel2->Name = L"PriceLabel2";
			this->PriceLabel2->Size = System::Drawing::Size(72, 30);
			this->PriceLabel2->TabIndex = 53;
			this->PriceLabel2->Text = L"Price";
			// 
			// PriceLabel3
			// 
			this->PriceLabel3->AutoSize = true;
			this->PriceLabel3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PriceLabel3->ForeColor = System::Drawing::Color::White;
			this->PriceLabel3->Location = System::Drawing::Point(305, 416);
			this->PriceLabel3->Name = L"PriceLabel3";
			this->PriceLabel3->Size = System::Drawing::Size(72, 30);
			this->PriceLabel3->TabIndex = 54;
			this->PriceLabel3->Text = L"Price";
			// 
			// PriceLabel4
			// 
			this->PriceLabel4->AutoSize = true;
			this->PriceLabel4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PriceLabel4->ForeColor = System::Drawing::Color::White;
			this->PriceLabel4->Location = System::Drawing::Point(305, 468);
			this->PriceLabel4->Name = L"PriceLabel4";
			this->PriceLabel4->Size = System::Drawing::Size(72, 30);
			this->PriceLabel4->TabIndex = 55;
			this->PriceLabel4->Text = L"Price";
			// 
			// PriceLabel5
			// 
			this->PriceLabel5->AutoSize = true;
			this->PriceLabel5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PriceLabel5->ForeColor = System::Drawing::Color::White;
			this->PriceLabel5->Location = System::Drawing::Point(305, 518);
			this->PriceLabel5->Name = L"PriceLabel5";
			this->PriceLabel5->Size = System::Drawing::Size(72, 30);
			this->PriceLabel5->TabIndex = 56;
			this->PriceLabel5->Text = L"Price";
			// 
			// bunifuCustomLabel10
			// 
			this->bunifuCustomLabel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel10->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel10->Location = System::Drawing::Point(381, 324);
			this->bunifuCustomLabel10->Name = L"bunifuCustomLabel10";
			this->bunifuCustomLabel10->Size = System::Drawing::Size(32, 22);
			this->bunifuCustomLabel10->TabIndex = 44;
			this->bunifuCustomLabel10->Text = L"€";
			this->bunifuCustomLabel10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// bunifuCustomLabel11
			// 
			this->bunifuCustomLabel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel11->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel11->Location = System::Drawing::Point(381, 373);
			this->bunifuCustomLabel11->Name = L"bunifuCustomLabel11";
			this->bunifuCustomLabel11->Size = System::Drawing::Size(32, 22);
			this->bunifuCustomLabel11->TabIndex = 57;
			this->bunifuCustomLabel11->Text = L"€";
			this->bunifuCustomLabel11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// bunifuCustomLabel12
			// 
			this->bunifuCustomLabel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel12->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel12->Location = System::Drawing::Point(381, 421);
			this->bunifuCustomLabel12->Name = L"bunifuCustomLabel12";
			this->bunifuCustomLabel12->Size = System::Drawing::Size(32, 22);
			this->bunifuCustomLabel12->TabIndex = 58;
			this->bunifuCustomLabel12->Text = L"€";
			this->bunifuCustomLabel12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// bunifuCustomLabel13
			// 
			this->bunifuCustomLabel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel13->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel13->Location = System::Drawing::Point(381, 473);
			this->bunifuCustomLabel13->Name = L"bunifuCustomLabel13";
			this->bunifuCustomLabel13->Size = System::Drawing::Size(32, 22);
			this->bunifuCustomLabel13->TabIndex = 59;
			this->bunifuCustomLabel13->Text = L"€";
			this->bunifuCustomLabel13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// bunifuCustomLabel14
			// 
			this->bunifuCustomLabel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel14->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel14->Location = System::Drawing::Point(381, 524);
			this->bunifuCustomLabel14->Name = L"bunifuCustomLabel14";
			this->bunifuCustomLabel14->Size = System::Drawing::Size(32, 22);
			this->bunifuCustomLabel14->TabIndex = 60;
			this->bunifuCustomLabel14->Text = L"€";
			this->bunifuCustomLabel14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// bunifuCustomLabel15
			// 
			this->bunifuCustomLabel15->AutoSize = true;
			this->bunifuCustomLabel15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel15->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel15->Location = System::Drawing::Point(292, 271);
			this->bunifuCustomLabel15->Name = L"bunifuCustomLabel15";
			this->bunifuCustomLabel15->Size = System::Drawing::Size(111, 30);
			this->bunifuCustomLabel15->TabIndex = 103;
			this->bunifuCustomLabel15->Text = L"Concert";
			// 
			// TicketsAmount
			// 
			this->TicketsAmount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->TicketsAmount->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicketsAmount->ForeColor = System::Drawing::Color::White;
			this->TicketsAmount->Location = System::Drawing::Point(410, 317);
			this->TicketsAmount->Name = L"TicketsAmount";
			this->TicketsAmount->Size = System::Drawing::Size(44, 29);
			this->TicketsAmount->TabIndex = 111;
			this->TicketsAmount->Text = L"0";
			this->TicketsAmount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TicketsAmount1
			// 
			this->TicketsAmount1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->TicketsAmount1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicketsAmount1->ForeColor = System::Drawing::Color::White;
			this->TicketsAmount1->Location = System::Drawing::Point(410, 366);
			this->TicketsAmount1->Name = L"TicketsAmount1";
			this->TicketsAmount1->Size = System::Drawing::Size(44, 29);
			this->TicketsAmount1->TabIndex = 114;
			this->TicketsAmount1->Text = L"0";
			this->TicketsAmount1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TicketsAmount2
			// 
			this->TicketsAmount2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->TicketsAmount2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicketsAmount2->ForeColor = System::Drawing::Color::White;
			this->TicketsAmount2->Location = System::Drawing::Point(410, 415);
			this->TicketsAmount2->Name = L"TicketsAmount2";
			this->TicketsAmount2->Size = System::Drawing::Size(44, 29);
			this->TicketsAmount2->TabIndex = 115;
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
			this->TicketsAmount3->Location = System::Drawing::Point(410, 467);
			this->TicketsAmount3->Name = L"TicketsAmount3";
			this->TicketsAmount3->Size = System::Drawing::Size(44, 29);
			this->TicketsAmount3->TabIndex = 116;
			this->TicketsAmount3->Text = L"0";
			this->TicketsAmount3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TicketsAmount4
			// 
			this->TicketsAmount4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->TicketsAmount4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicketsAmount4->ForeColor = System::Drawing::Color::White;
			this->TicketsAmount4->Location = System::Drawing::Point(410, 519);
			this->TicketsAmount4->Name = L"TicketsAmount4";
			this->TicketsAmount4->Size = System::Drawing::Size(44, 29);
			this->TicketsAmount4->TabIndex = 117;
			this->TicketsAmount4->Text = L"0";
			this->TicketsAmount4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuImageButton12
			// 
			this->bunifuImageButton12->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton12.Image")));
			this->bunifuImageButton12->ImageActive = nullptr;
			this->bunifuImageButton12->Location = System::Drawing::Point(451, 335);
			this->bunifuImageButton12->Name = L"bunifuImageButton12";
			this->bunifuImageButton12->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton12->TabIndex = 119;
			this->bunifuImageButton12->TabStop = false;
			this->bunifuImageButton12->Zoom = 5;
			this->bunifuImageButton12->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton12_Click);
			// 
			// AddTicket
			// 
			this->AddTicket->BackColor = System::Drawing::Color::Transparent;
			this->AddTicket->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddTicket.Image")));
			this->AddTicket->ImageActive = nullptr;
			this->AddTicket->Location = System::Drawing::Point(451, 314);
			this->AddTicket->Name = L"AddTicket";
			this->AddTicket->Size = System::Drawing::Size(20, 20);
			this->AddTicket->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->AddTicket->TabIndex = 118;
			this->AddTicket->TabStop = false;
			this->AddTicket->Zoom = 5;
			this->AddTicket->Click += gcnew System::EventHandler(this, &BuyConcertTicket::AddTicket_Click);
			// 
			// bunifuImageButton10
			// 
			this->bunifuImageButton10->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton10.Image")));
			this->bunifuImageButton10->ImageActive = nullptr;
			this->bunifuImageButton10->Location = System::Drawing::Point(451, 384);
			this->bunifuImageButton10->Name = L"bunifuImageButton10";
			this->bunifuImageButton10->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton10->TabIndex = 121;
			this->bunifuImageButton10->TabStop = false;
			this->bunifuImageButton10->Zoom = 5;
			this->bunifuImageButton10->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton10_Click);
			// 
			// bunifuImageButton11
			// 
			this->bunifuImageButton11->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton11.Image")));
			this->bunifuImageButton11->ImageActive = nullptr;
			this->bunifuImageButton11->Location = System::Drawing::Point(451, 363);
			this->bunifuImageButton11->Name = L"bunifuImageButton11";
			this->bunifuImageButton11->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton11->TabIndex = 120;
			this->bunifuImageButton11->TabStop = false;
			this->bunifuImageButton11->Zoom = 5;
			this->bunifuImageButton11->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton11_Click);
			// 
			// bunifuImageButton13
			// 
			this->bunifuImageButton13->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton13.Image")));
			this->bunifuImageButton13->ImageActive = nullptr;
			this->bunifuImageButton13->Location = System::Drawing::Point(451, 432);
			this->bunifuImageButton13->Name = L"bunifuImageButton13";
			this->bunifuImageButton13->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton13->TabIndex = 123;
			this->bunifuImageButton13->TabStop = false;
			this->bunifuImageButton13->Zoom = 5;
			this->bunifuImageButton13->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton13_Click);
			// 
			// bunifuImageButton14
			// 
			this->bunifuImageButton14->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton14.Image")));
			this->bunifuImageButton14->ImageActive = nullptr;
			this->bunifuImageButton14->Location = System::Drawing::Point(451, 411);
			this->bunifuImageButton14->Name = L"bunifuImageButton14";
			this->bunifuImageButton14->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton14->TabIndex = 122;
			this->bunifuImageButton14->TabStop = false;
			this->bunifuImageButton14->Zoom = 5;
			this->bunifuImageButton14->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton14_Click);
			// 
			// bunifuImageButton15
			// 
			this->bunifuImageButton15->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton15.Image")));
			this->bunifuImageButton15->ImageActive = nullptr;
			this->bunifuImageButton15->Location = System::Drawing::Point(451, 487);
			this->bunifuImageButton15->Name = L"bunifuImageButton15";
			this->bunifuImageButton15->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton15->TabIndex = 125;
			this->bunifuImageButton15->TabStop = false;
			this->bunifuImageButton15->Zoom = 5;
			this->bunifuImageButton15->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton15_Click);
			// 
			// bunifuImageButton16
			// 
			this->bunifuImageButton16->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton16.Image")));
			this->bunifuImageButton16->ImageActive = nullptr;
			this->bunifuImageButton16->Location = System::Drawing::Point(451, 466);
			this->bunifuImageButton16->Name = L"bunifuImageButton16";
			this->bunifuImageButton16->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton16->TabIndex = 124;
			this->bunifuImageButton16->TabStop = false;
			this->bunifuImageButton16->Zoom = 5;
			this->bunifuImageButton16->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton16_Click);
			// 
			// bunifuImageButton17
			// 
			this->bunifuImageButton17->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton17.Image")));
			this->bunifuImageButton17->ImageActive = nullptr;
			this->bunifuImageButton17->Location = System::Drawing::Point(451, 537);
			this->bunifuImageButton17->Name = L"bunifuImageButton17";
			this->bunifuImageButton17->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton17->TabIndex = 127;
			this->bunifuImageButton17->TabStop = false;
			this->bunifuImageButton17->Zoom = 5;
			this->bunifuImageButton17->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton17_Click);
			// 
			// bunifuImageButton18
			// 
			this->bunifuImageButton18->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton18.Image")));
			this->bunifuImageButton18->ImageActive = nullptr;
			this->bunifuImageButton18->Location = System::Drawing::Point(451, 516);
			this->bunifuImageButton18->Name = L"bunifuImageButton18";
			this->bunifuImageButton18->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton18->TabIndex = 126;
			this->bunifuImageButton18->TabStop = false;
			this->bunifuImageButton18->Zoom = 5;
			this->bunifuImageButton18->Click += gcnew System::EventHandler(this, &BuyConcertTicket::bunifuImageButton18_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label2->Enabled = false;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(589, 281);
			this->label2->Margin = System::Windows::Forms::Padding(0, 3, 3, 0);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label2->Size = System::Drawing::Size(43, 20);
			this->label2->TabIndex = 128;
			this->label2->Text = L"Club";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Visible = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->pictureBox11->Enabled = false;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(580, 369);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(33, 80);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 129;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(131)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->pictureBox12->Enabled = false;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(636, 362);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(98, 95);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 130;
			this->pictureBox12->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(238, 59);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(185, 182);
			this->panel3->TabIndex = 131;
			this->panel3->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label5->Location = System::Drawing::Point(44, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 24);
			this->label5->TabIndex = 2;
			this->label5->Text = L"10 tickets";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label4->Location = System::Drawing::Point(41, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 24);
			this->label4->TabIndex = 1;
			this->label4->Text = L"maximum";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label3->Location = System::Drawing::Point(22, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 24);
			this->label3->TabIndex = 0;
			this->label3->Text = L"You can pick";
			// 
			// bunifuDragControl1
			// 
			this->bunifuDragControl1->Fixed = true;
			this->bunifuDragControl1->Horizontal = true;
			this->bunifuDragControl1->TargetControl = this;
			this->bunifuDragControl1->Vertical = true;
			// 
			// bunifuDragControl2
			// 
			this->bunifuDragControl2->Fixed = true;
			this->bunifuDragControl2->Horizontal = true;
			this->bunifuDragControl2->TargetControl = this->panel2;
			this->bunifuDragControl2->Vertical = true;
			// 
			// BuyConcertTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->ClientSize = System::Drawing::Size(881, 584);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->bunifuImageButton17);
			this->Controls->Add(this->bunifuImageButton18);
			this->Controls->Add(this->bunifuImageButton15);
			this->Controls->Add(this->bunifuImageButton16);
			this->Controls->Add(this->bunifuImageButton13);
			this->Controls->Add(this->bunifuImageButton14);
			this->Controls->Add(this->bunifuImageButton10);
			this->Controls->Add(this->bunifuImageButton11);
			this->Controls->Add(this->bunifuImageButton12);
			this->Controls->Add(this->AddTicket);
			this->Controls->Add(this->TicketsAmount4);
			this->Controls->Add(this->TicketsAmount3);
			this->Controls->Add(this->TicketsAmount2);
			this->Controls->Add(this->TicketsAmount1);
			this->Controls->Add(this->TicketsAmount);
			this->Controls->Add(this->bunifuCustomLabel15);
			this->Controls->Add(this->bunifuCustomLabel14);
			this->Controls->Add(this->bunifuCustomLabel13);
			this->Controls->Add(this->bunifuCustomLabel12);
			this->Controls->Add(this->bunifuCustomLabel11);
			this->Controls->Add(this->bunifuCustomLabel10);
			this->Controls->Add(this->PriceLabel5);
			this->Controls->Add(this->PriceLabel4);
			this->Controls->Add(this->PriceLabel3);
			this->Controls->Add(this->PriceLabel2);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->PriceLabel1);
			this->Controls->Add(this->bunifuImageButton6);
			this->Controls->Add(this->bunifuImageButton4);
			this->Controls->Add(this->bunifuImageButton9);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->bunifuImageButton3);
			this->Controls->Add(this->bunifuImageButton8);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->bunifuImageButton7);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->bunifuImageButton5);
			this->Controls->Add(this->bunifuImageButton2);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->mainPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"BuyConcertTicket";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"BuyConcertTicket";
			this->Load += gcnew System::EventHandler(this, &BuyConcertTicket::BuyConcertTicket_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton9))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddTicket))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
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
private: System::Void BuyConcertTicket_Load(System::Object^  sender, System::EventArgs^  e) {

	glob::allTicketsAmount = 0;
	glob::ticketPriceSumConc[glob::lineC] = 0;
	glob::concTicketAmount_1[glob::lineC] = 0;
	glob::concTicketAmount_2[glob::lineC] = 0;
	glob::concTicketAmount_3[glob::lineC] = 0;
	glob::concTicketAmount_4[glob::lineC] = 0;
	glob::concTicketAmount_5[glob::lineC] = 0;
	
	String ^ temp;
	temp = gcnew String(glob::conc.Concerts[glob::lineC].conc_name.c_str());
	bunifuCustomLabel5->Text = temp;
	temp = gcnew String(glob::conc.Concerts[glob::lineC].conc_date.c_str());
	bunifuCustomLabel6->Text = temp;
	temp = gcnew String(glob::conc.Concerts[glob::lineC].conc_place.c_str());
	bunifuCustomLabel7->Text = temp;
	
	glob::ConcPrice_1[glob::lineC] = 10 * glob::conc.Concerts[glob::lineC].conc_ticket_price_coef;
	glob::ConcPrice_2[glob::lineC] = 12 * glob::conc.Concerts[glob::lineC].conc_ticket_price_coef;
	glob::ConcPrice_3[glob::lineC] = 15 * glob::conc.Concerts[glob::lineC].conc_ticket_price_coef;
	glob::ConcPrice_4[glob::lineC] = 17 * glob::conc.Concerts[glob::lineC].conc_ticket_price_coef;
	glob::ConcPrice_5[glob::lineC] = 20 * glob::conc.Concerts[glob::lineC].conc_ticket_price_coef;

	PriceLabel1->Text = glob::ConcPrice_1[glob::lineC].ToString();
	PriceLabel2->Text = glob::ConcPrice_2[glob::lineC].ToString();
	PriceLabel3->Text = glob::ConcPrice_3[glob::lineC].ToString();
	PriceLabel4->Text = glob::ConcPrice_4[glob::lineC].ToString();
	PriceLabel5->Text = glob::ConcPrice_5[glob::lineC].ToString();
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void bunifuImageButton3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (glob::allTicketsAmount != 10 && glob::conc.Concerts[glob::lineC].conc_tickets - glob::allTicketsAmount > 0)
	{
		glob::ticketPriceSumConc[glob::lineC] += glob::ConcPrice_1[glob::lineC];
		bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
		glob::concTicketAmount_1[glob::lineC] += 1;
		glob::allTicketsAmount += 1;
		TicketsAmount->Text = glob::concTicketAmount_1[glob::lineC].ToString();
	}
	else
		panel3->Visible = true;
	
}
private: System::Void bunifuImageButton6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (glob::allTicketsAmount != 10 && glob::conc.Concerts[glob::lineC].conc_tickets - glob::allTicketsAmount > 0)
	{
	glob::ticketPriceSumConc[glob::lineC] += glob::ConcPrice_1[glob::lineC];
	bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
	glob::concTicketAmount_1[glob::lineC] += 1;
	glob::allTicketsAmount += 1;
	TicketsAmount->Text = glob::concTicketAmount_1[glob::lineC].ToString();
	}
	else
		panel3->Visible = true;
}
private: System::Void bunifuImageButton4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (glob::allTicketsAmount != 10 && glob::conc.Concerts[glob::lineC].conc_tickets - glob::allTicketsAmount > 0)
	{
	glob::ticketPriceSumConc[glob::lineC] += glob::ConcPrice_2[glob::lineC];
	bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
	glob::concTicketAmount_2[glob::lineC] += 1;
	glob::allTicketsAmount += 1;
	TicketsAmount1->Text = glob::concTicketAmount_2[glob::lineC].ToString();
	}
	else
		panel3->Visible = true;
}
private: System::Void bunifuImageButton9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (glob::allTicketsAmount != 10 && glob::conc.Concerts[glob::lineC].conc_tickets - glob::allTicketsAmount > 0)
	{
	glob::ticketPriceSumConc[glob::lineC] += glob::ConcPrice_2[glob::lineC];
	bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
	glob::concTicketAmount_2[glob::lineC] += 1;
	glob::allTicketsAmount += 1;
	TicketsAmount1->Text = glob::concTicketAmount_2[glob::lineC].ToString();
	}
	else
		panel3->Visible = true;
}
private: System::Void bunifuImageButton8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (glob::allTicketsAmount != 10 && glob::conc.Concerts[glob::lineC].conc_tickets - glob::allTicketsAmount > 0)
	{
	glob::ticketPriceSumConc[glob::lineC] += glob::ConcPrice_3[glob::lineC];
	bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
	glob::concTicketAmount_3[glob::lineC] += 1;
	glob::allTicketsAmount += 1;
	TicketsAmount2->Text = glob::concTicketAmount_3[glob::lineC].ToString();
	}
	else
		panel3->Visible = true;
}
private: System::Void bunifuImageButton5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (glob::allTicketsAmount != 10 && glob::conc.Concerts[glob::lineC].conc_tickets - glob::allTicketsAmount > 0)
	{
	glob::ticketPriceSumConc[glob::lineC] += glob::ConcPrice_4[glob::lineC];
	bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
	glob::concTicketAmount_4[glob::lineC] += 1;
	glob::allTicketsAmount += 1;
	TicketsAmount3->Text = glob::concTicketAmount_4[glob::lineC].ToString();
	}
	else
		panel3->Visible = true;
}
 private: System::Void bunifuImageButton7_Click(System::Object^  sender, System::EventArgs^  e) {
	 if (glob::allTicketsAmount != 10 && glob::conc.Concerts[glob::lineC].conc_tickets - glob::allTicketsAmount > 0)
	 {
	 glob::ticketPriceSumConc[glob::lineC] += glob::ConcPrice_5[glob::lineC];
	 bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
	 glob::concTicketAmount_5[glob::lineC] += 1;
	 glob::allTicketsAmount += 1;
	 TicketsAmount4->Text = glob::concTicketAmount_5[glob::lineC].ToString();
	}
	else
		panel3->Visible = true;
}
private: System::Void AddTicket_Click(System::Object^  sender, System::EventArgs^  e) {
	if (glob::allTicketsAmount != 10 && glob::conc.Concerts[glob::lineC].conc_tickets - glob::allTicketsAmount > 0)
	{
	glob::ticketPriceSumConc[glob::lineC] += glob::ConcPrice_1[glob::lineC];
	bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
	glob::concTicketAmount_1[glob::lineC] += 1;
	glob::allTicketsAmount += 1;
	TicketsAmount->Text = glob::concTicketAmount_1[glob::lineC].ToString();
	}
	else
		panel3->Visible = true;
}
private: System::Void bunifuImageButton11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (glob::allTicketsAmount != 10 && glob::conc.Concerts[glob::lineC].conc_tickets - glob::allTicketsAmount > 0)
	{
	glob::ticketPriceSumConc[glob::lineC] += glob::ConcPrice_2[glob::lineC];
	bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
	glob::concTicketAmount_2[glob::lineC] += 1;
	glob::allTicketsAmount += 1;
	TicketsAmount1->Text = glob::concTicketAmount_2[glob::lineC].ToString();
	}
	else
		panel3->Visible = true;
}
private: System::Void bunifuImageButton14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (glob::allTicketsAmount != 10 && glob::conc.Concerts[glob::lineC].conc_tickets - glob::allTicketsAmount > 0)
	{
	glob::ticketPriceSumConc[glob::lineC] += glob::ConcPrice_3[glob::lineC];
	bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
	glob::concTicketAmount_3[glob::lineC] += 1;
	glob::allTicketsAmount += 1;
	TicketsAmount2->Text = glob::concTicketAmount_3[glob::lineC].ToString();
	}
	else
		panel3->Visible = true;
}
private: System::Void bunifuImageButton16_Click(System::Object^  sender, System::EventArgs^  e) {
	if (glob::allTicketsAmount != 10 && glob::conc.Concerts[glob::lineC].conc_tickets - glob::allTicketsAmount > 0)
	{
	glob::ticketPriceSumConc[glob::lineC] += glob::ConcPrice_4[glob::lineC];
	bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
	glob::concTicketAmount_4[glob::lineC] += 1;
	glob::allTicketsAmount += 1;
	TicketsAmount3->Text = glob::concTicketAmount_4[glob::lineC].ToString();
	}
	else
		panel3->Visible = true;
}
private: System::Void bunifuImageButton18_Click(System::Object^  sender, System::EventArgs^  e) {
	if (glob::allTicketsAmount != 10 && glob::conc.Concerts[glob::lineC].conc_tickets - glob::allTicketsAmount > 0)
	{
		glob::ticketPriceSumConc[glob::lineC] += glob::ConcPrice_5[glob::lineC];
		bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
		glob::concTicketAmount_5[glob::lineC] += 1;
		glob::allTicketsAmount += 1;
		TicketsAmount4->Text = glob::concTicketAmount_5[glob::lineC].ToString();
	}
	else
		panel3->Visible = true;
}
private: System::Void bunifuImageButton12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (glob::concTicketAmount_1[glob::lineC] > 0)
	{
		panel3->Visible = false;
		glob::ticketPriceSumConc[glob::lineC] -= glob::ConcPrice_1[glob::lineC];
		bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
		glob::concTicketAmount_1[glob::lineC] -= 1;
		glob::allTicketsAmount -= 1;
		TicketsAmount->Text = glob::concTicketAmount_1[glob::lineC].ToString();
	}
}
private: System::Void bunifuImageButton10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (glob::concTicketAmount_2[glob::lineC] > 0)
	{
		panel3->Visible = false;
		glob::ticketPriceSumConc[glob::lineC] -= glob::ConcPrice_2[glob::lineC];
		bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
		glob::concTicketAmount_2[glob::lineC] -= 1;
		glob::allTicketsAmount -= 1;
		TicketsAmount1->Text = glob::concTicketAmount_2[glob::lineC].ToString();
	}
}
private: System::Void bunifuImageButton13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (glob::concTicketAmount_3[glob::lineC] > 0)
	{
		panel3->Visible = false;
		glob::ticketPriceSumConc[glob::lineC] -= glob::ConcPrice_3[glob::lineC];
		bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
		glob::concTicketAmount_3[glob::lineC] -= 1;
		glob::allTicketsAmount -= 1;
		TicketsAmount2->Text = glob::concTicketAmount_3[glob::lineC].ToString();
	}
}
private: System::Void bunifuImageButton15_Click(System::Object^  sender, System::EventArgs^  e) {
	if (glob::concTicketAmount_4[glob::lineC] > 0)
	{
		panel3->Visible = false;
		glob::ticketPriceSumConc[glob::lineC] -= glob::ConcPrice_4[glob::lineC];
		bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
		glob::concTicketAmount_4[glob::lineC] -= 1;
		glob::allTicketsAmount -= 1;
		TicketsAmount3->Text = glob::concTicketAmount_4[glob::lineC].ToString();
	}
}
private: System::Void bunifuImageButton17_Click(System::Object^  sender, System::EventArgs^  e) {
	if (glob::concTicketAmount_5[glob::lineC] > 0)
	{
		panel3->Visible = false;
		glob::ticketPriceSumConc[glob::lineC] -= glob::ConcPrice_5[glob::lineC];
		bunifuCustomLabel8->Text = glob::ticketPriceSumConc[glob::lineC].ToString();
		glob::concTicketAmount_5[glob::lineC] -= 1;
		glob::allTicketsAmount -= 1;
		TicketsAmount4->Text = glob::concTicketAmount_5[glob::lineC].ToString();
	}
}
private: System::Void bunifuThinButton24_Click(System::Object^  sender, System::EventArgs^  e) {
	if (bunifuCustomLabel8->Text != bunifuCustomLabel8->Text->Empty) {
	
		int persNumber = glob::pers.pers_number;
		int persConcTicketNum = glob::pers.People[persNumber].GetPersonConcTicketNum();
		glob::pers.People[persNumber].InsertPersonConcTicketID(persNumber, persConcTicketNum, glob::lineC);
		glob::ticketSumFest[persConcTicketNum] = glob::allTicketsAmount;
		glob::ticketPriceSumConc[persConcTicketNum] = glob::ticketPriceSumConc[glob::lineC];
		persConcTicketNum++;
		glob::pers.People[persNumber].InsertPersonConcTicketnum(persNumber, persConcTicketNum);
		glob::shoppingCart_num++;
		glob::Check = 1;
		Close();	
	}
	else
		MessageBox::Show("You have choosen 0 items.");
}
};
}
