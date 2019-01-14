namespace CppCLR_WinformsProjekt
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::Security::Cryptography;
	using namespace System::Text;

	public ref class EMailBox
	{
	public: System::Windows::Forms::Label^ header; // ���� ��������� �������
	public: System::Windows::Forms::ListBox^  table; // ���� ���� ������� �������
	public: EMailBox(System::Windows::Forms::Label^ header, System::Windows::Forms::ListBox^ table)
	{
		this->header = header;
		this->table = table;
	}

	private: Void PrintHeader()
	{
		header->Text = GlobalSettings::StringWithCertainSize("�����. ", GlobalSettings::mailIdLen) + GlobalSettings::StringWithCertainSize("�����������", GlobalSettings::mailSenderLen) + "  " + GlobalSettings::StringWithCertainSize("����", GlobalSettings::mailSubjectLen) + " " + GlobalSettings::StringWithCertainSize("���� � �����", GlobalSettings::mailDepartureTime) + " ������";
	}

	private: Void PrintHeaderWithoutLetterStatus()
	{
		header->Text = GlobalSettings::StringWithCertainSize("�����. ", GlobalSettings::mailIdLen) + GlobalSettings::StringWithCertainSize("�����������", GlobalSettings::mailSenderLen) + "  " + GlobalSettings::StringWithCertainSize("����", GlobalSettings::mailSubjectLen) + " " + GlobalSettings::StringWithCertainSize("���� � �����", GlobalSettings::mailDepartureTime);
	}

	public: Void Print()
	{
		PrintHeader();
		System::String^ query = L"SELECT mail_id,sender,subject,departure_time,mail_read FROM Mail";
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		OleDbDataReader^ reader = command->ExecuteReader();

		table->Items->Clear();
		while (reader->Read())
		{
			String^ read = L"-";
			if (reader[4]->ToString() == L"True")
			{
				read = L"���������";
			}
			if (reader[4]->ToString() == L"False")
			{
				read = L"�� ���������";
			}
			table->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::mailIdLen) + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::mailSenderLen) + "  " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::mailSubjectLen) + " " + GlobalSettings::StringWithCertainSize(reader[3]->ToString(), GlobalSettings::mailDepartureTime) + " " + read);
		}
		reader->Close();
	}

	public: static Void MarkAsRead(String^ mailId)
	{
		System::String^ query = L"UPDATE Mail SET mail_read = TRUE WHERE mail_id = " + mailId;
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		command->ExecuteNonQuery();
	}

	public: Void SelectedLetterMarkAsRead()
	{
		if (table->SelectedItem == nullptr)
		{
			MessageBox::Show(L"������ �� ��������", L"������");
			return;
		}

		auto selected_text = table->SelectedItem->ToString()->Split('.');

		if (selected_text->Length == 0)
		{
			MessageBox::Show(L"������ �����������", L"������");
			return;
		}

		MarkAsRead(selected_text[0]);

		MessageBox::Show(L"������ �������� ��� �����������");

		Print();
	}

	public: static Void DeleteLetter(String^ mailId)
	{
		System::String^ query = L"DELETE FROM Mail WHERE mail_id = " + mailId;
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		command->ExecuteNonQuery();
	}

	public: Void SelectedLetterDelete()
	{
		if (table->SelectedItem == nullptr)
		{
			MessageBox::Show(L"������ �� ��������", L"������");
			return;
		}

		auto selected_text = table->SelectedItem->ToString()->Split('.');

		if (selected_text->Length == 0)
		{
			MessageBox::Show(L"������ �����������", L"������");
			return;
		}

		DeleteLetter(selected_text[0]);

		MessageBox::Show(L"������ �������");

		Print();
	}

	public: static String^ ReadLetter(String^ mailId)
	{
		System::String^ query = L"SELECT sender, subject, departure_time, message FROM Mail";
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		OleDbDataReader^ reader = command->ExecuteReader();

		if (reader->Read())
		{
			String^ result = "\n�����������: " + reader[0]->ToString() +
				"\n����: " + reader[1]->ToString() +
				"\n���� � ����� ���������: " + reader[2]->ToString() + 
				"\n\n\n" + reader[3]->ToString();
			reader->Close();
			return result;
		}
		reader->Close();
		return(L"������");
	}

	public: Void SelectedLetterRead()
	{
		if (table->SelectedItem == nullptr)
		{
			MessageBox::Show(L"������ �� ��������", L"������");
			return;
		}

		auto selected_text = table->SelectedItem->ToString()->Split('.');

		if (selected_text->Length == 0)
		{
			MessageBox::Show(L"������ �����������", L"������");
			return;
		}

		MarkAsRead(selected_text[0]);
		MessageBox::Show(ReadLetter(selected_text[0]),"������");
		Print();
	}

	public: enum class LetterStatus
	{
		read,
		notRead
	};

	private: static String^ LetterStatusToRequestPart(LetterStatus letterStatus)
	{
		String^ partOfTheRequest;
		if (letterStatus == LetterStatus::notRead)
		{
			return(L"FAlSE");
		}
		else
		{
			return(L"TRUE");
		}
	}

	public: Void PrintOnly(LetterStatus letterStatus)
	{
		PrintHeaderWithoutLetterStatus();
		System::String^ query = L"SELECT mail_id,sender,subject,departure_time FROM Mail WHERE mail_read = " + LetterStatusToRequestPart(letterStatus);
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		OleDbDataReader^ reader = command->ExecuteReader();

		table->Items->Clear();
		while (reader->Read())
		{
			table->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::mailIdLen) + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::mailSenderLen) + "  " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::mailSubjectLen) + " " + GlobalSettings::StringWithCertainSize(reader[3]->ToString(), GlobalSettings::mailDepartureTime));
		}
		reader->Close();
	}
	};
}