#pragma once
#include "FeedbackForm.h"
#include "DeleteMyAccountForm.h"

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(Form^ parent, Int32 myClientId, String^ myNameAndSurname)
		{
			InitializeComponent();
			parentForm = parent;
			this->myClientId = myClientId;
			this->myNameAndSurname = myNameAndSurname;
			labelTariffTableHeader->Text = GlobalSettings::StringWithCertainSize(L"Номер. ", GlobalSettings::tariffIdLen) + GlobalSettings::StringWithCertainSize(L"Заголовок", GlobalSettings::tariffTitleLen) + L"  " + GlobalSettings::StringWithCertainSize(L"Описание", GlobalSettings::tariffDescriptionLen);
			comboBox1->SelectedIndex = 0;
			this->updateAfterPay += gcnew GlobalSettings::VoidDelegateWithoutArguments(this, &UserForm::Update_Balance);
			additionalServicesForUser = gcnew AdditionalServicesForUser(myClientId, labelAdditionalServices, listBoxAdditionalServices, labelPurchases, listBoxPurchases, updateAfterPay);
			additionalServicesForUser->Start();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}
	public: AdditionalServicesForUser^ additionalServicesForUser;
	public: GlobalSettings::VoidDelegateWithoutArguments^ updateAfterPay;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox1;
	public:

	public: Form^ parentForm;
	public: Int32 myClientId;
	private: System::Windows::Forms::Label^  label4;
	public:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  labelTariffTableHeader;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::TextBox^  textBoxSafeCode;
	private: System::Windows::Forms::TextBox^  textBoxCardNumber;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  labelOldTariff;
	private: System::Windows::Forms::TabPage^  tabPage4;


	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button24;
	public: System::Windows::Forms::Label^  labelAdditionalServices;
	private:
	public: System::Windows::Forms::ListBox^  listBoxAdditionalServices;
	private: System::Windows::Forms::ListBox^  listBoxPurchases;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  labelPurchases;
	public:

	public:


	public: String^ myNameAndSurname;

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->labelOldTariff = (gcnew System::Windows::Forms::Label());
			this->labelTariffTableHeader = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxSafeCode = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCardNumber = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->labelPurchases = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->listBoxPurchases = (gcnew System::Windows::Forms::ListBox());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->labelAdditionalServices = (gcnew System::Windows::Forms::Label());
			this->listBoxAdditionalServices = (gcnew System::Windows::Forms::ListBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(573, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Выйти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserForm::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 54);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(640, 355);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->labelOldTariff);
			this->tabPage1->Controls->Add(this->labelTariffTableHeader);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(632, 329);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тариф";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// labelOldTariff
			// 
			this->labelOldTariff->AutoSize = true;
			this->labelOldTariff->ForeColor = System::Drawing::Color::Red;
			this->labelOldTariff->Location = System::Drawing::Point(243, 3);
			this->labelOldTariff->Name = L"labelOldTariff";
			this->labelOldTariff->Size = System::Drawing::Size(69, 13);
			this->labelOldTariff->TabIndex = 7;
			this->labelOldTariff->Text = L"labelOldTariff";
			// 
			// labelTariffTableHeader
			// 
			this->labelTariffTableHeader->AutoSize = true;
			this->labelTariffTableHeader->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelTariffTableHeader->Location = System::Drawing::Point(8, 39);
			this->labelTariffTableHeader->Name = L"labelTariffTableHeader";
			this->labelTariffTableHeader->Size = System::Drawing::Size(257, 11);
			this->labelTariffTableHeader->TabIndex = 6;
			this->labelTariffTableHeader->Text = L"Номер.  Заголовок  Описание  Активен";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(480, 110);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(146, 49);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Выбрать новый тариф";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &UserForm::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(78, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = L"tarifNow";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Ваш тариф:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(480, 53);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(146, 51);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Обновить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &UserForm::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 11;
			this->listBox1->Location = System::Drawing::Point(10, 53);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(464, 257);
			this->listBox1->TabIndex = 1;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->checkBox1);
			this->tabPage2->Controls->Add(this->textBoxSafeCode);
			this->tabPage2->Controls->Add(this->textBoxCardNumber);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(632, 329);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Баланс";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(153, 69);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(139, 13);
			this->label10->TabIndex = 39;
			this->label10->Text = L"Выберете способ оплаты:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"VISA", L"MasterCard" });
			this->comboBox1->Location = System::Drawing::Point(307, 61);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(102, 21);
			this->comboBox1->TabIndex = 38;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(362, 150);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(150, 17);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"скрывать данные карты";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &UserForm::checkBox1_CheckedChanged);
			// 
			// textBoxSafeCode
			// 
			this->textBoxSafeCode->Location = System::Drawing::Point(307, 138);
			this->textBoxSafeCode->MaxLength = 4;
			this->textBoxSafeCode->Name = L"textBoxSafeCode";
			this->textBoxSafeCode->PasswordChar = '*';
			this->textBoxSafeCode->Size = System::Drawing::Size(33, 20);
			this->textBoxSafeCode->TabIndex = 8;
			this->textBoxSafeCode->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UserForm::textBoxSafeCode_KeyPress);
			// 
			// textBoxCardNumber
			// 
			this->textBoxCardNumber->Location = System::Drawing::Point(307, 99);
			this->textBoxCardNumber->MaxLength = 18;
			this->textBoxCardNumber->Name = L"textBoxCardNumber";
			this->textBoxCardNumber->PasswordChar = '*';
			this->textBoxCardNumber->Size = System::Drawing::Size(117, 20);
			this->textBoxCardNumber->TabIndex = 7;
			this->textBoxCardNumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UserForm::textBoxCardNumber_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(153, 138);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(84, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Защитный код:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(153, 107);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 13);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Номер карты:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(551, 6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Обновить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &UserForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(255, 250);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 35);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Пополнить баланс";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UserForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(306, 193);
			this->textBox1->MaxLength = 4;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UserForm::textBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(153, 196);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Сумма для пополнения:";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->labelPurchases);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->listBoxPurchases);
			this->tabPage3->Controls->Add(this->button30);
			this->tabPage3->Controls->Add(this->button24);
			this->tabPage3->Controls->Add(this->labelAdditionalServices);
			this->tabPage3->Controls->Add(this->listBoxAdditionalServices);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(632, 329);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"Дополнительные услуги";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// labelPurchases
			// 
			this->labelPurchases->AutoSize = true;
			this->labelPurchases->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPurchases->Location = System::Drawing::Point(434, 40);
			this->labelPurchases->Name = L"labelPurchases";
			this->labelPurchases->Size = System::Drawing::Size(103, 11);
			this->labelPurchases->TabIndex = 29;
			this->labelPurchases->Text = L"labelPurchases";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(13, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 13);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Услуги:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(433, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(161, 13);
			this->label11->TabIndex = 27;
			this->label11->Text = L"Ваши дополнительные услуги:";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(255, 212);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(107, 55);
			this->button8->TabIndex = 26;
			this->button8->Text = L"Купить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &UserForm::button8_Click);
			// 
			// listBoxPurchases
			// 
			this->listBoxPurchases->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBoxPurchases->FormattingEnabled = true;
			this->listBoxPurchases->ItemHeight = 11;
			this->listBoxPurchases->Location = System::Drawing::Point(434, 54);
			this->listBoxPurchases->Name = L"listBoxPurchases";
			this->listBoxPurchases->Size = System::Drawing::Size(184, 246);
			this->listBoxPurchases->TabIndex = 25;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(255, 54);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(107, 58);
			this->button30->TabIndex = 24;
			this->button30->Text = L"Показать описание услуги";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &UserForm::button30_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(255, 129);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(107, 63);
			this->button24->TabIndex = 21;
			this->button24->Text = L"Обновить";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &UserForm::button24_Click);
			// 
			// labelAdditionalServices
			// 
			this->labelAdditionalServices->AutoSize = true;
			this->labelAdditionalServices->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelAdditionalServices->Location = System::Drawing::Point(14, 40);
			this->labelAdditionalServices->Name = L"labelAdditionalServices";
			this->labelAdditionalServices->Size = System::Drawing::Size(166, 11);
			this->labelAdditionalServices->TabIndex = 20;
			this->labelAdditionalServices->Text = L"labelAdditionalServices";
			// 
			// listBoxAdditionalServices
			// 
			this->listBoxAdditionalServices->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->listBoxAdditionalServices->FormattingEnabled = true;
			this->listBoxAdditionalServices->ItemHeight = 11;
			this->listBoxAdditionalServices->Location = System::Drawing::Point(16, 54);
			this->listBoxAdditionalServices->Name = L"listBoxAdditionalServices";
			this->listBoxAdditionalServices->Size = System::Drawing::Size(226, 257);
			this->listBoxAdditionalServices->TabIndex = 19;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button7);
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(632, 329);
			this->tabPage4->TabIndex = 2;
			this->tabPage4->Text = L"Дополнительно";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(168, 87);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(293, 55);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Обратная связь";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &UserForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(216, 272);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(214, 23);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Удалить акаунт";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &UserForm::button6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(66, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"label5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Баланс:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(268, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"MegaEsimCompany";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Имя Фамилия";
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(662, 421);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"UserForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &UserForm::UserForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Void Update_Balance()
	{
		System::String^ query = L"SELECT balance FROM Clients WHERE client_id = " + myClientId;
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		OleDbDataReader^ reader = command->ExecuteReader();

		if (!reader->Read())
		{
			reader->Close();
			return;
		}
		
		label5->Text = reader[0]->ToString() + L"  рублей";
		reader->Close();
	}

	public: Void Update_UserSelectedTariffInformation()
	{
		bool old = false;
		label7->Text = SQL_helper::ClientTariffTitle(myClientId, old);
		if (old)
		{
			labelOldTariff->Text = "Ваш тариф устарел\nВближайщее вемя его стоймость может быть увеличена\nПожалуйста выберете новый тариф из списка предложенных тарифов";
		}
		else
		{
			labelOldTariff->Text = String::Empty;
		}
	}


	public: Void Update_TariffSelection()
	{
		System::String^ query = L"SELECT tariff_id,title,description FROM Tariffs WHERE old = FALSE ORDER BY tariff_id";
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		OleDbDataReader^ reader = command->ExecuteReader();

		listBox1->Items->Clear();
		while (reader->Read())
		{
			listBox1->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::tariffIdLen) + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::tariffTitleLen) + "  " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::tariffDescriptionLen));
		}
		reader->Close();

		Update_UserSelectedTariffInformation();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Hide();
		Form^ authorization = parentForm;
		authorization->Show();
		return;
	}
	private: System::Void UserForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		String^ result = SQL_helper::role_name(1);
		if (result == String::Empty)
		{
			MessageBox::Show(L"Возможно база данных повреждена", L"Ошибка");
			return;
		}
		this->Text = result;
		label1->Text = myNameAndSurname;
		Update_Balance();
		Update_TariffSelection();
	}
	private: System::Void UserForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
	{
		GlobalSettings::FormClose();
	}
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
		{
			e->Handled = true;
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (String::IsNullOrWhiteSpace(textBox1->Text) || String::IsNullOrWhiteSpace(textBoxCardNumber->Text) || String::IsNullOrWhiteSpace(textBoxSafeCode->Text))
	{
		MessageBox::Show(L"Вы не заполнили все поля", L"Ошибка");
		return;
	}

	if (textBoxCardNumber->Text->Length != GlobalSettings::CardNumberLen || textBoxSafeCode->Text->Length != GlobalSettings::SafeCodeLen)
	{
		MessageBox::Show(L"Данные карты не верны", L"Ошибка");
		return;
	}

	System::Int32 amountToReplenish;
	if(System::Int32::TryParse(textBox1->Text,amountToReplenish))
	{
		System::String^ query = L"UPDATE Clients SET balance = balance +" + amountToReplenish + " WHERE client_id = " + myClientId;
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		command->ExecuteNonQuery();
		MessageBox::Show(L"Ваш счёт пополнен");
		Update_Balance();
	}
	else
	{
		MessageBox::Show(L"Введённое число некорректно", L"Ошибка");
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	Update_Balance();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
{
	Update_TariffSelection();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (listBox1->SelectedItem == nullptr)
	{
		MessageBox::Show(L"Ничего не выделено", L"Ошибка");
		return;
	}

	auto selected_text = listBox1->SelectedItem->ToString()->Split('.');
	if (selected_text->Length == 0)
	{
		MessageBox::Show(L"Данные отсутствуют", L"Ошибка");
		return;
	}

	System::String^ query = L"UPDATE Clients SET tariff_id = " + selected_text[0] + " WHERE client_id = " + myClientId;
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
	command->ExecuteNonQuery();
	Update_UserSelectedTariffInformation();
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if (checkBox1->Checked)
	{
		textBoxCardNumber->PasswordChar = '*';
		textBoxSafeCode->PasswordChar = '*';
	}
	else
	{
		textBoxCardNumber->PasswordChar = '\0';
		textBoxSafeCode->PasswordChar = '\0';
	}
}
private: System::Void textBoxCardNumber_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBoxSafeCode_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
{
	Hide();
	DeleteMyAccountForm^ deleteMyAccount = gcnew DeleteMyAccountForm(this, myClientId);
	deleteMyAccount->Show();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
{
	Hide();
	FeedbackForm^ Feedback = gcnew FeedbackForm(this, myClientId,myNameAndSurname);
	Feedback->Show();
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e)
{
	additionalServicesForUser->Update();
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e)
{
	additionalServicesForUser->SelectedServiceDescription();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e)
{
	additionalServicesForUser->BuyService();
}
};
}
