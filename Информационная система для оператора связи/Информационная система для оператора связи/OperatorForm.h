#pragma once

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
	public ref class OperatorForm : public System::Windows::Forms::Form
	{
	public:
		OperatorForm(Form^ parent)
		{
			InitializeComponent();
			parentForm = parent;

			labelTariffTableHeader->Text = GlobalSettings::StringWithCertainSize(L"Номер. ", GlobalSettings::tariffIdLen) + GlobalSettings::StringWithCertainSize(L"Заголовок", GlobalSettings::tariffTitleLen) + L"  " + GlobalSettings::StringWithCertainSize(L"Описание", GlobalSettings::tariffDescriptionLen) + L"  Активен";
			labelAkkauntTableHeader->Text = GlobalSettings::StringWithCertainSize(L"Номер.", GlobalSettings::MAXNumberLen + 1) + " " + GlobalSettings::StringWithCertainSize(L"Логин", GlobalSettings::MAXLoginLen) + " " + GlobalSettings::StringWithCertainSize(L"Имя", GlobalSettings::MAXNameLen) + " " + GlobalSettings::StringWithCertainSize(L"Фамилия", GlobalSettings::MAXSurnameLen) + " " + GlobalSettings::StringWithCertainSize(L"Тариф", GlobalSettings::tariffTitleLen) + " Статус";
			comboBox1->SelectedIndex = 0;
			additionalServicesForЕmployee = gcnew AdditionalServices(labelAdditionalServices, listBoxAdditionalServices);
			additionalServicesForЕmployee->Print();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}
	public: AdditionalServices^ additionalServicesForЕmployee;
	private: System::Windows::Forms::Button^  button9;
	public:
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  labelAkkauntTableHeader;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Label^  labelTariffTableHeader;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button24;
	public: System::Windows::Forms::Label^  labelAdditionalServices;
	private:
	public: System::Windows::Forms::ListBox^  listBoxAdditionalServices;
	private: System::Windows::Forms::Button^  button4;
	public:
	private: System::Windows::Forms::Button^  button3;


	public:

	public: Form^ parentForm;

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~OperatorForm()
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
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->labelAkkauntTableHeader = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->labelTariffTableHeader = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->labelAdditionalServices = (gcnew System::Windows::Forms::Label());
			this->listBoxAdditionalServices = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(730, 9);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(62, 23);
			this->button9->TabIndex = 7;
			this->button9->Text = L"Выйти";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &OperatorForm::button9_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(5, 25);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(791, 419);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button23);
			this->tabPage2->Controls->Add(this->button22);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->button18);
			this->tabPage2->Controls->Add(this->button12);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->labelAkkauntTableHeader);
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(783, 393);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Аккаунты";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(501, 363);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(139, 23);
			this->button23->TabIndex = 42;
			this->button23->Text = L"Только не забанненные";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &OperatorForm::button23_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(364, 363);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(131, 23);
			this->button22->TabIndex = 41;
			this->button22->Text = L"Только забанненные";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &OperatorForm::button22_Click);
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
			this->button18->Location = System::Drawing::Point(646, 229);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(128, 54);
			this->button18->TabIndex = 36;
			this->button18->Text = L"Полная информация о аккаунте";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &OperatorForm::button18_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(646, 172);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(129, 51);
			this->button12->TabIndex = 34;
			this->button12->Text = L"Сбросить пароль на Qwerty123";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &OperatorForm::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(646, 82);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(129, 59);
			this->button11->TabIndex = 33;
			this->button11->Text = L"Разбанить";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &OperatorForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(8, 363);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 22);
			this->button10->TabIndex = 32;
			this->button10->Text = L"Найти по номеру телефона";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &OperatorForm::button10_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(222, 365);
			this->textBox2->MaxLength = 17;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(136, 20);
			this->textBox2->TabIndex = 31;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(646, 23);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(129, 53);
			this->button6->TabIndex = 27;
			this->button6->Text = L"Забанить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &OperatorForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(646, 336);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(128, 49);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Обновить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &OperatorForm::button5_Click);
			// 
			// labelAkkauntTableHeader
			// 
			this->labelAkkauntTableHeader->AutoSize = true;
			this->labelAkkauntTableHeader->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelAkkauntTableHeader->Location = System::Drawing::Point(6, 9);
			this->labelAkkauntTableHeader->Name = L"labelAkkauntTableHeader";
			this->labelAkkauntTableHeader->Size = System::Drawing::Size(264, 11);
			this->labelAkkauntTableHeader->TabIndex = 25;
			this->labelAkkauntTableHeader->Text = L"Номер. Логин Имя Фамилия Тариф Статус";
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 11;
			this->listBox2->Location = System::Drawing::Point(6, 23);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(634, 334);
			this->listBox2->TabIndex = 20;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button16);
			this->tabPage1->Controls->Add(this->labelTariffTableHeader);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(783, 393);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тарифы";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(552, 150);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(225, 52);
			this->button4->TabIndex = 28;
			this->button4->Text = L"Только архивные";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &OperatorForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(552, 93);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(225, 51);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Только актуальные";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &OperatorForm::button3_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(552, 249);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(225, 71);
			this->button16->TabIndex = 26;
			this->button16->Text = L"Показать подробное описание тарифа";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &OperatorForm::button16_Click);
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(552, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(225, 58);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Обновить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OperatorForm::button1_Click_1);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 11;
			this->listBox1->Location = System::Drawing::Point(6, 29);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(540, 356);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button30);
			this->tabPage3->Controls->Add(this->button26);
			this->tabPage3->Controls->Add(this->button25);
			this->tabPage3->Controls->Add(this->button24);
			this->tabPage3->Controls->Add(this->labelAdditionalServices);
			this->tabPage3->Controls->Add(this->listBoxAdditionalServices);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(783, 393);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Дополнительные услуги";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(471, 37);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(154, 56);
			this->button30->TabIndex = 18;
			this->button30->Text = L"Показать описание услуги";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &OperatorForm::button30_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(471, 308);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(154, 52);
			this->button26->TabIndex = 14;
			this->button26->Text = L"Только архивные";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &OperatorForm::button26_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(471, 240);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(154, 51);
			this->button25->TabIndex = 13;
			this->button25->Text = L"Только активные";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &OperatorForm::button25_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(471, 167);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(154, 53);
			this->button24->TabIndex = 12;
			this->button24->Text = L"Обновить";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &OperatorForm::button24_Click);
			// 
			// labelAdditionalServices
			// 
			this->labelAdditionalServices->AutoSize = true;
			this->labelAdditionalServices->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelAdditionalServices->Location = System::Drawing::Point(149, 23);
			this->labelAdditionalServices->Name = L"labelAdditionalServices";
			this->labelAdditionalServices->Size = System::Drawing::Size(166, 11);
			this->labelAdditionalServices->TabIndex = 11;
			this->labelAdditionalServices->Text = L"labelAdditionalServices";
			// 
			// listBoxAdditionalServices
			// 
			this->listBoxAdditionalServices->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->listBoxAdditionalServices->FormattingEnabled = true;
			this->listBoxAdditionalServices->ItemHeight = 11;
			this->listBoxAdditionalServices->Location = System::Drawing::Point(151, 37);
			this->listBoxAdditionalServices->Name = L"listBoxAdditionalServices";
			this->listBoxAdditionalServices->Size = System::Drawing::Size(289, 334);
			this->listBoxAdditionalServices->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(354, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"MegaEsimCompany";
			// 
			// OperatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(801, 449);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"OperatorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"OperatorForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &OperatorForm::OperatorForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &OperatorForm::OperatorForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Hide();
		Form^ authorization = parentForm;
		authorization->Show();
		return;
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

private: Void Update_Clients()
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

		listBox2->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::MAXNumberLen + 1) + " " + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::MAXLoginLen) + " " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::MAXNameLen) + " " + GlobalSettings::StringWithCertainSize(reader[3]->ToString(), GlobalSettings::MAXSurnameLen) + " " + GlobalSettings::StringWithCertainSize(reader[4]->ToString(), GlobalSettings::tariffTitleLen) + " " + banned);
	}
	reader->Close();
}

	private: System::Void OperatorForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		String^ result = SQL_helper::role_name(2);
		if (result == String::Empty)
		{
			MessageBox::Show(L"Возможно база данных повреждена", L"Ошибка");
			return;
		}
		this->Text = result;
		Update_Clients();
		Update_Tariff();
	}

	private: System::Void OperatorForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
	{
		GlobalSettings::FormClose();
	}


private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e)
{
	Update_Clients();
	Update_Tariff();
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
	Update_Clients();
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
	Update_Clients();
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

	MessageBox::Show(SQL_helper::AkkauntInformationForЕmployee(selected_text[0]), selected_text[0]);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
{
	Update_Clients();
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e)
{
	String^ query = L"SELECT Users.phone_number, Users.user_login, Clients.client_name, Clients.client_surname, Tariffs.title FROM (((Users INNER JOIN Clients ON Users.client_id = Clients.client_id) INNER JOIN Tariffs ON Clients.tariff_id = Tariffs.tariff_id) INNER JOIN Roles ON Users.role_id = Roles.role_id) WHERE Users.role_id = 1 AND Users.banned = TRUE";
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
	OleDbDataReader^ reader = command->ExecuteReader();
	listBox2->Items->Clear();
	while (reader->Read())
	{
		listBox2->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::MAXNumberLen + 1) + " " + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::MAXLoginLen) + " " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::MAXNameLen) + " " + GlobalSettings::StringWithCertainSize(reader[3]->ToString(), GlobalSettings::MAXSurnameLen) + " " + GlobalSettings::StringWithCertainSize(reader[4]->ToString(), GlobalSettings::tariffTitleLen));
	}
	reader->Close();
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e)
{
	String^ query = L"SELECT Users.phone_number, Users.user_login, Clients.client_name, Clients.client_surname, Tariffs.title FROM (((Users INNER JOIN Clients ON Users.client_id = Clients.client_id) INNER JOIN Tariffs ON Clients.tariff_id = Tariffs.tariff_id) INNER JOIN Roles ON Users.role_id = Roles.role_id) WHERE Users.role_id = 1 AND Users.banned = FALSE";
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
	OleDbDataReader^ reader = command->ExecuteReader();
	listBox2->Items->Clear();
	while (reader->Read())
	{
		listBox2->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::MAXNumberLen + 1) + " " + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::MAXLoginLen) + " " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::MAXNameLen) + " " + GlobalSettings::StringWithCertainSize(reader[3]->ToString(), GlobalSettings::MAXSurnameLen) + " " + GlobalSettings::StringWithCertainSize(reader[4]->ToString(), GlobalSettings::tariffTitleLen));
	}
	reader->Close();
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

	String^ query = L"SELECT Users.phone_number, Users.user_login, Clients.client_name, Clients.client_surname, Tariffs.title, Users.banned FROM (((Users INNER JOIN Clients ON Users.client_id = Clients.client_id) INNER JOIN Tariffs ON Clients.tariff_id = Tariffs.tariff_id) INNER JOIN Roles ON Users.role_id = Roles.role_id) WHERE Users.role_id = 1 AND " + find + " LIKE '%" + textBox2->Text + "%'";
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

		listBox2->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::MAXNumberLen + 1) + " " + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::MAXLoginLen) + " " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::MAXNameLen) + " " + GlobalSettings::StringWithCertainSize(reader[3]->ToString(), GlobalSettings::MAXSurnameLen) + " " + GlobalSettings::StringWithCertainSize(reader[4]->ToString(), GlobalSettings::tariffTitleLen) + " " + banned);
	}
	reader->Close();
}

private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e)
{
	Hide();
	Form^ authorization = parentForm;
	authorization->Show();
	return;
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e)
{
	additionalServicesForЕmployee->Print();
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e)
{
	additionalServicesForЕmployee->PrintWithoutActive(AdditionalServices::ServiceStatus::ative);
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e)
{
	additionalServicesForЕmployee->PrintWithoutActive(AdditionalServices::ServiceStatus::old);
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e)
{
	additionalServicesForЕmployee->SelectedServiceDescription();
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
};
}
