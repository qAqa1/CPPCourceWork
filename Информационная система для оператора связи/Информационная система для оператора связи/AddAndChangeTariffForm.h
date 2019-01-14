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
	public ref class AddAndChangeTariffForm : public System::Windows::Forms::Form
	{
	public:
		AddAndChangeTariffForm(Form^ parent, GlobalSettings::VoidDelegateWithoutArguments^ updateAfterTariffsChanges)
		{
			InitializeComponent();
			parentForm = parent;
			updateParant = updateAfterTariffsChanges;
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}
	public: GlobalSettings::VoidDelegateWithoutArguments^ updateParant;

	private: System::Windows::Forms::Button^  buttonBack;
	private: System::Windows::Forms::TextBox^  textBoxDescription;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBoxTitle;

	private: System::Windows::Forms::TextBox^  textBoxId;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxDetailedInformation;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	public:

	public: Form^ parentForm;

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~AddAndChangeTariffForm()
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
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->textBoxDescription = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTitle = (gcnew System::Windows::Forms::TextBox());
			this->textBoxId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxDetailedInformation = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonBack
			// 
			this->buttonBack->Location = System::Drawing::Point(13, 23);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(75, 23);
			this->buttonBack->TabIndex = 0;
			this->buttonBack->Text = L"<- Назад";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &AddAndChangeTariffForm::buttonBack_Click);
			// 
			// textBoxDescription
			// 
			this->textBoxDescription->Location = System::Drawing::Point(112, 139);
			this->textBoxDescription->MaxLength = 40;
			this->textBoxDescription->Name = L"textBoxDescription";
			this->textBoxDescription->Size = System::Drawing::Size(264, 20);
			this->textBoxDescription->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Описание:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Заголовок:";
			// 
			// textBoxTitle
			// 
			this->textBoxTitle->Location = System::Drawing::Point(112, 105);
			this->textBoxTitle->MaxLength = 17;
			this->textBoxTitle->Name = L"textBoxTitle";
			this->textBoxTitle->Size = System::Drawing::Size(206, 20);
			this->textBoxTitle->TabIndex = 22;
			// 
			// textBoxId
			// 
			this->textBoxId->Location = System::Drawing::Point(112, 67);
			this->textBoxId->MaxLength = 5;
			this->textBoxId->Name = L"textBoxId";
			this->textBoxId->Size = System::Drawing::Size(42, 20);
			this->textBoxId->TabIndex = 21;
			this->textBoxId->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddAndChangeTariffForm::textBoxId_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Номер тарифа:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 174);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 13);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Подробное описание:";
			// 
			// textBoxDetailedInformation
			// 
			this->textBoxDetailedInformation->Location = System::Drawing::Point(50, 200);
			this->textBoxDetailedInformation->MaxLength = 459;
			this->textBoxDetailedInformation->Multiline = true;
			this->textBoxDetailedInformation->Name = L"textBoxDetailedInformation";
			this->textBoxDetailedInformation->Size = System::Drawing::Size(326, 126);
			this->textBoxDetailedInformation->TabIndex = 27;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(142, 342);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 47);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Создать/Изменить тариф";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddAndChangeTariffForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(179, 64);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 23);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Получить данные по тарифу";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddAndChangeTariffForm::button2_Click);
			// 
			// AddAndChangeTariffForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(401, 401);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxDetailedInformation);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxDescription);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxTitle);
			this->Controls->Add(this->textBoxId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonBack);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"AddAndChangeTariffForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Создание и Редактирование  тарифов";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AddAndChangeTariffForm::AddAndChangeTariffForm_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonBack_Click(System::Object^  sender, System::EventArgs^  e)
	{		
		updateParant();
		Hide();
		parentForm->Show();
	}
	private: System::Void textBoxId_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
		{
			e->Handled = true;
		}
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (String::IsNullOrWhiteSpace(textBoxId->Text) || String::IsNullOrWhiteSpace(textBoxTitle->Text) || String::IsNullOrWhiteSpace(textBoxDescription->Text) || String::IsNullOrWhiteSpace(textBoxDetailedInformation->Text))
	{
		MessageBox::Show(L"Вы не заполнили все поля", L"Ошибка");
		return;
	}

	System::String^ query = L"SELECT tariff_id FROM Tariffs WHERE tariff_id = " + textBoxId->Text + "";
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);

	if (command->ExecuteScalar() != nullptr)
	{
		if (Convert::ToInt32(textBoxId->Text) == 1)
		{
			MessageBox::Show(L"Нельзя изменять первый элемент", L"Ошибка");
			return;
		}

		System::Windows::Forms::DialogResult result = MessageBox::Show(L"Тариф с таким номером уже существует\nИзменить?", L"Замена", MessageBoxButtons::YesNo);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{			
			System::String^ query = L"UPDATE Tariffs SET title = '" + textBoxTitle->Text + "', description = '" + textBoxDescription->Text + "', detailed_information = '" + textBoxDetailedInformation->Text + "' WHERE tariff_id = " + textBoxId->Text;
			OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
			command->ExecuteNonQuery();
			MessageBox::Show("Тариф изменён");
		}
		return;
	}

	System::String^ query2 = L"INSERT INTO Tariffs (tariff_id,title,description,detailed_information) VALUES ('" + textBoxId->Text + "','" + textBoxTitle->Text + "','" + textBoxDescription->Text + "','" + textBoxDetailedInformation->Text + "')";
	OleDbCommand^ command2 = gcnew OleDbCommand(query2, Connection::myConnect);
	command2->ExecuteNonQuery();
	MessageBox::Show(L"Тариф созданн");
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (String::IsNullOrWhiteSpace(textBoxId->Text))
	{
		MessageBox::Show(L"Вы не заполнили все поля", L"Ошибка");
		return;
	}

	System::String^ query = L"SELECT title,description,detailed_information FROM Tariffs WHERE tariff_id = " + textBoxId->Text;
	OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
	OleDbDataReader^ reader = command->ExecuteReader();


	if (reader->Read())
	{
		textBoxTitle->Text = reader[0]->ToString();
		textBoxDescription->Text = reader[1]->ToString();
		textBoxDetailedInformation->Text = reader[2]->ToString();
	}
	else
	{
		MessageBox::Show(L"По данному номеру ничего нет", L"Ошибка");
	}
	reader->Close();
}
private: System::Void AddAndChangeTariffForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
{
	Connection::Close();
}
};
}
