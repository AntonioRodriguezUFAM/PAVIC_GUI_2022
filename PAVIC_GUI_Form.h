#pragma once

namespace PAVICGUI2022 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PAVIC_GUI_Form
	/// </summary>
	public ref class PAVIC_GUI_Form : public System::Windows::Forms::Form
	{
	public:
		PAVIC_GUI_Form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PAVIC_GUI_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ FILTER_GRAY;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->FILTER_GRAY = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// FILTER_GRAY
			// 
			this->FILTER_GRAY->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->FILTER_GRAY->Location = System::Drawing::Point(21, 33);
			this->FILTER_GRAY->Name = L"FILTER_GRAY";
			this->FILTER_GRAY->Size = System::Drawing::Size(105, 33);
			this->FILTER_GRAY->TabIndex = 0;
			this->FILTER_GRAY->Text = L"FILTER: GRAY";
			this->FILTER_GRAY->UseVisualStyleBackColor = true;
			// 
			// PAVIC_GUI_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->FILTER_GRAY;
			this->ClientSize = System::Drawing::Size(753, 512);
			this->Controls->Add(this->FILTER_GRAY);
			this->Name = L"PAVIC_GUI_Form";
			this->Text = L"PAVIC GUI 2022";
			this->TopMost = true;
			this->TransparencyKey = System::Drawing::Color::Blue;
			this->Load += gcnew System::EventHandler(this, &PAVIC_GUI_Form::PAVIC_GUI_Form_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PAVIC_GUI_Form_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
