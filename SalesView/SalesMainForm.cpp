#include "SalesMainForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //SalesController::DBController::LoadUsers();
    SalesView::SalesMainForm form;
    Application::Run(% form);
    //Cambio
}