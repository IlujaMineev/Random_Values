#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace SBERBANK;

[STAThreadAttribute]
Void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyForm form;
	Application::Run(%form);
}