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
	public ref class DeleteMyAccountForm : public System::Windows::Forms::Form
	{
	public:
		DeleteMyAccountForm(Form^ parent, Int32 myClientId)
		{
			InitializeComponent();
			parentForm = parent;
			this->myClientId = myClientId;
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}
	public: Form^ parentForm;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	public:
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button2;

	public:
	public: Int32 myClientId;
	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~DeleteMyAccountForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:

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
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(29, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"<- Отмена";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DeleteMyAccountForm::button1_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(117, 102);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(115, 17);
			this->checkBox2->TabIndex = 20;
			this->checkBox2->Text = L"Скрывать пароль";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &DeleteMyAccountForm::checkBox2_CheckedChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(210, 51);
			this->textBox7->MaxLength = 20;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 19;
			this->textBox7->UseSystemPasswordChar = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(40, 51);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(154, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Введите пароль от аккаунта:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(106, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 47);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Удалить аккаунт";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DeleteMyAccountForm::button2_Click);
			// 
			// DeleteMyAccountForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(334, 212);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button1);
			this->Name = L"DeleteMyAccountForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Удаление акаунта";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &DeleteMyAccountForm::DeleteMyAccountForm_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DeleteMyAccountForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
	{
		GlobalSettings::FormClose();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Hide();
		Form^ authorization = parentForm;
		authorization->Show();
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
	if (String::IsNullOrWhiteSpace(textBox7->Text))
	{
		MessageBox::Show(L"Вы не заполнили поле ввода пароля", L"Ошибка");
		return;
	}

	System::String^ query = L"SELECT phone_number,user_password,banned,role_id FROM Users WHERE client_id = " + myClientId + " AND user_password = '" + SQL_helper::Md5(textBox7->Text) + "'";
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
	OleDbDataReader^ reader = command->ExecuteReader();

	if (reader->Read())
	{

	}
	else
	{
		MessageBox::Show(L"Неверный пароль", L"Ошибка");
		return;
	}

	System::Windows::Forms::DialogResult result = MessageBox::Show(L"Это действие невозможно будет отменить\nВы действительно хотите удалить свой акаунт?", L"Удаление акаунта", MessageBoxButtons::YesNo);

	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		SQL_helper::DeleteUser(myClientId);
		MessageBox::Show(L"Ваш акаунт удалён");
		GlobalSettings::FormClose();
	}
}
};
}
