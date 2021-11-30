#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;



[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //Interface is your project name
    Interface::MyForm form;
    Application::Run(% form);
}
