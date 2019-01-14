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
	public ref class FeedbackForm : public System::Windows::Forms::Form
	{
	public:
		FeedbackForm(Form^ parent, Int32 myClientId, String^ myNameAndSurname)
		{
			InitializeComponent();
			parentForm = parent;
			this->myClientId = myClientId;
			this->myNameAndSurname = myNameAndSurname;
			labelMyNameAndSurname->Text = myNameAndSurname;
			comboBox1->SelectedIndex = 0;
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}
	public: Form^ parentForm;
	public: Int32 myClientId;
	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labelMyNameAndSurname;
	private: System::Windows::Forms::TextBox^  textBoxMessage;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;





	public:
	public: String^ myNameAndSurname;

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~FeedbackForm()
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelMyNameAndSurname = (gcnew System::Windows::Forms::Label());
			this->textBoxMessage = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"<- Отмена";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FeedbackForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(155, 325);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Отправить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FeedbackForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"От кого:";
			// 
			// labelMyNameAndSurname
			// 
			this->labelMyNameAndSurname->AutoSize = true;
			this->labelMyNameAndSurname->Location = System::Drawing::Point(87, 57);
			this->labelMyNameAndSurname->Name = L"labelMyNameAndSurname";
			this->labelMyNameAndSurname->Size = System::Drawing::Size(81, 13);
			this->labelMyNameAndSurname->TabIndex = 5;
			this->labelMyNameAndSurname->Text = L"Имя Фамилия";
			// 
			// textBoxMessage
			// 
			this->textBoxMessage->Location = System::Drawing::Point(12, 108);
			this->textBoxMessage->Multiline = true;
			this->textBoxMessage->Name = L"textBoxMessage";
			this->textBoxMessage->Size = System::Drawing::Size(366, 211);
			this->textBoxMessage->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Тема:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Технические_проблемы", L"Баланс", L"Тарифы",
					L"Другое"
			});
			this->comboBox1->Location = System::Drawing::Point(90, 76);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(146, 21);
			this->comboBox1->TabIndex = 39;
			// 
			// FeedbackForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(390, 360);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxMessage);
			this->Controls->Add(this->labelMyNameAndSurname);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"FeedbackForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Обратная связь";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FeedbackForm::FeedbackForm_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FeedbackForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
	{
		GlobalSettings::FormClose();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Hide();
		Form^ authorization = parentForm;
		authorization->Show();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (String::IsNullOrWhiteSpace(textBoxMessage->Text))
		{
			MessageBox::Show(L"Вы не заполнили все поля", L"Ошибка");
			return;
		}

		Email::SendMail(myNameAndSurname, comboBox1->SelectedItem->ToString(), textBoxMessage->Text);
		MessageBox::Show(L"Ваше сообщение отправлено");
	}
};
}
