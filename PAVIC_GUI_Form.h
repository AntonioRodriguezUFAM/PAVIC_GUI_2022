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
	private: System::Windows::Forms::Button^ filter_blur_button;
	private: System::Windows::Forms::PictureBox^ image_input;
	private: System::Windows::Forms::PictureBox^ image_output;
	private: System::Windows::Forms::Label^ label1;
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
			this->filter_blur_button = (gcnew System::Windows::Forms::Button());
			this->image_input = (gcnew System::Windows::Forms::PictureBox());
			this->image_output = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image_input))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image_output))->BeginInit();
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
			// filter_blur_button
			// 
			this->filter_blur_button->Location = System::Drawing::Point(23, 72);
			this->filter_blur_button->Name = L"filter_blur_button";
			this->filter_blur_button->Size = System::Drawing::Size(103, 60);
			this->filter_blur_button->TabIndex = 1;
			this->filter_blur_button->Text = L"FILTER: BLUR";
			this->filter_blur_button->UseVisualStyleBackColor = true;
			this->filter_blur_button->Click += gcnew System::EventHandler(this, &PAVIC_GUI_Form::filter_blur_button_Click);
			// 
			// image_input
			// 
			this->image_input->Location = System::Drawing::Point(277, 225);
			this->image_input->Name = L"image_input";
			this->image_input->Size = System::Drawing::Size(196, 262);
			this->image_input->TabIndex = 2;
			this->image_input->TabStop = false;
			// 
			// image_output
			// 
			this->image_output->Location = System::Drawing::Point(498, 221);
			this->image_output->Name = L"image_output";
			this->image_output->Size = System::Drawing::Size(212, 265);
			this->image_output->TabIndex = 3;
			this->image_output->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(373, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"PAVIC LAB";
			// 
			// PAVIC_GUI_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->FILTER_GRAY;
			this->ClientSize = System::Drawing::Size(753, 512);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->image_output);
			this->Controls->Add(this->image_input);
			this->Controls->Add(this->filter_blur_button);
			this->Controls->Add(this->FILTER_GRAY);
			this->Name = L"PAVIC_GUI_Form";
			this->Text = L"PAVIC GUI 2022";
			this->TopMost = true;
			this->TransparencyKey = System::Drawing::Color::Blue;
			this->Load += gcnew System::EventHandler(this, &PAVIC_GUI_Form::PAVIC_GUI_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image_input))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image_output))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PAVIC_GUI_Form_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void filter_blur_button_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
