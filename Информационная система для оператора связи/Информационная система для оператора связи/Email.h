namespace CppCLR_WinformsProjekt
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace System::Net::Mail;
	//using namespace System::Net;

	static public ref class Email
	{
	 //   public: static System::String^ eMailAddress = "kursachc@yandex.ru";
		//public: static System::String^ password = "FD5477klz";

		public: static Void SendMail(String^ sender, String^ subject, String^ message)
		{
			System::String^ query = L"INSERT INTO Mail (sender, subject, message) VALUES ('" + sender + "','" + subject + "','" + message + "')";
			OleDbCommand^ command = gcnew OleDbCommand(query, Connection::myConnect);
			command->ExecuteNonQuery();
			//// ����������� - ������������� ����� � ������������ � ������ ���
			//MailAddress^ from = gcnew MailAddress(eMailAddress, sender + " (client_id = " + clientId + ")");
			//// ���� ����������
			//MailAddress^ to = gcnew MailAddress(eMailAddress);
			//// ������� ������ ���������
			//MailMessage^ m = gcnew MailMessage(from, to);
			//// ���� ������
			//m->Subject = userSelect;
			//// ����� ������
			//m->Body = message;
			//// ������ ������������ ��� html
			////m->IsBodyHtml = true;
			//// ����� smtp-������� � ����, � �������� ����� ���������� ������
			//SmtpClient^ smtp = gcnew SmtpClient("smtp.yandex.ru", Convert::ToInt32(0x19));
			//// ����� � ������
			//smtp->Credentials = gcnew NetworkCredential(eMailAddress, password);
			//smtp->EnableSsl = true;
			//smtp->Send(m);
		}
	};
}