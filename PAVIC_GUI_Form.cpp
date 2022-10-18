#include "PAVIC_GUI_Form.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args){

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	PAVICGUI2022::PAVIC_GUI_Form form;
	Application::Run(% form);
}