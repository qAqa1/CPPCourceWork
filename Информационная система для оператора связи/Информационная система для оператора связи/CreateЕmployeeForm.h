#pragma once

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class CreateÅmployeeForm : public System::Windows::Forms::Form
	{
	public:
		CreateÅmployeeForm(Form^ parent, GlobalSettings::VoidDelegateWithoutArguments^ updateAfterTariffsChanges)
		{
			InitializeComponent();
			parentForm = parent;
			updateParant = updateAfterTariffsChanges;
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}
	public: GlobalSettings::VoidDelegateWithoutArguments^ updateParant;
	private: System::Windows::Forms::TextBox^  textBoxPlaceOfResidence;
	public:
	private: System::Windows::Forms::TextBox^  textBoxYearOfBirth;
	private: System::Windows::Forms::TextBox^  textBoxPassportID;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBoxLogin;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	public: Form^ parentForm;
	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~CreateÅmployeeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonBack;
	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonBack = (gcnew System::Windows::Forms::Button());
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
			this->SuspendLayout();
			// 
			// buttonBack
			// 
			this->buttonBack->Location = System::Drawing::Point(12, 12);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(75, 23);
			this->buttonBack->TabIndex = 1;
			this->buttonBack->Text = L"<- Íàçàä";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &CreateÅmployeeForm::buttonBack_Click);
			// 
			// textBoxPlaceOfResidence
			// 
			this->textBoxPlaceOfResidence->Location = System::Drawing::Point(136, 308);
			this->textBoxPlaceOfResidence->MaxLength = 25;
			this->textBoxPlaceOfResidence->Name = L"textBoxPlaceOfResidence";
			this->textBoxPlaceOfResidence->Size = System::Drawing::Size(100, 20);
			this->textBoxPlaceOfResidence->TabIndex = 39;
			// 
			// textBoxYearOfBirth
			// 
			this->textBoxYearOfBirth->Location = System::Drawing::Point(136, 281);
			this->textBoxYearOfBirth->MaxLength = 4;
			this->textBoxYearOfBirth->Name = L"textBoxYearOfBirth";
			this->textBoxYearOfBirth->Size = System::Drawing::Size(100, 20);
			this->textBoxYearOfBirth->TabIndex = 38;
			// 
			// textBoxPassportID
			// 
			this->textBoxPassportID->Location = System::Drawing::Point(136, 250);
			this->textBoxPassportID->MaxLength = 4;
			this->textBoxPassportID->Name = L"textBoxPassportID";
			this->textBoxPassportID->Size = System::Drawing::Size(100, 20);
			this->textBoxPassportID->TabIndex = 37;
			this->textBoxPassportID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreateÅmployeeForm::textBoxPassportID_KeyPress);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(32, 308);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(92, 13);
			this->label12->TabIndex = 36;
			this->label12->Text = L"Àäðåñ ïðîïèñêè:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(32, 281);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(81, 13);
			this->label11->TabIndex = 35;
			this->label11->Text = L"Ãîä ðîæäåíèÿ:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(32, 253);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(94, 13);
			this->label10->TabIndex = 34;
			this->label10->Text = L"Íîìåð ïàñïîðòà:";
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Location = System::Drawing::Point(136, 75);
			this->textBoxLogin->MaxLength = 13;
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(100, 20);
			this->textBoxLogin->TabIndex = 33;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(32, 78);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 13);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Ëîãèí";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(76, 346);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 35);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Ñîçäàòü àêàóíò ñîòðóäíèêà";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateÅmployeeForm::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(136, 158);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(115, 17);
			this->checkBox1->TabIndex = 30;
			this->checkBox1->Text = L"Ñêðûâàòü ïàðîëü";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &CreateÅmployeeForm::checkBox1_CheckedChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(136, 223);
			this->textBox5->MaxLength = 15;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 29;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(136, 197);
			this->textBox4->MaxLength = 15;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 28;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(32, 223);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Ôàìèëèÿ:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(32, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Èìÿ:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(136, 131);
			this->textBox3->MaxLength = 20;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 25;
			this->textBox3->UseSystemPasswordChar = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(136, 101);
			this->textBox2->MaxLength = 20;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 24;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(136, 48);
			this->textBox1->MaxLength = 15;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 23;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreateÅmployeeForm::textBox1_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Òåëåôîí:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Ïîâòîðèòå ïàðîëü:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Ïàðîëü:";
			// 
			// CreateÅmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(277, 392);
			this->Controls->Add(this->textBoxPlaceOfResidence);
			this->Controls->Add(this->textBoxYearOfBirth);
			this->Controls->Add(this->textBoxPassportID);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBoxLogin);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonBack);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"CreateÅmployeeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ñîçäàíèå àêàóíòîâ ñîòðóäíèêîâ";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &CreateÅmployeeForm::CreateÅmployeeForm_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CreateÅmployeeForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
	{
		GlobalSettings::FormClose();
	}
	private: System::Void buttonBack_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		updateParant();
		Hide();
		parentForm->Show();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (String::IsNullOrWhiteSpace(textBox1->Text) || String::IsNullOrWhiteSpace(textBoxLogin->Text) || String::IsNullOrWhiteSpace(textBox2->Text) || String::IsNullOrWhiteSpace(textBox3->Text) || String::IsNullOrWhiteSpace(textBox4->Text) || String::IsNullOrWhiteSpace(textBox5->Text) || String::IsNullOrWhiteSpace(textBoxPassportID->Text) || String::IsNullOrWhiteSpace(textBoxYearOfBirth->Text) || String::IsNullOrWhiteSpace(textBoxPlaceOfResidence->Text))
		{
			MessageBox::Show(L"Âû íå çàïîëíèëè âñå ïîëÿ", L"Îøèáêà");
			return;
		}

		if (textBox2->Text->Length < GlobalSettings::minPasswordLen)
		{
			MessageBox::Show(L"Ìèíèìàëüíàÿ äëèííà ïàðîëÿ " + GlobalSettings::minPasswordLen + " ñèìâîëîâ", L"Îøèáêà");
			return;
		}

		if (textBox1->Text->Length < GlobalSettings::minNumberLen)
		{
			MessageBox::Show(L"Ìèíèìàëüíàÿ äëèííà íîìåðà " + GlobalSettings::minNumberLen + " ñèìâîëîâ", L"Îøèáêà");
			return;
		}

		if (textBoxPassportID->Text->Length != GlobalSettings::PassportIDLen)
		{
			MessageBox::Show(L"Íîìåð ïàññïîðòà ýòî " + GlobalSettings::PassportIDLen + " öèôðû", L"Îøèáêà");
			return;
		}

		System::String^ query = L"SELECT phone_number FROM Users WHERE phone_number = '" + textBox1->Text + "'";
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);

		if (command->ExecuteScalar() != nullptr)
		{
			MessageBox::Show(L"Íîìåð òåëåôîíà çàíÿò, ïîïðîáóéòå äðóãîé", L"Îøèáêà");
			return;
		}

		System::String^ query2 = L"SELECT phone_number FROM Users WHERE user_login = '" + textBoxLogin->Text + "'";
		OleDbCommand^ command2 = gcnew OleDbCommand(query2, Connection::myConnect);

		if (command2->ExecuteScalar() != nullptr)
		{
			MessageBox::Show(L"Ýòîò ëîãèí çàíÿò, ïîïðîáóéòå äðóãîé", L"Îøèáêà");
			return;
		}

		System::String^ query3 = L"INSERT INTO Clients (client_name, client_surname,tariff_id,passport_ID,year_of_birth,place_of_residence) VALUES ('" + textBox4->Text + "','" + textBox5->Text + "',1,'" + textBoxPassportID->Text + "','" + textBoxYearOfBirth->Text + "','" + textBoxPlaceOfResidence->Text + "')";
		OleDbCommand^ command3 = gcnew OleDbCommand(query3, Connection::myConnect);
		command3->ExecuteNonQuery();

		System::String^ query4 = L"SELECT MAX(client_id) AS `MAX_client_id` FROM Clients";
		OleDbCommand^ command4 = gcnew OleDbCommand(query4, Connection::myConnect);
		System::Int32 MAX_client_id = Convert::ToInt32(command4->ExecuteScalar());

		System::String^ query5 = L"INSERT INTO Users (phone_number,user_login,user_password,role_id,client_id) VALUES ('" + textBox1->Text + "','" + textBoxLogin->Text + "','" + SQL_helper::Md5(textBox2->Text) + "',2," + MAX_client_id + ")";
		OleDbCommand^ command5 = gcnew OleDbCommand(query5, Connection::myConnect);
		command5->ExecuteNonQuery();

		MessageBox::Show(L"Àêàóíò ñîòðóäíèêà ñîçäàí");
	}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
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
};
}
