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

	public ref class AdditionalServices
	{
		public: System::Windows::Forms::Label^ header; // типо заголовок таблицы
		public: System::Windows::Forms::ListBox^  table; // типо сама таблица таблица
		public: AdditionalServices(System::Windows::Forms::Label^ header, System::Windows::Forms::ListBox^ table)
		{
			this->header = header;
			this->table = table;
		}

		private: Void PrintHeader()
		{
			header->Text = GlobalSettings::StringWithCertainSize("Номер. ", GlobalSettings::servicesIdLen) + GlobalSettings::StringWithCertainSize("Заголовок", GlobalSettings::servicesTitleLen) + "  " + GlobalSettings::StringWithCertainSize("Цена", GlobalSettings::servicesPriceLen) + " " + "Статус";
		}

		private: Void PrintHeaderWithoutActive()
		{
			header->Text = GlobalSettings::StringWithCertainSize("Номер. ", GlobalSettings::servicesIdLen) + GlobalSettings::StringWithCertainSize("Заголовок", GlobalSettings::servicesTitleLen) + "  " + GlobalSettings::StringWithCertainSize("Цена", GlobalSettings::servicesPriceLen);
		}

		public: Void Print()
		{
			PrintHeader();
			System::String^ query = L"SELECT services_id, title, price,old FROM Additional_services ORDER BY services_id";
			OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
			OleDbDataReader^ reader = command->ExecuteReader();

			table->Items->Clear();
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
				table->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::servicesIdLen) + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::servicesTitleLen) + "  " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(),GlobalSettings::servicesPriceLen) + " " + old);
			}
			reader->Close();
		}

		public: enum class ServiceStatus
		{
			ative,
			old
		};

		private: static String^ ServiceStatusToRequestPart(ServiceStatus serviceStatus)
		{
			String^ partOfTheRequest;
			if (serviceStatus == ServiceStatus::ative)
			{
				return(L"FAlSE");
			}
			else
			{
				return(L"TRUE");
			}
		}

		public: Void PrintWithoutActive(ServiceStatus serviceStatus)
		{
			PrintHeaderWithoutActive();

			System::String^ query = L"SELECT services_id, title, price FROM Additional_services WHERE old = " + ServiceStatusToRequestPart(serviceStatus) + L" ORDER BY services_id";
			OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
			OleDbDataReader^ reader = command->ExecuteReader();

			table->Items->Clear();
			while (reader->Read())
			{
				table->Items->Add(GlobalSettings::StringWithCertainSize(reader[0]->ToString() + ". ", GlobalSettings::servicesIdLen) + GlobalSettings::StringWithCertainSize(reader[1]->ToString(), GlobalSettings::servicesTitleLen) + "  " + GlobalSettings::StringWithCertainSize(reader[2]->ToString(), GlobalSettings::servicesPriceLen));
			}
			reader->Close();
		}
		public: static Void SetArchive(Int32 services_id, ServiceStatus serviceStatus)
		{
			System::String^ query = L"UPDATE Additional_services SET old = " + ServiceStatusToRequestPart(serviceStatus) + " WHERE services_id = " + services_id;
			OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
			command->ExecuteNonQuery();
		}

		public: Void СhangeStatusSelectedService(ServiceStatus serviceStatus)
		{
			if (table->SelectedItem == nullptr)
			{
				MessageBox::Show(L"Ничего не выделено", L"Ошибка");
				return;
			}

			auto selected_text = table->SelectedItem->ToString()->Split('.');

			if (selected_text->Length == 0)
			{
				MessageBox::Show(L"Данные отсутствуют", L"Ошибка");
				return;
			}

			AdditionalServices::SetArchive(Convert::ToInt32(selected_text[0]), serviceStatus);

			if (serviceStatus == AdditionalServices::ServiceStatus::ative)
			{
				MessageBox::Show(L"Выбранная услуга теперь акуальна");
			}
			else
			{
				MessageBox::Show(L"Выбранная услуга отправлена в архив");
			}
			Print();
		}

		public: static Void DeleteService(Int32 services_id)
		{
			System::String^ query = L"DELETE FROM Additional_services WHERE services_id = " + services_id;
			OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
			command->ExecuteNonQuery();
		}

		public: Void DeleteSelectedService()
		{
			if (table->SelectedItem == nullptr)
			{
				MessageBox::Show(L"Ничего не выделено", L"Ошибка");
				return;
			}

			auto selected_text = table->SelectedItem->ToString()->Split('.');

			if (selected_text->Length == 0)
			{
				MessageBox::Show(L"Данные отсутствуют", L"Ошибка");
				return;
			}

			DeleteService(Convert::ToInt32(selected_text[0]));

			MessageBox::Show(L"Выбранная услуга удалена");
			Print();
		}

		public: static String^ ServiceDetailedInformation(Int32 services_id)
		{
			System::String^ query = L"SELECT title, description FROM Additional_services WHERE services_id = " + services_id;
			OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
			OleDbDataReader^ reader = command->ExecuteReader();
			if (reader->Read())
			{
				String^ result = reader[0]->ToString() + ":\n\n" + reader[1]->ToString();
				reader->Close();
				return(result);
			}
			else
			{
				reader->Close();
				return(L"Ошибка");
			}
		}

		public: Void SelectedServiceDescription()
		{
			if (table->SelectedItem == nullptr)
			{
				MessageBox::Show(L"Ничего не выделено", L"Ошибка");
				return;
			}

			auto selected_text = table->SelectedItem->ToString()->Split('.');

			if (selected_text->Length == 0)
			{
				MessageBox::Show(L"Данные отсутствуют", L"Ошибка");
				return;
			}

			MessageBox::Show(ServiceDetailedInformation(Convert::ToInt32(selected_text[0])),L"Информация об услуге");
		}

		public: static Void GetServicesData(TextBox^ Id, TextBox^ Title, TextBox^ Description, TextBox^ Price)
		{
			if (String::IsNullOrWhiteSpace(Id->Text))
			{
				MessageBox::Show(L"Вы не ввели номер номер", L"Ошибка");
				return;
			}
			String^ outTitle, ^outDescription, ^outPrice;

			if (AdditionalServices::OutServicesData(Id->Text, outTitle, outDescription, outPrice))
			{
				Title->Text = outTitle;
				Description->Text = outDescription;
				Price->Text = outPrice;
			}
			else
			{
				MessageBox::Show(L"По данному номеру ничего нет", L"Ошибка");
			}
		}

		public: static Boolean OutServicesData(String^ services_id, String^ &outTitle, String^ &outDescription, String^ &outPrice)
		{
			System::String^ query = L"SELECT title, description, price FROM Additional_services WHERE services_id = " + services_id;
			OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
			OleDbDataReader^ reader = command->ExecuteReader();
			if (reader->Read())
			{
				outTitle = reader[0]->ToString();
				outDescription = reader[1]->ToString();
				outPrice = reader[2]->ToString();
				reader->Close();
				return(true);
			}
			else
			{
				reader->Close();
				return(false);
			}
		}

		public: static Boolean ServiceExist(String^ servicesId)
		{
			System::String^ query = L"SELECT * FROM Additional_services WHERE services_id = " + servicesId;
			OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
			if (command->ExecuteScalar() == nullptr)
			{
				return(false);
			}
			return(true);
		}

		public: static Void ChangeService(String^ servicesId, String^ title, String^ description, String^ price)
		{
			System::String^ query = L"UPDATE Additional_services SET services_id = " + servicesId + ",title = '" + title + "', description = '" + description + "', price = " + price + " WHERE services_id = " + servicesId;
			OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
			command->ExecuteNonQuery();
		}

		public: static Void AddService(String^ servicesId, String^ title, String^ description, String^ price)
		{
			System::String^ query = L"INSERT INTO Additional_services (services_id, title, Description, price) VALUES (" + servicesId + ",'" + title + "','" + description + "'," + price + ")";
			OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
			command->ExecuteNonQuery();
		}
	};
}