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

	public ref class AdditionalServicesForUser
	{
	public: Int32 ClientId;
	public: System::Windows::Forms::Label^ header; // ���� ��������� �������	
	public: System::Windows::Forms::ListBox^ table; // ���� ���� ������� �������
	public: System::Windows::Forms::Label^ headerPurchases; // ���� ��������� �������	
	public: System::Windows::Forms::ListBox^ purchases; // �������
	public: GlobalSettings::VoidDelegateWithoutArguments^ printBalance; // �������� ������

	public: AdditionalServicesForUser(Int32 ClientId, Label^ header, ListBox^ table, Label^ headerPurchases, ListBox^ purchases, GlobalSettings::VoidDelegateWithoutArguments^ printBalance)
	{
		this->ClientId = ClientId;
		this->header = header;
		this->table = table;
		this->headerPurchases = headerPurchases;
		this->purchases = purchases;
		this->printBalance = printBalance;
	}

	public: Void Start()
	{
		PrintHeader();
		PrintHeaderPurchases();
		Print();
		PrintPurchasedServices();
	}

	public: Void Update()
	{
		Print();
		printBalance();
		PrintPurchasedServices();
	}

	private: Void PrintHeader()
	{
		header->Text = GlobalSettings::StringWithCertainSize("�����. ", GlobalSettings::servicesIdLen) + GlobalSettings::StringWithCertainSize("���������", GlobalSettings::servicesTitleLen) + "  " + GlobalSettings::StringWithCertainSize("����", GlobalSettings::servicesPriceLen);
	}

	private: Void PrintHeaderPurchases()
	{
		headerPurchases->Text = GlobalSettings::StringWithCertainSize(L"�����", GlobalSettings::servicesTitleLen) + L"  ����";
	}

	public: Void Print()
	{
		System::String^ query = L"SELECT services_id, title, price FROM Additional_services WHERE old = FALSE ORDER BY services_id";
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		OleDbDataReader^ reader = command->ExecuteReader();

		table->Items->Clear();
		while (reader->Read())
		{
			table->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::servicesIdLen) + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::servicesTitleLen) + "  " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::servicesPriceLen));
		}
		reader->Close();
	}

	public: Void SelectedServiceDescription()
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

		MessageBox::Show(AdditionalServices::ServiceDetailedInformation(Convert::ToInt32(selected_text[0])), L"���������� �� ������");
	}

	public: static Boolean OutServicesData(String^ services_id, String^ &outTitle, String^ &outPrice)
	{
		System::String^ query = L"SELECT title, price FROM Additional_services WHERE services_id = " + services_id;
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		OleDbDataReader^ reader = command->ExecuteReader();
		if (reader->Read())
		{
			outTitle = reader[0]->ToString();
			outPrice = reader[1]->ToString();
			reader->Close();
			return(true);
		}
		else
		{
			reader->Close();
			return(false);
		}
	}

	public: Int32 GetBalance()
	{
		System::String^ query = L"SELECT balance FROM Clients WHERE client_id = " + ClientId;
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		OleDbDataReader^ reader = command->ExecuteReader();

		Int32 balance = -1;

		if (reader->Read())
		{
			balance = Convert::ToInt32(reader[0]);
			reader->Close();
			return(balance);
		}
		
		return(balance);
		reader->Close();
	}

	public: Void Payment(Int32 price)
	{
		System::String^ query = L"UPDATE Clients SET balance = balance -" + price + " WHERE client_id = " + ClientId;
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		command->ExecuteNonQuery();
	}

	public: Void AddPurchased(String^ title, String^ price)
	{		
		System::String^ query = L"UPDATE Clients SET services = services &'" + title + GlobalSettings::borderBetweenColumns + price + GlobalSettings::borderBetweenFields + "' WHERE client_id = " + ClientId;
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		command->ExecuteNonQuery();
	}

	public: Void PrintPurchasedServices()
	{
		System::String^ query = L"SELECT services FROM Clients WHERE client_id = " + ClientId;
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		auto result = command->ExecuteScalar();
		if (result == nullptr)
		{
			return;
		}
		String^ UserServices = Convert::ToString(result);
		purchases->Items->Clear();
		auto lines = UserServices->Split(GlobalSettings::borderCharBetweenFields);
		
		for (int i = 0; i < lines->Length; i++)
		{
			if (lines[i]->Length > 1)
			{
				auto columns = lines[i]->Split(Convert::ToChar(GlobalSettings::borderBetweenColumns));
				//purchases->Items->Add(GlobalSettings::StringWithCertainSize(columns[0]->ToString(), GlobalSettings::servicesTitleLen) + "  " + GlobalSettings::StringWithCertainSize(columns[1]->ToString(), GlobalSettings::servicesPriceLen));
				purchases->Items->Add(GlobalSettings::StringWithCertainSize(columns[0]->ToString(), GlobalSettings::servicesTitleLen) + "  " + columns[1]->ToString());

			}
		}

	}

	public: Void BuyService()
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

		String^ servicesId = selected_text[0];
		String^ title;
		String^ price;

		if (!OutServicesData(servicesId, title, price))
		{
			MessageBox::Show(L"������ � ������ �����������", L"������");
			return;
		}

		Int32 payment = Convert::ToInt32(price);
		if (payment > GetBalance())
		{
			MessageBox::Show(L"������������ ������� �� �����");
			return;
		}

		Payment(payment);
		AddPurchased(title, price);		
		printBalance();
		PrintPurchasedServices();
		MessageBox::Show(L"������ ���������\n������ ������ �������");				
	}
	};
}