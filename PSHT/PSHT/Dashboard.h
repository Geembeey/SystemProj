#pragma once
#include "Dash.h"


namespace PSHT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
		{

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabPage;
	protected:

	protected:

	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnAddhabit;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ labelP;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Splitter^ splitter2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ lltimer;

	private: System::Windows::Forms::Button^ btnStop;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnStart;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ llLogout;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Button^ btnDelete;



	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;


private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::ListBox^ listBox1;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
private: System::Windows::Forms::TextBox^ textBox1;


private: System::Windows::Forms::Splitter^ splitter1;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::ComboBox^ cbGoal;



private: System::Windows::Forms::TextBox^ tbHabitname;



private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::DataGridView^ datagv;
















private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Column7;
















	private: System::ComponentModel::IContainer^ components;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->tabPage = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->datagv = (gcnew System::Windows::Forms::DataGridView());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->llLogout = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->labelP = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbGoal = (gcnew System::Windows::Forms::ComboBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tbHabitname = (gcnew System::Windows::Forms::TextBox());
			this->btnAddhabit = (gcnew System::Windows::Forms::Button());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->btnStop = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->lltimer = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->splitter2 = (gcnew System::Windows::Forms::Splitter());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->tabPage->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagv))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabPage
			// 
			this->tabPage->Controls->Add(this->tabPage1);
			this->tabPage->Controls->Add(this->tabPage2);
			this->tabPage->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabPage->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage->Location = System::Drawing::Point(0, 0);
			this->tabPage->Multiline = true;
			this->tabPage->Name = L"tabPage";
			this->tabPage->SelectedIndex = 0;
			this->tabPage->Size = System::Drawing::Size(847, 561);
			this->tabPage->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->datagv);
			this->tabPage1->Controls->Add(this->dateTimePicker2);
			this->tabPage1->Controls->Add(this->btnDelete);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->pictureBox5);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->panel3);
			this->tabPage1->Controls->Add(this->splitter1);
			this->tabPage1->Location = System::Drawing::Point(4, 24);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(839, 533);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Habit Tracker";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// datagv
			// 
			this->datagv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datagv->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->datagv->Location = System::Drawing::Point(236, 205);
			this->datagv->Name = L"datagv";
			this->datagv->Size = System::Drawing::Size(595, 325);
			this->datagv->TabIndex = 27;
			this->datagv->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Dashboard::datagv_CellContentClick_1);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(631, 97);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 23);
			this->dateTimePicker2->TabIndex = 22;
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->ForeColor = System::Drawing::Color::White;
			this->btnDelete->Location = System::Drawing::Point(236, 169);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(94, 30);
			this->btnDelete->TabIndex = 20;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &Dashboard::btnDelete_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->llLogout);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->labelP);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(833, 85);
			this->panel1->TabIndex = 0;
			// 
			// llLogout
			// 
			this->llLogout->AutoSize = true;
			this->llLogout->BackColor = System::Drawing::Color::Transparent;
			this->llLogout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llLogout->ForeColor = System::Drawing::Color::White;
			this->llLogout->Location = System::Drawing::Point(761, 43);
			this->llLogout->Name = L"llLogout";
			this->llLogout->Size = System::Drawing::Size(49, 17);
			this->llLogout->TabIndex = 2;
			this->llLogout->Text = L"Logout";
			this->llLogout->Click += gcnew System::EventHandler(this, &Dashboard::llLogout_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(804, 43);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(28, 17);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 3;
			this->pictureBox8->TabStop = false;
			// 
			// labelP
			// 
			this->labelP->BackColor = System::Drawing::Color::Transparent;
			this->labelP->Font = (gcnew System::Drawing::Font(L"Futura Md BT", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelP->ForeColor = System::Drawing::Color::White;
			this->labelP->Location = System::Drawing::Point(82, 27);
			this->labelP->Name = L"labelP";
			this->labelP->Size = System::Drawing::Size(242, 33);
			this->labelP->TabIndex = 1;
			this->labelP->Text = L"PERSISTEMATIC";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(73, 79);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(233, 126);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(580, 33);
			this->label7->TabIndex = 12;
			this->label7->Text = L"\"You’ll never change your life until you change something you do daily. The secre"
				L"t of your success is found in your daily routine.\" - John Maxwell";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(232, 100);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(24, 20);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 11;
			this->pictureBox5->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Fira Code SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(262, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Habit Tracker";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->cbGoal);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->btnAddhabit);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel3->ForeColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(3, 85);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(223, 448);
			this->panel3->TabIndex = 24;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(76, 55);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(55, 59);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 28;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(16, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 17);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Streak Goal";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(16, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 17);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Habit Name";
			// 
			// cbGoal
			// 
			this->cbGoal->FormattingEnabled = true;
			this->cbGoal->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"None", L"Daily", L"Weekly", L"Monthly" });
			this->cbGoal->Location = System::Drawing::Point(16, 219);
			this->cbGoal->Name = L"cbGoal";
			this->cbGoal->Size = System::Drawing::Size(180, 25);
			this->cbGoal->TabIndex = 17;
			this->cbGoal->Text = L"None";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Controls->Add(this->tbHabitname);
			this->panel4->Location = System::Drawing::Point(16, 152);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(181, 32);
			this->panel4->TabIndex = 14;
			// 
			// tbHabitname
			// 
			this->tbHabitname->Location = System::Drawing::Point(3, 4);
			this->tbHabitname->Name = L"tbHabitname";
			this->tbHabitname->Size = System::Drawing::Size(175, 25);
			this->tbHabitname->TabIndex = 0;
			// 
			// btnAddhabit
			// 
			this->btnAddhabit->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnAddhabit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddhabit->ForeColor = System::Drawing::Color::White;
			this->btnAddhabit->Location = System::Drawing::Point(16, 316);
			this->btnAddhabit->Name = L"btnAddhabit";
			this->btnAddhabit->Size = System::Drawing::Size(180, 29);
			this->btnAddhabit->TabIndex = 13;
			this->btnAddhabit->Text = L"Add new Habit";
			this->btnAddhabit->UseVisualStyleBackColor = false;
			this->btnAddhabit->Click += gcnew System::EventHandler(this, &Dashboard::btnAddhabit_Click);
			// 
			// splitter1
			// 
			this->splitter1->BackColor = System::Drawing::Color::AliceBlue;
			this->splitter1->Location = System::Drawing::Point(3, 3);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(224, 527);
			this->splitter1->TabIndex = 23;
			this->splitter1->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->pictureBox7);
			this->tabPage2->Controls->Add(this->btnStop);
			this->tabPage2->Controls->Add(this->btnReset);
			this->tabPage2->Controls->Add(this->btnStart);
			this->tabPage2->Controls->Add(this->lltimer);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->dateTimePicker1);
			this->tabPage2->Controls->Add(this->pictureBox6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->splitter2);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->panel2);
			this->tabPage2->Location = System::Drawing::Point(4, 24);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(839, 533);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"To-Do List";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::PowderBlue;
			this->label9->Font = (gcnew System::Drawing::Font(L"Fira Code", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(594, 248);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(209, 21);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Time to Meditate";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::PowderBlue;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(624, 467);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(154, 21);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Breathe. Relax. Focus";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::PowderBlue;
			this->label12->Location = System::Drawing::Point(599, 467);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 15);
			this->label12->TabIndex = 25;
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::PowderBlue;
			this->label11->Location = System::Drawing::Point(594, 156);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(214, 45);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Zero distractions, a great achievement, \r\nmeditation is an unlimited resource. \r\n"
				L"Don’t waste it.";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::PowderBlue;
			this->label10->Font = (gcnew System::Drawing::Font(L"MS Gothic", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(635, 114);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(173, 29);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Meditation";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::PowderBlue;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(597, 114);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(41, 29);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 22;
			this->pictureBox7->TabStop = false;
			// 
			// btnStop
			// 
			this->btnStop->AutoSize = true;
			this->btnStop->BackColor = System::Drawing::Color::Gray;
			this->btnStop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStop->Font = (gcnew System::Drawing::Font(L"MS Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStop->ForeColor = System::Drawing::Color::White;
			this->btnStop->Location = System::Drawing::Point(602, 388);
			this->btnStop->Name = L"btnStop";
			this->btnStop->Size = System::Drawing::Size(59, 26);
			this->btnStop->TabIndex = 20;
			this->btnStop->Text = L"Stop";
			this->btnStop->UseVisualStyleBackColor = false;
			// 
			// btnReset
			// 
			this->btnReset->AutoSize = true;
			this->btnReset->BackColor = System::Drawing::Color::Crimson;
			this->btnReset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"MS Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->ForeColor = System::Drawing::Color::White;
			this->btnReset->Location = System::Drawing::Point(667, 388);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(59, 26);
			this->btnReset->TabIndex = 19;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			// 
			// btnStart
			// 
			this->btnStart->AutoSize = true;
			this->btnStart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnStart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStart->Font = (gcnew System::Drawing::Font(L"MS Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStart->ForeColor = System::Drawing::Color::White;
			this->btnStart->Location = System::Drawing::Point(731, 388);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(71, 26);
			this->btnStart->TabIndex = 18;
			this->btnStart->Text = L"Start";
			this->btnStart->UseVisualStyleBackColor = false;
			// 
			// lltimer
			// 
			this->lltimer->BackColor = System::Drawing::Color::PowderBlue;
			this->lltimer->Font = (gcnew System::Drawing::Font(L"MS Gothic", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lltimer->Location = System::Drawing::Point(600, 298);
			this->lltimer->Name = L"lltimer";
			this->lltimer->Size = System::Drawing::Size(202, 60);
			this->lltimer->TabIndex = 17;
			this->lltimer->Text = L"00:00:00:00";
			this->lltimer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(259, 178);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(292, 289);
			this->listBox1->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(17, 224);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 23);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Date:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd-MM-yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(72, 224);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(174, 23);
			this->dateTimePicker1->TabIndex = 14;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(7, 100);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(24, 20);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 13;
			this->pictureBox6->TabStop = false;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Fira Code SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(37, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(197, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"To-Do List";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// splitter2
			// 
			this->splitter2->BackColor = System::Drawing::Color::PowderBlue;
			this->splitter2->Dock = System::Windows::Forms::DockStyle::Right;
			this->splitter2->Location = System::Drawing::Point(590, 88);
			this->splitter2->Name = L"splitter2";
			this->splitter2->Size = System::Drawing::Size(246, 442);
			this->splitter2->TabIndex = 8;
			this->splitter2->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkGray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(20, 331);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 22);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Remove";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(128, 331);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Add task";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(20, 178);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(226, 23);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Add something to do...";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(833, 85);
			this->panel2->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Futura Md BT", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(84, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(242, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"PERSISTEMATIC";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(5, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(73, 79);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Mon";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Tue";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 50;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Wed";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 50;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Thu";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 50;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Fri";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 50;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Sat";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 50;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Sun";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 50;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 561);
			this->Controls->Add(this->tabPage);
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->tabPage->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagv))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void populateTable() {

			try {
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=phtracker;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "SELECT * FROM habitTable";
				SqlDataReader^ reader;

				SqlDataAdapter^ adapter = gcnew SqlDataAdapter(sqlQuery, connString);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				datagv->DataSource = dt;

				sqlConn.Close();
			}
			catch (Exception^ e) {

				MessageBox::Show("Failed to load data.");

			}

		}



	private: System::Void btnAddhabit_Click(System::Object^ sender, System::EventArgs^ e) {
	
		String^ hname = this->tbHabitname->Text;
		String^ goal = this->cbGoal->Text;
	/*	bool^ mon = this->cbMon->Checked;
		bool^ tue = this->cbMon->Checked;
		bool^ wed = this->cbMon->Checked;
		bool^ thu = this->cbMon->Checked;
		bool^ fri = this->cbMon->Checked;
		bool^ sat = this->cbMon->Checked;
		bool^ sun = this->cbMon->Checked;
	*/

		if (hname->Length == 0 || goal->Length == 0) { 
			MessageBox::Show(" Please complete the required fields.", " ERROR! ",
			MessageBoxButtons::OK, MessageBoxIcon::Information);

			return;
		}
		
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=phtracker;Integrated Security=True ";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO habitTable (Habit, Goal, Mon, Tue, Wed, Thu, Fri, Sat, Sun) VALUES (@Habit, @Goal, @Mon, @Tue, @Wed, @Thu, @Fri, @Sat, @Sun)";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@Habit", hname);
			command.Parameters->AddWithValue("@Goal", goal);
		/*	command.Parameters->AddWithValue("@Mon", mon);
			command.Parameters->AddWithValue("@Tue", tue);
			command.Parameters->AddWithValue("@Wed", wed);
			command.Parameters->AddWithValue("@Thu", thu);
			command.Parameters->AddWithValue("@Fri", fri);
			command.Parameters->AddWithValue("@Sat", sat);
			command.Parameters->AddWithValue("@Sun", sun);
		*/

			SqlDataReader^ reader = command.ExecuteReader();
			MessageBox::Show(hname + " has been added successfully.",
				"HABIT", MessageBoxButtons::OK);

			String^ hname = this->tbHabitname->Text;
			String^ goal = this->cbGoal->Text;
		/*	bool^ mon = this->cbMon->Checked;
			bool^ tue = this->cbMon->Checked;
			bool^ wed = this->cbMon->Checked;
			bool^ thu = this->cbMon->Checked;
			bool^ fri = this->cbMon->Checked;
			bool^ sat = this->cbMon->Checked;
			bool^ sun = this->cbMon->Checked;
		*/

			try {

				String^ sqlQuery = "SELECT * FROM habitTable";
				SqlDataReader^ reader;

				SqlDataAdapter^ adapter = gcnew SqlDataAdapter(sqlQuery, connString);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				datagv->DataSource = dt;

			}
			catch (Exception^ e) {

				MessageBox::Show("Not connected to database");

			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to add a new habit!");
		}
	}

	private: System::Void llLogout_Click(System::Object^ sender, System::EventArgs^ e) {

		Windows::Forms::DialogResult dr = MessageBox::Show("Are you sure you want to logout?", "Logout",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (dr == Windows::Forms::DialogResult::Yes) {
			this->Close();
			
		}
	}

	private: System::Void btnReload_Click(System::Object^ sender, System::EventArgs^ e) {
			
		String^ hname = this->tbHabitname->Text;
		String^ goal = this->cbGoal->Text;
		
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "UPDATE habitTable SET Habit=@Habit, Goal=@Goal";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@Habit", hname);
			command.Parameters->AddWithValue("@Goal", goal);
			

			SqlDataReader^ reader = command.ExecuteReader();

			MessageBox::Show("Habit succesfully updated.");

			sqlConn.Close();
			populateTable();
		}
		catch (Exception^ e) {

			MessageBox::Show("Database connection failed.");

		}
		

	}

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {

}


	private: System::Void datagv_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=phtracker;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM habitTable";

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(sqlQuery, connString);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);

	/*	DataGridViewCheckBoxColumn^ check = gcnew DataGridViewCheckBoxColumn();
		check->HeaderText = "Mon";
		datagv->Columns->Add(check);		*/

		SqlCommand command(sqlQuery, % sqlConn);
		SqlDataReader^ reader = command.ExecuteReader();
		dt->Rows->Clear();
		while (reader->Read()) {
			datagv->Rows->Add(0, reader->GetValue(0)->ToString(), reader->GetValue(1)->ToString());
		}
	}
	catch (Exception^ e) {

	}

}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=phtracker;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM habitTable";
		SqlDataReader^ reader;

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(sqlQuery, connString);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		datagv->DataSource = dt;

	}
	catch (Exception^ e) {

		MessageBox::Show("Database Connection Failed.");

	}
}

private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=phtracker;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM habitTable";
		SqlDataReader^ reader;

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(sqlQuery, connString);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		datagv->DataSource = dt;

	}
	catch (Exception^ e) {

		MessageBox::Show("Database connection Failed.");

	}


}
private: System::Void datagv_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=phtracker;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		tbHabitname->Text = "";
		cbGoal->Text;

		String^ sqlQuery = "SELECT * FROM habitTable";

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(sqlQuery, connString);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);

		tbHabitname->Text = datagv->Rows[datagv->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
		cbGoal->Text = datagv->Rows[datagv->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
		

		

	}
	catch (Exception^ e) {


	}


}


};
}