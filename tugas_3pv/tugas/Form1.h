#pragma once

namespace tugas {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;










	private: System::Windows::Forms::Button^  btn_convert;
	private: System::Windows::Forms::Button^  btn_adjust;
	private: System::Windows::Forms::Button^  btn_close;
	private: System::Windows::Forms::Label^  author;
	private: System::Windows::Forms::Label^  nama;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;












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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->btn_convert = (gcnew System::Windows::Forms::Button());
			this->btn_adjust = (gcnew System::Windows::Forms::Button());
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->author = (gcnew System::Windows::Forms::Label());
			this->nama = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(46, 82);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(43, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(145, 82);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(43, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(245, 82);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(43, 20);
			this->textBox3->TabIndex = 2;
			// 
			// btn_convert
			// 
			this->btn_convert->Location = System::Drawing::Point(63, 136);
			this->btn_convert->Name = L"btn_convert";
			this->btn_convert->Size = System::Drawing::Size(66, 26);
			this->btn_convert->TabIndex = 7;
			this->btn_convert->Text = L"Convert";
			this->btn_convert->UseVisualStyleBackColor = true;
			this->btn_convert->Click += gcnew System::EventHandler(this, &Form1::btn_convert_Click);
			// 
			// btn_adjust
			// 
			this->btn_adjust->BackColor = System::Drawing::Color::Yellow;
			this->btn_adjust->Location = System::Drawing::Point(107, 82);
			this->btn_adjust->Name = L"btn_adjust";
			this->btn_adjust->Size = System::Drawing::Size(22, 20);
			this->btn_adjust->TabIndex = 8;
			this->btn_adjust->Text = L"+";
			this->btn_adjust->UseVisualStyleBackColor = false;
			this->btn_adjust->Click += gcnew System::EventHandler(this, &Form1::btn_adjust_Click);
			// 
			// btn_close
			// 
			this->btn_close->Location = System::Drawing::Point(211, 136);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(76, 26);
			this->btn_close->TabIndex = 9;
			this->btn_close->Text = L"Exit";
			this->btn_close->UseVisualStyleBackColor = true;
			this->btn_close->Click += gcnew System::EventHandler(this, &Form1::btn_close_Click);
			// 
			// author
			// 
			this->author->Location = System::Drawing::Point(377, 25);
			this->author->Name = L"author";
			this->author->Size = System::Drawing::Size(100, 23);
			this->author->TabIndex = 10;
			this->author->Text = L"Ahmad Riyatno";
			this->author->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nama
			// 
			this->nama->Location = System::Drawing::Point(338, 229);
			this->nama->Name = L"nama";
			this->nama->Size = System::Drawing::Size(100, 23);
			this->nama->TabIndex = 11;
			this->nama->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->nama->Click += gcnew System::EventHandler(this, &Form1::nama_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(208, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(60, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"cm";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(159, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"km";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(255, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"m";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(498, 261);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nama);
			this->Controls->Add(this->author);
			this->Controls->Add(this->btn_close);
			this->Controls->Add(this->btn_adjust);
			this->Controls->Add(this->btn_convert);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Convert to meters";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

int adjust;
#pragma endregion
	
private: System::Void btn_adjust_Click(System::Object^  sender, System::EventArgs^  e) {

			 //merupan menjadi pengurangn,perkalian dan pembagian
			if (adjust==0){btn_adjust->Text = "-"; adjust = 1;}
			else if(adjust==1){btn_adjust->Text = "x"; adjust = 2;}
			else if(adjust==2){btn_adjust->Text = ":"; adjust = 3;}
			else {btn_adjust->Text = "+"; adjust = 0;}
		 }

private: System::Void btn_close_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::Close();
		 }
private: System::Void btn_convert_Click(System::Object^  sender, System::EventArgs^  e) {
		//jika program kosong
		if(String::IsNullOrEmpty(textBox1->Text)){  
				 MessageBox::Show("isikan nilai pada kolom inputan");
			}
		else{
				double input1 = double::Parse(textBox1->Text);
				double input2 = double::Parse(textBox2->Text);	

				//konversi ke meter
					input1 = input1/100;
					input2 = input2*1000;
				//perintah pembagian/pengurangan /perkalian/pertambahan
					if(adjust==0){
						double jumlah = input1+input2;
						textBox3->Text = Convert::ToString(jumlah);
					}
					else if(adjust==1){
						double jumlah = input1 - input2;
						textBox3->Text = Convert::ToString(jumlah);
					}
					else if(adjust==2){
						double jumlah = input1 * input2;
						textBox3->Text = Convert::ToString(jumlah);
					}
					else {
						double jumlah = input1 / input2;
						textBox3->Text = Convert::ToString(jumlah);
					}
			}}

private: System::Void nama_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

