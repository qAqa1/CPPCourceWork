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

	static public ref class SQL_helper
	{
	    public: static String^ Md5(String^ source)
		{
			StringBuilder hash;

			MD5 ^ md5 = MD5::Create();
			try
			{
				array<unsigned char> ^ data = md5->ComputeHash(Encoding::UTF8->GetBytes(source));

				for (int i = 0; i < data->Length; ++i)
				{
					hash.Append(data[i].ToString("x2"));
				}
				return hash.ToString();				
			}
			finally
			{
			delete md5;			
			}
			return String::Empty;
		}

	    public: static String^ role_name(int type_id)
		{
			System::String^ query = L"SELECT role_name FROM Roles WHERE role_id = " + type_id.ToString();
			OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
			auto result = command->ExecuteScalar();
			if (result == nullptr)
			{
				return(String::Empty);
			}
			return(result->ToString());
		}

	public: static Void Ban(String^ user_phone)
	{
		System::String^ query = L"UPDATE Users SET banned = TRUE WHERE phone_number = '" + user_phone+"'";
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		command->ExecuteNonQuery();
	}

	public: static Void UnBan(String^ user_phone)
	{
		System::String^ query = L"UPDATE Users SET banned = FALSE WHERE phone_number = '" + user_phone + "'";
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		command->ExecuteNonQuery();
	}

	public: static Void MakeЕmployee(String^ user_phone)
	{
		System::String^ query = L"UPDATE Users SET role_id = 2 WHERE phone_number = '" + user_phone + "'";
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		command->ExecuteNonQuery();
	}

	public: static Void MakeUser(String^ user_phone)
	{
		System::String^ query = L"UPDATE Users SET role_id = 1 WHERE phone_number = '" + user_phone + "'";
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		command->ExecuteNonQuery();
	}

	public: static Void ResetPassword(String^ user_phone)
	{
		System::String^ query = L"UPDATE Users SET user_password = '"+SQL_helper::Md5(GlobalSettings::defaultPassword)+"' WHERE phone_number = '" + user_phone + "'";
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		command->ExecuteNonQuery();
	}

	public: static String^ ClientNameAndSurname(Int32 client_id)
	{
		System::String^ query = L"SELECT client_name,client_surname FROM Clients WHERE client_id = " + client_id;
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		OleDbDataReader^ reader = command->ExecuteReader();
		if (reader->Read())
		{			
			String^ name = reader[0]->ToString();
			String^ surname = reader[1]->ToString();
			reader->Close();
			return(name +" "+ surname);
		}
		else
		{
			reader->Close();
			return(String::Empty);
		}
	}

	public: static String^ ClientTariffTitle(Int32 client_id,bool &old)
	{
		System::String^ query = L"SELECT tariff_id FROM Clients WHERE client_id = " + client_id;
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		OleDbDataReader^ reader = command->ExecuteReader();
		if (reader->Read())
		{
			System::String^ query2 = L"SELECT title, old FROM Tariffs WHERE tariff_id = " + Convert::ToInt32(reader[0]);
			OleDbCommand^ command2 = gcnew OleDbCommand(query2, Connection::myConnect);
			OleDbDataReader^ reader2 = command2->ExecuteReader();
			if (reader2->Read())
			{
				if (reader2[1]->ToString() == L"True")
				{
					old = true;
				}
				else
				{
					old = false;
				}

				String^ tariffTitle = reader2[0]->ToString();
				reader2->Close();				
				return(tariffTitle);
			}
			else
			{
				reader2->Close();
				return(String::Empty);
			}
		}
		else
		{
			reader->Close();
			return(String::Empty);
		}
	}

	public: static Void TarrifOld(Int32 tarrif_id)
	{
		System::String^ query = L"UPDATE Tariffs SET old = TRUE WHERE tariff_id = " + tarrif_id;
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		command->ExecuteNonQuery();
	}

	public: static Void TarrifCurrent(Int32 tarrif_id)
	{
		System::String^ query = L"UPDATE Tariffs SET old = FALSE WHERE tariff_id = " + tarrif_id;
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		command->ExecuteNonQuery();
	}

	public: static String^ TarrifDetailedInformation(Int32 tarrif_id)
	{
		System::String^ query = L"SELECT title,detailed_information FROM Tariffs WHERE tariff_id = " + tarrif_id;
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		OleDbDataReader^ reader = command->ExecuteReader();
		if (reader->Read())
		{
			String^ result = reader[0]->ToString()+":\n\n" + reader[1]->ToString();
			reader->Close();
			return(result);
		}
		else
		{
			reader->Close();
			return(L"Ошибка");
		}
	}

	public: static String^ AkkauntInformationForAdmin(String^ phoneNumber)
	{
		String^ query = L"SELECT Users.phone_number, Users.user_login, Clients.client_name, Clients.client_surname, Tariffs.title, Roles.role_name, Clients.balance, Clients.passport_ID, Clients.year_of_birth, Clients.place_of_residence, Users.registration_time, Users.banned FROM (((Users INNER JOIN Clients ON Users.client_id = Clients.client_id) INNER JOIN Tariffs ON Clients.tariff_id = Tariffs.tariff_id) INNER JOIN Roles ON Users.role_id = Roles.role_id) WHERE Users.phone_number = '" + phoneNumber + "'";
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		OleDbDataReader^ reader = command->ExecuteReader();

		if (reader->Read())
		{
			String^ banned = L"-";
			if (reader[11]->ToString() == L"True")
			{
				banned = L" Забанен";
			}
			if (reader[11]->ToString() == L"False")
			{
				banned = L" Активен";
			}
			
			String^ result = "Информация о аккаунте " + phoneNumber + ":\n" +
		  "\nНомер телефона: " + reader[0]->ToString() +
				   "\nЛогин: " + reader[1]->ToString() +
				     "\nИмя: " + reader[2]->ToString() +
				 "\nФамилия: " + reader[3]->ToString() +
		 "\nНомер пасспорта: " + reader[7]->ToString() +
		    "\nГод рождения: " + reader[8]->ToString() +
		  "\nАдрес прописки: " + reader[9]->ToString() +
				   "\nТариф: " + reader[4]->ToString() +
				    "\nРоль: " + reader[5]->ToString() +
				  "\nБаланс: " + reader[6]->ToString() + " рублей" +
		"\nДата регистрации: " + reader[10]->ToString() +
			      "\nСтатус: " + banned;
			reader->Close();
			return result;
		}

		reader->Close();
		return (L"Ошибка");
	}

	public: static String^ AkkauntInformationForЕmployee(String^ phoneNumber)
	{
		String^ query = L"SELECT Users.phone_number, Users.user_login, Clients.client_name, Clients.client_surname, Tariffs.title, Clients.year_of_birth, Users.banned FROM (((Users INNER JOIN Clients ON Users.client_id = Clients.client_id) INNER JOIN Tariffs ON Clients.tariff_id = Tariffs.tariff_id) INNER JOIN Roles ON Users.role_id = Roles.role_id) WHERE Users.phone_number = '" + phoneNumber + "'";
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		OleDbDataReader^ reader = command->ExecuteReader();

		if (reader->Read())
		{
			String^ banned = L"-";
			if (reader[6]->ToString() == L"True")
			{
				banned = L" Забанен";
			}
			if (reader[6]->ToString() == L"False")
			{
				banned = L" Активен";
			}

			String^ result = "Информация о аккаунте " + phoneNumber + ":\n" +
	   "\nНомер телефона: " + reader[0]->ToString() +
				"\nЛогин: " + reader[1]->ToString() +
				  "\nИмя: " + reader[2]->ToString() +
			  "\nФамилия: " + reader[3]->ToString() +
		 "\nГод рождения: " + reader[5]->ToString() +
			    "\nТариф: " + reader[4]->ToString() +		 
		       "\nСтатус: " + banned;
			reader->Close();
			return result;
		}

		reader->Close();
		return (L"Ошибка");
	}

	public: static Void DeleteUser(String^ phoneNumber)
	{
		System::String^ query = L"SELECT client_id FROM Users WHERE phone_number = '" + phoneNumber + "'";
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		System::Int32 client_id = Convert::ToInt32(command->ExecuteScalar());

		System::String^ query2 = L"DELETE FROM Clients WHERE client_id = " + client_id;
		OleDbCommand^ command2 = gcnew OleDbCommand(query2, Connection::myConnect);
		command2->ExecuteNonQuery();

		System::String^ query3 = L"DELETE FROM Users WHERE client_id = " + client_id;
		OleDbCommand^ command3 = gcnew OleDbCommand(query3, Connection::myConnect);
		command3->ExecuteNonQuery();
	}

	public: static Void DeleteUser(Int32 client_id)
	{
		System::String^ query = L"DELETE FROM Clients WHERE client_id = " + client_id;
		OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
		command->ExecuteNonQuery();

		System::String^ query2 = L"DELETE FROM Users WHERE client_id = " + client_id;
		OleDbCommand^ command2 = gcnew OleDbCommand(query2, Connection::myConnect);
		command2->ExecuteNonQuery();
	}
	};
}