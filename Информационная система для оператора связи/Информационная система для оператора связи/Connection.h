namespace CppCLR_WinformsProjekt
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	static public ref  class Connection
	{

	public: static System::String^ CONNECTION_STRING = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source = EsimDatabase.mdb";
	public: static System::Data::OleDb::OleDbConnection^ myConnect;

	public: static void Start()
	{
		myConnect = gcnew OleDbConnection(CONNECTION_STRING);
		myConnect->Open();
	}

	public: static void Close()
	{
		myConnect->Close();
	}
	};
}