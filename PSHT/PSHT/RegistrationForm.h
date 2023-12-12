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
	/// Summary for RegistrationForm
	/// </summary>
	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	public:
		RegistrationForm(void)
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
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnCreate;
	private: System::Windows::Forms::TextBox^ tbconfirm;

	private: System::Windows::Forms::TextBox^ tbpass;

	private: System::Windows::Forms::TextBox^ tbUname;

	private: System::Windows::Forms::TextBox^ tbLname;

	private: System::Windows::Forms::TextBox^ tbfname;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegistrationForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tbconfirm = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tbpass = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tbUname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tbLname = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tbfname = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(290, 411);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::AliceBlue;
			this->panel2->Controls->Add(this->btnCancel);
			this->panel2->Controls->Add(this->btnCreate);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(290, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(424, 411);
			this->panel2->TabIndex = 1;
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::DarkGray;
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::White;
			this->btnCancel->Location = System::Drawing::Point(212, 335);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 13;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegistrationForm::btnCancel_Click);
			// 
			// btnCreate
			// 
			this->btnCreate->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnCreate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCreate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCreate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreate->ForeColor = System::Drawing::Color::White;
			this->btnCreate->Location = System::Drawing::Point(293, 335);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(75, 23);
			this->btnCreate->TabIndex = 12;
			this->btnCreate->Text = L"Create";
			this->btnCreate->UseVisualStyleBackColor = false;
			this->btnCreate->Click += gcnew System::EventHandler(this, &RegistrationForm::btnCreate_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(52, 258);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Confirm Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(52, 196);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Password";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Azure;
			this->panel7->Controls->Add(this->pictureBox3);
			this->panel7->Controls->Add(this->tbconfirm);
			this->panel7->Location = System::Drawing::Point(55, 276);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(313, 32);
			this->panel7->TabIndex = 8;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(289, 6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(24, 20);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// tbconfirm
			// 
			this->tbconfirm->Location = System::Drawing::Point(3, 6);
			this->tbconfirm->Name = L"tbconfirm";
			this->tbconfirm->PasswordChar = '*';
			this->tbconfirm->Size = System::Drawing::Size(286, 20);
			this->tbconfirm->TabIndex = 1;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Azure;
			this->panel6->Controls->Add(this->pictureBox2);
			this->panel6->Controls->Add(this->tbpass);
			this->panel6->Location = System::Drawing::Point(55, 216);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(313, 32);
			this->panel6->TabIndex = 7;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(289, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(24, 20);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// tbpass
			// 
			this->tbpass->Location = System::Drawing::Point(3, 6);
			this->tbpass->Name = L"tbpass";
			this->tbpass->PasswordChar = '*';
			this->tbpass->Size = System::Drawing::Size(286, 20);
			this->tbpass->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(52, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Username";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Azure;
			this->panel5->Controls->Add(this->pictureBox1);
			this->panel5->Controls->Add(this->tbUname);
			this->panel5->Location = System::Drawing::Point(55, 157);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(313, 32);
			this->panel5->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(289, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(24, 20);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// tbUname
			// 
			this->tbUname->Location = System::Drawing::Point(3, 6);
			this->tbUname->Name = L"tbUname";
			this->tbUname->Size = System::Drawing::Size(286, 20);
			this->tbUname->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(221, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Last Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(52, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"First Name";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Azure;
			this->panel4->Controls->Add(this->tbLname);
			this->panel4->Location = System::Drawing::Point(224, 99);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(144, 32);
			this->panel4->TabIndex = 2;
			// 
			// tbLname
			// 
			this->tbLname->Location = System::Drawing::Point(3, 6);
			this->tbLname->Name = L"tbLname";
			this->tbLname->Size = System::Drawing::Size(138, 20);
			this->tbLname->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Azure;
			this->panel3->Controls->Add(this->tbfname);
			this->panel3->Location = System::Drawing::Point(55, 99);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(161, 32);
			this->panel3->TabIndex = 1;
			// 
			// tbfname
			// 
			this->tbfname->Location = System::Drawing::Point(3, 6);
			this->tbfname->Name = L"tbfname";
			this->tbfname->Size = System::Drawing::Size(155, 20);
			this->tbfname->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Futura Md BT", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(281, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Create Account";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(714, 411);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"RegistrationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Create Account";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion
	
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: Dash^ dash = nullptr;
	private: System::Void btnCreate_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fname = tbfname->Text;
		String^ lname = tbLname->Text;
		String^ username = tbUname->Text;
		String^ password = tbpass->Text;
		String^ confirmpass = tbconfirm->Text;

	if (fname->Length == 0 || lname->Length == 0 || username->Length == 0 ||
		password->Length == 0 || confirmpass->Length == 0) {

		MessageBox::Show("Please complete the required fields","ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	if (String::Compare(password, confirmpass) != 0) {
		MessageBox::Show("Password and confirm password do not match",
			"ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
	}
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=phtracker;Integrated Security=True ";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO login (fname, lname, uname, pass) VALUES (@fname, @lname, @uname, @pass)";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@fname", fname);
		command.Parameters->AddWithValue("@lname", lname);
		command.Parameters->AddWithValue("@uname", username);
		command.Parameters->AddWithValue("@pass", password);

		//command.ExecuteNonQuery();
		SqlDataReader^ reader = command.ExecuteReader();
		MessageBox::Show("Your account has been created successfully.", 
			"Registered", MessageBoxButtons::OK);

	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to create a new account!",
			"ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}

};
}
