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
	public ref class AddAndChangeServiceForm : public System::Windows::Forms::Form
	{
	public:
		AddAndChangeServiceForm(Form^ parent, AdditionalServices^ additionalServices)
		{
			InitializeComponent();
			parentForm = parent;
			parentAdditionalServices = additionalServices;
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}
	public: AdditionalServices^ parentAdditionalServices;
	public: Form^ parentForm;

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~AddAndChangeServiceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBoxDescription;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxPrice;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBoxTitle;
	private: System::Windows::Forms::TextBox^  textBoxId;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  buttonBack;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxDescription = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxPrice = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTitle = (gcnew System::Windows::Forms::TextBox());
			this->textBoxId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(188, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 23);
			this->button2->TabIndex = 40;
			this->button2->Text = L"Получить данные по услуге";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddAndChangeServiceForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(151, 331);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 47);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Создать/Изменить сервис";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddAndChangeServiceForm::button1_Click);
			// 
			// textBoxDescription
			// 
			this->textBoxDescription->Location = System::Drawing::Point(59, 189);
			this->textBoxDescription->MaxLength = 459;
			this->textBoxDescription->Multiline = true;
			this->textBoxDescription->Name = L"textBoxDescription";
			this->textBoxDescription->Size = System::Drawing::Size(326, 126);
			this->textBoxDescription->TabIndex = 38;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 163);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Описание:";
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->Location = System::Drawing::Point(121, 128);
			this->textBoxPrice->MaxLength = 4;
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(42, 20);
			this->textBoxPrice->TabIndex = 36;
			this->textBoxPrice->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddAndChangeServiceForm::textBoxDescription_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(31, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 13);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Цена:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Заголовок:";
			// 
			// textBoxTitle
			// 
			this->textBoxTitle->Location = System::Drawing::Point(121, 94);
			this->textBoxTitle->MaxLength = 17;
			this->textBoxTitle->Name = L"textBoxTitle";
			this->textBoxTitle->Size = System::Drawing::Size(206, 20);
			this->textBoxTitle->TabIndex = 33;
			this->textBoxTitle->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddAndChangeServiceForm::textBoxTitle_KeyPress);
			// 
			// textBoxId
			// 
			this->textBoxId->Location = System::Drawing::Point(121, 56);
			this->textBoxId->MaxLength = 5;
			this->textBoxId->Name = L"textBoxId";
			this->textBoxId->Size = System::Drawing::Size(42, 20);
			this->textBoxId->TabIndex = 32;
			this->textBoxId->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddAndChangeServiceForm::textBoxId_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Номер услуги:";
			// 
			// buttonBack
			// 
			this->buttonBack->Location = System::Drawing::Point(22, 12);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(75, 23);
			this->buttonBack->TabIndex = 30;
			this->buttonBack->Text = L"<- Назад";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &AddAndChangeServiceForm::buttonBack_Click);
			// 
			// AddAndChangeServiceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 391);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxDescription);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxPrice);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxTitle);
			this->Controls->Add(this->textBoxId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonBack);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"AddAndChangeServiceForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Создание и Редактирование услуг";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AddAndChangeServiceForm::AddAndChangeServiceForm_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBoxDescription_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
		{
			e->Handled = true;
		}
	}
private: System::Void textBoxId_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
	{
		e->Handled = true;
	}
}
private: System::Void AddAndChangeServiceForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
{
	GlobalSettings::FormClose();
}
private: System::Void buttonBack_Click(System::Object^  sender, System::EventArgs^  e)
{
	parentAdditionalServices->Print();
	Hide();
	parentForm->Show();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	AdditionalServices::GetServicesData(textBoxId, textBoxTitle, textBoxDescription, textBoxPrice);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (String::IsNullOrWhiteSpace(textBoxId->Text) || String::IsNullOrWhiteSpace(textBoxTitle->Text) || String::IsNullOrWhiteSpace(textBoxDescription->Text) || String::IsNullOrWhiteSpace(textBoxPrice->Text))
	{
		MessageBox::Show(L"Вы не заполнили все поля", L"Ошибка");
		return;
	}

	if (AdditionalServices::ServiceExist(textBoxId->Text))
	{
		System::Windows::Forms::DialogResult result = MessageBox::Show(L"Услуга с таким номером уже существует\nИзменить?", L"Замена", MessageBoxButtons::YesNo);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			AdditionalServices::ChangeService(textBoxId->Text, textBoxTitle->Text, textBoxDescription->Text, textBoxPrice->Text);
			MessageBox::Show("Услуга изменена");
		}
		return;
	}

	AdditionalServices::AddService(textBoxId->Text, textBoxTitle->Text, textBoxDescription->Text, textBoxPrice->Text);
	MessageBox::Show(L"Услуга создана");
}
private: System::Void textBoxTitle_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if (e->KeyChar == GlobalSettings::borderCharBetweenColumns || e->KeyChar == GlobalSettings::borderCharBetweenFields)
	{
		e->Handled = true;
	}
}
};
}
