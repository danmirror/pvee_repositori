#pragma once
#include<math.h>

namespace kalkulator_sederhana {

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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  rb_kali;
	private: System::Windows::Forms::RadioButton^  rb_kurang;
	private: System::Windows::Forms::RadioButton^  rb_tambah;
	private: System::Windows::Forms::TextBox^  tb1;
	private: System::Windows::Forms::TextBox^  tb2;
	private: System::Windows::Forms::TextBox^  tb3;
	private: System::Windows::Forms::Button^  button1;



	protected: 







	private: System::Windows::Forms::RadioButton^  rb_bagi;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RadioButton^  rb_akar;
	private: System::Windows::Forms::RadioButton^  rb_pangkat;
	private: System::Windows::Forms::RadioButton^  rb_acos;
	private: System::Windows::Forms::RadioButton^  rb_atan;
	private: System::Windows::Forms::RadioButton^  rb_asin;
	private: System::Windows::Forms::RadioButton^  rb_cos;
	private: System::Windows::Forms::RadioButton^  rb_sin;








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rb_cos = (gcnew System::Windows::Forms::RadioButton());
			this->rb_sin = (gcnew System::Windows::Forms::RadioButton());
			this->rb_asin = (gcnew System::Windows::Forms::RadioButton());
			this->rb_atan = (gcnew System::Windows::Forms::RadioButton());
			this->rb_acos = (gcnew System::Windows::Forms::RadioButton());
			this->rb_pangkat = (gcnew System::Windows::Forms::RadioButton());
			this->rb_akar = (gcnew System::Windows::Forms::RadioButton());
			this->rb_bagi = (gcnew System::Windows::Forms::RadioButton());
			this->rb_kali = (gcnew System::Windows::Forms::RadioButton());
			this->rb_kurang = (gcnew System::Windows::Forms::RadioButton());
			this->rb_tambah = (gcnew System::Windows::Forms::RadioButton());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->tb2 = (gcnew System::Windows::Forms::TextBox());
			this->tb3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->rb_cos);
			this->groupBox1->Controls->Add(this->rb_sin);
			this->groupBox1->Controls->Add(this->rb_asin);
			this->groupBox1->Controls->Add(this->rb_atan);
			this->groupBox1->Controls->Add(this->rb_acos);
			this->groupBox1->Controls->Add(this->rb_pangkat);
			this->groupBox1->Controls->Add(this->rb_akar);
			this->groupBox1->Controls->Add(this->rb_bagi);
			this->groupBox1->Controls->Add(this->rb_kali);
			this->groupBox1->Controls->Add(this->rb_kurang);
			this->groupBox1->Controls->Add(this->rb_tambah);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Raleway Black", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(287, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(220, 212);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"MODE KALKULATOR";
			// 
			// rb_cos
			// 
			this->rb_cos->AutoSize = true;
			this->rb_cos->Font = (gcnew System::Drawing::Font(L"Rockwell", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rb_cos->Location = System::Drawing::Point(122, 113);
			this->rb_cos->Name = L"rb_cos";
			this->rb_cos->Size = System::Drawing::Size(67, 18);
			this->rb_cos->TabIndex = 10;
			this->rb_cos->Text = L"cosinus";
			this->rb_cos->UseVisualStyleBackColor = true;
			this->rb_cos->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb_cos_CheckedChanged);
			// 
			// rb_sin
			// 
			this->rb_sin->AutoSize = true;
			this->rb_sin->Font = (gcnew System::Drawing::Font(L"Rockwell", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rb_sin->Location = System::Drawing::Point(122, 89);
			this->rb_sin->Name = L"rb_sin";
			this->rb_sin->Size = System::Drawing::Size(58, 18);
			this->rb_sin->TabIndex = 9;
			this->rb_sin->Text = L" sinus";
			this->rb_sin->UseVisualStyleBackColor = true;
			this->rb_sin->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb_sin_CheckedChanged);
			// 
			// rb_asin
			// 
			this->rb_asin->AutoSize = true;
			this->rb_asin->Font = (gcnew System::Drawing::Font(L"Rockwell", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rb_asin->Location = System::Drawing::Point(122, 65);
			this->rb_asin->Name = L"rb_asin";
			this->rb_asin->Size = System::Drawing::Size(75, 18);
			this->rb_asin->TabIndex = 8;
			this->rb_asin->Text = L"arc sinus";
			this->rb_asin->UseVisualStyleBackColor = true;
			this->rb_asin->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb_asin_CheckedChanged);
			// 
			// rb_atan
			// 
			this->rb_atan->AutoSize = true;
			this->rb_atan->Font = (gcnew System::Drawing::Font(L"Rockwell", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rb_atan->Location = System::Drawing::Point(122, 41);
			this->rb_atan->Name = L"rb_atan";
			this->rb_atan->Size = System::Drawing::Size(82, 18);
			this->rb_atan->TabIndex = 7;
			this->rb_atan->Text = L"arc tangen";
			this->rb_atan->UseVisualStyleBackColor = true;
			this->rb_atan->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb_atan_CheckedChanged);
			// 
			// rb_acos
			// 
			this->rb_acos->AutoSize = true;
			this->rb_acos->Font = (gcnew System::Drawing::Font(L"Rockwell", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rb_acos->Location = System::Drawing::Point(122, 20);
			this->rb_acos->Name = L"rb_acos";
			this->rb_acos->Size = System::Drawing::Size(87, 18);
			this->rb_acos->TabIndex = 6;
			this->rb_acos->Text = L"arc cosinus";
			this->rb_acos->UseVisualStyleBackColor = true;
			this->rb_acos->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb_acos_CheckedChanged);
			// 
			// rb_pangkat
			// 
			this->rb_pangkat->AutoSize = true;
			this->rb_pangkat->Font = (gcnew System::Drawing::Font(L"Rockwell", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rb_pangkat->Location = System::Drawing::Point(19, 136);
			this->rb_pangkat->Name = L"rb_pangkat";
			this->rb_pangkat->Size = System::Drawing::Size(69, 18);
			this->rb_pangkat->TabIndex = 5;
			this->rb_pangkat->Text = L"pangkat";
			this->rb_pangkat->UseVisualStyleBackColor = true;
			this->rb_pangkat->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb_pangkat_CheckedChanged);
			// 
			// rb_akar
			// 
			this->rb_akar->AutoSize = true;
			this->rb_akar->Font = (gcnew System::Drawing::Font(L"Rockwell", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rb_akar->Location = System::Drawing::Point(19, 112);
			this->rb_akar->Name = L"rb_akar";
			this->rb_akar->Size = System::Drawing::Size(49, 18);
			this->rb_akar->TabIndex = 4;
			this->rb_akar->Text = L"akar";
			this->rb_akar->UseVisualStyleBackColor = true;
			this->rb_akar->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb_akar_CheckedChanged);
			// 
			// rb_bagi
			// 
			this->rb_bagi->AutoSize = true;
			this->rb_bagi->Font = (gcnew System::Drawing::Font(L"Rockwell", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rb_bagi->Location = System::Drawing::Point(19, 88);
			this->rb_bagi->Name = L"rb_bagi";
			this->rb_bagi->Size = System::Drawing::Size(86, 18);
			this->rb_bagi->TabIndex = 3;
			this->rb_bagi->Text = L"pembagian";
			this->rb_bagi->UseVisualStyleBackColor = true;
			this->rb_bagi->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb_bagi_CheckedChanged);
			// 
			// rb_kali
			// 
			this->rb_kali->AutoSize = true;
			this->rb_kali->Font = (gcnew System::Drawing::Font(L"Rockwell", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rb_kali->Location = System::Drawing::Point(19, 65);
			this->rb_kali->Name = L"rb_kali";
			this->rb_kali->Size = System::Drawing::Size(77, 18);
			this->rb_kali->TabIndex = 2;
			this->rb_kali->Text = L"perkalian";
			this->rb_kali->UseVisualStyleBackColor = true;
			this->rb_kali->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb_kali_CheckedChanged);
			// 
			// rb_kurang
			// 
			this->rb_kurang->AutoSize = true;
			this->rb_kurang->Font = (gcnew System::Drawing::Font(L"Rockwell", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rb_kurang->Location = System::Drawing::Point(19, 43);
			this->rb_kurang->Name = L"rb_kurang";
			this->rb_kurang->Size = System::Drawing::Size(97, 18);
			this->rb_kurang->TabIndex = 1;
			this->rb_kurang->Text = L"pengurangan";
			this->rb_kurang->UseVisualStyleBackColor = true;
			this->rb_kurang->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb_kurang_CheckedChanged);
			// 
			// rb_tambah
			// 
			this->rb_tambah->AutoSize = true;
			this->rb_tambah->Font = (gcnew System::Drawing::Font(L"Rockwell", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rb_tambah->Location = System::Drawing::Point(19, 20);
			this->rb_tambah->Name = L"rb_tambah";
			this->rb_tambah->Size = System::Drawing::Size(97, 18);
			this->rb_tambah->TabIndex = 0;
			this->rb_tambah->Text = L"penjumlahan";
			this->rb_tambah->UseVisualStyleBackColor = true;
			this->rb_tambah->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb_tambah_CheckedChanged);
			// 
			// tb1
			// 
			this->tb1->Location = System::Drawing::Point(100, 40);
			this->tb1->Name = L"tb1";
			this->tb1->Size = System::Drawing::Size(116, 20);
			this->tb1->TabIndex = 1;
			// 
			// tb2
			// 
			this->tb2->Location = System::Drawing::Point(100, 66);
			this->tb2->Name = L"tb2";
			this->tb2->Size = System::Drawing::Size(116, 20);
			this->tb2->TabIndex = 2;
			// 
			// tb3
			// 
			this->tb3->Location = System::Drawing::Point(100, 106);
			this->tb3->Name = L"tb3";
			this->tb3->Size = System::Drawing::Size(116, 20);
			this->tb3->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(112, 150);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 19);
			this->button1->TabIndex = 4;
			this->button1->Text = L"HITUNG";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"ANGKA 1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(12, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"ANGKA 2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(12, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"HASIL";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(519, 250);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tb3);
			this->Controls->Add(this->tb2);
			this->Controls->Add(this->tb1);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Raleway Black", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"CLI";
			this->TopMost = true;
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			if(String::IsNullOrEmpty(tb1->Text)){
				MessageBox::Show("anda belum masukan input ke 1");
			}
			else if(String::IsNullOrEmpty(tb2->Text)){
					MessageBox::Show("anda belum masukan input ke 2");	
			}
			else{
				try{
					double text1 = Convert::ToDouble(tb1->Text);
					double text2 = Convert::ToDouble(tb2->Text);
					double result;
					if(rb_tambah->Checked){
						result = text1+text2;
					}
					else if(rb_kurang->Checked){
						result = text1-text2;
					}
					else if(rb_kali->Checked){
						result = text1*text2;
					}
					else if(rb_akar->Checked){
						result =sqrt(text1);
					}
					else if(rb_pangkat->Checked){ 
						result = pow(text1,text2);
					}
					else if(rb_acos->Checked){ 
						result = acos(text1)*180/3.14159265;
					}
					else if(rb_atan->Checked){ 
						result = atan(text1)*180/3.14159265;
					}
					else if(rb_asin->Checked){ 
						result = asin(text1)*180/3.14159265;
					}
					else if(rb_sin->Checked){ 
						result = sin(text1*3.14159265/180.0);
					}
					else if(rb_cos->Checked){ 
						result = cos(text1*3.14159265/180.0);
					}
					else if(rb_bagi->Checked){
						result = text1/text2;
					}
					tb3->Text = Convert::ToString (result);

				}
				catch(Exception ^e){
					MessageBox::Show("yang anda masukan bukan angka");
				}
			}//akhir else
	
		}
private: System::Void rb_akar_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 tb2->Text = "0";
			 tb2->Enabled = false;
			 label2->Text = "----";
		 }
private: System::Void rb_tambah_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			tb2->Enabled = true;
			label2->Text = "ANGKA 2";
		 }
private: System::Void rb_kurang_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			tb2->Enabled = true;
			label2->Text = "ANGKA 2";
		 }

private: System::Void rb_kali_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 tb2->Enabled = true;
			 label2->Text = "ANGKA 2";
		 }
private: System::Void rb_bagi_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 tb2->Enabled = true;
			 label2->Text = "ANGKA 2";
		 }
private: System::Void rb_pangkat_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 tb2->Enabled = true;
			 label2->Text = "PANGKAT";
		 }
private: System::Void rb_acos_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 tb2->Enabled = false;
			 label2->Text = "----";
		 }
private: System::Void rb_atan_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 tb2->Enabled = false;
			 label2->Text = "----";
		 }
private: System::Void rb_asin_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 tb2->Enabled = false;
			 label2->Text = "----";
		 }
private: System::Void rb_sin_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 tb2->Enabled = false;
			 label2->Text = "----";
		 }
private: System::Void rb_cos_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 tb2->Enabled = false;
			 label2->Text = "----";
		 }
};
}

