#pragma once

#include "Mainform.h"
#include "AdminForm.h"
namespace Project {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: ns1::BunifuDragControl^  bunifuDragControl1;
	private: ns1::BunifuThinButton2^  mainPanel;
	private: ns1::BunifuCustomLabel^  bunifuCustomLabel4;
	private: ns1::BunifuCustomLabel^  bunifuCustomLabel2;
	private: ns1::BunifuCustomLabel^  bunifuCustomLabel6;
	private: ns1::BunifuThinButton2^  bunifuThinButton;
	private: ns1::BunifuCustomLabel^  bunifuCustomLabel1;
	private: ns1::BunifuCustomLabel^  bunifuCustomLabel5;
	private: ns1::BunifuThinButton2^  bunifuThinButton21;
	private: ns1::BunifuImageButton^  bunifuImageButton1;
	private: ns1::BunifuImageButton^  bunifuImageButton2;
	private: ns1::BunifuCustomLabel^  bunifuCustomLabel3;
	private: System::Windows::Forms::Panel^  panel1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuDragControl1 = (gcnew ns1::BunifuDragControl(this->components));
			this->mainPanel = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel4 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel2 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel6 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel1 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel5 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton21 = (gcnew ns1::BunifuThinButton2());
			this->bunifuImageButton1 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton2 = (gcnew ns1::BunifuImageButton());
			this->bunifuCustomLabel3 = (gcnew ns1::BunifuCustomLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(401, 509);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// bunifuDragControl1
			// 
			this->bunifuDragControl1->Fixed = true;
			this->bunifuDragControl1->Horizontal = true;
			this->bunifuDragControl1->TargetControl = this->pictureBox1;
			this->bunifuDragControl1->Vertical = true;
			// 
			// mainPanel
			// 
			this->mainPanel->ActiveBorderThickness = 3;
			this->mainPanel->ActiveCornerRadius = 30;
			this->mainPanel->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
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
			this->mainPanel->Location = System::Drawing::Point(61, 46);
			this->mainPanel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->mainPanel->Size = System::Drawing::Size(286, 301);
			this->mainPanel->TabIndex = 21;
			this->mainPanel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel4
			// 
			this->bunifuCustomLabel4->AutoSize = true;
			this->bunifuCustomLabel4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel4->Location = System::Drawing::Point(165, 263);
			this->bunifuCustomLabel4->Name = L"bunifuCustomLabel4";
			this->bunifuCustomLabel4->Size = System::Drawing::Size(83, 21);
			this->bunifuCustomLabel4->TabIndex = 15;
			this->bunifuCustomLabel4->Text = L"P-7/3R gr.";
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel2->Location = System::Drawing::Point(78, 168);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(255, 21);
			this->bunifuCustomLabel2->TabIndex = 13;
			this->bunifuCustomLabel2->Text = L"Festivals and Concerts Program";
			// 
			// bunifuCustomLabel6
			// 
			this->bunifuCustomLabel6->AutoSize = true;
			this->bunifuCustomLabel6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel6->Location = System::Drawing::Point(152, 124);
			this->bunifuCustomLabel6->Name = L"bunifuCustomLabel6";
			this->bunifuCustomLabel6->Size = System::Drawing::Size(99, 22);
			this->bunifuCustomLabel6->TabIndex = 17;
			this->bunifuCustomLabel6->Text = L"Final work";
			// 
			// bunifuThinButton
			// 
			this->bunifuThinButton->ActiveBorderThickness = 2;
			this->bunifuThinButton->ActiveCornerRadius = 30;
			this->bunifuThinButton->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton.BackgroundImage")));
			this->bunifuThinButton->ButtonText = L"Start";
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
			this->bunifuThinButton->Location = System::Drawing::Point(111, 390);
			this->bunifuThinButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton->Name = L"bunifuThinButton";
			this->bunifuThinButton->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton->Size = System::Drawing::Size(189, 44);
			this->bunifuThinButton->TabIndex = 20;
			this->bunifuThinButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton->Click += gcnew System::EventHandler(this, &Main::bunifuThinButton_Click);
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel1->Location = System::Drawing::Point(134, 216);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(142, 21);
			this->bunifuCustomLabel1->TabIndex = 12;
			this->bunifuCustomLabel1->Text = L"Edvinas Driučikas";
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->AutoSize = true;
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel5->Location = System::Drawing::Point(124, 78);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(164, 22);
			this->bunifuCustomLabel5->TabIndex = 16;
			this->bunifuCustomLabel5->Text = L"PROGRAMMING";
			// 
			// bunifuThinButton21
			// 
			this->bunifuThinButton21->ActiveBorderThickness = 2;
			this->bunifuThinButton21->ActiveCornerRadius = 30;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton21.BackgroundImage")));
			this->bunifuThinButton21->ButtonText = L"";
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->bunifuThinButton21->Location = System::Drawing::Point(350, 55);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton21->Size = System::Drawing::Size(35, 45);
			this->bunifuThinButton21->TabIndex = 22;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton21->Visible = false;
			this->bunifuThinButton21->Click += gcnew System::EventHandler(this, &Main::bunifuThinButton21_Click);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(372, 6);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 23;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &Main::bunifuImageButton1_Click);
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(340, 3);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(26, 25);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 24;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			this->bunifuImageButton2->Click += gcnew System::EventHandler(this, &Main::bunifuImageButton2_Click);
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->AutoSize = true;
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel3->Location = System::Drawing::Point(179, 300);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(46, 21);
			this->bunifuCustomLabel3->TabIndex = 25;
			this->bunifuCustomLabel3->Text = L"2019";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->bunifuCustomLabel3);
			this->panel1->Controls->Add(this->bunifuImageButton2);
			this->panel1->Controls->Add(this->bunifuImageButton1);
			this->panel1->Controls->Add(this->bunifuThinButton21);
			this->panel1->Controls->Add(this->bunifuCustomLabel5);
			this->panel1->Controls->Add(this->bunifuCustomLabel1);
			this->panel1->Controls->Add(this->bunifuThinButton);
			this->panel1->Controls->Add(this->bunifuCustomLabel6);
			this->panel1->Controls->Add(this->bunifuCustomLabel2);
			this->panel1->Controls->Add(this->bunifuCustomLabel4);
			this->panel1->Controls->Add(this->mainPanel);
			this->panel1->Location = System::Drawing::Point(383, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(397, 509);
			this->panel1->TabIndex = 5;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(780, 509);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
		}
#pragma endregion
	private: System::Void closeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		MainForm^ input = gcnew MainForm();
		input->ShowDialog();		
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void bunifuThinButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	MainForm^ input = gcnew MainForm();
	input->ShowDialog();
}
private: System::Void bunifuThinButton21_Click(System::Object^  sender, System::EventArgs^  e) {
	AdminForm^ input = gcnew AdminForm();
	input->Show();
}
private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void bunifuImageButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
}
};
}
