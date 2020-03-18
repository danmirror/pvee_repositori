#pragma once

namespace konversimatauang {

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
	protected: 


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tb_kurs;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tb_yen;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  USD;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  rupiah;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  yen;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb_kurs = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_yen = (gcnew System::Windows::Forms::TextBox());
			this->USD = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rupiah = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->yen = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->USD, this->rupiah, 
				this->yen});
			this->dataGridView1->Location = System::Drawing::Point(19, 15);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(290, 279);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(339, 98);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"hitung";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(326, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"1 USD  = Rp";
			// 
			// tb_kurs
			// 
			this->tb_kurs->Location = System::Drawing::Point(415, 44);
			this->tb_kurs->Name = L"tb_kurs";
			this->tb_kurs->Size = System::Drawing::Size(100, 20);
			this->tb_kurs->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(326, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"1 USD  = Yen";
			// 
			// tb_yen
			// 
			this->tb_yen->Location = System::Drawing::Point(415, 70);
			this->tb_yen->Name = L"tb_yen";
			this->tb_yen->Size = System::Drawing::Size(100, 20);
			this->tb_yen->TabIndex = 5;
			// 
			// USD
			// 
			this->USD->HeaderText = L"USD";
			this->USD->Name = L"USD";
			// 
			// rupiah
			// 
			this->rupiah->HeaderText = L"Rupiah";
			this->rupiah->Name = L"rupiah";
			// 
			// yen
			// 
			this->yen->HeaderText = L"Yen";
			this->yen->Name = L"yen";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(527, 326);
			this->Controls->Add(this->tb_yen);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tb_kurs);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form1";
			this->Text = L"text";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int kurs,kurs2, rupiah ,USD,yen;
				 kurs = Convert::ToInt16(tb_kurs->Text);
				 kurs2 = Convert::ToInt16(tb_yen->Text);
				 dataGridView1->Rows->Add(9);
				 for (int i=1; i<=10; i++){
					USD = i;
					rupiah = i*kurs;
					yen = i*kurs2;
					dataGridView1->Rows[i-1]->Cells["USD"]->Value = Convert::ToString(USD);
					dataGridView1->Rows[i-1]->Cells["rupiah"]->Value = Convert::ToString(rupiah);
					dataGridView1->Rows[i-1]->Cells["yen"]->Value = Convert::ToString(yen);
				 }			 
			 }


};
}

