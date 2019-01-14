#pragma once
#include "Connection.h"
#include "Email.h"
#include "GlobalSettings.h"
#include "EMailBox.h"
#include "SQL_helper.h"
#include "AdditionalServices.h"
#include "AdditionalServicesForUser.h"
#include "AdminForm.h"
#include "OperatorForm.h"
#include "UserForm.h"

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();	
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox5;


	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBoxPlaceOfResidence;

	private: System::Windows::Forms::TextBox^  textBoxYearOfBirth;

	private: System::Windows::Forms::TextBox^  textBoxPassportID;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBoxLogin;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBoxLoginForAuthorization;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBoxLoginForAuthorization = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxPlaceOfResidence = (gcnew System::Windows::Forms::TextBox());
			this->textBoxYearOfBirth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassportID = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 23);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(276, 404);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->textBoxLoginForAuthorization);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->checkBox2);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(268, 378);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Вход";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(18, 56);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(44, 13);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Логин :";
			// 
			// textBoxLoginForAuthorization
			// 
			this->textBoxLoginForAuthorization->Location = System::Drawing::Point(122, 53);
			this->textBoxLoginForAuthorization->Name = L"textBoxLoginForAuthorization";
			this->textBoxLoginForAuthorization->Size = System::Drawing::Size(100, 20);
			this->textBoxLoginForAuthorization->TabIndex = 19;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(93, 321);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Войти";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(122, 142);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(115, 17);
			this->checkBox2->TabIndex = 17;
			this->checkBox2->Text = L"Скрывать пароль";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(122, 85);
			this->textBox7->MaxLength = 20;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 15;
			this->textBox7->UseSystemPasswordChar = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(122, 26);
			this->textBox8->MaxLength = 20;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 14;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox8_KeyPress_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(18, 29);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Телефон:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(18, 92);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(48, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Пароль:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBoxPlaceOfResidence);
			this->tabPage2->Controls->Add(this->textBoxYearOfBirth);
			this->tabPage2->Controls->Add(this->textBoxPassportID);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->textBoxLogin);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->checkBox1);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(268, 378);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Регистрация";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBoxPlaceOfResidence
			// 
			this->textBoxPlaceOfResidence->Location = System::Drawing::Point(127, 281);
			this->textBoxPlaceOfResidence->MaxLength = 25;
			this->textBoxPlaceOfResidence->Name = L"textBoxPlaceOfResidence";
			this->textBoxPlaceOfResidence->Size = System::Drawing::Size(100, 20);
			this->textBoxPlaceOfResidence->TabIndex = 19;
			// 
			// textBoxYearOfBirth
			// 
			this->textBoxYearOfBirth->Location = System::Drawing::Point(127, 254);
			this->textBoxYearOfBirth->MaxLength = 4;
			this->textBoxYearOfBirth->Name = L"textBoxYearOfBirth";
			this->textBoxYearOfBirth->Size = System::Drawing::Size(100, 20);
			this->textBoxYearOfBirth->TabIndex = 18;
			this->textBoxYearOfBirth->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBoxYearOfBirth_KeyPress);
			// 
			// textBoxPassportID
			// 
			this->textBoxPassportID->Location = System::Drawing::Point(127, 223);
			this->textBoxPassportID->MaxLength = 4;
			this->textBoxPassportID->Name = L"textBoxPassportID";
			this->textBoxPassportID->Size = System::Drawing::Size(100, 20);
			this->textBoxPassportID->TabIndex = 17;
			this->textBoxPassportID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBoxPassportID_KeyPress);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(23, 281);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(92, 13);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Адрес прописки:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(23, 254);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(81, 13);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Год рождения:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(23, 226);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(94, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Номер паспорта:";
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Location = System::Drawing::Point(127, 48);
			this->textBoxLogin->MaxLength = 13;
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(100, 20);
			this->textBoxLogin->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(23, 51);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Логин";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(67, 331);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Зарегистрироваться";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(127, 131);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(115, 17);
			this->checkBox1->TabIndex = 10;
			this->checkBox1->Text = L"Скрывать пароль";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(127, 196);
			this->textBox5->MaxLength = 15;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(127, 170);
			this->textBox4->MaxLength = 15;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 196);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Фамилия:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 173);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Имя:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(127, 104);
			this->textBox3->MaxLength = 20;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->UseSystemPasswordChar = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(127, 74);
			this->textBox2->MaxLength = 20;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(127, 21);
			this->textBox1->MaxLength = 15;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Телефон:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Повторите пароль:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Пароль:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(97, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"MegaEsimCompany";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(293, 435);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вход";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: Void Clean()
{
	textBox8->Text = String::Empty;
	textBoxLoginForAuthorization->Text = String::Empty;
	textBox7->Text = String::Empty;

	textBox1->Text = String::Empty;
	textBoxLogin->Text = String::Empty;
	textBox2->Text = String::Empty;
	textBox3->Text = String::Empty;
	textBox4->Text = String::Empty;
	textBox5->Text = String::Empty;
	textBoxPassportID->Text = String::Empty;
	textBoxYearOfBirth->Text = String::Empty;
	textBoxPlaceOfResidence->Text = String::Empty;

	checkBox1->Checked = true;
	checkBox2->Checked = true;

	textBox7->UseSystemPasswordChar = true;

	textBox2->UseSystemPasswordChar = true;
	textBox3->UseSystemPasswordChar = true;
}

private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if (checkBox1->Checked)
	{
		textBox2->UseSystemPasswordChar = true;
		textBox3->UseSystemPasswordChar = true;
	}
	else
	{
		textBox2->UseSystemPasswordChar = false;
		textBox3->UseSystemPasswordChar = false;
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (String::IsNullOrWhiteSpace(textBox1->Text) || String::IsNullOrWhiteSpace(textBoxLogin->Text) || String::IsNullOrWhiteSpace(textBox2->Text) || String::IsNullOrWhiteSpace(textBox3->Text) || String::IsNullOrWhiteSpace(textBox4->Text) || String::IsNullOrWhiteSpace(textBox5->Text) || String::IsNullOrWhiteSpace(textBoxPassportID->Text) || String::IsNullOrWhiteSpace(textBoxYearOfBirth->Text) || String::IsNullOrWhiteSpace(textBoxPlaceOfResidence->Text))
	{
		MessageBox::Show(L"Вы не заполнили все поля", L"Ошибка");
		return;
	}

	if (textBox2->Text->Length < GlobalSettings::minPasswordLen)
	{
		MessageBox::Show(L"Минимальная длинна пароля " + GlobalSettings::minPasswordLen + " символов", L"Ошибка");
		return;
	}

	if (textBox1->Text->Length < GlobalSettings::minNumberLen)
	{
		MessageBox::Show(L"Минимальная длинна номера " + GlobalSettings::minNumberLen + " символов", L"Ошибка");
		return;
	}

	if (textBoxPassportID->Text->Length != GlobalSettings::PassportIDLen)
	{
		MessageBox::Show(L"Номер пасспорта это " + GlobalSettings::PassportIDLen + " цифры", L"Ошибка");
		return;
	}

	System::String^ query = L"SELECT phone_number FROM Users WHERE phone_number = '"+ textBox1->Text+"'";
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);

	if (command->ExecuteScalar() != nullptr)
	{
		MessageBox::Show(L"Номер телефона занят, попробуйте другой", L"Ошибка");
		return;
	}
	
	System::String^ query2 = L"SELECT phone_number FROM Users WHERE user_login = '" + textBoxLogin->Text + "'";
	OleDbCommand^ command2 = gcnew OleDbCommand(query2, Connection::myConnect);

	if (command2->ExecuteScalar() != nullptr)
	{
		MessageBox::Show(L"Этот логин занят, попробуйте другой", L"Ошибка");
		return;
	}

	System::String^ query3 = L"INSERT INTO Clients (client_name, client_surname,tariff_id,passport_ID,year_of_birth,place_of_residence) VALUES ('" + textBox4->Text + "','" + textBox5->Text + "',1,'" + textBoxPassportID->Text + "','" + textBoxYearOfBirth->Text + "','" + textBoxPlaceOfResidence->Text + "')";
	OleDbCommand^ command3 = gcnew OleDbCommand(query3, Connection::myConnect);
	command3->ExecuteNonQuery();

	System::String^ query4 = L"SELECT MAX(client_id) AS `MAX_client_id` FROM Clients";
	OleDbCommand^ command4 = gcnew OleDbCommand(query4, Connection::myConnect);
	System::Int32 MAX_client_id = Convert::ToInt32(command4->ExecuteScalar());

	System::String^ query5 = L"INSERT INTO Users (phone_number,user_login,user_password,role_id,client_id) VALUES ('" + textBox1->Text + "','" + textBoxLogin->Text + "','" +SQL_helper::Md5(textBox2->Text) + "',1," + MAX_client_id + ")";
	OleDbCommand^ command5 = gcnew OleDbCommand(query5, Connection::myConnect);
	command5->ExecuteNonQuery();

	MessageBox::Show(L"Регистрация прошла успешно");
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
{
	Connection::Start();
}
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
{
	GlobalSettings::FormClose();
}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if (checkBox2->Checked)
	{
		textBox7->UseSystemPasswordChar = true;
	}
	else
	{
		textBox7->UseSystemPasswordChar = false;
	}
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	if ((String::IsNullOrWhiteSpace(textBox7->Text) && String::IsNullOrWhiteSpace(textBox8->Text)) || (String::IsNullOrWhiteSpace(textBoxLoginForAuthorization->Text) && String::IsNullOrWhiteSpace(textBox8->Text)))
	{
		MessageBox::Show(L"Вы не заполнили все поля", L"Ошибка");
		return;
	}

	System::String^ query = L"SELECT phone_number,user_password,banned,role_id FROM Users WHERE (phone_number = '" + textBox8->Text + "' OR user_login = '" + textBoxLoginForAuthorization->Text + "') AND user_password = '" + SQL_helper::Md5(textBox7->Text) + "'";
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
	OleDbDataReader^ reader = command->ExecuteReader();

	if (!reader->Read())
	{
		MessageBox::Show(L"Входные данные не верны", L"Ошибка");
		return;
	}

	if (reader[2]->ToString() == L"True")
	{
		MessageBox::Show(L"Вы были забанены", L"");
		return;
	}	

	if (reader[3]->ToString() == "1")
	{
		System::String^ query = L"SELECT client_id FROM Users WHERE phone_number = '" + textBox8->Text + "' OR user_login = '" + textBoxLoginForAuthorization->Text + "'";
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		OleDbDataReader^ reader = command->ExecuteReader();

		if (!reader->Read())
		{
			reader->Close();
			return;
		}

		Int32 MyClientId = Convert::ToInt32(reader[0]);
		String^ myNameAndSurname = SQL_helper::ClientNameAndSurname(MyClientId);
		reader->Close();
		MessageBox::Show(L"Добро пожаловать " + myNameAndSurname);
		Hide();
		UserForm^ userPanel = gcnew UserForm(this, MyClientId, myNameAndSurname);
		reader->Close();
		userPanel->Show();
		Clean();
		return;
	}

	if (reader[3]->ToString() == "2")
	{
		MessageBox::Show(L"Вход выполнен успешно", L"Добро пожаловать");
		Hide();
		OperatorForm^ operatorPanel = gcnew OperatorForm(this);
		operatorPanel->Show();
		Clean();
		return;
	}

	if (reader[3]->ToString() == "3")
	{
		MessageBox::Show(L"Вход выполнен успешно", L"Добро пожаловать");
		Hide();
		AdminForm^ adminPanel = gcnew AdminForm(this);
		adminPanel->Show();
		Clean();
		return;
	}
}

private: System::Void textBox8_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBoxPassportID_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBoxYearOfBirth_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox8_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
}
};
}
