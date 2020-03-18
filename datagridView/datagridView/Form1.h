#pragma once

namespace datagridView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NIM;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NAMA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ALAMAT;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  KELAMIN;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  TIME;











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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->NO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NIM = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NAMA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ALAMAT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->KELAMIN = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->TIME = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->NO, this->NIM, 
				this->NAMA, this->ALAMAT, this->KELAMIN, this->TIME});
			this->dataGridView1->Location = System::Drawing::Point(-1, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(703, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// NO
			// 
			this->NO->HeaderText = L"NO";
			this->NO->Name = L"NO";
			// 
			// NIM
			// 
			this->NIM->HeaderText = L"NIM";
			this->NIM->Name = L"NIM";
			// 
			// NAMA
			// 
			this->NAMA->HeaderText = L"NAMA";
			this->NAMA->Name = L"NAMA";
			// 
			// ALAMAT
			// 
			this->ALAMAT->HeaderText = L"ALAMAT";
			this->ALAMAT->Name = L"ALAMAT";
			// 
			// KELAMIN
			// 
			this->KELAMIN->HeaderText = L"L/P";
			this->KELAMIN->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"laki-laki", L"perempuan"});
			this->KELAMIN->Name = L"KELAMIN";
			this->KELAMIN->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// TIME
			// 
			this->TIME->HeaderText = L"FULL TIME\?";
			this->TIME->Name = L"TIME";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(739, 261);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 NO->Text="1";
			 }
};
}

