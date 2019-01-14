#pragma once
#include "AddAndChangeTariffForm.h"
#include "CreateЕmployeeForm.h"
#include "AddAndChangeServiceForm.h"

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
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(Form^ parent)
		{
			InitializeComponent();
			parentForm = parent;
			this->updateAfterTariffsChanges += gcnew GlobalSettings::VoidDelegateWithoutArguments(this, &AdminForm::Update_Tariff);
			this->updateAfterAkkauntsChanges += gcnew GlobalSettings::VoidDelegateWithoutArguments(this, &AdminForm::Update_Akkaunts);
			
			labelTariffTableHeader->Text = GlobalSettings::StringWithCertainSize(L"Номер. ", GlobalSettings::tariffIdLen) + GlobalSettings::StringWithCertainSize(L"Заголовок", GlobalSettings::tariffTitleLen) + L"  " + GlobalSettings::StringWithCertainSize(L"Описание", GlobalSettings::tariffDescriptionLen) + L"  Активен";
			labelAkkauntTableHeader->Text = GlobalSettings::StringWithCertainSize(L"Номер.", GlobalSettings::MAXNumberLen + 1)+" " + GlobalSettings::StringWithCertainSize(L"Логин", GlobalSettings::MAXLoginLen) +" "+ GlobalSettings::StringWithCertainSize(L"Имя", GlobalSettings::MAXNameLen)+" "+ GlobalSettings::StringWithCertainSize(L"Фамилия", GlobalSettings::MAXSurnameLen) +" "+ GlobalSettings::StringWithCertainSize(L"Тариф",GlobalSettings::tariffTitleLen) +" "+GlobalSettings::StringWithCertainSize(L"Роль",GlobalSettings::RoleInformationLen) + " Статус";
			comboBox1->SelectedIndex = 0;
			//additionalServices = gcnew AdditionalServices(labelAdditionalServices, listBoxAdditionalServices);
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
			additionalServices = gcnew AdditionalServices(labelAdditionalServices, listBoxAdditionalServices);
			additionalServices->Print();
			adminMail = gcnew EMailBox(labelMail, listBoxMail);
			adminMail->Print();
		}
	public: AdditionalServices^ additionalServices;
	public: EMailBox^ adminMail;
	private: System::Windows::Forms::Button^  button10;
	public:
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;




	public: Form^ parentForm;
	private: System::Windows::Forms::TabPage^  tabPage1;
	public:
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Label^  labelTariffTableHeader;



	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button22;
	public: GlobalSettings::VoidDelegateWithoutArguments^ updateAfterTariffsChanges;
	private: System::Windows::Forms::TabPage^  tabPage3;
	public: System::Windows::Forms::ListBox^  listBoxAdditionalServices;
	public: System::Windows::Forms::Label^  labelAdditionalServices;
	private: System::Windows::Forms::Button^  button26;
	public:
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  labelMail;

	private: System::Windows::Forms::ListBox^  listBoxMail;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button34;

	public:
	public: GlobalSettings::VoidDelegateWithoutArguments^ updateAfterAkkauntsChanges;

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::TabControl^  tabControl1;

	private: System::Windows::Forms::TabPage^  tabPage2;

	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  labelAkkauntTableHeader;

	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Button^  button9;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->labelTariffTableHeader = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->labelAkkauntTableHeader = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->labelAdditionalServices = (gcnew System::Windows::Forms::Label());
			this->listBoxAdditionalServices = (gcnew System::Windows::Forms::ListBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->labelMail = (gcnew System::Windows::Forms::Label());
			this->listBoxMail = (gcnew System::Windows::Forms::ListBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(354, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"MegaEsimCompany";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(5, 25);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(841, 441);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button16);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button15);
			this->tabPage1->Controls->Add(this->button14);
			this->tabPage1->Controls->Add(this->button13);
			this->tabPage1->Controls->Add(this->labelTariffTableHeader);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(833, 415);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тарифы";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &AdminForm::tabPage1_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(576, 256);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(241, 47);
			this->button16->TabIndex = 26;
			this->button16->Text = L"Показать подробное описание тарифа";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &AdminForm::button16_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(576, 129);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(241, 42);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Только архивные";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AdminForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(576, 79);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(241, 44);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Только актуальные";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminForm::button3_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(576, 362);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(241, 45);
			this->button15->TabIndex = 23;
			this->button15->Text = L"Создать/Изменить тариф";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &AdminForm::button15_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(576, 309);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(110, 47);
			this->button14->TabIndex = 22;
			this->button14->Text = L"Достать тариф из архива";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &AdminForm::button14_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(706, 309);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(111, 47);
			this->button13->TabIndex = 21;
			this->button13->Text = L"Отправить тариф в архив";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &AdminForm::button13_Click);
			// 
			// labelTariffTableHeader
			// 
			this->labelTariffTableHeader->AutoSize = true;
			this->labelTariffTableHeader->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelTariffTableHeader->Location = System::Drawing::Point(6, 15);
			this->labelTariffTableHeader->Name = L"labelTariffTableHeader";
			this->labelTariffTableHeader->Size = System::Drawing::Size(257, 11);
			this->labelTariffTableHeader->TabIndex = 4;
			this->labelTariffTableHeader->Text = L"Номер.  Заголовок  Описание  Активен";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(576, 203);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(241, 47);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Удалить выделенный тариф";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(576, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Обновить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 11;
			this->listBox1->Location = System::Drawing::Point(6, 29);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(555, 378);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button23);
			this->tabPage2->Controls->Add(this->button22);
			this->tabPage2->Controls->Add(this->button21);
			this->tabPage2->Controls->Add(this->button20);
			this->tabPage2->Controls->Add(this->button19);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->button18);
			this->tabPage2->Controls->Add(this->button17);
			this->tabPage2->Controls->Add(this->button12);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->labelAkkauntTableHeader);
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(833, 415);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Аккаунты";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(509, 389);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(139, 23);
			this->button23->TabIndex = 42;
			this->button23->Text = L"Только не забанненные";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &AdminForm::button23_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(372, 389);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(131, 23);
			this->button22->TabIndex = 41;
			this->button22->Text = L"Только забанненные";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &AdminForm::button22_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(735, 23);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(95, 23);
			this->button21->TabIndex = 40;
			this->button21->Text = L"Удалить акаунт";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &AdminForm::button21_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(509, 363);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(139, 23);
			this->button20->TabIndex = 39;
			this->button20->Text = L"Только пользователи";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &AdminForm::button20_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(372, 362);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(131, 23);
			this->button19->TabIndex = 38;
			this->button19->Text = L"Только сотрудники";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &AdminForm::button19_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Телефону:", L"Логину:", L"Имени:", L"Фамилии:",
					L"Тарифу:"
			});
			this->comboBox1->Location = System::Drawing::Point(114, 364);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(102, 21);
			this->comboBox1->TabIndex = 37;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(732, 332);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(98, 54);
			this->button18->TabIndex = 36;
			this->button18->Text = L"Полная информация о аккаунте";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &AdminForm::button18_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(735, 269);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(95, 57);
			this->button17->TabIndex = 35;
			this->button17->Text = L"Создать аккаунт сотрудника";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &AdminForm::button17_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(735, 212);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(95, 51);
			this->button12->TabIndex = 34;
			this->button12->Text = L"Сбросить пароль на Qwerty123";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &AdminForm::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(735, 81);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(95, 23);
			this->button11->TabIndex = 33;
			this->button11->Text = L"Разбанить";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &AdminForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(8, 363);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 22);
			this->button10->TabIndex = 32;
			this->button10->Text = L"Найти по номеру телефона";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &AdminForm::button10_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(222, 365);
			this->textBox2->MaxLength = 17;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(136, 20);
			this->textBox2->TabIndex = 31;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(735, 110);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(95, 56);
			this->button8->TabIndex = 29;
			this->button8->Text = L"Сделать обычным пользователем";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &AdminForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(735, 172);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(95, 34);
			this->button7->TabIndex = 28;
			this->button7->Text = L"Отметить как сотрудника";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &AdminForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(735, 52);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(95, 23);
			this->button6->TabIndex = 27;
			this->button6->Text = L"Забанить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &AdminForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(654, 362);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Обновить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AdminForm::button5_Click);
			// 
			// labelAkkauntTableHeader
			// 
			this->labelAkkauntTableHeader->AutoSize = true;
			this->labelAkkauntTableHeader->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelAkkauntTableHeader->Location = System::Drawing::Point(6, 9);
			this->labelAkkauntTableHeader->Name = L"labelAkkauntTableHeader";
			this->labelAkkauntTableHeader->Size = System::Drawing::Size(299, 11);
			this->labelAkkauntTableHeader->TabIndex = 25;
			this->labelAkkauntTableHeader->Text = L"Номер. Логин Имя Фамилия Тариф Роль Статус";
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 11;
			this->listBox2->Location = System::Drawing::Point(6, 23);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(723, 334);
			this->listBox2->TabIndex = 20;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button31);
			this->tabPage3->Controls->Add(this->button30);
			this->tabPage3->Controls->Add(this->button29);
			this->tabPage3->Controls->Add(this->button28);
			this->tabPage3->Controls->Add(this->button27);
			this->tabPage3->Controls->Add(this->button26);
			this->tabPage3->Controls->Add(this->button25);
			this->tabPage3->Controls->Add(this->button24);
			this->tabPage3->Controls->Add(this->labelAdditionalServices);
			this->tabPage3->Controls->Add(this->listBoxAdditionalServices);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(833, 415);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Дополнительные услуги";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(469, 304);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(208, 52);
			this->button31->TabIndex = 9;
			this->button31->Text = L"Создать/Изменить услугу";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &AdminForm::button31_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(469, 157);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(208, 56);
			this->button30->TabIndex = 8;
			this->button30->Text = L"Показать описание услуги";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &AdminForm::button30_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(469, 219);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(208, 55);
			this->button29->TabIndex = 7;
			this->button29->Text = L"Удалить услугу";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &AdminForm::button29_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(469, 90);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(208, 61);
			this->button28->TabIndex = 6;
			this->button28->Text = L"Достать услугу из архива";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &AdminForm::button28_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(469, 33);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(208, 51);
			this->button27->TabIndex = 5;
			this->button27->Text = L"Отправить услугу в архив";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &AdminForm::button27_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(357, 362);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 40);
			this->button26->TabIndex = 4;
			this->button26->Text = L"Только архивные";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &AdminForm::button26_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(244, 362);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(93, 40);
			this->button25->TabIndex = 3;
			this->button25->Text = L"Только активные";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &AdminForm::button25_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(143, 362);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(86, 40);
			this->button24->TabIndex = 2;
			this->button24->Text = L"Обновить";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &AdminForm::button24_Click);
			// 
			// labelAdditionalServices
			// 
			this->labelAdditionalServices->AutoSize = true;
			this->labelAdditionalServices->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelAdditionalServices->Location = System::Drawing::Point(141, 19);
			this->labelAdditionalServices->Name = L"labelAdditionalServices";
			this->labelAdditionalServices->Size = System::Drawing::Size(166, 11);
			this->labelAdditionalServices->TabIndex = 1;
			this->labelAdditionalServices->Text = L"labelAdditionalServices";
			// 
			// listBoxAdditionalServices
			// 
			this->listBoxAdditionalServices->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->listBoxAdditionalServices->FormattingEnabled = true;
			this->listBoxAdditionalServices->ItemHeight = 11;
			this->listBoxAdditionalServices->Location = System::Drawing::Point(143, 33);
			this->listBoxAdditionalServices->Name = L"listBoxAdditionalServices";
			this->listBoxAdditionalServices->Size = System::Drawing::Size(289, 323);
			this->listBoxAdditionalServices->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button37);
			this->tabPage4->Controls->Add(this->button36);
			this->tabPage4->Controls->Add(this->button35);
			this->tabPage4->Controls->Add(this->button34);
			this->tabPage4->Controls->Add(this->button33);
			this->tabPage4->Controls->Add(this->button32);
			this->tabPage4->Controls->Add(this->labelMail);
			this->tabPage4->Controls->Add(this->listBoxMail);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(833, 415);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Почта";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(699, 71);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(94, 55);
			this->button37->TabIndex = 7;
			this->button37->Text = L"Прочитать";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &AdminForm::button37_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(34, 360);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(218, 40);
			this->button36->TabIndex = 6;
			this->button36->Text = L"Только прочитанные";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &AdminForm::button36_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(281, 360);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(198, 40);
			this->button35->TabIndex = 5;
			this->button35->Text = L"Только непрочитанные";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &AdminForm::button35_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(505, 360);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(188, 40);
			this->button34->TabIndex = 4;
			this->button34->Text = L"Обновить";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &AdminForm::button34_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(699, 228);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(94, 51);
			this->button33->TabIndex = 3;
			this->button33->Text = L"Удалить";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &AdminForm::button33_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(699, 160);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(94, 49);
			this->button32->TabIndex = 2;
			this->button32->Text = L"Отметить как прочитанное";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &AdminForm::button32_Click);
			// 
			// labelMail
			// 
			this->labelMail->AutoSize = true;
			this->labelMail->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelMail->Location = System::Drawing::Point(34, 52);
			this->labelMail->Name = L"labelMail";
			this->labelMail->Size = System::Drawing::Size(68, 11);
			this->labelMail->TabIndex = 1;
			this->labelMail->Text = L"labelMail";
			// 
			// listBoxMail
			// 
			this->listBoxMail->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBoxMail->FormattingEnabled = true;
			this->listBoxMail->ItemHeight = 11;
			this->listBoxMail->Location = System::Drawing::Point(34, 71);
			this->listBoxMail->Name = L"listBoxMail";
			this->listBoxMail->Size = System::Drawing::Size(659, 279);
			this->listBoxMail->TabIndex = 0;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(780, 12);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(62, 23);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Выйти";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &AdminForm::button9_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(850, 474);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"AdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AdminForm::AdminForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AdminForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		String^ result = SQL_helper::role_name(3);
		if (result == String::Empty)
		{
			MessageBox::Show(L"Возможно база данных повреждена", L"Ошибка");
			return;
		}
		this->Text = result;
		Update_Tariff();
		Update_Akkaunts();
	}
	private: System::Void AdminForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
	{
		GlobalSettings::FormClose();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
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

		if (Convert::ToInt32(selected_text[0]) == 1)
		{
			MessageBox::Show(L"Нельзя изменять первый элемент", L"Ошибка");
			return;
		}
	
		System::Windows::Forms::DialogResult result = MessageBox::Show(L"Это действие невозможно будет отменить\nВы действительно хотите удалить данный тариф?", L"Удаление тарифа", MessageBoxButtons::YesNo);

		if (result == System::Windows::Forms::DialogResult::No)
		{
			return;
		}

		System::String^ query = L"UPDATE Clients SET tariff_id = 1 WHERE tariff_id = " + selected_text[0] + "";
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		command->ExecuteNonQuery();
		
		System::String^ query2 = L"DELETE FROM Tariffs WHERE tariff_id = " + selected_text[0];
		OleDbCommand^ command2 = gcnew OleDbCommand(query2,Connection::myConnect);
		command2->ExecuteNonQuery();

		MessageBox::Show(L"Выбранный тариф удалён", L"");
		Update_Tariff();
		Update_Akkaunts();
	}

private: Void Update_Tariff()
{
	System::String^ query = L"SELECT tariff_id,title,description,old FROM Tariffs ORDER BY tariff_id";
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
	OleDbDataReader^ reader = command->ExecuteReader();

	listBox1->Items->Clear();
	while (reader->Read())
	{
		String^ old = L"-";
		if (reader[3]->ToString() == L"True")
		{
			old = L"В архиве";
		}
		if (reader[3]->ToString() == L"False")
		{
			old = String::Empty;
		}		
		listBox1->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::tariffIdLen) + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::tariffTitleLen) + "  " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::tariffDescriptionLen) + "  " + old);
	}
	reader->Close();
}

private: Void Update_Akkaunts()
{
	String^ query = L"SELECT Users.phone_number, Users.user_login, Clients.client_name, Clients.client_surname, Tariffs.title, Roles.role_name, Users.banned FROM (((Users INNER JOIN Clients ON Users.client_id = Clients.client_id) INNER JOIN Tariffs ON Clients.tariff_id = Tariffs.tariff_id) INNER JOIN Roles ON Users.role_id = Roles.role_id) WHERE Users.role_id <> 3";
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
	OleDbDataReader^ reader = command->ExecuteReader();
	listBox2->Items->Clear();
	while (reader->Read())
	{
		String^ banned = L"-";
		if (reader[6]->ToString() == L"True")
		{
			banned = L"Забанен";
		}
		if (reader[6]->ToString() == L"False")
		{
			banned = String::Empty;
		}
		
		listBox2->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::MAXNumberLen + 1) + " " + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::MAXLoginLen) + " " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::MAXNameLen) + " " + GlobalSettings::StringWithCertainSize(reader[3]->ToString(), GlobalSettings::MAXSurnameLen) + " " + GlobalSettings::StringWithCertainSize(reader[4]->ToString(), GlobalSettings::tariffTitleLen) + " " + GlobalSettings::StringWithCertainSize(reader[5]->ToString(), GlobalSettings::RoleInformationLen) + " " + banned);
	}
	reader->Close();
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{	
	Update_Tariff();
}

public: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e)
{
	Hide();
	Form^ authorization = parentForm;
	authorization->Show();
	return;
}

public: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
{
	Update_Akkaunts();
}

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (String::IsNullOrWhiteSpace(textBox2->Text))
	{
		MessageBox::Show(L"Вы не заполнили поле для поиска", L"Ошибка");
		return;
	}
	String^ find;
	switch (comboBox1->SelectedIndex)
	{
	case 0:
		find = L"Users.phone_number";
		break;
	case 1:
		find = L"Users.user_login";
		break;
	case 2:
		find = L"Clients.client_name";
		break;
	case 3:
		find = L"Clients.client_surname";
		break;
	case 4:
		find = L"Tariffs.title";
		break;
	default:	
		break;
	}

	String^ query = L"SELECT Users.phone_number, Users.user_login, Clients.client_name, Clients.client_surname, Tariffs.title, Roles.role_name, Users.banned FROM (((Users INNER JOIN Clients ON Users.client_id = Clients.client_id) INNER JOIN Tariffs ON Clients.tariff_id = Tariffs.tariff_id) INNER JOIN Roles ON Users.role_id = Roles.role_id) WHERE Users.role_id <> 3 AND " + find + " LIKE  '%" + textBox2->Text + "%'";
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
	OleDbDataReader^ reader = command->ExecuteReader();
	listBox2->Items->Clear();
	while (reader->Read())
	{
		String^ banned = L"-";
		if (reader[6]->ToString() == L"True")
		{
			banned = L"Забанен";
		}
		if (reader[6]->ToString() == L"False")
		{
			banned = String::Empty;
		}

		listBox2->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::MAXNumberLen + 1) + " " + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::MAXLoginLen) + " " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::MAXNameLen) + " " + GlobalSettings::StringWithCertainSize(reader[3]->ToString(), GlobalSettings::MAXSurnameLen) + " " + GlobalSettings::StringWithCertainSize(reader[4]->ToString(), GlobalSettings::tariffTitleLen) + " " + GlobalSettings::StringWithCertainSize(reader[5]->ToString(), GlobalSettings::RoleInformationLen) + " " + banned);
	}
	reader->Close();
}

private: System::Void textBox8_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (listBox2->SelectedItem == nullptr)
	{
		MessageBox::Show(L"Ничего не выделено", L"Ошибка");
		return;
	}

	auto selected_text = listBox2->SelectedItem->ToString()->Split('.');
	if (selected_text->Length == 0)
	{
		MessageBox::Show(L"Данные отсутствуют", L"Ошибка");
		return;
	}

	SQL_helper::Ban(selected_text[0]);
	MessageBox::Show(L"Пользователь забанен");
	Update_Akkaunts();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (listBox2->SelectedItem == nullptr)
	{
		MessageBox::Show(L"Ничего не выделено", L"Ошибка");
		return;
	}

	auto selected_text = listBox2->SelectedItem->ToString()->Split('.');
	if (selected_text->Length == 0)
	{
		MessageBox::Show(L"Данные отсутствуют", L"Ошибка");
		return;
	}

	SQL_helper::UnBan(selected_text[0]);
	MessageBox::Show(L"Пользователь разбанен");
	Update_Akkaunts();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (listBox2->SelectedItem == nullptr)
	{
		MessageBox::Show(L"Ничего не выделено", L"Ошибка");
		return;
	}

	auto selected_text = listBox2->SelectedItem->ToString()->Split('.');
	if (selected_text->Length == 0)
	{
		MessageBox::Show(L"Данные отсутствуют", L"Ошибка");
		return;
	}

	SQL_helper::ResetPassword(selected_text[0]);
	MessageBox::Show(L"Пароль пользователя сброшен");
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (listBox2->SelectedItem == nullptr)
	{
		MessageBox::Show(L"Ничего не выделено", L"Ошибка");
		return;
	}

	auto selected_text = listBox2->SelectedItem->ToString()->Split('.');
	if (selected_text->Length == 0)
	{
		MessageBox::Show(L"Данные отсутствуют", L"Ошибка");
		return;
	}

	SQL_helper::MakeЕmployee(selected_text[0]);
	MessageBox::Show(L"Пользователь отмечен как сотрудник компании. Его права доступа изменились");
	Update_Akkaunts();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (listBox2->SelectedItem == nullptr)
	{
		MessageBox::Show(L"Ничего не выделено", L"Ошибка");
		return;
	}

	auto selected_text = listBox2->SelectedItem->ToString()->Split('.');
	if (selected_text->Length == 0)
	{
		MessageBox::Show(L"Данные отсутствуют", L"Ошибка");
		return;
	}

	SQL_helper::MakeUser(selected_text[0]);
	MessageBox::Show(L"Теперь это обычный пользователь без особых прав доступа");
	Update_Akkaunts();
}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e)
{

}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e)
{
	Hide();
	AddAndChangeTariffForm^ addAndChangeTariff = gcnew AddAndChangeTariffForm(this, updateAfterTariffsChanges);
	addAndChangeTariff->Show();
	return;
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e)
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

	Int32 tariff_id = Convert::ToInt32(selected_text[0]);

	if (tariff_id == 1)
	{
		MessageBox::Show(L"Нельзя изменять первый элемент", L"Ошибка");
		return;
	}

	SQL_helper::TarrifCurrent(tariff_id);

	MessageBox::Show(L"Выбранный тариф теперь актуален");
	Update_Tariff();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e)
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

	Int32 tariff_id = Convert::ToInt32(selected_text[0]);

	if (tariff_id == 1)
	{
		MessageBox::Show(L"Нельзя изменять первый элемент", L"Ошибка");
		return;
	}

	SQL_helper::TarrifOld(tariff_id);

	MessageBox::Show(L"Выбранный тариф отправлен в архив");
	Update_Tariff();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	System::String^ query = L"SELECT tariff_id,title,description,old FROM Tariffs WHERE old = False ORDER BY tariff_id";
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
	OleDbDataReader^ reader = command->ExecuteReader();

	listBox1->Items->Clear();
	while (reader->Read())
	{
		String^ old = L"-";
		if (reader[3]->ToString() == L"True")
		{
			old = L"В архиве";
		}
		if (reader[3]->ToString() == L"False")
		{
			old = String::Empty;
		}
		listBox1->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::tariffIdLen) + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::tariffTitleLen) + "  " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::tariffDescriptionLen) + "  " + old);

	}
	reader->Close();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
{
	System::String^ query = L"SELECT tariff_id,title,description,old FROM Tariffs WHERE old = True ORDER BY tariff_id";
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
	OleDbDataReader^ reader = command->ExecuteReader();

	listBox1->Items->Clear();
	while (reader->Read())
	{
		String^ old = L"-";
		if (reader[3]->ToString() == L"True")
		{
			old = L"В архиве";
		}
		if (reader[3]->ToString() == L"False")
		{
			old = String::Empty;
		}
		listBox1->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::tariffIdLen) + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::tariffTitleLen) + "  " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::tariffDescriptionLen) + "  " + old);
	}
	reader->Close();
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e)
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

	MessageBox::Show(SQL_helper::TarrifDetailedInformation(Convert::ToInt32(selected_text[0])));
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e)
{
	String^ query = L"SELECT Users.phone_number, Users.user_login, Clients.client_name, Clients.client_surname, Tariffs.title, Users.banned FROM (((Users INNER JOIN Clients ON Users.client_id = Clients.client_id) INNER JOIN Tariffs ON Clients.tariff_id = Tariffs.tariff_id) INNER JOIN Roles ON Users.role_id = Roles.role_id) WHERE Users.role_id = 2";
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
	OleDbDataReader^ reader = command->ExecuteReader();
	listBox2->Items->Clear();
	while (reader->Read())
	{
		String^ banned = L"-";
		if (reader[5]->ToString() == L"True")
		{
			banned = L"Забанен";
		}
		if (reader[5]->ToString() == L"False")
		{
			banned = String::Empty;
		}

		listBox2->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::MAXNumberLen + 1) + " " + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::MAXLoginLen) + " " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::MAXNameLen) + " " + GlobalSettings::StringWithCertainSize(reader[3]->ToString(), GlobalSettings::MAXSurnameLen) + " " + GlobalSettings::StringWithCertainSize(reader[4]->ToString(), GlobalSettings::tariffTitleLen) +" "+ GlobalSettings::StringWithCertainSize(GlobalSettings::RoleInformationLen) + " " + banned);
	}
	reader->Close();
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e)
{
	String^ query = L"SELECT Users.phone_number, Users.user_login, Clients.client_name, Clients.client_surname, Tariffs.title, Users.banned FROM (((Users INNER JOIN Clients ON Users.client_id = Clients.client_id) INNER JOIN Tariffs ON Clients.tariff_id = Tariffs.tariff_id) INNER JOIN Roles ON Users.role_id = Roles.role_id) WHERE Users.role_id = 1";
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
	OleDbDataReader^ reader = command->ExecuteReader();
	listBox2->Items->Clear();
	while (reader->Read())
	{
		String^ banned = L"-";
		if (reader[5]->ToString() == L"True")
		{
			banned = L"Забанен";
		}
		if (reader[5]->ToString() == L"False")
		{
			banned = String::Empty;
		}

		listBox2->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::MAXNumberLen + 1) + " " + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::MAXLoginLen) + " " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::MAXNameLen) + " " + GlobalSettings::StringWithCertainSize(reader[3]->ToString(), GlobalSettings::MAXSurnameLen) + " " + GlobalSettings::StringWithCertainSize(reader[4]->ToString(), GlobalSettings::tariffTitleLen) +" "+ GlobalSettings::StringWithCertainSize(GlobalSettings::RoleInformationLen) + " " + banned);
	}
	reader->Close();
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e)
{
	String^ query = L"SELECT Users.phone_number, Users.user_login, Clients.client_name, Clients.client_surname, Tariffs.title, Roles.role_name FROM (((Users INNER JOIN Clients ON Users.client_id = Clients.client_id) INNER JOIN Tariffs ON Clients.tariff_id = Tariffs.tariff_id) INNER JOIN Roles ON Users.role_id = Roles.role_id) WHERE Users.role_id <> 3 AND Users.banned = TRUE";
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
	OleDbDataReader^ reader = command->ExecuteReader();
	listBox2->Items->Clear();
	while (reader->Read())
	{
		listBox2->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::MAXNumberLen + 1) + " " + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::MAXLoginLen) + " " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::MAXNameLen) + " " + GlobalSettings::StringWithCertainSize(reader[3]->ToString(), GlobalSettings::MAXSurnameLen) + " " + GlobalSettings::StringWithCertainSize(reader[4]->ToString(), GlobalSettings::tariffTitleLen) + " " + GlobalSettings::StringWithCertainSize(reader[5]->ToString(), GlobalSettings::RoleInformationLen));
	}
	reader->Close();
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e)
{
	String^ query = L"SELECT Users.phone_number, Users.user_login, Clients.client_name, Clients.client_surname, Tariffs.title, Roles.role_name FROM (((Users INNER JOIN Clients ON Users.client_id = Clients.client_id) INNER JOIN Tariffs ON Clients.tariff_id = Tariffs.tariff_id) INNER JOIN Roles ON Users.role_id = Roles.role_id) WHERE Users.role_id <> 3 AND Users.banned = FALSE";
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
	OleDbDataReader^ reader = command->ExecuteReader();
	listBox2->Items->Clear();
	while (reader->Read())
	{
		listBox2->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::MAXNumberLen + 1) + " " + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::MAXLoginLen) + " " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::MAXNameLen) + " " + GlobalSettings::StringWithCertainSize(reader[3]->ToString(), GlobalSettings::MAXSurnameLen) + " " + GlobalSettings::StringWithCertainSize(reader[4]->ToString(), GlobalSettings::tariffTitleLen) + " " + GlobalSettings::StringWithCertainSize(reader[5]->ToString(), GlobalSettings::RoleInformationLen));
	}
	reader->Close();
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (listBox2->SelectedItem == nullptr)
	{
		MessageBox::Show(L"Ничего не выделено", L"Ошибка");
		return;
	}

	auto selected_text = listBox2->SelectedItem->ToString()->Split('.');
	if (selected_text->Length == 0)
	{
		MessageBox::Show(L"Данные отсутствуют", L"Ошибка");
		return;
	}
	MessageBox::Show(SQL_helper::AkkauntInformationForAdmin(selected_text[0]), selected_text[0]);

}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (listBox2->SelectedItem == nullptr)
	{
		MessageBox::Show(L"Ничего не выделено", L"Ошибка");
		return;
	}

	auto selected_text = listBox2->SelectedItem->ToString()->Split('.');
	if (selected_text->Length == 0)
	{
		MessageBox::Show(L"Данные отсутствуют", L"Ошибка");
		return;
	}

	System::Windows::Forms::DialogResult result = MessageBox::Show(L"Это действие невозможно будет отменить\nВы действительно хотите удалить данный акаунт?", L"Удаление акаунта", MessageBoxButtons::YesNo);

	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		SQL_helper::DeleteUser(selected_text[0]);
		MessageBox::Show(L"Пользователь удалён");
		Update_Akkaunts();
	}
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e)
{
	Hide();
	CreateЕmployeeForm^ addAndChangeTariff = gcnew CreateЕmployeeForm(this, updateAfterAkkauntsChanges);
	addAndChangeTariff->Show();
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e)
{
	additionalServices->PrintWithoutActive(AdditionalServices::ServiceStatus::ative);
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e)
{
	additionalServices->Print();
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e)
{
	additionalServices->PrintWithoutActive(AdditionalServices::ServiceStatus::old);
}

private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e)
{
	additionalServices->СhangeStatusSelectedService(AdditionalServices::ServiceStatus::old);
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e)
{
	additionalServices->СhangeStatusSelectedService(AdditionalServices::ServiceStatus::ative);
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e)
{
	additionalServices->DeleteSelectedService();
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e)
{
	additionalServices->SelectedServiceDescription();
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e)
{
	Hide();
	AddAndChangeServiceForm^ addAndChangeServiceForm = gcnew AddAndChangeServiceForm(this, additionalServices);
	addAndChangeServiceForm->Show();
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e)
{
	adminMail->SelectedLetterMarkAsRead();
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e)
{
	adminMail->SelectedLetterDelete();
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e)
{
	adminMail->SelectedLetterRead();
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e)
{
	adminMail->Print();
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e)
{
	adminMail->PrintOnly(EMailBox::LetterStatus::notRead);
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e)
{
	adminMail->PrintOnly(EMailBox::LetterStatus::read);
}
};
}
