// CppCLR_WinformsProjekt.cpp: Hauptprojektdatei.

// #include "stdafx.h"
// using namespace System;

//int main(array<System::String ^> ^args)
//{
//    Console::WriteLine(L"Hello World");
//    return 0;
//}

#include "GlobalSettings.h"
#include "stdafx.h"
#include "Form1.h"
//#include "Connection.h"
#include "AdminForm.h"
#include "OperatorForm.h"
#include "UserForm.h"


using namespace System;
using namespace System::Windows::Forms;



[STAThread]

// int main(array<String^>^ args) { // Kann Fehler nach 'using namespace std;' verursachen
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);	
	Application::Run(gcnew CppCLR_WinformsProjekt::Form1()); // "CppCLR_WinformsProjekt" noch anpassen
	return 0;
}