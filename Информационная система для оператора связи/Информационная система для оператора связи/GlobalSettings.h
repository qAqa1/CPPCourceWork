namespace CppCLR_WinformsProjekt
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	static public ref class GlobalSettings
	{
		public: static Int32 minPasswordLen = 6;

		public: static Int32 MAXLoginLen = 15;

		public: static Int32 minNumberLen = 6;		
		public: static Int32 MAXNumberLen = 13;

		public: static Int32 MAXNameLen = 15;

		public: static Int32 MAXSurnameLen = 15;

		public: static Int32 PassportIDLen = 4;
		public: static Int32 tariffIdLen = 6;
		public: static Int32 tariffTitleLen = 17;
		public: static Int32 tariffDescriptionLen = 40;

		public: static Int32 RoleInformationLen = 13;

		public: static Int32 CardNumberLen = 18;
		public: static Int32 SafeCodeLen = 4;

		public: static Int32 servicesIdLen = 6;
		public: static Int32 servicesTitleLen = 17;
		public: static Int32 servicesPriceLen = 5;

		public: static String^ defaultPassword = L"Qwerty123";

		public: static String^ borderBetweenFields = Environment::NewLine;
		public: static Char borderCharBetweenFields = '\n';
		public: static String^ borderBetweenColumns = "|";
		public: static Char borderCharBetweenColumns = '|';

		public: static Int32 mailIdLen = 6;
		public: static Int32 mailSenderLen = 31;
		public: static Int32 mailSubjectLen = 20;
		public: static Int32 mailDepartureTime = 20;

		public: static String^ StringWithCertainSize(String^ str, int new_strLen)
		{
			if (str->Length < new_strLen)
			{
				return (str + gcnew String(' ', new_strLen - str->Length));
			}
		
			if (str->Length > new_strLen)
			{
				return(str->ToString()->Substring(0, new_strLen));
			}

			return str;
		}

		public: static String^ StringWithCertainSize(int new_strLen)
		{
			return (gcnew String(' ', new_strLen));
		}

		public: delegate Void VoidDelegateWithoutArguments();

	public: static Void FormClose()
	{
		Connection::Close();
		Environment::Exit(0);
	}
	};
}