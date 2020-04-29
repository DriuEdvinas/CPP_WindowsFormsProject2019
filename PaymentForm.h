#pragma once
#include "class_body.h"
#include "GLOB.h"
#include <windows.h>
namespace Project {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for PaymentForm
	/// </summary>
	public ref class PaymentForm : public System::Windows::Forms::Form
	{
	public:
		PaymentForm(void)
		{
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PaymentForm()
		{
			if (components)
			{
				delete components;
		}
	}
private: bool dragging;
private: Point offset;
private: ns1::BunifuThinButton2^  bunifuThinButton2;
private: ns1::BunifuThinButton2^  mainPanel;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::ComboBox^  comboBox3;
private: System::Windows::Forms::ComboBox^  comboBox2;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel4;
private: System::Windows::Forms::TextBox^  textBox3;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel2;
private: System::Windows::Forms::TextBox^  textBox2;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel1;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel3;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel6;
private: System::Windows::Forms::TextBox^  textBox4;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel5;
private: ns1::BunifuImageButton^  HelpIconButton;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: ns1::BunifuThinButton2^  bunifuThinButton23;
private: ns1::BunifuThinButton2^  bunifuThinButton22;
private: ns1::BunifuImageButton^  bunifuImageButton2;
private: ns1::BunifuImageButton^  bunifuImageButton1;
private: System::Windows::Forms::Panel^  panel2;
private: ns1::BunifuThinButton2^  bunifuThinButton1;
private: System::Windows::Forms::ComboBox^  comboBox7;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel13;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel7;
private: System::Windows::Forms::TextBox^  textBox5;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel11;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::TextBox^  textBox8;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel8;
private: System::Windows::Forms::ComboBox^  comboBox5;
private: System::Windows::Forms::TextBox^  textBox7;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel9;
private: ns1::BunifuThinButton2^  bunifuThinButton24;
private: System::Windows::Forms::Panel^  panel3;
private: ns1::BunifuThinButton2^  bunifuThinButton3;
private: System::Windows::Forms::DataGridView^  ConcertCartData;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewButtonColumn^  Column2;
private: System::Windows::Forms::DataGridView^  FestivalCartData;
private: ns1::BunifuThinButton2^  bunifuThinButton27;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label3;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewButtonColumn^  Column1;
private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::ComboBox^  comboBox6;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel10;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel14;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Timer^  progressBarTimer;
private: ns1::BunifuCustomLabel^  bunifu2;
private: ns1::BunifuCustomLabel^  bunifu1;
private: System::Windows::Forms::Timer^  timer1;
private: ns1::BunifuCustomLabel^  bunifuCustomLabel15;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: ns1::BunifuCircleProgressbar^  bunifuCircleProgressbar1;
private: System::Windows::Forms::Panel^  panel5;
private: ns1::BunifuThinButton2^  bunifuThinButton21;
private: ns1::BunifuThinButton2^  bunifuThinButton25;
private: ns1::BunifuThinButton2^  bunifuThinButton28;
private: ns1::BunifuImageButton^  bunifuImageButton3;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: ns1::BunifuThinButton2^  bunifuThinButton26;
private: ns1::BunifuThinButton2^  bunifuThinButton29;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PaymentForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton29 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel15 = (gcnew ns1::BunifuCustomLabel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuThinButton23 = (gcnew ns1::BunifuThinButton2());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->HelpIconButton = (gcnew ns1::BunifuImageButton());
			this->bunifuCustomLabel6 = (gcnew ns1::BunifuCustomLabel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->bunifuCustomLabel5 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel4 = (gcnew ns1::BunifuCustomLabel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->bunifuCustomLabel2 = (gcnew ns1::BunifuCustomLabel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->bunifuCustomLabel1 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel3 = (gcnew ns1::BunifuCustomLabel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuThinButton2 = (gcnew ns1::BunifuThinButton2());
			this->bunifuThinButton22 = (gcnew ns1::BunifuThinButton2());
			this->mainPanel = (gcnew ns1::BunifuThinButton2());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton3 = (gcnew ns1::BunifuImageButton());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuThinButton21 = (gcnew ns1::BunifuThinButton2());
			this->bunifuThinButton25 = (gcnew ns1::BunifuThinButton2());
			this->bunifuThinButton28 = (gcnew ns1::BunifuThinButton2());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomLabel14 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel10 = (gcnew ns1::BunifuCustomLabel());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuThinButton1 = (gcnew ns1::BunifuThinButton2());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuCustomLabel13 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel7 = (gcnew ns1::BunifuCustomLabel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->bunifuCustomLabel11 = (gcnew ns1::BunifuCustomLabel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->bunifuCustomLabel8 = (gcnew ns1::BunifuCustomLabel());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->bunifuCustomLabel9 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuThinButton24 = (gcnew ns1::BunifuThinButton2());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton26 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel12 = (gcnew ns1::BunifuCustomLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ConcertCartData = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->FestivalCartData = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->bunifuThinButton3 = (gcnew ns1::BunifuThinButton2());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bunifuThinButton27 = (gcnew ns1::BunifuThinButton2());
			this->bunifuImageButton2 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton1 = (gcnew ns1::BunifuImageButton());
			this->bunifuCircleProgressbar1 = (gcnew ns1::BunifuCircleProgressbar());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->bunifu2 = (gcnew ns1::BunifuCustomLabel());
			this->bunifu1 = (gcnew ns1::BunifuCustomLabel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBarTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HelpIconButton))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConcertCartData))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FestivalCartData))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->bunifuThinButton29);
			this->panel1->Controls->Add(this->bunifuCustomLabel15);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->bunifuThinButton23);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->HelpIconButton);
			this->panel1->Controls->Add(this->bunifuCustomLabel6);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->bunifuCustomLabel5);
			this->panel1->Controls->Add(this->bunifuCustomLabel4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->bunifuCustomLabel2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->bunifuCustomLabel1);
			this->panel1->Controls->Add(this->bunifuCustomLabel3);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->comboBox3);
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->bunifuThinButton2);
			this->panel1->Controls->Add(this->bunifuThinButton22);
			this->panel1->Controls->Add(this->mainPanel);
			this->panel1->Location = System::Drawing::Point(0, 34);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(818, 407);
			this->panel1->TabIndex = 8;
			// 
			// bunifuThinButton29
			// 
			this->bunifuThinButton29->ActiveBorderThickness = 2;
			this->bunifuThinButton29->ActiveCornerRadius = 30;
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton29.BackgroundImage")));
			this->bunifuThinButton29->ButtonText = L"Back";
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton29->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton29->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleBorderThickness = 2;
			this->bunifuThinButton29->IdleCornerRadius = 30;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton29->Location = System::Drawing::Point(437, 313);
			this->bunifuThinButton29->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton29->Name = L"bunifuThinButton29";
			this->bunifuThinButton29->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton29->Size = System::Drawing::Size(94, 47);
			this->bunifuThinButton29->TabIndex = 119;
			this->bunifuThinButton29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton29->Click += gcnew System::EventHandler(this, &PaymentForm::bunifuThinButton29_Click);
			// 
			// bunifuCustomLabel15
			// 
			this->bunifuCustomLabel15->AutoSize = true;
			this->bunifuCustomLabel15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel15->Location = System::Drawing::Point(39, 355);
			this->bunifuCustomLabel15->Name = L"bunifuCustomLabel15";
			this->bunifuCustomLabel15->Size = System::Drawing::Size(368, 24);
			this->bunifuCustomLabel15->TabIndex = 115;
			this->bunifuCustomLabel15->Text = L"All text boxes with * should be filled";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(68, 291);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(294, 57);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 91;
			this->pictureBox2->TabStop = false;
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
			this->comboBox1->Location = System::Drawing::Point(78, 177);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(276, 30);
			this->comboBox1->TabIndex = 90;
			// 
			// bunifuThinButton23
			// 
			this->bunifuThinButton23->ActiveBorderThickness = 1;
			this->bunifuThinButton23->ActiveCornerRadius = 20;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton23.BackgroundImage")));
			this->bunifuThinButton23->ButtonText = L"PayPal";
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton23->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleBorderThickness = 1;
			this->bunifuThinButton23->IdleCornerRadius = 20;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton23->Location = System::Drawing::Point(213, -13);
			this->bunifuThinButton23->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton23->Name = L"bunifuThinButton23";
			this->bunifuThinButton23->Size = System::Drawing::Size(181, 41);
			this->bunifuThinButton23->TabIndex = 89;
			this->bunifuThinButton23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton23->Click += gcnew System::EventHandler(this, &PaymentForm::bunifuThinButton23_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(682, -6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(94, 69);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 87;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// HelpIconButton
			// 
			this->HelpIconButton->BackColor = System::Drawing::Color::Transparent;
			this->HelpIconButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HelpIconButton.Image")));
			this->HelpIconButton->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HelpIconButton.ImageActive")));
			this->HelpIconButton->Location = System::Drawing::Point(720, 64);
			this->HelpIconButton->Name = L"HelpIconButton";
			this->HelpIconButton->Size = System::Drawing::Size(19, 22);
			this->HelpIconButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->HelpIconButton->TabIndex = 86;
			this->HelpIconButton->TabStop = false;
			this->HelpIconButton->Zoom = 10;
			this->HelpIconButton->MouseLeave += gcnew System::EventHandler(this, &PaymentForm::HelpIconButton_MouseLeave);
			this->HelpIconButton->MouseHover += gcnew System::EventHandler(this, &PaymentForm::HelpIconButton_MouseHover);
			// 
			// bunifuCustomLabel6
			// 
			this->bunifuCustomLabel6->AutoSize = true;
			this->bunifuCustomLabel6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel6->Location = System::Drawing::Point(667, 63);
			this->bunifuCustomLabel6->Name = L"bunifuCustomLabel6";
			this->bunifuCustomLabel6->Size = System::Drawing::Size(54, 21);
			this->bunifuCustomLabel6->TabIndex = 41;
			this->bunifuCustomLabel6->Text = L"CSC *";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBox4->Location = System::Drawing::Point(671, 95);
			this->textBox4->MaxLength = 3;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(66, 31);
			this->textBox4->TabIndex = 40;
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->AutoSize = true;
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel5->Location = System::Drawing::Point(457, 66);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(97, 21);
			this->bunifuCustomLabel5->TabIndex = 39;
			this->bunifuCustomLabel5->Text = L"Expiration *";
			// 
			// bunifuCustomLabel4
			// 
			this->bunifuCustomLabel4->AutoSize = true;
			this->bunifuCustomLabel4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel4->Location = System::Drawing::Point(457, 221);
			this->bunifuCustomLabel4->Name = L"bunifuCustomLabel4";
			this->bunifuCustomLabel4->Size = System::Drawing::Size(101, 21);
			this->bunifuCustomLabel4->TabIndex = 38;
			this->bunifuCustomLabel4->Text = L"Last name *";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBox3->Location = System::Drawing::Point(461, 251);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(276, 31);
			this->textBox3->TabIndex = 37;
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel2->Location = System::Drawing::Point(74, 221);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(99, 21);
			this->bunifuCustomLabel2->TabIndex = 36;
			this->bunifuCustomLabel2->Text = L"First name *";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBox2->Location = System::Drawing::Point(78, 251);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(276, 31);
			this->textBox2->TabIndex = 35;
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel1->Location = System::Drawing::Point(74, 144);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(144, 21);
			this->bunifuCustomLabel1->TabIndex = 34;
			this->bunifuCustomLabel1->Text = L"Country/Region *";
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->AutoSize = true;
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel3->Location = System::Drawing::Point(74, 66);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(180, 21);
			this->bunifuCustomLabel3->TabIndex = 33;
			this->bunifuCustomLabel3->Text = L"Credit Card Number *";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBox1->Location = System::Drawing::Point(78, 96);
			this->textBox1->MaxLength = 17;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(276, 31);
			this->textBox1->TabIndex = 32;
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
			this->comboBox3->Location = System::Drawing::Point(461, 96);
			this->comboBox3->MaxLength = 4;
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(105, 30);
			this->comboBox3->TabIndex = 31;
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
			this->comboBox2->Location = System::Drawing::Point(578, 96);
			this->comboBox2->MaxLength = 2;
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(76, 30);
			this->comboBox2->TabIndex = 30;
			// 
			// bunifuThinButton2
			// 
			this->bunifuThinButton2->ActiveBorderThickness = 2;
			this->bunifuThinButton2->ActiveCornerRadius = 30;
			this->bunifuThinButton2->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton2->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton2->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton2.BackgroundImage")));
			this->bunifuThinButton2->ButtonText = L"Proceed to Review Order";
			this->bunifuThinButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton2->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton2->IdleBorderThickness = 2;
			this->bunifuThinButton2->IdleCornerRadius = 30;
			this->bunifuThinButton2->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton2->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton2->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton2->Location = System::Drawing::Point(539, 313);
			this->bunifuThinButton2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton2->Name = L"bunifuThinButton2";
			this->bunifuThinButton2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton2->Size = System::Drawing::Size(236, 47);
			this->bunifuThinButton2->TabIndex = 20;
			this->bunifuThinButton2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton2->Click += gcnew System::EventHandler(this, &PaymentForm::bunifuThinButton2_Click);
			// 
			// bunifuThinButton22
			// 
			this->bunifuThinButton22->ActiveBorderThickness = 1;
			this->bunifuThinButton22->ActiveCornerRadius = 20;
			this->bunifuThinButton22->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton22->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->bunifuThinButton22->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton22.BackgroundImage")));
			this->bunifuThinButton22->ButtonText = L"Credit Card";
			this->bunifuThinButton22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton22->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleBorderThickness = 1;
			this->bunifuThinButton22->IdleCornerRadius = 20;
			this->bunifuThinButton22->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton22->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton22->Location = System::Drawing::Point(50, -13);
			this->bunifuThinButton22->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton22->Name = L"bunifuThinButton22";
			this->bunifuThinButton22->Size = System::Drawing::Size(181, 41);
			this->bunifuThinButton22->TabIndex = 88;
			this->bunifuThinButton22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->mainPanel->Location = System::Drawing::Point(13, 21);
			this->mainPanel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->mainPanel->Size = System::Drawing::Size(784, 375);
			this->mainPanel->TabIndex = 21;
			this->mainPanel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Controls->Add(this->bunifuImageButton3);
			this->panel5->Controls->Add(this->pictureBox4);
			this->panel5->Controls->Add(this->bunifuThinButton21);
			this->panel5->Controls->Add(this->bunifuThinButton25);
			this->panel5->Controls->Add(this->bunifuThinButton28);
			this->panel5->Location = System::Drawing::Point(0, 29);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(818, 411);
			this->panel5->TabIndex = 116;
			this->panel5->Visible = false;
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.Image")));
			this->bunifuImageButton3->ImageActive = nullptr;
			this->bunifuImageButton3->Location = System::Drawing::Point(539, 287);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(231, 51);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 91;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 10;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(50, 66);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(487, 206);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 90;
			this->pictureBox4->TabStop = false;
			// 
			// bunifuThinButton21
			// 
			this->bunifuThinButton21->ActiveBorderThickness = 1;
			this->bunifuThinButton21->ActiveCornerRadius = 20;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton21.BackgroundImage")));
			this->bunifuThinButton21->ButtonText = L"PayPal";
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton21->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleBorderThickness = 1;
			this->bunifuThinButton21->IdleCornerRadius = 20;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton21->Location = System::Drawing::Point(213, -13);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->Size = System::Drawing::Size(181, 41);
			this->bunifuThinButton21->TabIndex = 89;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton25
			// 
			this->bunifuThinButton25->ActiveBorderThickness = 1;
			this->bunifuThinButton25->ActiveCornerRadius = 20;
			this->bunifuThinButton25->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton25->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->bunifuThinButton25->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton25.BackgroundImage")));
			this->bunifuThinButton25->ButtonText = L"Credit Card";
			this->bunifuThinButton25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton25->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton25->IdleBorderThickness = 1;
			this->bunifuThinButton25->IdleCornerRadius = 20;
			this->bunifuThinButton25->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton25->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton25->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton25->Location = System::Drawing::Point(50, -13);
			this->bunifuThinButton25->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton25->Name = L"bunifuThinButton25";
			this->bunifuThinButton25->Size = System::Drawing::Size(181, 41);
			this->bunifuThinButton25->TabIndex = 88;
			this->bunifuThinButton25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton25->Click += gcnew System::EventHandler(this, &PaymentForm::bunifuThinButton25_Click);
			// 
			// bunifuThinButton28
			// 
			this->bunifuThinButton28->ActiveBorderThickness = 3;
			this->bunifuThinButton28->ActiveCornerRadius = 30;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton28.BackgroundImage")));
			this->bunifuThinButton28->ButtonText = L"";
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton28->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleBorderThickness = 3;
			this->bunifuThinButton28->IdleCornerRadius = 30;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton28->Location = System::Drawing::Point(13, 21);
			this->bunifuThinButton28->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton28->Name = L"bunifuThinButton28";
			this->bunifuThinButton28->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton28->Size = System::Drawing::Size(784, 375);
			this->bunifuThinButton28->TabIndex = 21;
			this->bunifuThinButton28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->bunifuCustomLabel14);
			this->panel2->Controls->Add(this->bunifuCustomLabel10);
			this->panel2->Controls->Add(this->comboBox6);
			this->panel2->Controls->Add(this->bunifuThinButton1);
			this->panel2->Controls->Add(this->comboBox7);
			this->panel2->Controls->Add(this->bunifuCustomLabel13);
			this->panel2->Controls->Add(this->bunifuCustomLabel7);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->bunifuCustomLabel11);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->bunifuCustomLabel8);
			this->panel2->Controls->Add(this->comboBox5);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->bunifuCustomLabel9);
			this->panel2->Controls->Add(this->bunifuThinButton24);
			this->panel2->Location = System::Drawing::Point(0, 9);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(818, 436);
			this->panel2->TabIndex = 105;
			// 
			// bunifuCustomLabel14
			// 
			this->bunifuCustomLabel14->AutoSize = true;
			this->bunifuCustomLabel14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel14->Location = System::Drawing::Point(330, 36);
			this->bunifuCustomLabel14->Name = L"bunifuCustomLabel14";
			this->bunifuCustomLabel14->Size = System::Drawing::Size(183, 36);
			this->bunifuCustomLabel14->TabIndex = 115;
			this->bunifuCustomLabel14->Text = L"Registration";
			// 
			// bunifuCustomLabel10
			// 
			this->bunifuCustomLabel10->AutoSize = true;
			this->bunifuCustomLabel10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel10->Location = System::Drawing::Point(39, 260);
			this->bunifuCustomLabel10->Name = L"bunifuCustomLabel10";
			this->bunifuCustomLabel10->Size = System::Drawing::Size(368, 24);
			this->bunifuCustomLabel10->TabIndex = 114;
			this->bunifuCustomLabel10->Text = L"All text boxes with * should be filled";
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
			this->comboBox6->Location = System::Drawing::Point(670, 177);
			this->comboBox6->MaxLength = 2;
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(105, 30);
			this->comboBox6->TabIndex = 113;
			// 
			// bunifuThinButton1
			// 
			this->bunifuThinButton1->ActiveBorderThickness = 2;
			this->bunifuThinButton1->ActiveCornerRadius = 30;
			this->bunifuThinButton1->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton1->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton1->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton1.BackgroundImage")));
			this->bunifuThinButton1->ButtonText = L"Next";
			this->bunifuThinButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton1->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton1->IdleBorderThickness = 2;
			this->bunifuThinButton1->IdleCornerRadius = 30;
			this->bunifuThinButton1->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton1->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton1->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton1->Location = System::Drawing::Point(307, 310);
			this->bunifuThinButton1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton1->Name = L"bunifuThinButton1";
			this->bunifuThinButton1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton1->Size = System::Drawing::Size(206, 47);
			this->bunifuThinButton1->TabIndex = 112;
			this->bunifuThinButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton1->Click += gcnew System::EventHandler(this, &PaymentForm::bunifuThinButton1_Click);
			// 
			// comboBox7
			// 
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox7->ForeColor = System::Drawing::Color::Black;
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25",
					L"26", L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBox7->Location = System::Drawing::Point(670, 229);
			this->comboBox7->MaxLength = 2;
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(105, 30);
			this->comboBox7->TabIndex = 107;
			// 
			// bunifuCustomLabel13
			// 
			this->bunifuCustomLabel13->AutoSize = true;
			this->bunifuCustomLabel13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel13->Location = System::Drawing::Point(682, 94);
			this->bunifuCustomLabel13->Name = L"bunifuCustomLabel13";
			this->bunifuCustomLabel13->Size = System::Drawing::Size(93, 21);
			this->bunifuCustomLabel13->TabIndex = 105;
			this->bunifuCustomLabel13->Text = L"Birthdate *";
			// 
			// bunifuCustomLabel7
			// 
			this->bunifuCustomLabel7->AutoSize = true;
			this->bunifuCustomLabel7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel7->Location = System::Drawing::Point(36, 94);
			this->bunifuCustomLabel7->Name = L"bunifuCustomLabel7";
			this->bunifuCustomLabel7->Size = System::Drawing::Size(101, 21);
			this->bunifuCustomLabel7->TabIndex = 92;
			this->bunifuCustomLabel7->Text = L"First Name *";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBox5->Location = System::Drawing::Point(40, 124);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(276, 31);
			this->textBox5->TabIndex = 91;
			// 
			// bunifuCustomLabel11
			// 
			this->bunifuCustomLabel11->AutoSize = true;
			this->bunifuCustomLabel11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel11->Location = System::Drawing::Point(345, 168);
			this->bunifuCustomLabel11->Name = L"bunifuCustomLabel11";
			this->bunifuCustomLabel11->Size = System::Drawing::Size(126, 21);
			this->bunifuCustomLabel11->TabIndex = 102;
			this->bunifuCustomLabel11->Text = L"Confirm Email *";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBox6->Location = System::Drawing::Point(349, 124);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(276, 31);
			this->textBox6->TabIndex = 93;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBox8->Location = System::Drawing::Point(349, 198);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(276, 31);
			this->textBox8->TabIndex = 101;
			// 
			// bunifuCustomLabel8
			// 
			this->bunifuCustomLabel8->AutoSize = true;
			this->bunifuCustomLabel8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel8->Location = System::Drawing::Point(345, 94);
			this->bunifuCustomLabel8->Name = L"bunifuCustomLabel8";
			this->bunifuCustomLabel8->Size = System::Drawing::Size(131, 21);
			this->bunifuCustomLabel8->TabIndex = 94;
			this->bunifuCustomLabel8->Text = L"Second Name *";
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
			this->comboBox5->Location = System::Drawing::Point(670, 124);
			this->comboBox5->MaxLength = 4;
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(105, 30);
			this->comboBox5->TabIndex = 100;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->textBox7->Location = System::Drawing::Point(40, 198);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(276, 31);
			this->textBox7->TabIndex = 95;
			// 
			// bunifuCustomLabel9
			// 
			this->bunifuCustomLabel9->AutoSize = true;
			this->bunifuCustomLabel9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel9->Location = System::Drawing::Point(36, 168);
			this->bunifuCustomLabel9->Name = L"bunifuCustomLabel9";
			this->bunifuCustomLabel9->Size = System::Drawing::Size(61, 21);
			this->bunifuCustomLabel9->TabIndex = 96;
			this->bunifuCustomLabel9->Text = L"Email *";
			// 
			// bunifuThinButton24
			// 
			this->bunifuThinButton24->ActiveBorderThickness = 3;
			this->bunifuThinButton24->ActiveCornerRadius = 30;
			this->bunifuThinButton24->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton24->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton24->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton24.BackgroundImage")));
			this->bunifuThinButton24->ButtonText = L"";
			this->bunifuThinButton24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton24->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton24->IdleBorderThickness = 3;
			this->bunifuThinButton24->IdleCornerRadius = 30;
			this->bunifuThinButton24->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton24->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton24->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton24->Location = System::Drawing::Point(13, 21);
			this->bunifuThinButton24->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton24->Name = L"bunifuThinButton24";
			this->bunifuThinButton24->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton24->Size = System::Drawing::Size(798, 369);
			this->bunifuThinButton24->TabIndex = 90;
			this->bunifuThinButton24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->bunifuThinButton26);
			this->panel3->Controls->Add(this->bunifuCustomLabel12);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->ConcertCartData);
			this->panel3->Controls->Add(this->FestivalCartData);
			this->panel3->Controls->Add(this->bunifuThinButton3);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->bunifuThinButton27);
			this->panel3->Location = System::Drawing::Point(0, 35);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(818, 408);
			this->panel3->TabIndex = 113;
			this->panel3->Visible = false;
			// 
			// bunifuThinButton26
			// 
			this->bunifuThinButton26->ActiveBorderThickness = 2;
			this->bunifuThinButton26->ActiveCornerRadius = 30;
			this->bunifuThinButton26->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton26->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton26->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton26.BackgroundImage")));
			this->bunifuThinButton26->ButtonText = L"Back";
			this->bunifuThinButton26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton26->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton26->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton26->IdleBorderThickness = 2;
			this->bunifuThinButton26->IdleCornerRadius = 30;
			this->bunifuThinButton26->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton26->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton26->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton26->Location = System::Drawing::Point(43, 286);
			this->bunifuThinButton26->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton26->Name = L"bunifuThinButton26";
			this->bunifuThinButton26->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton26->Size = System::Drawing::Size(94, 47);
			this->bunifuThinButton26->TabIndex = 118;
			this->bunifuThinButton26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton26->Click += gcnew System::EventHandler(this, &PaymentForm::bunifuThinButton26_Click);
			// 
			// bunifuCustomLabel12
			// 
			this->bunifuCustomLabel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuCustomLabel12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCustomLabel12->Location = System::Drawing::Point(200, 25);
			this->bunifuCustomLabel12->Name = L"bunifuCustomLabel12";
			this->bunifuCustomLabel12->Size = System::Drawing::Size(32, 22);
			this->bunifuCustomLabel12->TabIndex = 117;
			this->bunifuCustomLabel12->Text = L"€";
			this->bunifuCustomLabel12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label1->Location = System::Drawing::Point(124, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 24);
			this->label1->TabIndex = 116;
			this->label1->Text = L"price";
			// 
			// ConcertCartData
			// 
			this->ConcertCartData->AllowUserToAddRows = false;
			this->ConcertCartData->AllowUserToDeleteRows = false;
			this->ConcertCartData->AllowUserToResizeColumns = false;
			this->ConcertCartData->AllowUserToResizeRows = false;
			this->ConcertCartData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ConcertCartData->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ConcertCartData->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ConcertCartData->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->ConcertCartData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ConcertCartData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->Column2
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ConcertCartData->DefaultCellStyle = dataGridViewCellStyle2;
			this->ConcertCartData->EnableHeadersVisualStyles = false;
			this->ConcertCartData->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ConcertCartData->Location = System::Drawing::Point(68, 188);
			this->ConcertCartData->Name = L"ConcertCartData";
			this->ConcertCartData->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ConcertCartData->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->ConcertCartData->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ConcertCartData->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->ConcertCartData->Size = System::Drawing::Size(715, 105);
			this->ConcertCartData->TabIndex = 114;
			this->ConcertCartData->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PaymentForm::ConcertCartData_CellContentClick);
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Concert Name";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			this->dataGridViewTextBoxColumn9->Width = 150;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Date";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Width = 140;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"City";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			this->dataGridViewTextBoxColumn11->Width = 155;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn12->HeaderText = L"Price";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Column2->HeaderText = L"Delete";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// FestivalCartData
			// 
			this->FestivalCartData->AllowUserToAddRows = false;
			this->FestivalCartData->AllowUserToDeleteRows = false;
			this->FestivalCartData->AllowUserToResizeColumns = false;
			this->FestivalCartData->AllowUserToResizeRows = false;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->FestivalCartData->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle5;
			this->FestivalCartData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->FestivalCartData->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->FestivalCartData->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->FestivalCartData->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->FestivalCartData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->FestivalCartData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->Column1
			});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->FestivalCartData->DefaultCellStyle = dataGridViewCellStyle8;
			this->FestivalCartData->EnableHeadersVisualStyles = false;
			this->FestivalCartData->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->FestivalCartData->Location = System::Drawing::Point(67, 83);
			this->FestivalCartData->Name = L"FestivalCartData";
			this->FestivalCartData->ReadOnly = true;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->FestivalCartData->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->FestivalCartData->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->FestivalCartData->RowsDefaultCellStyle = dataGridViewCellStyle10;
			this->FestivalCartData->Size = System::Drawing::Size(716, 105);
			this->FestivalCartData->TabIndex = 113;
			this->FestivalCartData->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PaymentForm::FestivalCartData_CellContentClick);
			// 
			// dataGridViewTextBoxColumn5
			// 
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->dataGridViewTextBoxColumn5->DefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridViewTextBoxColumn5->HeaderText = L"Festival Name";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 50;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewTextBoxColumn5->Width = 150;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Date";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 50;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 140;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"City";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 50;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 155;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Price";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 50;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Column1->HeaderText = L"Delete";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// bunifuThinButton3
			// 
			this->bunifuThinButton3->ActiveBorderThickness = 2;
			this->bunifuThinButton3->ActiveCornerRadius = 30;
			this->bunifuThinButton3->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton3->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton3->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton3.BackgroundImage")));
			this->bunifuThinButton3->ButtonText = L"Checkout";
			this->bunifuThinButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton3->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton3->IdleBorderThickness = 2;
			this->bunifuThinButton3->IdleCornerRadius = 30;
			this->bunifuThinButton3->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton3->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton3->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton3->Location = System::Drawing::Point(307, 287);
			this->bunifuThinButton3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton3->Name = L"bunifuThinButton3";
			this->bunifuThinButton3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton3->Size = System::Drawing::Size(206, 47);
			this->bunifuThinButton3->TabIndex = 112;
			this->bunifuThinButton3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton3->Click += gcnew System::EventHandler(this, &PaymentForm::bunifuThinButton3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label3->Location = System::Drawing::Point(45, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 24);
			this->label3->TabIndex = 115;
			this->label3->Text = L"Total";
			// 
			// bunifuThinButton27
			// 
			this->bunifuThinButton27->ActiveBorderThickness = 3;
			this->bunifuThinButton27->ActiveCornerRadius = 30;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton27.BackgroundImage")));
			this->bunifuThinButton27->ButtonText = L"";
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton27->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleBorderThickness = 3;
			this->bunifuThinButton27->IdleCornerRadius = 30;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton27->Location = System::Drawing::Point(13, 59);
			this->bunifuThinButton27->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton27->Name = L"bunifuThinButton27";
			this->bunifuThinButton27->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->bunifuThinButton27->Size = System::Drawing::Size(798, 331);
			this->bunifuThinButton27->TabIndex = 90;
			this->bunifuThinButton27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(759, 9);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(26, 25);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 24;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(791, 11);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 23;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &PaymentForm::bunifuImageButton1_Click);
			// 
			// bunifuCircleProgressbar1
			// 
			this->bunifuCircleProgressbar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bunifuCircleProgressbar1->animated = true;
			this->bunifuCircleProgressbar1->animationIterval = 8;
			this->bunifuCircleProgressbar1->animationSpeed = 1;
			this->bunifuCircleProgressbar1->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->bunifuCircleProgressbar1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuCircleProgressbar1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuCircleProgressbar1.BackgroundImage")));
			this->bunifuCircleProgressbar1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bunifuCircleProgressbar1->CausesValidation = false;
			this->bunifuCircleProgressbar1->Font = (gcnew System::Drawing::Font(L"Calibri", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCircleProgressbar1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCircleProgressbar1->LabelVisible = false;
			this->bunifuCircleProgressbar1->LineProgressThickness = 8;
			this->bunifuCircleProgressbar1->LineThickness = 10;
			this->bunifuCircleProgressbar1->Location = System::Drawing::Point(519, 26);
			this->bunifuCircleProgressbar1->Margin = System::Windows::Forms::Padding(0);
			this->bunifuCircleProgressbar1->MaxValue = 100;
			this->bunifuCircleProgressbar1->Name = L"bunifuCircleProgressbar1";
			this->bunifuCircleProgressbar1->ProgressBackColor = System::Drawing::Color::White;
			this->bunifuCircleProgressbar1->ProgressColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuCircleProgressbar1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuCircleProgressbar1->Size = System::Drawing::Size(218, 218);
			this->bunifuCircleProgressbar1->TabIndex = 116;
			this->bunifuCircleProgressbar1->Value = 0;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->bunifu2);
			this->panel4->Controls->Add(this->bunifu1);
			this->panel4->Controls->Add(this->bunifuCircleProgressbar1);
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Location = System::Drawing::Point(0, 1);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(820, 442);
			this->panel4->TabIndex = 117;
			this->panel4->Visible = false;
			// 
			// bunifu2
			// 
			this->bunifu2->AutoSize = true;
			this->bunifu2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifu2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifu2->Location = System::Drawing::Point(499, 313);
			this->bunifu2->Name = L"bunifu2";
			this->bunifu2->Size = System::Drawing::Size(225, 24);
			this->bunifu2->TabIndex = 117;
			this->bunifu2->Text = L"Thank you for buying!";
			this->bunifu2->Visible = false;
			// 
			// bunifu1
			// 
			this->bunifu1->AutoSize = true;
			this->bunifu1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifu1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifu1->Location = System::Drawing::Point(457, 253);
			this->bunifu1->Name = L"bunifu1";
			this->bunifu1->Size = System::Drawing::Size(322, 24);
			this->bunifu1->TabIndex = 116;
			this->bunifu1->Text = L"Your purchase has completed";
			this->bunifu1->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox3->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.ErrorImage")));
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(401, 442);
			this->pictureBox3->TabIndex = 118;
			this->pictureBox3->TabStop = false;
			// 
			// progressBarTimer
			// 
			this->progressBarTimer->Interval = 500;
			this->progressBarTimer->Tick += gcnew System::EventHandler(this, &PaymentForm::progressBarTimer_Tick);
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &PaymentForm::timer1_Tick);
			// 
			// PaymentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(820, 442);
			this->Controls->Add(this->bunifuImageButton2);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PaymentForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"PaymentForm";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PaymentForm::PaymentForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PaymentForm::PaymentForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &PaymentForm::PaymentForm_MouseUp);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HelpIconButton))->EndInit();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConcertCartData))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FestivalCartData))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
		}
#pragma endregion
private: System::Void PaymentForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}
private: System::Void PaymentForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (this->dragging)
	{
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X,
		currentScreenPos.Y - this->offset.Y);
	}
}
private: System::Void PaymentForm_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	this->dragging = false;
}
		void cartList()
		{
	
			String^ print;
			
			int persConcTicketNum = glob::pers.People[glob::pers.pers_number].GetPersonConcTicketNum();
			int persFestTicketNum = glob::pers.People[glob::pers.pers_number].GetPersonFestTicketNum();
			label1->Text = glob::totalPrice.ToString();

	if (glob::shoppingCart_num > 0)
	{
			FestivalCartData->Rows->Clear();
			ConcertCartData->Rows->Clear();

		if (persFestTicketNum != 0)
			{
				for (int i = 0; i < persFestTicketNum; i++)
				{
					int FestTicketID = glob::pers.People[glob::pers.pers_number].GetPersonFestTicketID(i);
					FestivalCartData->Rows->Add();
					FestivalCartData->Rows[i]->Height = 50;
					print = gcnew String(glob::fest.Festivals[FestTicketID].fest_name.c_str());
					FestivalCartData[0, i]->Value = print;
					print = gcnew String(glob::fest.Festivals[FestTicketID].fest_date.c_str());
					FestivalCartData[1, i]->Value = print;
					print = gcnew String(glob::fest.Festivals[FestTicketID].fest_place.c_str());
					FestivalCartData[2, i]->Value = print;
					FestivalCartData[3, i]->Value = glob::ticketPriceSumFest[FestTicketID];
					FestivalCartData[4, i]->Value = "Delete";

				}

				}
		if (persConcTicketNum != 0)
			{
				for (int i = 0; i < persConcTicketNum; i++)
				{
					int ConcTicketID = glob::pers.People[glob::pers.pers_number].GetPersonConcTicketID(i);
					ConcertCartData->Rows->Add();
					ConcertCartData->Rows[i]->Height = 50;
					print = gcnew String(glob::conc.Concerts[ConcTicketID].conc_name.c_str());
					ConcertCartData[0, i]->Value = print;
					print = gcnew String(glob::conc.Concerts[ConcTicketID].conc_date.c_str());
					ConcertCartData[1, i]->Value = print;
					print = gcnew String(glob::conc.Concerts[ConcTicketID].conc_place.c_str());
					ConcertCartData[2, i]->Value = print;
					ConcertCartData[3, i]->Value = glob::ticketPriceSumConc[ConcTicketID];
					ConcertCartData[4, i]->Value = "Delete";
				}
			}
		}
			else
				glob::totalPrice = 0;
		}
	private: System::Void HelpIconButton_MouseHover(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Visible = true;
	}
private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void HelpIconButton_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Visible = false;
}
private: System::Void bunifuThinButton2_Click(System::Object^  sender, System::EventArgs^  e) {

	if (textBox1->Text != "" &&
		textBox2->Text != "" &&
		textBox3->Text != "" &&
		textBox4->Text != "" &&
		comboBox1->Text != ""&&
		comboBox2->Text != ""&&
		comboBox3->Text != "")
	{
		panel1->Visible = false;
		panel3->Visible = true;

		cartList();
	}
	else
	{
		MessageBox::Show("All text boxes with * should be filled.");
		if (textBox1->Text == "")
		textBox1->BackColor = System::Drawing::Color::Crimson;
		else
		textBox1->BackColor = System::Drawing::Color::White;
		if (textBox2->Text == "")
		textBox2->BackColor = System::Drawing::Color::Crimson;
		else
			textBox2->BackColor = System::Drawing::Color::White;
		if (textBox3->Text == "")
		textBox3->BackColor = System::Drawing::Color::Crimson;
		else
			textBox3->BackColor = System::Drawing::Color::White;
		if (textBox4->Text == "")
		textBox4->BackColor = System::Drawing::Color::Crimson;
		else
			textBox4->BackColor = System::Drawing::Color::White;
		if (comboBox1->Text == "")
		comboBox1->BackColor = System::Drawing::Color::Crimson;
		else
		comboBox1->BackColor = System::Drawing::Color::White;
		if (comboBox2->Text == "")
			comboBox2->BackColor = System::Drawing::Color::Crimson;
		else
			comboBox2->BackColor = System::Drawing::Color::White;
		if (comboBox3->Text == "")
			comboBox3->BackColor = System::Drawing::Color::Crimson;
		else
			comboBox3->BackColor = System::Drawing::Color::White;		
	}
}
private: System::Void bunifuThinButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (textBox5->Text != "" &&
		textBox6->Text != "" &&
		textBox7->Text != "" &&
		textBox8->Text != ""&&
		comboBox5->Text != ""&&
		comboBox6->Text != ""&&
		comboBox7->Text != "")
	{
		if (textBox7->Text == textBox8->Text)
		{
			panel2->Visible = false;
			panel1->Visible = true;
		}
		else
			MessageBox::Show("Your Email does not match.");
	}
	else
	{
		MessageBox::Show("All text boxes with * should be filled.");
		if (textBox5->Text == "")
			textBox5->BackColor = System::Drawing::Color::Crimson;
		else
			textBox5->BackColor = System::Drawing::Color::White;
		if (textBox6->Text == "")
			textBox6->BackColor = System::Drawing::Color::Crimson;
		else
			textBox6->BackColor = System::Drawing::Color::White;
		if (textBox7->Text == "")
			textBox7->BackColor = System::Drawing::Color::Crimson;
		else
			textBox7->BackColor = System::Drawing::Color::White;
		if (textBox8->Text == "")
			textBox8->BackColor = System::Drawing::Color::Crimson;
		else
			textBox8->BackColor = System::Drawing::Color::White;
		if (comboBox5->Text == "")
			comboBox5->BackColor = System::Drawing::Color::Crimson;
		else
			comboBox5->BackColor = System::Drawing::Color::White;
		if (comboBox6->Text == "")
			comboBox6->BackColor = System::Drawing::Color::Crimson;
		else
			comboBox6->BackColor = System::Drawing::Color::White;
		if (comboBox7->Text == "")
			comboBox7->BackColor = System::Drawing::Color::Crimson;
		else
			comboBox7->BackColor = System::Drawing::Color::White;
	}
}
private: System::Void bunifuThinButton3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ Name, ^SecondName, ^Email, ^Day, ^Month, ^Year,^ CardName, ^CardSecondName, ^CardCountry, ^CardMonth, ^CardYear, ^ CardNumber, ^CardCSC;
	std::string name, secondname, email, birthdate, day, month, year, cardname, cardsecondname, cardcountry, cardmonth, cardyear, carddate, cardnumber, cardcsc,
	ID = "ID" + std::to_string(glob::pers.pers_number+1);

	int persFestTicketNum = glob::pers.People[glob::pers.pers_number].GetPersonFestTicketNum();
	int persConcTicketNum = glob::pers.People[glob::pers.pers_number].GetPersonConcTicketNum();
	int cardCSC;

	glob::shoppingCart_num = 0;
	glob::allCampingsAmount = 0;
	glob::allTicketsAmount = 0;
	glob::totalPrice = 0;
	
	Year = comboBox5->Text;
	Month = comboBox6->Text;
	Day = comboBox7->Text;
	Name = textBox5->Text;
	SecondName = textBox6->Text;
	Email = textBox7->Text;

	name = glob::pers.People[glob::pers.pers_number].convert(Name);
	secondname = glob::pers.People[glob::pers.pers_number].convert(SecondName);
	email = glob::pers.People[glob::pers.pers_number].convert(Email);
	day = glob::pers.People[glob::pers.pers_number].convert(Day);
	month = glob::pers.People[glob::pers.pers_number].convert(Month);
	year = glob::pers.People[glob::pers.pers_number].convert(Year);
	birthdate = year + "/" + month + "/" + day;

	CardNumber = textBox1->Text;
	CardName = textBox2->Text;
	CardSecondName = textBox3->Text;
	CardCSC = textBox4->Text;
	CardYear = comboBox3->Text;
	CardMonth = comboBox2->Text;
	CardCountry = comboBox1->Text;
		
	cardcsc = glob::pers.People[glob::pers.pers_number].convert(CardCSC);
	cardnumber = glob::pers.People[glob::pers.pers_number].convert(CardNumber);
	cardname = glob::pers.People[glob::pers.pers_number].convert(CardName);
	cardsecondname = glob::pers.People[glob::pers.pers_number].convert(CardSecondName);
	cardcountry = glob::pers.People[glob::pers.pers_number].convert(CardCountry);
	cardyear = glob::pers.People[glob::pers.pers_number].convert(CardYear);
	cardmonth = glob::pers.People[glob::pers.pers_number].convert(CardMonth);
	carddate = cardyear + "/" + cardmonth;
	
		cardCSC = int::Parse(textBox4->Text);
		glob::pers.People[glob::pers.pers_number].InsertPersonCardData(glob::pers.pers_number, cardname, cardsecondname, cardcountry, carddate, cardnumber, cardCSC);
		glob::pers.People[glob::pers.pers_number].InsertPersonData(glob::pers.pers_number, ID, name, secondname, birthdate, email);
		glob::pers.People[glob::pers.pers_number].InsertPersonConcTicketnum(glob::pers.pers_number, persConcTicketNum);
		glob::pers.People[glob::pers.pers_number].InsertPersonFestTicketnum(glob::pers.pers_number, persFestTicketNum);
		glob::pers.PrintFestivalTicket(glob::pers.pers_number);
		glob::pers.PrintConcertTicket(glob::pers.pers_number);
		for (int i = 0; i < persFestTicketNum; i++)
		{
			int FestTicketID = glob::pers.People[glob::pers.pers_number].GetPersonFestTicketID(i);
			glob::fest.Festivals[FestTicketID].fest_tickets -= (glob::festTicketAmount_1[FestTicketID] + glob::festTicketAmount_2[FestTicketID] + glob::festTicketAmount_3[FestTicketID]);
		}
		for (int i = 0; i < persConcTicketNum; i++)
		{
			int ConcTicketID = glob::pers.People[glob::pers.pers_number].GetPersonConcTicketID(i);
			glob::conc.Concerts[ConcTicketID].conc_tickets -= (glob::concTicketAmount_1[ConcTicketID] + glob::concTicketAmount_2[ConcTicketID] + glob::concTicketAmount_3[ConcTicketID] + +glob::concTicketAmount_4[ConcTicketID] + glob::concTicketAmount_5[ConcTicketID]);
		}
		glob::pers.pers_number++;
		glob::pers.PrintPersonDataToFile();
		glob::Check = 1;
		glob::fest.PrintToFile();
		glob::conc.PrintToFile();
		glob::pers.PrintCFReport();
		panel4->Visible = true;
		progressBarTimer->Start();
}
private: System::Void FestivalCartData_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->ColumnIndex == 4 && glob::pers.People[glob::pers.pers_number].GetPersonFestTicketNum() != 0)
	{
		int persFestTicketNum = glob::pers.People[glob::pers.pers_number].GetPersonFestTicketNum();
		int index = FestivalCartData->CurrentRow->Index;
		for (int i = index; i < persFestTicketNum - 1; i++)
		{
			glob::pers.People[glob::pers.pers_number].RemovePersonFestTicketID(i);
			glob::ticketPriceSumFest[i] = glob::ticketPriceSumFest[i + 1];
		}
		persFestTicketNum--;
		glob::shoppingCart_num--;
		glob::pers.People[glob::pers.pers_number].InsertPersonFestTicketnum(glob::pers.pers_number, persFestTicketNum);
		FestivalCartData->Rows->Clear();
		cartList();
	}
}
private: System::Void ConcertCartData_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->ColumnIndex == 4 && glob::pers.People[glob::pers.pers_number].GetPersonConcTicketNum() != 0)
	{
		int persConcTicketNum = glob::pers.People[glob::pers.pers_number].GetPersonConcTicketNum();
		int index = ConcertCartData->CurrentRow->Index;
		for (int i = index; i < persConcTicketNum - 1; i++)
		{
			glob::pers.People[glob::pers.pers_number].RemovePersonConcTicketID(i);
			glob::ticketPriceSumConc[i] = glob::ticketPriceSumConc[i + 1];
		}
		persConcTicketNum--;
		glob::shoppingCart_num--;
		glob::pers.People[glob::pers.pers_number].InsertPersonConcTicketnum(glob::pers.pers_number, persConcTicketNum);
		ConcertCartData->Rows->Clear();
		cartList();
	}
}
private: System::Void progressBarTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
	if (bunifuCircleProgressbar1->Value != 34)
	{
		bunifuCircleProgressbar1->Value += 1;
		bunifuCircleProgressbar1->Update();
	}
	if (bunifuCircleProgressbar1->Value != 100)
	{
		progressBarTimer->Interval = 80;
		bunifuCircleProgressbar1->Value += 1;
		bunifuCircleProgressbar1->Update();
	}
	else 
	{
		bunifu1->Visible = true;
		bunifu2->Visible = true;
		bunifuCircleProgressbar1->TabStop;
		bunifuCircleProgressbar1->Enabled = false;
		progressBarTimer->Stop();
		timer1->Start();
	}	
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	system("start FestivalTicket.txt");
	system("start ConcertTicket.txt");
	Close();
}
private: System::Void bunifuThinButton25_Click(System::Object^  sender, System::EventArgs^  e) {
	panel5->Visible = false;
}
private: System::Void bunifuThinButton23_Click(System::Object^  sender, System::EventArgs^  e) {
	panel5->Visible = true;
}
private: System::Void bunifuThinButton26_Click(System::Object^  sender, System::EventArgs^  e) {
	panel1->Visible = true;
	panel5->Visible = false;
	panel4->Visible = false;
	panel3->Visible = false;
}
private: System::Void bunifuThinButton29_Click(System::Object^  sender, System::EventArgs^  e) {
	panel1->Visible = false;
	panel2->Visible = true;
}
};
}
