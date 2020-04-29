#pragma once
#include "AdminForm.h"
#include "HelpForm.h"
#include "BuyConcertTicket.h"
#include "BuyFestivalTicket.h"
#include "PaymentForm.h"
#include "Login.h"
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
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			concert();
			festival();
			picturesTimer->Start();
			timer2->Start();
			timerReload->Start();
			glob::Check = 0;
			concertList();
			festivalList();
			glob::shoppingCart_num = 0;
			glob::pers.PrintCFReport();	
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
private: bool dragging;
private: Point offset;
private: bool isCollapsed;
private: System::Windows::Forms::Timer^  timer1;
private: System::Windows::Forms::Panel^  panelDropDown;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Timer^  timer2;
private: System::Windows::Forms::Timer^  picturesTimer;
private: System::Windows::Forms::Panel^  panel5;
private: ns1::BunifuElipse^  bunifuElipse1;
private: System::Windows::Forms::DataGridView^  festivaldataGridView;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Panel^  panel2;
private: ns1::BunifuThinButton2^  MainButton;
private: ns1::BunifuImageButton^  FestivalIconButton;
private: ns1::BunifuImageButton^  ConcertIconButton;
private: ns1::BunifuThinButton2^  FestivalsButton;
private: ns1::BunifuThinButton2^  ConcertsButton;
private: ns1::BunifuThinButton2^  HelpButton;
private: ns1::BunifuImageButton^  HelpIconButton;
private: ns1::BunifuImageButton^  bunifuImageButton2;
private: ns1::BunifuImageButton^  bunifuImageButton1;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: ns1::BunifuImageButton^  MenuIconButton;
private: System::Windows::Forms::DataGridView^  concertdataGridView;
private: ns1::BunifuImageButton^  bunifuImageButton3;
private: ns1::BunifuImageButton^  bunifuImageButton4;
private: System::Windows::Forms::TabControl^  Mainpanel;
private: System::Windows::Forms::TabPage^  tabPage2;
private: System::Windows::Forms::TabPage^  tabPage1;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::TabPage^  tabPage4;
private: System::Windows::Forms::TabPage^  tabPage5;
private: System::Windows::Forms::Panel^  Mainpanel3;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::PictureBox^  pictureBox6;
private: System::Windows::Forms::PictureBox^  pictureBox7;
private: ns1::BunifuSeparator^  bunifuSeparator1;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: ns1::BunifuSeparator^  bunifuSeparator2;
private: System::Windows::Forms::PictureBox^  pictureBox10;
private: System::Windows::Forms::PictureBox^  pictureBox9;
private: System::Windows::Forms::PictureBox^  pictureBox8;
private: ns1::BunifuImageButton^  CartIconButton;
private: ns1::BunifuThinButton2^  CartButton;
private: System::Windows::Forms::Panel^  Mainpanel2;
private: System::Windows::Forms::PictureBox^  pictureBox13;
private: System::Windows::Forms::PictureBox^  pictureBox14;
private: System::Windows::Forms::Label^  label4;
private: ns1::BunifuSeparator^  bunifuSeparator3;
private: ns1::BunifuSeparator^  bunifuSeparator4;
private: ns1::BunifuImageButton^  bunifuImageButton7;
private: ns1::BunifuImageButton^  bunifuImageButton8;
private: ns1::BunifuImageButton^  bunifuImageButton6;
private: ns1::BunifuImageButton^  bunifuImageButton5;
private: ns1::BunifuThinButton2^  bunifuThinButton21;
private: ns1::BunifuThinButton2^  bunifuThinButton22;
private: ns1::BunifuThinButton2^  bunifuThinButton23;
private: System::Windows::Forms::Panel^  Artistspanel;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Panel^  Artistsboxlittle;
private: ns1::BunifuImageButton^  bunifuImageButton9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewButtonColumn^  Artists;
private: System::Windows::Forms::DataGridViewButtonColumn^  Ticketsleft;
private: System::Windows::Forms::DataGridViewButtonColumn^  dataGridViewButtonColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ConcName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ConcDate;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  City;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Price;
private: System::Windows::Forms::DataGridViewButtonColumn^  ConcArtists;
private: System::Windows::Forms::DataGridViewButtonColumn^  BuyTicket;
private: System::Windows::Forms::DataGridViewButtonColumn^  MoreInfo;
private: System::Windows::Forms::PictureBox^  pictureBox11;
private: System::Windows::Forms::PictureBox^  pictureBox12;
private: System::Windows::Forms::Panel^  Infopanel1;
private: ns1::BunifuImageButton^  bunifuImageButton10;
private: System::Windows::Forms::Panel^  Infopanel2;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Panel^  cartpanel;
private: System::Windows::Forms::Label^  label7;
private: ns1::BunifuImageButton^  bunifuImageButton11;
private: ns1::BunifuThinButton2^  accbutton2;
private: ns1::BunifuImageButton^  accbutton;
private: System::Windows::Forms::Label^  ticketsumlabel;
private: System::Windows::Forms::PictureBox^  pictureBox15;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Timer^  timerReload;
private: ns1::BunifuImageButton^  bunifuImageButton12;
private: System::Windows::Forms::DataGridView^  ConcertCartData;
private: System::Windows::Forms::DataGridView^  FestivalCartData;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewButtonColumn^  dataGridViewButtonColumn6;
private: System::Windows::Forms::DataGridViewButtonColumn^  dataGridViewButtonColumn7;
private: System::Windows::Forms::DataGridViewButtonColumn^  Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewButtonColumn^  dataGridViewButtonColumn3;
private: System::Windows::Forms::DataGridViewButtonColumn^  dataGridViewButtonColumn4;
private: System::Windows::Forms::DataGridViewButtonColumn^  Column1;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label10;
private: ns1::BunifuMetroTextbox^  searchingConcBox;
private: ns1::BunifuMetroTextbox^  searchingFestBox;
private: ns1::BunifuImageButton^  searchButton;
private: ns1::BunifuThinButton2^  bunifuThinButton24;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panelDropDown = (gcnew System::Windows::Forms::Panel());
			this->ticketsumlabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->accbutton2 = (gcnew ns1::BunifuThinButton2());
			this->accbutton = (gcnew ns1::BunifuImageButton());
			this->CartIconButton = (gcnew ns1::BunifuImageButton());
			this->CartButton = (gcnew ns1::BunifuThinButton2());
			this->bunifuThinButton21 = (gcnew ns1::BunifuThinButton2());
			this->bunifuImageButton4 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton3 = (gcnew ns1::BunifuImageButton());
			this->HelpIconButton = (gcnew ns1::BunifuImageButton());
			this->HelpButton = (gcnew ns1::BunifuThinButton2());
			this->FestivalsButton = (gcnew ns1::BunifuThinButton2());
			this->ConcertsButton = (gcnew ns1::BunifuThinButton2());
			this->MainButton = (gcnew ns1::BunifuThinButton2());
			this->FestivalIconButton = (gcnew ns1::BunifuImageButton());
			this->ConcertIconButton = (gcnew ns1::BunifuImageButton());
			this->MenuIconButton = (gcnew ns1::BunifuImageButton());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->picturesTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->bunifuElipse1 = (gcnew ns1::BunifuElipse(this->components));
			this->festivaldataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Artists = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Ticketsleft = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->dataGridViewButtonColumn2 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->searchingConcBox = (gcnew ns1::BunifuMetroTextbox());
			this->searchingFestBox = (gcnew ns1::BunifuMetroTextbox());
			this->searchButton = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton2 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton1 = (gcnew ns1::BunifuImageButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuImageButton12 = (gcnew ns1::BunifuImageButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->concertdataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->ConcName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ConcDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->City = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ConcArtists = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->BuyTicket = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->MoreInfo = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Mainpanel = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->Artistsboxlittle = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton9 = (gcnew ns1::BunifuImageButton());
			this->Infopanel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton10 = (gcnew ns1::BunifuImageButton());
			this->Infopanel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Mainpanel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuThinButton22 = (gcnew ns1::BunifuThinButton2());
			this->bunifuImageButton6 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton5 = (gcnew ns1::BunifuImageButton());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->bunifuSeparator3 = (gcnew ns1::BunifuSeparator());
			this->bunifuSeparator4 = (gcnew ns1::BunifuSeparator());
			this->Artistspanel = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Mainpanel3 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton23 = (gcnew ns1::BunifuThinButton2());
			this->bunifuImageButton7 = (gcnew ns1::BunifuImageButton());
			this->bunifuImageButton8 = (gcnew ns1::BunifuImageButton());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bunifuSeparator1 = (gcnew ns1::BunifuSeparator());
			this->bunifuSeparator2 = (gcnew ns1::BunifuSeparator());
			this->cartpanel = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton11 = (gcnew ns1::BunifuImageButton());
			this->bunifuThinButton24 = (gcnew ns1::BunifuThinButton2());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->ConcertCartData = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewButtonColumn6 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->dataGridViewButtonColumn7 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->FestivalCartData = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewButtonColumn3 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->dataGridViewButtonColumn4 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->timerReload = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelDropDown->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->accbutton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CartIconButton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HelpIconButton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FestivalIconButton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConcertIconButton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuIconButton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->festivaldataGridView))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchButton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->concertdataGridView))->BeginInit();
			this->Mainpanel->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->Artistsboxlittle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton9))->BeginInit();
			this->Infopanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton10))->BeginInit();
			this->Infopanel2->SuspendLayout();
			this->Mainpanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->Artistspanel->SuspendLayout();
			this->Mainpanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->cartpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConcertCartData))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FestivalCartData))->BeginInit();
			this->SuspendLayout();
			// 
			// panelDropDown
			// 
			this->panelDropDown->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panelDropDown->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelDropDown->Controls->Add(this->ticketsumlabel);
			this->panelDropDown->Controls->Add(this->pictureBox15);
			this->panelDropDown->Controls->Add(this->accbutton2);
			this->panelDropDown->Controls->Add(this->accbutton);
			this->panelDropDown->Controls->Add(this->CartIconButton);
			this->panelDropDown->Controls->Add(this->CartButton);
			this->panelDropDown->Controls->Add(this->bunifuThinButton21);
			this->panelDropDown->Controls->Add(this->bunifuImageButton4);
			this->panelDropDown->Controls->Add(this->bunifuImageButton3);
			this->panelDropDown->Controls->Add(this->HelpIconButton);
			this->panelDropDown->Controls->Add(this->HelpButton);
			this->panelDropDown->Controls->Add(this->FestivalsButton);
			this->panelDropDown->Controls->Add(this->ConcertsButton);
			this->panelDropDown->Controls->Add(this->MainButton);
			this->panelDropDown->Controls->Add(this->FestivalIconButton);
			this->panelDropDown->Controls->Add(this->ConcertIconButton);
			this->panelDropDown->Controls->Add(this->MenuIconButton);
			this->panelDropDown->Location = System::Drawing::Point(0, 0);
			this->panelDropDown->MaximumSize = System::Drawing::Size(193, 632);
			this->panelDropDown->MinimumSize = System::Drawing::Size(66, 632);
			this->panelDropDown->Name = L"panelDropDown";
			this->panelDropDown->Size = System::Drawing::Size(66, 632);
			this->panelDropDown->TabIndex = 5;
			// 
			// ticketsumlabel
			// 
			this->ticketsumlabel->AutoSize = true;
			this->ticketsumlabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ticketsumlabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ticketsumlabel->ForeColor = System::Drawing::Color::White;
			this->ticketsumlabel->Location = System::Drawing::Point(10, 468);
			this->ticketsumlabel->Name = L"ticketsumlabel";
			this->ticketsumlabel->Size = System::Drawing::Size(15, 16);
			this->ticketsumlabel->TabIndex = 41;
			this->ticketsumlabel->Text = L"0";
			this->ticketsumlabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(0, 464);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(37, 24);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 40;
			this->pictureBox15->TabStop = false;
			// 
			// accbutton2
			// 
			this->accbutton2->ActiveBorderThickness = 1;
			this->accbutton2->ActiveCornerRadius = 20;
			this->accbutton2->ActiveFillColor = System::Drawing::Color::Transparent;
			this->accbutton2->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->accbutton2->ActiveLineColor = System::Drawing::Color::Transparent;
			this->accbutton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->accbutton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"accbutton2.BackgroundImage")));
			this->accbutton2->ButtonText = L"Account";
			this->accbutton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->accbutton2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accbutton2->ForeColor = System::Drawing::Color::Transparent;
			this->accbutton2->IdleBorderThickness = 1;
			this->accbutton2->IdleCornerRadius = 20;
			this->accbutton2->IdleFillColor = System::Drawing::Color::Transparent;
			this->accbutton2->IdleForecolor = System::Drawing::Color::White;
			this->accbutton2->IdleLineColor = System::Drawing::Color::Transparent;
			this->accbutton2->Location = System::Drawing::Point(64, 407);
			this->accbutton2->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->accbutton2->Name = L"accbutton2";
			this->accbutton2->Size = System::Drawing::Size(135, 44);
			this->accbutton2->TabIndex = 38;
			this->accbutton2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->accbutton2->Visible = false;
			// 
			// accbutton
			// 
			this->accbutton->BackColor = System::Drawing::Color::Transparent;
			this->accbutton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"accbutton.Image")));
			this->accbutton->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"accbutton.ImageActive")));
			this->accbutton->Location = System::Drawing::Point(3, 406);
			this->accbutton->Name = L"accbutton";
			this->accbutton->Size = System::Drawing::Size(60, 54);
			this->accbutton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->accbutton->TabIndex = 37;
			this->accbutton->TabStop = false;
			this->accbutton->Visible = false;
			this->accbutton->Zoom = 10;
			// 
			// CartIconButton
			// 
			this->CartIconButton->BackColor = System::Drawing::Color::Transparent;
			this->CartIconButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CartIconButton.Image")));
			this->CartIconButton->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CartIconButton.ImageActive")));
			this->CartIconButton->Location = System::Drawing::Point(2, 480);
			this->CartIconButton->Name = L"CartIconButton";
			this->CartIconButton->Size = System::Drawing::Size(60, 50);
			this->CartIconButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->CartIconButton->TabIndex = 36;
			this->CartIconButton->TabStop = false;
			this->CartIconButton->Zoom = 10;
			this->CartIconButton->Click += gcnew System::EventHandler(this, &MainForm::CartIconButton_Click);
			// 
			// CartButton
			// 
			this->CartButton->ActiveBorderThickness = 1;
			this->CartButton->ActiveCornerRadius = 20;
			this->CartButton->ActiveFillColor = System::Drawing::Color::Transparent;
			this->CartButton->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->CartButton->ActiveLineColor = System::Drawing::Color::Transparent;
			this->CartButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->CartButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CartButton.BackgroundImage")));
			this->CartButton->ButtonText = L"Cart";
			this->CartButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CartButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CartButton->ForeColor = System::Drawing::Color::Transparent;
			this->CartButton->IdleBorderThickness = 1;
			this->CartButton->IdleCornerRadius = 20;
			this->CartButton->IdleFillColor = System::Drawing::Color::Transparent;
			this->CartButton->IdleForecolor = System::Drawing::Color::White;
			this->CartButton->IdleLineColor = System::Drawing::Color::Transparent;
			this->CartButton->Location = System::Drawing::Point(63, 482);
			this->CartButton->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->CartButton->Name = L"CartButton";
			this->CartButton->Size = System::Drawing::Size(135, 44);
			this->CartButton->TabIndex = 35;
			this->CartButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->CartButton->Click += gcnew System::EventHandler(this, &MainForm::CartButton_Click);
			// 
			// bunifuThinButton21
			// 
			this->bunifuThinButton21->ActiveBorderThickness = 1;
			this->bunifuThinButton21->ActiveCornerRadius = 20;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton21.BackgroundImage")));
			this->bunifuThinButton21->ButtonText = L"Login";
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton21->ForeColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton21->IdleBorderThickness = 1;
			this->bunifuThinButton21->IdleCornerRadius = 20;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton21->Location = System::Drawing::Point(63, 407);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->Size = System::Drawing::Size(135, 44);
			this->bunifuThinButton21->TabIndex = 34;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton21->Click += gcnew System::EventHandler(this, &MainForm::bunifuThinButton21_Click_1);
			// 
			// bunifuImageButton4
			// 
			this->bunifuImageButton4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton4.Image")));
			this->bunifuImageButton4->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton4.ImageActive")));
			this->bunifuImageButton4->Location = System::Drawing::Point(2, 406);
			this->bunifuImageButton4->Name = L"bunifuImageButton4";
			this->bunifuImageButton4->Size = System::Drawing::Size(60, 54);
			this->bunifuImageButton4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton4->TabIndex = 33;
			this->bunifuImageButton4->TabStop = false;
			this->bunifuImageButton4->Zoom = 10;
			this->bunifuImageButton4->Click += gcnew System::EventHandler(this, &MainForm::bunifuImageButton4_Click_1);
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.Image")));
			this->bunifuImageButton3->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.ImageActive")));
			this->bunifuImageButton3->Location = System::Drawing::Point(12, 106);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(41, 40);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 32;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 10;
			this->bunifuImageButton3->Click += gcnew System::EventHandler(this, &MainForm::bunifuImageButton3_Click_1);
			// 
			// HelpIconButton
			// 
			this->HelpIconButton->BackColor = System::Drawing::Color::Transparent;
			this->HelpIconButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HelpIconButton.Image")));
			this->HelpIconButton->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HelpIconButton.ImageActive")));
			this->HelpIconButton->Location = System::Drawing::Point(0, 553);
			this->HelpIconButton->Name = L"HelpIconButton";
			this->HelpIconButton->Size = System::Drawing::Size(60, 50);
			this->HelpIconButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->HelpIconButton->TabIndex = 30;
			this->HelpIconButton->TabStop = false;
			this->HelpIconButton->Zoom = 10;
			this->HelpIconButton->Click += gcnew System::EventHandler(this, &MainForm::HelpIconButton_Click);
			// 
			// HelpButton
			// 
			this->HelpButton->ActiveBorderThickness = 1;
			this->HelpButton->ActiveCornerRadius = 20;
			this->HelpButton->ActiveFillColor = System::Drawing::Color::Transparent;
			this->HelpButton->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->HelpButton->ActiveLineColor = System::Drawing::Color::Transparent;
			this->HelpButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->HelpButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HelpButton.BackgroundImage")));
			this->HelpButton->ButtonText = L"Help";
			this->HelpButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HelpButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HelpButton->ForeColor = System::Drawing::Color::Transparent;
			this->HelpButton->IdleBorderThickness = 1;
			this->HelpButton->IdleCornerRadius = 20;
			this->HelpButton->IdleFillColor = System::Drawing::Color::Transparent;
			this->HelpButton->IdleForecolor = System::Drawing::Color::White;
			this->HelpButton->IdleLineColor = System::Drawing::Color::Transparent;
			this->HelpButton->Location = System::Drawing::Point(61, 554);
			this->HelpButton->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->HelpButton->Name = L"HelpButton";
			this->HelpButton->Size = System::Drawing::Size(135, 44);
			this->HelpButton->TabIndex = 29;
			this->HelpButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->HelpButton->Click += gcnew System::EventHandler(this, &MainForm::HelpButton_Click);
			// 
			// FestivalsButton
			// 
			this->FestivalsButton->ActiveBorderThickness = 1;
			this->FestivalsButton->ActiveCornerRadius = 20;
			this->FestivalsButton->ActiveFillColor = System::Drawing::Color::Transparent;
			this->FestivalsButton->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->FestivalsButton->ActiveLineColor = System::Drawing::Color::Transparent;
			this->FestivalsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->FestivalsButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FestivalsButton.BackgroundImage")));
			this->FestivalsButton->ButtonText = L"Festivals";
			this->FestivalsButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FestivalsButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FestivalsButton->ForeColor = System::Drawing::Color::Transparent;
			this->FestivalsButton->IdleBorderThickness = 1;
			this->FestivalsButton->IdleCornerRadius = 20;
			this->FestivalsButton->IdleFillColor = System::Drawing::Color::Transparent;
			this->FestivalsButton->IdleForecolor = System::Drawing::Color::White;
			this->FestivalsButton->IdleLineColor = System::Drawing::Color::Transparent;
			this->FestivalsButton->Location = System::Drawing::Point(64, 331);
			this->FestivalsButton->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->FestivalsButton->Name = L"FestivalsButton";
			this->FestivalsButton->Size = System::Drawing::Size(135, 45);
			this->FestivalsButton->TabIndex = 28;
			this->FestivalsButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->FestivalsButton->Click += gcnew System::EventHandler(this, &MainForm::FestivalsButton_Click);
			// 
			// ConcertsButton
			// 
			this->ConcertsButton->ActiveBorderThickness = 1;
			this->ConcertsButton->ActiveCornerRadius = 20;
			this->ConcertsButton->ActiveFillColor = System::Drawing::Color::Transparent;
			this->ConcertsButton->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ConcertsButton->ActiveLineColor = System::Drawing::Color::Transparent;
			this->ConcertsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->ConcertsButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConcertsButton.BackgroundImage")));
			this->ConcertsButton->ButtonText = L"Concerts";
			this->ConcertsButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ConcertsButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConcertsButton->ForeColor = System::Drawing::Color::Transparent;
			this->ConcertsButton->IdleBorderThickness = 1;
			this->ConcertsButton->IdleCornerRadius = 20;
			this->ConcertsButton->IdleFillColor = System::Drawing::Color::Transparent;
			this->ConcertsButton->IdleForecolor = System::Drawing::Color::White;
			this->ConcertsButton->IdleLineColor = System::Drawing::Color::Transparent;
			this->ConcertsButton->Location = System::Drawing::Point(64, 250);
			this->ConcertsButton->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->ConcertsButton->Name = L"ConcertsButton";
			this->ConcertsButton->Size = System::Drawing::Size(135, 45);
			this->ConcertsButton->TabIndex = 27;
			this->ConcertsButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ConcertsButton->Click += gcnew System::EventHandler(this, &MainForm::ConcertsButton_Click);
			// 
			// MainButton
			// 
			this->MainButton->ActiveBorderThickness = 1;
			this->MainButton->ActiveCornerRadius = 20;
			this->MainButton->ActiveFillColor = System::Drawing::Color::Transparent;
			this->MainButton->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->MainButton->ActiveLineColor = System::Drawing::Color::Transparent;
			this->MainButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->MainButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MainButton.BackgroundImage")));
			this->MainButton->ButtonText = L"Main";
			this->MainButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MainButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainButton->ForeColor = System::Drawing::Color::Transparent;
			this->MainButton->IdleBorderThickness = 1;
			this->MainButton->IdleCornerRadius = 20;
			this->MainButton->IdleFillColor = System::Drawing::Color::Transparent;
			this->MainButton->IdleForecolor = System::Drawing::Color::White;
			this->MainButton->IdleLineColor = System::Drawing::Color::Transparent;
			this->MainButton->Location = System::Drawing::Point(64, 165);
			this->MainButton->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->MainButton->Name = L"MainButton";
			this->MainButton->Size = System::Drawing::Size(135, 45);
			this->MainButton->TabIndex = 26;
			this->MainButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MainButton->Click += gcnew System::EventHandler(this, &MainForm::MainButton_Click);
			// 
			// FestivalIconButton
			// 
			this->FestivalIconButton->BackColor = System::Drawing::Color::Transparent;
			this->FestivalIconButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FestivalIconButton.Image")));
			this->FestivalIconButton->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FestivalIconButton.ImageActive")));
			this->FestivalIconButton->Location = System::Drawing::Point(-15, 322);
			this->FestivalIconButton->Name = L"FestivalIconButton";
			this->FestivalIconButton->Size = System::Drawing::Size(101, 63);
			this->FestivalIconButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->FestivalIconButton->TabIndex = 7;
			this->FestivalIconButton->TabStop = false;
			this->FestivalIconButton->Zoom = 10;
			this->FestivalIconButton->Click += gcnew System::EventHandler(this, &MainForm::bunifuImageButton4_Click);
			// 
			// ConcertIconButton
			// 
			this->ConcertIconButton->BackColor = System::Drawing::Color::Transparent;
			this->ConcertIconButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConcertIconButton.Image")));
			this->ConcertIconButton->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConcertIconButton.ImageActive")));
			this->ConcertIconButton->Location = System::Drawing::Point(2, 240);
			this->ConcertIconButton->Name = L"ConcertIconButton";
			this->ConcertIconButton->Size = System::Drawing::Size(73, 64);
			this->ConcertIconButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ConcertIconButton->TabIndex = 6;
			this->ConcertIconButton->TabStop = false;
			this->ConcertIconButton->Zoom = 10;
			this->ConcertIconButton->Click += gcnew System::EventHandler(this, &MainForm::bunifuImageButton3_Click);
			// 
			// MenuIconButton
			// 
			this->MenuIconButton->BackColor = System::Drawing::Color::Transparent;
			this->MenuIconButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MenuIconButton.Image")));
			this->MenuIconButton->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MenuIconButton.ImageActive")));
			this->MenuIconButton->Location = System::Drawing::Point(3, 166);
			this->MenuIconButton->Name = L"MenuIconButton";
			this->MenuIconButton->Size = System::Drawing::Size(60, 44);
			this->MenuIconButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->MenuIconButton->TabIndex = 5;
			this->MenuIconButton->TabStop = false;
			this->MenuIconButton->Zoom = 10;
			this->MenuIconButton->Click += gcnew System::EventHandler(this, &MainForm::bunifuImageButton2_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 15;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(217, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 7;
			// 
			// timer2
			// 
			this->timer2->Interval = 15;
			this->timer2->Tick += gcnew System::EventHandler(this, &MainForm::timer2_Tick);
			// 
			// picturesTimer
			// 
			this->picturesTimer->Interval = 2000;
			this->picturesTimer->Tick += gcnew System::EventHandler(this, &MainForm::picturesTimer_Tick);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->panel5->Location = System::Drawing::Point(993, 89);
			this->panel5->MaximumSize = System::Drawing::Size(89, 540);
			this->panel5->MinimumSize = System::Drawing::Size(25, 540);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(89, 540);
			this->panel5->TabIndex = 10;
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 0;
			this->bunifuElipse1->TargetControl = this;
			// 
			// festivaldataGridView
			// 
			this->festivaldataGridView->AllowUserToAddRows = false;
			this->festivaldataGridView->AllowUserToDeleteRows = false;
			this->festivaldataGridView->AllowUserToResizeColumns = false;
			this->festivaldataGridView->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->festivaldataGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->festivaldataGridView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->festivaldataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->festivaldataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->festivaldataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->festivaldataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->festivaldataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->Artists, this->Ticketsleft,
					this->dataGridViewButtonColumn2
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
			this->festivaldataGridView->DefaultCellStyle = dataGridViewCellStyle6;
			this->festivaldataGridView->EnableHeadersVisualStyles = false;
			this->festivaldataGridView->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->festivaldataGridView->Location = System::Drawing::Point(200, 89);
			this->festivaldataGridView->Name = L"festivaldataGridView";
			this->festivaldataGridView->ReadOnly = true;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->festivaldataGridView->RowHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->festivaldataGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->festivaldataGridView->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->festivaldataGridView->Size = System::Drawing::Size(882, 540);
			this->festivaldataGridView->TabIndex = 12;
			this->festivaldataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::festivaldataGridView_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->dataGridViewTextBoxColumn1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Festival Name";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewTextBoxColumn1->Width = 140;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Date";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 140;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"City";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 150;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Price from";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// Artists
			// 
			this->Artists->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Artists->HeaderText = L"Artists";
			this->Artists->Name = L"Artists";
			this->Artists->ReadOnly = true;
			this->Artists->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Artists->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// Ticketsleft
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			this->Ticketsleft->DefaultCellStyle = dataGridViewCellStyle4;
			this->Ticketsleft->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Ticketsleft->HeaderText = L"Buy Ticket";
			this->Ticketsleft->Name = L"Ticketsleft";
			this->Ticketsleft->ReadOnly = true;
			this->Ticketsleft->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewButtonColumn2
			// 
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			this->dataGridViewButtonColumn2->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridViewButtonColumn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dataGridViewButtonColumn2->HeaderText = L"More Info";
			this->dataGridViewButtonColumn2->Name = L"dataGridViewButtonColumn2";
			this->dataGridViewButtonColumn2->ReadOnly = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label3->Location = System::Drawing::Point(199, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 24);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Date";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->panel1->Controls->Add(this->searchingConcBox);
			this->panel1->Controls->Add(this->searchingFestBox);
			this->panel1->Controls->Add(this->searchButton);
			this->panel1->Controls->Add(this->bunifuImageButton2);
			this->panel1->Controls->Add(this->bunifuImageButton1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1088, 89);
			this->panel1->TabIndex = 24;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panel1_MouseUp);
			// 
			// searchingConcBox
			// 
			this->searchingConcBox->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->searchingConcBox->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->searchingConcBox->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->searchingConcBox->BorderThickness = 3;
			this->searchingConcBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->searchingConcBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->searchingConcBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->searchingConcBox->isPassword = false;
			this->searchingConcBox->Location = System::Drawing::Point(203, 55);
			this->searchingConcBox->Margin = System::Windows::Forms::Padding(4);
			this->searchingConcBox->Name = L"searchingConcBox";
			this->searchingConcBox->Size = System::Drawing::Size(190, 30);
			this->searchingConcBox->TabIndex = 43;
			this->searchingConcBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->searchingConcBox->Visible = false;
			// 
			// searchingFestBox
			// 
			this->searchingFestBox->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->searchingFestBox->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->searchingFestBox->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->searchingFestBox->BorderThickness = 3;
			this->searchingFestBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->searchingFestBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->searchingFestBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->searchingFestBox->isPassword = false;
			this->searchingFestBox->Location = System::Drawing::Point(203, 55);
			this->searchingFestBox->Margin = System::Windows::Forms::Padding(4);
			this->searchingFestBox->Name = L"searchingFestBox";
			this->searchingFestBox->Size = System::Drawing::Size(190, 30);
			this->searchingFestBox->TabIndex = 42;
			this->searchingFestBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->searchingFestBox->Visible = false;
			// 
			// searchButton
			// 
			this->searchButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->searchButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchButton.Image")));
			this->searchButton->ImageActive = nullptr;
			this->searchButton->Location = System::Drawing::Point(398, 56);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(32, 30);
			this->searchButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->searchButton->TabIndex = 41;
			this->searchButton->TabStop = false;
			this->searchButton->Visible = false;
			this->searchButton->Zoom = 10;
			this->searchButton->Click += gcnew System::EventHandler(this, &MainForm::searchButton_Click);
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(1023, 9);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(26, 25);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 26;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			this->bunifuImageButton2->Click += gcnew System::EventHandler(this, &MainForm::bunifuImageButton2_Click_1);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(1055, 12);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 25;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &MainForm::bunifuImageButton1_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, -11);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// bunifuImageButton12
			// 
			this->bunifuImageButton12->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton12.Image")));
			this->bunifuImageButton12->ImageActive = nullptr;
			this->bunifuImageButton12->Location = System::Drawing::Point(256, 24);
			this->bunifuImageButton12->Name = L"bunifuImageButton12";
			this->bunifuImageButton12->Size = System::Drawing::Size(50, 50);
			this->bunifuImageButton12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton12->TabIndex = 36;
			this->bunifuImageButton12->TabStop = false;
			this->bunifuImageButton12->Zoom = 10;
			this->bunifuImageButton12->Click += gcnew System::EventHandler(this, &MainForm::bunifuImageButton12_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 629);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1088, 71);
			this->panel2->TabIndex = 25;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->panel3->Location = System::Drawing::Point(0, 87);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(202, 545);
			this->panel3->TabIndex = 0;
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
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->concertdataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->concertdataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->concertdataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->ConcName,
					this->ConcDate, this->City, this->Price, this->ConcArtists, this->BuyTicket, this->MoreInfo
			});
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->concertdataGridView->DefaultCellStyle = dataGridViewCellStyle10;
			this->concertdataGridView->EnableHeadersVisualStyles = false;
			this->concertdataGridView->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->concertdataGridView->Location = System::Drawing::Point(200, 89);
			this->concertdataGridView->Name = L"concertdataGridView";
			this->concertdataGridView->ReadOnly = true;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->concertdataGridView->RowHeadersDefaultCellStyle = dataGridViewCellStyle11;
			this->concertdataGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->concertdataGridView->RowsDefaultCellStyle = dataGridViewCellStyle12;
			this->concertdataGridView->Size = System::Drawing::Size(882, 540);
			this->concertdataGridView->TabIndex = 9;
			this->concertdataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::concertdataGridView_CellContentClick);
			// 
			// ConcName
			// 
			this->ConcName->HeaderText = L"Concert Name";
			this->ConcName->Name = L"ConcName";
			this->ConcName->ReadOnly = true;
			this->ConcName->Width = 140;
			// 
			// ConcDate
			// 
			this->ConcDate->HeaderText = L"Date";
			this->ConcDate->Name = L"ConcDate";
			this->ConcDate->ReadOnly = true;
			this->ConcDate->Width = 140;
			// 
			// City
			// 
			this->City->HeaderText = L"City";
			this->City->Name = L"City";
			this->City->ReadOnly = true;
			this->City->Width = 150;
			// 
			// Price
			// 
			this->Price->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Price->HeaderText = L"Price from";
			this->Price->Name = L"Price";
			this->Price->ReadOnly = true;
			// 
			// ConcArtists
			// 
			this->ConcArtists->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ConcArtists->HeaderText = L"Artists";
			this->ConcArtists->Name = L"ConcArtists";
			this->ConcArtists->ReadOnly = true;
			this->ConcArtists->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->ConcArtists->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// BuyTicket
			// 
			this->BuyTicket->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BuyTicket->HeaderText = L"Buy Ticket";
			this->BuyTicket->Name = L"BuyTicket";
			this->BuyTicket->ReadOnly = true;
			this->BuyTicket->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->BuyTicket->Text = L"";
			// 
			// MoreInfo
			// 
			this->MoreInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MoreInfo->HeaderText = L"More Info";
			this->MoreInfo->Name = L"MoreInfo";
			this->MoreInfo->ReadOnly = true;
			// 
			// Mainpanel
			// 
			this->Mainpanel->Controls->Add(this->tabPage2);
			this->Mainpanel->Controls->Add(this->tabPage1);
			this->Mainpanel->Controls->Add(this->tabPage3);
			this->Mainpanel->Controls->Add(this->tabPage4);
			this->Mainpanel->Controls->Add(this->tabPage5);
			this->Mainpanel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Mainpanel->Location = System::Drawing::Point(193, 66);
			this->Mainpanel->Name = L"Mainpanel";
			this->Mainpanel->SelectedIndex = 0;
			this->Mainpanel->Size = System::Drawing::Size(815, 235);
			this->Mainpanel->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->Mainpanel->TabIndex = 3;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabPage2->Controls->Add(this->pictureBox4);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(807, 209);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1, -1);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(803, 212);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MainForm::pictureBox4_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(807, 209);
			this->tabPage1->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(802, 213);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MainForm::pictureBox2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->pictureBox5);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(807, 209);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1, -3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(803, 264);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 1;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MainForm::pictureBox5_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->pictureBox6);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(807, 209);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(1, -53);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(803, 288);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 1;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MainForm::pictureBox6_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->pictureBox7);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(807, 209);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(-2, -35);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(806, 279);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 1;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MainForm::pictureBox7_Click);
			// 
			// Artistsboxlittle
			// 
			this->Artistsboxlittle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->Artistsboxlittle->Controls->Add(this->bunifuImageButton9);
			this->Artistsboxlittle->Location = System::Drawing::Point(638, 131);
			this->Artistsboxlittle->Name = L"Artistsboxlittle";
			this->Artistsboxlittle->Size = System::Drawing::Size(202, 32);
			this->Artistsboxlittle->TabIndex = 53;
			this->Artistsboxlittle->Visible = false;
			// 
			// bunifuImageButton9
			// 
			this->bunifuImageButton9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuImageButton9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton9.Image")));
			this->bunifuImageButton9->ImageActive = nullptr;
			this->bunifuImageButton9->Location = System::Drawing::Point(93, 3);
			this->bunifuImageButton9->Name = L"bunifuImageButton9";
			this->bunifuImageButton9->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton9->TabIndex = 36;
			this->bunifuImageButton9->TabStop = false;
			this->bunifuImageButton9->Zoom = 10;
			this->bunifuImageButton9->Click += gcnew System::EventHandler(this, &MainForm::bunifuImageButton9_Click);
			// 
			// Infopanel1
			// 
			this->Infopanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->Infopanel1->Controls->Add(this->bunifuImageButton10);
			this->Infopanel1->Location = System::Drawing::Point(880, 131);
			this->Infopanel1->Name = L"Infopanel1";
			this->Infopanel1->Size = System::Drawing::Size(202, 32);
			this->Infopanel1->TabIndex = 55;
			this->Infopanel1->Visible = false;
			// 
			// bunifuImageButton10
			// 
			this->bunifuImageButton10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuImageButton10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton10.Image")));
			this->bunifuImageButton10->ImageActive = nullptr;
			this->bunifuImageButton10->Location = System::Drawing::Point(89, 5);
			this->bunifuImageButton10->Name = L"bunifuImageButton10";
			this->bunifuImageButton10->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton10->TabIndex = 36;
			this->bunifuImageButton10->TabStop = false;
			this->bunifuImageButton10->Zoom = 10;
			this->bunifuImageButton10->Click += gcnew System::EventHandler(this, &MainForm::bunifuImageButton10_Click);
			// 
			// Infopanel2
			// 
			this->Infopanel2->AutoScroll = true;
			this->Infopanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->Infopanel2->Controls->Add(this->textBox4);
			this->Infopanel2->Controls->Add(this->label6);
			this->Infopanel2->Location = System::Drawing::Point(880, 160);
			this->Infopanel2->Name = L"Infopanel2";
			this->Infopanel2->Size = System::Drawing::Size(202, 177);
			this->Infopanel2->TabIndex = 54;
			this->Infopanel2->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(3, 34);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox4->Size = System::Drawing::Size(182, 431);
			this->textBox4->TabIndex = 52;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label6->Location = System::Drawing::Point(76, 7);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 24);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Info";
			// 
			// Mainpanel2
			// 
			this->Mainpanel2->BackColor = System::Drawing::Color::White;
			this->Mainpanel2->Controls->Add(this->pictureBox11);
			this->Mainpanel2->Controls->Add(this->pictureBox12);
			this->Mainpanel2->Controls->Add(this->bunifuThinButton22);
			this->Mainpanel2->Controls->Add(this->bunifuImageButton6);
			this->Mainpanel2->Controls->Add(this->bunifuImageButton5);
			this->Mainpanel2->Controls->Add(this->pictureBox13);
			this->Mainpanel2->Controls->Add(this->pictureBox14);
			this->Mainpanel2->Controls->Add(this->label4);
			this->Mainpanel2->Controls->Add(this->bunifuSeparator3);
			this->Mainpanel2->Controls->Add(this->bunifuSeparator4);
			this->Mainpanel2->Location = System::Drawing::Point(202, 297);
			this->Mainpanel2->Name = L"Mainpanel2";
			this->Mainpanel2->Size = System::Drawing::Size(798, 332);
			this->Mainpanel2->TabIndex = 27;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(467, 240);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(266, 86);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 36;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MainForm::pictureBox11_Click_1);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(467, 49);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(268, 174);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 35;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MainForm::pictureBox12_Click_1);
			// 
			// bunifuThinButton22
			// 
			this->bunifuThinButton22->ActiveBorderThickness = 1;
			this->bunifuThinButton22->ActiveCornerRadius = 20;
			this->bunifuThinButton22->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton22->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton22->ActiveLineColor = System::Drawing::Color::White;
			this->bunifuThinButton22->BackColor = System::Drawing::Color::White;
			this->bunifuThinButton22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton22.BackgroundImage")));
			this->bunifuThinButton22->ButtonText = L"See All";
			this->bunifuThinButton22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton22->IdleBorderThickness = 1;
			this->bunifuThinButton22->IdleCornerRadius = 20;
			this->bunifuThinButton22->IdleFillColor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton22->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton22->Location = System::Drawing::Point(689, 15);
			this->bunifuThinButton22->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton22->Name = L"bunifuThinButton22";
			this->bunifuThinButton22->Size = System::Drawing::Size(88, 19);
			this->bunifuThinButton22->TabIndex = 34;
			this->bunifuThinButton22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton22->Click += gcnew System::EventHandler(this, &MainForm::bunifuThinButton22_Click);
			// 
			// bunifuImageButton6
			// 
			this->bunifuImageButton6->BackColor = System::Drawing::Color::White;
			this->bunifuImageButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton6.Image")));
			this->bunifuImageButton6->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton6.ImageActive")));
			this->bunifuImageButton6->Location = System::Drawing::Point(737, 50);
			this->bunifuImageButton6->Name = L"bunifuImageButton6";
			this->bunifuImageButton6->Size = System::Drawing::Size(39, 40);
			this->bunifuImageButton6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton6->TabIndex = 33;
			this->bunifuImageButton6->TabStop = false;
			this->bunifuImageButton6->Zoom = 10;
			// 
			// bunifuImageButton5
			// 
			this->bunifuImageButton5->BackColor = System::Drawing::Color::White;
			this->bunifuImageButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton5.Image")));
			this->bunifuImageButton5->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton5.ImageActive")));
			this->bunifuImageButton5->Location = System::Drawing::Point(738, 287);
			this->bunifuImageButton5->Name = L"bunifuImageButton5";
			this->bunifuImageButton5->Size = System::Drawing::Size(39, 40);
			this->bunifuImageButton5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton5->TabIndex = 32;
			this->bunifuImageButton5->TabStop = false;
			this->bunifuImageButton5->Zoom = 10;
			this->bunifuImageButton5->Click += gcnew System::EventHandler(this, &MainForm::bunifuImageButton5_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(81, 240);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(265, 77);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 4;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &MainForm::pictureBox13_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(78, 49);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(268, 174);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 2;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MainForm::pictureBox14_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(7, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(294, 25);
			this->label4->TabIndex = 0;
			this->label4->Text = L"The World’s Biggest Festivals";
			// 
			// bunifuSeparator3
			// 
			this->bunifuSeparator3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSeparator3->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->bunifuSeparator3->LineThickness = 1;
			this->bunifuSeparator3->Location = System::Drawing::Point(0, -9);
			this->bunifuSeparator3->Name = L"bunifuSeparator3";
			this->bunifuSeparator3->Size = System::Drawing::Size(801, 35);
			this->bunifuSeparator3->TabIndex = 1;
			this->bunifuSeparator3->Transparency = 255;
			this->bunifuSeparator3->Vertical = false;
			// 
			// bunifuSeparator4
			// 
			this->bunifuSeparator4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSeparator4->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->bunifuSeparator4->LineThickness = 1;
			this->bunifuSeparator4->Location = System::Drawing::Point(0, 27);
			this->bunifuSeparator4->Name = L"bunifuSeparator4";
			this->bunifuSeparator4->Size = System::Drawing::Size(801, 35);
			this->bunifuSeparator4->TabIndex = 2;
			this->bunifuSeparator4->Transparency = 255;
			this->bunifuSeparator4->Vertical = false;
			// 
			// Artistspanel
			// 
			this->Artistspanel->AutoScroll = true;
			this->Artistspanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->Artistspanel->Controls->Add(this->textBox1);
			this->Artistspanel->Controls->Add(this->label5);
			this->Artistspanel->Location = System::Drawing::Point(638, 160);
			this->Artistspanel->Name = L"Artistspanel";
			this->Artistspanel->Size = System::Drawing::Size(202, 177);
			this->Artistspanel->TabIndex = 35;
			this->Artistspanel->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(3, 33);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox1->Size = System::Drawing::Size(182, 431);
			this->textBox1->TabIndex = 52;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label5->Location = System::Drawing::Point(71, 6);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 24);
			this->label5->TabIndex = 37;
			this->label5->Text = L"Artists";
			// 
			// Mainpanel3
			// 
			this->Mainpanel3->BackColor = System::Drawing::Color::White;
			this->Mainpanel3->Controls->Add(this->bunifuThinButton23);
			this->Mainpanel3->Controls->Add(this->bunifuImageButton7);
			this->Mainpanel3->Controls->Add(this->bunifuImageButton8);
			this->Mainpanel3->Controls->Add(this->pictureBox10);
			this->Mainpanel3->Controls->Add(this->pictureBox9);
			this->Mainpanel3->Controls->Add(this->pictureBox8);
			this->Mainpanel3->Controls->Add(this->pictureBox3);
			this->Mainpanel3->Controls->Add(this->label1);
			this->Mainpanel3->Controls->Add(this->bunifuSeparator1);
			this->Mainpanel3->Controls->Add(this->bunifuSeparator2);
			this->Mainpanel3->Location = System::Drawing::Point(200, 297);
			this->Mainpanel3->Name = L"Mainpanel3";
			this->Mainpanel3->Size = System::Drawing::Size(799, 332);
			this->Mainpanel3->TabIndex = 26;
			this->Mainpanel3->Visible = false;
			// 
			// bunifuThinButton23
			// 
			this->bunifuThinButton23->ActiveBorderThickness = 1;
			this->bunifuThinButton23->ActiveCornerRadius = 20;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::White;
			this->bunifuThinButton23->BackColor = System::Drawing::Color::White;
			this->bunifuThinButton23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton23.BackgroundImage")));
			this->bunifuThinButton23->ButtonText = L"See All";
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton23->IdleBorderThickness = 1;
			this->bunifuThinButton23->IdleCornerRadius = 20;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton23->Location = System::Drawing::Point(691, 15);
			this->bunifuThinButton23->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bunifuThinButton23->Name = L"bunifuThinButton23";
			this->bunifuThinButton23->Size = System::Drawing::Size(88, 19);
			this->bunifuThinButton23->TabIndex = 36;
			this->bunifuThinButton23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton23->Click += gcnew System::EventHandler(this, &MainForm::bunifuThinButton23_Click);
			// 
			// bunifuImageButton7
			// 
			this->bunifuImageButton7->BackColor = System::Drawing::Color::White;
			this->bunifuImageButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton7.Image")));
			this->bunifuImageButton7->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton7.ImageActive")));
			this->bunifuImageButton7->Location = System::Drawing::Point(739, 50);
			this->bunifuImageButton7->Name = L"bunifuImageButton7";
			this->bunifuImageButton7->Size = System::Drawing::Size(39, 40);
			this->bunifuImageButton7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton7->TabIndex = 35;
			this->bunifuImageButton7->TabStop = false;
			this->bunifuImageButton7->Zoom = 10;
			this->bunifuImageButton7->Click += gcnew System::EventHandler(this, &MainForm::bunifuImageButton7_Click);
			// 
			// bunifuImageButton8
			// 
			this->bunifuImageButton8->BackColor = System::Drawing::Color::White;
			this->bunifuImageButton8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton8.Image")));
			this->bunifuImageButton8->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton8.ImageActive")));
			this->bunifuImageButton8->Location = System::Drawing::Point(740, 287);
			this->bunifuImageButton8->Name = L"bunifuImageButton8";
			this->bunifuImageButton8->Size = System::Drawing::Size(39, 40);
			this->bunifuImageButton8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton8->TabIndex = 34;
			this->bunifuImageButton8->TabStop = false;
			this->bunifuImageButton8->Zoom = 10;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(476, 240);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(259, 76);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 6;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MainForm::pictureBox10_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(467, 49);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(268, 174);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 5;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MainForm::pictureBox9_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(52, 230);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(348, 88);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 4;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MainForm::pictureBox8_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(78, 49);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(268, 174);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MainForm::pictureBox3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"The World’s Biggest Festivals";
			// 
			// bunifuSeparator1
			// 
			this->bunifuSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->bunifuSeparator1->LineThickness = 1;
			this->bunifuSeparator1->Location = System::Drawing::Point(0, -9);
			this->bunifuSeparator1->Name = L"bunifuSeparator1";
			this->bunifuSeparator1->Size = System::Drawing::Size(802, 35);
			this->bunifuSeparator1->TabIndex = 1;
			this->bunifuSeparator1->Transparency = 255;
			this->bunifuSeparator1->Vertical = false;
			// 
			// bunifuSeparator2
			// 
			this->bunifuSeparator2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSeparator2->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->bunifuSeparator2->LineThickness = 1;
			this->bunifuSeparator2->Location = System::Drawing::Point(-2, 27);
			this->bunifuSeparator2->Name = L"bunifuSeparator2";
			this->bunifuSeparator2->Size = System::Drawing::Size(804, 35);
			this->bunifuSeparator2->TabIndex = 2;
			this->bunifuSeparator2->Transparency = 255;
			this->bunifuSeparator2->Vertical = false;
			// 
			// cartpanel
			// 
			this->cartpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->cartpanel->Controls->Add(this->bunifuImageButton11);
			this->cartpanel->Controls->Add(this->bunifuThinButton24);
			this->cartpanel->Controls->Add(this->label12);
			this->cartpanel->Controls->Add(this->label11);
			this->cartpanel->Controls->Add(this->label10);
			this->cartpanel->Controls->Add(this->bunifuImageButton12);
			this->cartpanel->Controls->Add(this->ConcertCartData);
			this->cartpanel->Controls->Add(this->label9);
			this->cartpanel->Controls->Add(this->FestivalCartData);
			this->cartpanel->Controls->Add(this->label7);
			this->cartpanel->Location = System::Drawing::Point(196, 89);
			this->cartpanel->Name = L"cartpanel";
			this->cartpanel->Size = System::Drawing::Size(883, 540);
			this->cartpanel->TabIndex = 56;
			this->cartpanel->Visible = false;
			// 
			// bunifuImageButton11
			// 
			this->bunifuImageButton11->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton11.Image")));
			this->bunifuImageButton11->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton11.ImageActive")));
			this->bunifuImageButton11->Location = System::Drawing::Point(800, 15);
			this->bunifuImageButton11->Name = L"bunifuImageButton11";
			this->bunifuImageButton11->Size = System::Drawing::Size(71, 62);
			this->bunifuImageButton11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton11->TabIndex = 37;
			this->bunifuImageButton11->TabStop = false;
			this->bunifuImageButton11->Zoom = 10;
			this->bunifuImageButton11->Click += gcnew System::EventHandler(this, &MainForm::bunifuImageButton11_Click);
			// 
			// bunifuThinButton24
			// 
			this->bunifuThinButton24->ActiveBorderThickness = 1;
			this->bunifuThinButton24->ActiveCornerRadius = 20;
			this->bunifuThinButton24->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton24->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->bunifuThinButton24->ActiveLineColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->bunifuThinButton24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton24.BackgroundImage")));
			this->bunifuThinButton24->ButtonText = L"Buy Tickets >";
			this->bunifuThinButton24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton24->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton24->IdleBorderThickness = 1;
			this->bunifuThinButton24->IdleCornerRadius = 20;
			this->bunifuThinButton24->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton24->IdleForecolor = System::Drawing::Color::Transparent;
			this->bunifuThinButton24->IdleLineColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton24->Location = System::Drawing::Point(565, 18);
			this->bunifuThinButton24->Margin = System::Windows::Forms::Padding(7);
			this->bunifuThinButton24->Name = L"bunifuThinButton24";
			this->bunifuThinButton24->Size = System::Drawing::Size(253, 55);
			this->bunifuThinButton24->TabIndex = 45;
			this->bunifuThinButton24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton24->Click += gcnew System::EventHandler(this, &MainForm::bunifuThinButton24_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(528, 30);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 38);
			this->label12->TabIndex = 44;
			this->label12->Text = L"€";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(418, 27);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(35, 38);
			this->label11->TabIndex = 43;
			this->label11->Text = L"0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(326, 27);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(89, 38);
			this->label10->TabIndex = 42;
			this->label10->Text = L"Total";
			// 
			// ConcertCartData
			// 
			this->ConcertCartData->AllowUserToAddRows = false;
			this->ConcertCartData->AllowUserToDeleteRows = false;
			this->ConcertCartData->AllowUserToResizeColumns = false;
			this->ConcertCartData->AllowUserToResizeRows = false;
			this->ConcertCartData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->ConcertCartData->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ConcertCartData->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle13->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ConcertCartData->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle13;
			this->ConcertCartData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ConcertCartData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewButtonColumn6,
					this->dataGridViewButtonColumn7, this->Column2
			});
			dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle14->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle14->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle14->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ConcertCartData->DefaultCellStyle = dataGridViewCellStyle14;
			this->ConcertCartData->EnableHeadersVisualStyles = false;
			this->ConcertCartData->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ConcertCartData->Location = System::Drawing::Point(-40, 317);
			this->ConcertCartData->Name = L"ConcertCartData";
			this->ConcertCartData->ReadOnly = true;
			dataGridViewCellStyle15->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle15->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle15->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle15->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle15->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ConcertCartData->RowHeadersDefaultCellStyle = dataGridViewCellStyle15;
			this->ConcertCartData->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle16->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle16->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle16->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->ConcertCartData->RowsDefaultCellStyle = dataGridViewCellStyle16;
			this->ConcertCartData->Size = System::Drawing::Size(926, 250);
			this->ConcertCartData->TabIndex = 41;
			this->ConcertCartData->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::ConcertCartData_CellContentClick);
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
			// dataGridViewButtonColumn6
			// 
			this->dataGridViewButtonColumn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dataGridViewButtonColumn6->HeaderText = L"Artists";
			this->dataGridViewButtonColumn6->Name = L"dataGridViewButtonColumn6";
			this->dataGridViewButtonColumn6->ReadOnly = true;
			this->dataGridViewButtonColumn6->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->dataGridViewButtonColumn6->Text = L"";
			// 
			// dataGridViewButtonColumn7
			// 
			this->dataGridViewButtonColumn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dataGridViewButtonColumn7->HeaderText = L"More Info";
			this->dataGridViewButtonColumn7->Name = L"dataGridViewButtonColumn7";
			this->dataGridViewButtonColumn7->ReadOnly = true;
			this->dataGridViewButtonColumn7->Width = 125;
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
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(53, 160);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(456, 38);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Your Shopping Cart is empty";
			// 
			// FestivalCartData
			// 
			this->FestivalCartData->AllowUserToAddRows = false;
			this->FestivalCartData->AllowUserToDeleteRows = false;
			this->FestivalCartData->AllowUserToResizeColumns = false;
			this->FestivalCartData->AllowUserToResizeRows = false;
			dataGridViewCellStyle17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle17->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle17->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle17->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->FestivalCartData->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle17;
			this->FestivalCartData->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->FestivalCartData->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->FestivalCartData->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle18->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle18->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle18->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle18->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->FestivalCartData->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle18;
			this->FestivalCartData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->FestivalCartData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewButtonColumn3,
					this->dataGridViewButtonColumn4, this->Column1
			});
			dataGridViewCellStyle22->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle22->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle22->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle22->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle22->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->FestivalCartData->DefaultCellStyle = dataGridViewCellStyle22;
			this->FestivalCartData->EnableHeadersVisualStyles = false;
			this->FestivalCartData->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->FestivalCartData->Location = System::Drawing::Point(-40, 83);
			this->FestivalCartData->Name = L"FestivalCartData";
			this->FestivalCartData->ReadOnly = true;
			dataGridViewCellStyle23->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle23->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle23->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle23->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle23->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->FestivalCartData->RowHeadersDefaultCellStyle = dataGridViewCellStyle23;
			this->FestivalCartData->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle24->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle24->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle24->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->FestivalCartData->RowsDefaultCellStyle = dataGridViewCellStyle24;
			this->FestivalCartData->Size = System::Drawing::Size(923, 253);
			this->FestivalCartData->TabIndex = 40;
			this->FestivalCartData->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::FestivalCartData_CellContentClick);
			// 
			// dataGridViewTextBoxColumn5
			// 
			dataGridViewCellStyle19->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle19->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->dataGridViewTextBoxColumn5->DefaultCellStyle = dataGridViewCellStyle19;
			this->dataGridViewTextBoxColumn5->HeaderText = L"Festival Name";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 50;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewTextBoxColumn5->Width = 155;
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
			// dataGridViewButtonColumn3
			// 
			dataGridViewCellStyle20->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle20->ForeColor = System::Drawing::Color::White;
			this->dataGridViewButtonColumn3->DefaultCellStyle = dataGridViewCellStyle20;
			this->dataGridViewButtonColumn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dataGridViewButtonColumn3->HeaderText = L"Artists";
			this->dataGridViewButtonColumn3->MinimumWidth = 50;
			this->dataGridViewButtonColumn3->Name = L"dataGridViewButtonColumn3";
			this->dataGridViewButtonColumn3->ReadOnly = true;
			this->dataGridViewButtonColumn3->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// dataGridViewButtonColumn4
			// 
			dataGridViewCellStyle21->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle21->ForeColor = System::Drawing::Color::White;
			this->dataGridViewButtonColumn4->DefaultCellStyle = dataGridViewCellStyle21;
			this->dataGridViewButtonColumn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dataGridViewButtonColumn4->HeaderText = L"More Info";
			this->dataGridViewButtonColumn4->MinimumWidth = 50;
			this->dataGridViewButtonColumn4->Name = L"dataGridViewButtonColumn4";
			this->dataGridViewButtonColumn4->ReadOnly = true;
			this->dataGridViewButtonColumn4->Width = 125;
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
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(17, 27);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(233, 38);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Shopping cart";
			// 
			// timerReload
			// 
			this->timerReload->Interval = 1;
			this->timerReload->Tick += gcnew System::EventHandler(this, &MainForm::timerReload_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(1088, 700);
			this->ControlBox = false;
			this->Controls->Add(this->Artistspanel);
			this->Controls->Add(this->Artistsboxlittle);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->Infopanel1);
			this->Controls->Add(this->Infopanel2);
			this->Controls->Add(this->Mainpanel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panelDropDown);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Mainpanel);
			this->Controls->Add(this->festivaldataGridView);
			this->Controls->Add(this->concertdataGridView);
			this->Controls->Add(this->Mainpanel3);
			this->Controls->Add(this->cartpanel);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panelDropDown->ResumeLayout(false);
			this->panelDropDown->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->accbutton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CartIconButton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HelpIconButton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FestivalIconButton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConcertIconButton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuIconButton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->festivaldataGridView))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchButton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->concertdataGridView))->EndInit();
			this->Mainpanel->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->Artistsboxlittle->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton9))->EndInit();
			this->Infopanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton10))->EndInit();
			this->Infopanel2->ResumeLayout(false);
			this->Infopanel2->PerformLayout();
			this->Mainpanel2->ResumeLayout(false);
			this->Mainpanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->Artistspanel->ResumeLayout(false);
			this->Artistspanel->PerformLayout();
			this->Mainpanel3->ResumeLayout(false);
			this->Mainpanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->cartpanel->ResumeLayout(false);
			this->cartpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConcertCartData))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FestivalCartData))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
		double searchingReturn(int index, std::string SearchingVar, std::string InputVar)
	{
			double percentage =0;
			int number = 0;
			int SearchingVarLenght = SearchingVar.length(),
				InputVarLenght = InputVar.length();
			if (SearchingVarLenght <= InputVarLenght)
			{

				for (int i = 0; i < SearchingVarLenght; i++)
					if (SearchingVar[i] == InputVar[i])
						percentage++;
			}
			else
				return 0;
			percentage = (percentage / SearchingVarLenght) * 100;
			return percentage;
	}
	void searchingConc()
	{
		String ^ SearchInput, ^print;
		std::string searchinput, input;
		int sum = -1;
			if (searchingConcBox->Text != "")
			{
				SearchInput = searchingConcBox->Text;
				searchinput = glob::conc.convert(SearchInput);
				for (int i = 0; i < glob::conc.conc_number; i++)
				{
					input = glob::conc.Concerts[i].conc_name;
					std::transform(input.begin(), input.end(), input.begin(), ::tolower);
					
					if (searchingReturn(i, searchinput, input) >= 65)
					{	concertdataGridView->Rows->Clear(); sum++;	glob::indexArray[sum] = i; }
					input = glob::conc.Concerts[i].conc_place;
					std::transform(input.begin(), input.end(), input.begin(), ::tolower);
					if (searchingReturn(i, searchinput, input) >= 65)
					{	concertdataGridView->Rows->Clear(); sum++;	glob::indexArray[sum] = i; }
				}
				if (sum != -1)
				{
					for (int x = 0; x < sum + 1; x++)
					{
						int index = glob::indexArray[x];
						glob::ConcPrice_1[index] = 10 * glob::conc.Concerts[index].conc_ticket_price_coef;
						concertdataGridView->Rows->Add();
						concertdataGridView->Rows[x]->Height = 50;
						print = gcnew String(glob::conc.Concerts[index].conc_name.c_str());
						concertdataGridView[0, x]->Value = print;
						print = gcnew String(glob::conc.Concerts[index].conc_date.c_str());
						concertdataGridView[1, x]->Value = print;
						print = gcnew String(glob::conc.Concerts[index].conc_place.c_str());
						concertdataGridView[2, x]->Value = print;
						concertdataGridView[3, x]->Value = glob::ConcPrice_1[index];
						concertdataGridView[4, x]->Value = "Show";
						concertdataGridView[5, x]->Value = glob::conc.Concerts[index].conc_tickets;
						concertdataGridView[6, x]->Value = "Show";
					}
				}
			}
			else {  concertdataGridView->Rows->Clear();	concertList();	}
	}
	void searchingFest()	
	{
		String ^ SearchInput, ^print;
		std::string searchinput, input;
		int sum = -1;
			if (searchingFestBox->Text != "")
			{
				for (int i = 0; i < glob::fest.fest_number; i++)
				{
					input = glob::fest.Festivals[i].fest_name;
					std::transform(input.begin(), input.end(), input.begin(), ::tolower);
					SearchInput = searchingFestBox->Text;
					searchinput = glob::fest.convert(SearchInput);
					if (searchingReturn(i, searchinput, input) >= 75)
					{ festivaldataGridView->Rows->Clear(); sum++;	glob::indexArray[sum] = i; }
					input = glob::fest.Festivals[i].fest_place;
					std::transform(input.begin(), input.end(), input.begin(), ::tolower);
					if (searchingReturn(i, searchinput, input) >= 75)
					{ festivaldataGridView->Rows->Clear(); sum++;	glob::indexArray[sum] = i; }
				}
				if (sum != -1)
				{
					for (int x = 0; x < sum + 1; x++)
					{
						int index = glob::indexArray[x];
						glob::FestPrice_1[index] = 10 * glob::fest.Festivals[index].fest_ticket_price_coef;
						festivaldataGridView->Rows->Add();
						festivaldataGridView->Rows[x]->Height = 50;
						print = gcnew String(glob::fest.Festivals[index].fest_name.c_str());
						festivaldataGridView[0, x]->Value = print;
						print = gcnew String(glob::fest.Festivals[index].fest_date.c_str());
						festivaldataGridView[1, x]->Value = print;
						print = gcnew String(glob::fest.Festivals[index].fest_place.c_str());
						festivaldataGridView[2, x]->Value = print;
						festivaldataGridView[3, x]->Value = glob::FestPrice_1[index];
						festivaldataGridView[4, x]->Value = "Show";
						festivaldataGridView[5, x]->Value = glob::fest.Festivals[index].fest_tickets;
						festivaldataGridView[6, x]->Value = "Show";
					}
				}
			}
			else { festivaldataGridView->Rows->Clear();	festivalList(); }
	}
	void concertList()
		{
			String^ print;
			concertdataGridView->Rows->Clear();	
				for (int i = 0; i < glob::conc.conc_number; i++)
				{
					glob::ConcPrice_1[i] = 10 * glob::conc.Concerts[i].conc_ticket_price_coef;
					concertdataGridView->Rows->Add();
					concertdataGridView->Rows[i]->Height = 50;
					print = gcnew String(glob::conc.Concerts[i].conc_name.c_str());
					concertdataGridView[0, i]->Value = print;
					print = gcnew String(glob::conc.Concerts[i].conc_date.c_str());
					concertdataGridView[1, i]->Value = print;
					print = gcnew String(glob::conc.Concerts[i].conc_place.c_str());
					concertdataGridView[2, i]->Value = print;
					concertdataGridView[3, i]->Value = glob::ConcPrice_1[i];
					concertdataGridView[4, i]->Value = "Show";
					concertdataGridView[5, i]->Value = glob::conc.Concerts[i].conc_tickets;
					concertdataGridView[6, i]->Value = "Show";
				}
		}
	void festivalList()
		{
			String^ print;
			festivaldataGridView->Rows->Clear();
			for (int i = 0; i < glob::fest.fest_number; i++)
			{
				glob::FestPrice_1[i] = 10 * glob::fest.Festivals[i].fest_ticket_price_coef;
				festivaldataGridView->Rows->Add();
				festivaldataGridView->Rows[i]->Height = 50;
				print = gcnew String(glob::fest.Festivals[i].fest_name.c_str());
				festivaldataGridView[0, i]->Value = print;
				print = gcnew String(glob::fest.Festivals[i].fest_date.c_str());
				festivaldataGridView[1, i]->Value = print;
				print = gcnew String(glob::fest.Festivals[i].fest_place.c_str());
				festivaldataGridView[2, i]->Value = print;
				festivaldataGridView[3, i]->Value = glob::FestPrice_1[i];
				festivaldataGridView[4, i]->Value = "Show";
				festivaldataGridView[5, i]->Value = glob::fest.Festivals[i].fest_tickets;
				festivaldataGridView[6, i]->Value = "Show";
			} 
		}
	void cartList()
		{
			String^ print;
			int persNumber = glob::pers.pers_number;
			int persConcTicketNum = glob::pers.People[persNumber].GetPersonConcTicketNum();
			int persFestTicketNum = glob::pers.People[persNumber].GetPersonFestTicketNum();
			ticketsumlabel->Text = glob::shoppingCart_num.ToString();
			glob::totalPrice = 0;
			if (glob::shoppingCart_num > 0)
			{
				label9->Visible = false;
				for (int i = 0; i < persConcTicketNum; i++)
				{		
					glob::totalPrice += glob::ticketPriceSumConc[i];
				}
				for (int i = 0; i < persFestTicketNum; i++)
				{
					glob::totalPrice += glob::ticketPriceSumFest[i];
				}				
				label11->Text = glob::totalPrice.ToString();
				FestivalCartData->Rows->Clear();
				ConcertCartData->Rows->Clear();
				if (persFestTicketNum != 0)
				{
					for (int i = 0; i  < persFestTicketNum; i++)
					{
						int FestTicketID = glob::pers.People[persNumber].GetPersonFestTicketID(i);
						FestivalCartData->Rows->Add();
						FestivalCartData->Rows[i]->Height = 50;
						print = gcnew String(glob::fest.Festivals[FestTicketID].fest_name.c_str());
						FestivalCartData[0, i]->Value = print;
						print = gcnew String(glob::fest.Festivals[FestTicketID].fest_date.c_str());
						FestivalCartData[1, i]->Value = print;
						print = gcnew String(glob::fest.Festivals[FestTicketID].fest_place.c_str());
						FestivalCartData[2, i]->Value = print;
						FestivalCartData[3, i]->Value = glob::ticketPriceSumFest[FestTicketID];
						FestivalCartData[4, i]->Value = "Show";
						FestivalCartData[5, i]->Value = "Show";
						FestivalCartData[6, i]->Value = "Delete";
					}
				}
				else
					FestivalCartData->Rows->Clear();
				if (persConcTicketNum != 0)
				{
					for (int i = 0; i < persConcTicketNum; i++)
					{
						int ConcTicketID = glob::pers.People[persNumber].GetPersonConcTicketID(i);
						ConcertCartData->Rows->Add();
						ConcertCartData->Rows[i]->Height = 50;
						print = gcnew String(glob::conc.Concerts[ConcTicketID].conc_name.c_str());
						ConcertCartData[0, i]->Value = print;
						print = gcnew String(glob::conc.Concerts[ConcTicketID].conc_date.c_str());
						ConcertCartData[1, i]->Value = print;
						print = gcnew String(glob::conc.Concerts[ConcTicketID].conc_place.c_str());
						ConcertCartData[2, i]->Value = print;
						ConcertCartData[3, i]->Value = glob::ticketPriceSumConc[i];
						ConcertCartData[4, i]->Value = "Show";
						ConcertCartData[5, i]->Value = "Show";
						ConcertCartData[6, i]->Value = "Delete";
					}
				}
				else
					ConcertCartData->Rows->Clear();
			}
			else
			{
				label9->Visible = true;
				FestivalCartData->Rows->Clear();
				ConcertCartData->Rows->Clear();
				glob::totalPrice = 0;
				label11->Text = glob::totalPrice.ToString();				
			}
		}

private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) 
{
		this->dragging = false;
		 picturesTimer->Start();
		 festivaldataGridView->Visible = false;
		 concertdataGridView->Visible = false;
		 Mainpanel3->Visible = false;
		 panel5->Size = MaximumSize;
		 cartpanel->Visible = false;		
 }
private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}
private: System::Void panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (this->dragging) {
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X,
			currentScreenPos.Y - this->offset.Y);
	}
}
private: System::Void panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	this->dragging = false;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	 Application::Exit();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	WindowState = FormWindowState::Maximized;
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	if (isCollapsed)
	{
		panelDropDown->Width += 10;
		if (panelDropDown->Size == panelDropDown->MaximumSize)
		{
			timer1->Stop();
			isCollapsed = false;
		}
	}
	else
	{
		panelDropDown->Width -= 10;
		if (panelDropDown->Size == panelDropDown->MinimumSize)
		{
			timer1->Stop();
			isCollapsed = true;
		}
	}
}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e)
{
	DateTime datetime = DateTime::Now;
	this->label3->Text = datetime.ToString();
}
private: System::Void picturesTimer_Tick(System::Object^  sender, System::EventArgs^  e) {

	if (Mainpanel->SelectedTab == tabPage1)
		Mainpanel->SelectedTab = tabPage2;
	else if (Mainpanel->SelectedTab == tabPage2)
		Mainpanel->SelectedTab = tabPage3;
	else if (Mainpanel->SelectedTab == tabPage3)
		Mainpanel->SelectedTab = tabPage4;
	else if (Mainpanel->SelectedTab == tabPage4)
		Mainpanel->SelectedTab = tabPage5;
	else if (Mainpanel->SelectedTab == tabPage5)
		Mainpanel->SelectedTab = tabPage1;
}
private: System::Void mainControl_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}		
private: System::Void concertdataGridView_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  c) {
	
	if (c->ColumnIndex==0 || c->ColumnIndex==5)
	{	
		int index = concertdataGridView->CurrentRow->Index;
		if (searchingConcBox->Text == "")glob::lineC = index;
		else glob::lineC = glob::indexArray[index];
		if (glob::conc.Concerts[glob::lineC].conc_tickets != 0)
		{
			BuyConcertTicket^ input = gcnew BuyConcertTicket();
			input->Show();
		}
		else
		 MessageBox::Show("0 tickets left.");
	}
	if (c->ColumnIndex == 4)
	{
		String^ input;
		int index = concertdataGridView->CurrentRow->Index;
		if (searchingConcBox->Text == "")glob::lineC = index;
		else glob::lineC = glob::indexArray[index];
		Artistspanel->Visible = true;
		Artistsboxlittle->Visible = true;	
		textBox1->Text = "";	
		input = gcnew String(glob::conc.Concerts[glob::lineC].conc_artist.c_str());
		textBox1->Text = textBox1->Text + input + Environment::NewLine;		
	}
	if (c->ColumnIndex == 6)
	{
		String^ input;
		int index = concertdataGridView->CurrentRow->Index;
		if (searchingConcBox->Text == "")glob::lineC = index;
		else glob::lineC = glob::indexArray[index];
		Infopanel1->Visible = true;
		Infopanel2->Visible = true;
		textBox4->Text = "";
		input = gcnew String(glob::conc.Concerts[glob::lineC].conc_info.c_str());
		textBox4->Text = textBox4->Text + input + Environment::NewLine;
	}
}
private: System::Void festivaldataGridView_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  f) {
	
	if (f->ColumnIndex == 0 || f->ColumnIndex == 5)
	{
		int index = festivaldataGridView->CurrentRow->Index;
		if (searchingFestBox->Text == "")glob::lineF = index;
		else glob::lineF = glob::indexArray[index];

		BuyFestivalTicket^ input = gcnew BuyFestivalTicket();
		input->Show();
	}
	if (f->ColumnIndex == 4)
	{
		String^ input;

		int index = festivaldataGridView->CurrentRow->Index;
		if (searchingFestBox->Text == "")glob::lineF = index;
		else glob::lineF = glob::indexArray[index];
		Artistspanel->Visible = true;
		Artistsboxlittle->Visible = true;
		textBox1->Text = "";
		input = gcnew String(glob::fest.Festivals[glob::lineF].fest_artist.c_str());
		textBox1->Text = textBox1->Text + input + Environment::NewLine;	
	}
	
	if (f->ColumnIndex == 6)
	{
		String^ input;
		int index = festivaldataGridView->CurrentRow->Index;
		if (searchingFestBox->Text == "")glob::lineF = index;
		else glob::lineF = glob::indexArray[index];
		Infopanel1->Visible = true;
		Infopanel2->Visible = true;
		textBox4->Text = "";
		input = gcnew String(glob::fest.Festivals[glob::lineF].fest_info.c_str());
		textBox4->Text = textBox4->Text + input + Environment::NewLine;
	}
}
private: System::Void bunifuImageButton9_Click(System::Object^  sender, System::EventArgs^  e) {
	Artistspanel->Visible = false;
	Artistsboxlittle->Visible = false;
}
private: System::Void bunifuImageButton10_Click(System::Object^  sender, System::EventArgs^  e) {
	Infopanel1->Visible = false;
	Infopanel2->Visible = false;
}
private: System::Void MainButton_Click(System::Object^  sender, System::EventArgs^  e) {
	panel5->Visible =true;
	picturesTimer->Start();
	Mainpanel->Visible = true;
	Mainpanel2->Visible = true;
	cartpanel->Visible = false;
	festivaldataGridView->Visible = false;
	searchingFestBox->Visible = false;
	concertdataGridView->Visible = false;
	searchingConcBox->Visible = false;
	searchButton->Visible = false;
}
private: System::Void ConcertsButton_Click(System::Object^  sender, System::EventArgs^  e) {
	searchButton->Visible = true;
	concertdataGridView->Visible = true;
	searchingConcBox->Visible = true;
	panel5->Visible = false;
	picturesTimer->Stop();
	Mainpanel->Visible = false;
	Mainpanel2->Visible = false;
	Mainpanel3->Visible = false;
	cartpanel->Visible = false;
	festivaldataGridView->Visible = false;
	searchingFestBox->Visible = false;
}
private: System::Void FestivalsButton_Click(System::Object^  sender, System::EventArgs^  e) {
	searchButton->Visible = true;
	festivaldataGridView->Visible = true;
	searchingFestBox->Visible = true;
	panel5->Visible =false;
	picturesTimer->Stop();
	Mainpanel->Visible = false;
	Mainpanel2->Visible = false;
	Mainpanel3->Visible = false;
	cartpanel->Visible = false;
	concertdataGridView->Visible = false;
	searchingConcBox->Visible = false;	
}
private: System::Void CartButton_Click(System::Object^  sender, System::EventArgs^  e) {
	cartpanel->Visible = true;
	panel5->Visible = false;
	picturesTimer->Stop();
	Mainpanel->Visible = false;
	Mainpanel2->Visible = false;
	Mainpanel3->Visible = false;
	festivaldataGridView->Visible = false;
	searchingFestBox->Visible = false;
	concertdataGridView->Visible = false;
	searchingConcBox->Visible = false;
	searchButton->Visible = false;
}

private: System::Void CartIconButton_Click(System::Object^  sender, System::EventArgs^  e) {
	cartpanel->Visible = true;
	panel5->Visible = false;
	picturesTimer->Stop();
	Mainpanel->Visible = false;
	Mainpanel2->Visible = false;
	Mainpanel3->Visible = false;
	festivaldataGridView->Visible = false;
	searchingFestBox->Visible = false;
	concertdataGridView->Visible = false;
	searchingConcBox->Visible = false;
	searchButton->Visible = false;
}
private: System::Void bunifuImageButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	panel5->Visible = true;
	picturesTimer->Start();
	Mainpanel->Visible = true;
	Mainpanel2->Visible = true;
	Mainpanel3->Visible = false;
	cartpanel->Visible = false;
	festivaldataGridView->Visible = false;
	searchingFestBox->Visible = false;
	concertdataGridView->Visible = false;
	searchingConcBox->Visible = false;
	searchButton->Visible = false;
}
private: System::Void bunifuImageButton3_Click(System::Object^  sender, System::EventArgs^  e) {
	searchButton->Visible = true;
	concertdataGridView->Visible = true;
	searchingConcBox->Visible = true;
	panel5->Visible = false;
	picturesTimer->Stop();
	Mainpanel->Visible = false;
	Mainpanel2->Visible = false;
	Mainpanel3->Visible = false;
	cartpanel->Visible = false;
	festivaldataGridView->Visible = false;
	searchingFestBox->Visible = false;
}
private: System::Void bunifuImageButton4_Click(System::Object^  sender, System::EventArgs^  e) {
	searchButton->Visible = true;
	festivaldataGridView->Visible = true;
	searchingFestBox->Visible = true;
	panel5->Visible = false;
	picturesTimer->Stop();
	Mainpanel->Visible = false;
	Mainpanel2->Visible = false;
	Mainpanel3->Visible = false;
	cartpanel->Visible = false;
	concertdataGridView->Visible = false;
	searchingConcBox->Visible = false;
}
private: System::Void bunifuThinButton22_Click(System::Object^  sender, System::EventArgs^  e) {
	searchButton->Visible = true;
	festivaldataGridView->Visible = true;
	searchingFestBox->Visible = true;
	panel5->Visible = false;
	picturesTimer->Stop();
	Mainpanel->Visible = false;
	Mainpanel2->Visible = false;
	Mainpanel3->Visible = false;
	cartpanel->Visible = false;
	concertdataGridView->Visible = false;
	searchingConcBox->Visible = false;
}
private: System::Void bunifuThinButton23_Click(System::Object^  sender, System::EventArgs^  e) {
	searchButton->Visible = true;
	festivaldataGridView->Visible = true;
	searchingFestBox->Visible = true;
	panel5->Visible = false;
	picturesTimer->Stop();
	Mainpanel->Visible = false;
	Mainpanel2->Visible = false;
	Mainpanel3->Visible = false;
	cartpanel->Visible = false;
	concertdataGridView->Visible = false;
	searchingConcBox->Visible = false;
}
private: System::Void bunifuImageButton4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Login^ input = gcnew Login();
	input->Show();
}
private: System::Void HelpIconButton_Click(System::Object^  sender, System::EventArgs^  e) {
	HelpForm^ input = gcnew HelpForm();
	input->Show();
}
private: System::Void HelpButton_Click(System::Object^  sender, System::EventArgs^  e) {
	HelpForm^ input = gcnew HelpForm();
	input->Show();
}
private: System::Void bunifuThinButton21_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Login^ input = gcnew Login();
	input->Show();
}
private: System::Void bunifuImageButton1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void bunifuImageButton2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void bunifuImageButton3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	timer1->Start();
	picturesTimer->Start();
}
private: System::Void bunifuImageButton5_Click(System::Object^  sender, System::EventArgs^  e) {
	Mainpanel2->Visible = false;
	Mainpanel3->Visible = true;
}
private: System::Void bunifuImageButton7_Click(System::Object^  sender, System::EventArgs^  e) {
	Mainpanel2->Visible = true;
	Mainpanel3->Visible = false;
}
private: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i <= glob::fest.fest_number; i++)
	{
		if (glob::fest.Festivals[i].fest_ID == "ID01")
		{
			glob::lineF = i;
			BuyFestivalTicket^ input = gcnew BuyFestivalTicket();
			input->Show();
		}
	}	
}
private: System::Void pictureBox13_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i-1 < glob::fest.fest_number; i++)
	{
		if (glob::fest.Festivals[i].fest_ID == "ID01")
		{
			glob::lineF = i;
			BuyFestivalTicket^ input = gcnew BuyFestivalTicket();
			input->Show();
		}
	}	
}
private: System::Void pictureBox12_Click_1(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i <= glob::fest.fest_number; i++)
	{
		if (glob::fest.Festivals[i].fest_ID == "ID02")
		{
			glob::lineF = i;
			BuyFestivalTicket^ input = gcnew BuyFestivalTicket();
			input->Show();
		}
	}
}
private: System::Void pictureBox11_Click_1(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i <= glob::fest.fest_number; i++)
	{
		if (glob::fest.Festivals[i].fest_ID == "ID02")
		{
			glob::lineF = i;
			BuyFestivalTicket^ input = gcnew BuyFestivalTicket();
			input->Show();
		}
	}
}
private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < glob::fest.fest_number; i++)
	{
		if (glob::fest.Festivals[i].fest_ID == "ID04")
		{
			glob::lineF = i;
			BuyFestivalTicket^ input = gcnew BuyFestivalTicket();
			input->Show();
		}
	}
}
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i <= glob::fest.fest_number; i++)
	{
		if (glob::fest.Festivals[i].fest_ID == "ID04")
		{
			glob::lineF = i;
			BuyFestivalTicket^ input = gcnew BuyFestivalTicket();
			input->Show();
		}
	}
}
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i <= glob::fest.fest_number; i++)
	{
		if (glob::fest.Festivals[i].fest_ID == "ID05")
		{
			glob::lineF = i;
			BuyFestivalTicket^ input = gcnew BuyFestivalTicket();
			input->Show();
		}
	}
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i <= glob::fest.fest_number; i++)
	{
		if (glob::fest.Festivals[i].fest_ID == "ID05")
		{
			glob::lineF = i;
			BuyFestivalTicket^ input = gcnew BuyFestivalTicket();
			input->Show();
		}
	}
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i <= glob::fest.fest_number; i++)
	{
		if (glob::fest.Festivals[i].fest_ID == "ID04")
		{
			glob::lineF = i;
			BuyFestivalTicket^ input = gcnew BuyFestivalTicket();
			input->Show();
		}
	}
}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i <= glob::fest.fest_number; i++)
	{
		if (glob::fest.Festivals[i].fest_ID == "ID01")
		{
			glob::lineF = i;
			BuyFestivalTicket^ input = gcnew BuyFestivalTicket();
			input->Show();
		}
	}
}
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i <= glob::fest.fest_number; i++)
	{
		if (glob::fest.Festivals[i].fest_ID == "ID02")
		{
			glob::lineF = i;
			BuyFestivalTicket^ input = gcnew BuyFestivalTicket();
			input->Show();
		}
	}
}
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i <= glob::fest.fest_number; i++)
	{
		if (glob::fest.Festivals[i].fest_ID == "ID03")
		{
			glob::lineF = i;
			BuyFestivalTicket^ input = gcnew BuyFestivalTicket();
			input->Show();
		}
	}
}
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i <= glob::conc.conc_number; i++)
	{
		if (glob::conc.Concerts[i].conc_ID == "ID01")
		{
			glob::lineC = i;
			BuyConcertTicket^ input = gcnew BuyConcertTicket();
			input->Show();
		}
	}
}
private: System::Void bunifuImageButton12_Click(System::Object^  sender, System::EventArgs^  e) {
	 cartList();
}
private: System::Void FestivalCartData_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^ f) {
	if (f->ColumnIndex == 4)
	{
		String^ input;

		int index = FestivalCartData->CurrentRow->Index;
		glob::lineF = glob::pers.People[glob::pers.pers_number].GetPersonFestTicketID(index);
		Artistspanel->Visible = true;
		Artistsboxlittle->Visible = true;
		textBox1->Text = "";
		input = gcnew String(glob::fest.Festivals[glob::lineF].fest_artist.c_str());
		textBox1->Text = textBox1->Text + input + Environment::NewLine;
	}
	if (f->ColumnIndex == 5)
	{
		String^ input;
		int index = FestivalCartData->CurrentRow->Index;
		glob::lineF = glob::pers.People[glob::pers.pers_number].GetPersonFestTicketID(index);
		Infopanel1->Visible = true;
		Infopanel2->Visible = true;
		textBox4->Text = "";
		input = gcnew String(glob::fest.Festivals[glob::lineF].fest_info.c_str());
		textBox4->Text = textBox4->Text + input + Environment::NewLine;
	}
	if (f->ColumnIndex == 6 && glob::pers.People[glob::pers.pers_number].GetPersonFestTicketNum() != 0)
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
private: System::Void ConcertCartData_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  c) {
	if (c->ColumnIndex == 4)
	{
		String^ input;
		int index = ConcertCartData->CurrentRow->Index;
		glob::lineC = glob::pers.People[glob::pers.pers_number].GetPersonConcTicketID(index);
		Artistspanel->Visible = true;
		Artistsboxlittle->Visible = true;
		textBox1->Text = "";
			input = gcnew String(glob::conc.Concerts[glob::lineC].conc_artist.c_str());
			textBox1->Text = textBox1->Text + input + Environment::NewLine;		
	}
	if (c->ColumnIndex == 5)
	{
		String^ input;
		int index = ConcertCartData->CurrentRow->Index;
		glob::lineC = glob::pers.People[glob::pers.pers_number].GetPersonConcTicketID(index);
		Infopanel1->Visible = true;
		Infopanel2->Visible = true;
		textBox4->Text = "";
		input = gcnew String(glob::conc.Concerts[glob::lineC].conc_info.c_str());
		textBox4->Text = textBox4->Text + input + Environment::NewLine;
	}
	if (c->ColumnIndex == 6 && glob::pers.People[glob::pers.pers_number].GetPersonConcTicketNum() !=0)
	{
		int persConcTicketNum = glob::pers.People[glob::pers.pers_number].GetPersonConcTicketNum();
		int index = ConcertCartData->CurrentRow->Index;
		for (int i = index; i < persConcTicketNum - 1; i++)
		{
			glob::pers.People[glob::pers.pers_number].RemovePersonConcTicketID(i);
			glob::ticketPriceSumConc[i] = glob::ticketPriceSumConc[i +1];
		}
		persConcTicketNum--;
		glob::shoppingCart_num--;
		glob::pers.People[glob::pers.pers_number].InsertPersonConcTicketnum(glob::pers.pers_number, persConcTicketNum);
		ConcertCartData->Rows->Clear();
		cartList();
	}
}
private: System::Void bunifuImageButton11_Click(System::Object^  sender, System::EventArgs^  e) {
	int persConcTicketNum = glob::pers.People[glob::pers.pers_number].GetPersonConcTicketNum();
	int persFestTicketNum = glob::pers.People[glob::pers.pers_number].GetPersonFestTicketNum();
	if (persConcTicketNum != 0 || persFestTicketNum != 0)
	{
	PaymentForm^ input = gcnew PaymentForm();
	input->Show();
	}
	else
		MessageBox::Show("You have choosen 0 items.");
}
private: System::Void bunifuThinButton24_Click(System::Object^  sender, System::EventArgs^  e) {
	int persConcTicketNum = glob::pers.People[glob::pers.pers_number].GetPersonConcTicketNum();
	int persFestTicketNum = glob::pers.People[glob::pers.pers_number].GetPersonFestTicketNum();
	if (persConcTicketNum != 0 || persFestTicketNum != 0)
	{
		PaymentForm^ input = gcnew PaymentForm();
		input->Show();
	}
	else
		MessageBox::Show("You have choosen 0 items.");
}

private: System::Void timerReload_Tick(System::Object^  sender, System::EventArgs^  e) {
	if (glob::Check == 1)
	{
		cartList();
		festivalList();
		concertList();
		label11->Text = glob::totalPrice.ToString();
		glob::Check = 0;
	}	
}
private: System::Void searchButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (searchingConcBox->Visible != false)
		searchingConc();

	if (searchingFestBox->Visible != false)
		searchingFest();
}
};
}