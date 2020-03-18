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
	private: System::Windows::Forms::Button^  btn_cm;







	private: System::Windows::Forms::Button^  btn_m;
	private: System::Windows::Forms::Button^  btn_km;
	private: System::Windows::Forms::Button^  btn_convert;
	private: System::Windows::Forms::Button^  btn_adjust;
	private: System::Windows::Forms::Button^  btn_close;
	private: System::Windows::Forms::Label^  author;
	private: System::Windows::Forms::Label^  nama;
	private: System::Windows::Forms::Label^  label1;












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
			this->btn_cm = (gcnew System::Windows::Forms::Button());
			this->btn_m = (gcnew System::Windows::Forms::Button());
			this->btn_km = (gcnew System::Windows::Forms::Button());
			this->btn_convert = (gcnew System::Windows::Forms::Button());
			this->btn_adjust = (gcnew System::Windows::Forms::Button());
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->author = (gcnew System::Windows::Forms::Label());
			this->nama = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(46, 82);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(43, 20);
			this->textBox1->TabIndex = 0;
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
			this->textBox3->Location = System::Drawing::Point(245, 82);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(43, 20);
			this->textBox3->TabIndex = 2;
			// 
			// btn_cm
			// 
			this->btn_cm->BackColor = System::Drawing::Color::Yellow;
			this->btn_cm->Location = System::Drawing::Point(46, 29);
			this->btn_cm->Name = L"btn_cm";
			this->btn_cm->Size = System::Drawing::Size(43, 26);
			this->btn_cm->TabIndex = 3;
			this->btn_cm->Text = L"cm";
			this->btn_cm->UseVisualStyleBackColor = false;
			this->btn_cm->Click += gcnew System::EventHandler(this, &Form1::btn_cm_Click);
			// 
			// btn_m
			// 
			this->btn_m->BackColor = System::Drawing::Color::Yellow;
			this->btn_m->Location = System::Drawing::Point(245, 29);
			this->btn_m->Name = L"btn_m";
			this->btn_m->Size = System::Drawing::Size(43, 26);
			this->btn_m->TabIndex = 5;
			this->btn_m->Text = L"m";
			this->btn_m->UseVisualStyleBackColor = false;
			// 
			// btn_km
			// 
			this->btn_km->BackColor = System::Drawing::Color::Yellow;
			this->btn_km->Location = System::Drawing::Point(145, 29);
			this->btn_km->Name = L"btn_km";
			this->btn_km->Size = System::Drawing::Size(43, 26);
			this->btn_km->TabIndex = 4;
			this->btn_km->Text = L"km";
			this->btn_km->UseVisualStyleBackColor = false;
			this->btn_km->Click += gcnew System::EventHandler(this, &Form1::btn_km_Click);
			// 
			// btn_convert
			// 
			this->btn_convert->Location = System::Drawing::Point(63, 136);
			this->btn_convert->Name = L"btn_convert";
			this->btn_convert->Size = System::Drawing::Size(66, 26);
			this->btn_convert->TabIndex = 7;
			this->btn_convert->Text = L"convert";
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
			this->btn_close->Location = System::Drawing::Point(211, 135);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(76, 26);
			this->btn_close->TabIndex = 9;
			this->btn_close->Text = L"close";
			this->btn_close->UseVisualStyleBackColor = true;
			this->btn_close->Click += gcnew System::EventHandler(this, &Form1::btn_close_Click);
			// 
			// author
			// 
			this->author->Location = System::Drawing::Point(338, 206);
			this->author->Name = L"author";
			this->author->Size = System::Drawing::Size(100, 23);
			this->author->TabIndex = 10;
			this->author->Text = L"author:";
			this->author->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nama
			// 
			this->nama->Location = System::Drawing::Point(338, 229);
			this->nama->Name = L"nama";
			this->nama->Size = System::Drawing::Size(100, 23);
			this->nama->TabIndex = 11;
			this->nama->Text = L"Danu Andrean";
			this->nama->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(498, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nama);
			this->Controls->Add(this->author);
			this->Controls->Add(this->btn_close);
			this->Controls->Add(this->btn_adjust);
			this->Controls->Add(this->btn_convert);
			this->Controls->Add(this->btn_m);
			this->Controls->Add(this->btn_km);
			this->Controls->Add(this->btn_cm);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"kalkulator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

int adjust,cm,km,m;
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

			try{
				double input1 = double::Parse(textBox1->Text);
				double input2 = double::Parse(textBox2->Text);	

				//konversi ke meter
					if (cm == 0){ input1 = input1 /100;}
					else if(cm == 1){input1 = input1/10;}
					else if(cm == 2){input1 = input1/1;}
					else if(cm == 3){input1 = input1*10;}
					else if(cm == 4){input1 = input1*100;}
					else if(cm == 5){input1 = input1*1000;}
					else {input1 = input1/1000;}

					if (km==0){input2 = input2 * 1000;}
					else if (km == 1){ input2 = input2/1000;}
					else if (km == 2){ input2 = input2/100;}
					else if (km == 3){ input2 = input2/10;}
					else if (km == 4){ input2 = input2/1;}
					else if (km == 5){ input2 = input2*10;}
					else { input2 = input2*100;}

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

				}
				catch(Exception ^e){
					MessageBox::Show("masukan format angka");
					}
			}//akhir else

	}//akhir event


private: System::Void btn_cm_Click(System::Object^  sender, System::EventArgs^  e) {

			 //perubahan konversi1
			 if(cm == 0){ btn_cm->Text="dm"; cm = 1; }
			 else if(cm == 1){ btn_cm->Text="m"; cm = 2;}
			 else if(cm == 2){ btn_cm->Text="dam"; cm = 3;}
			 else if(cm == 3){ btn_cm->Text="hm"; cm = 4; }
			 else if(cm == 4){ btn_cm->Text="km"; cm = 5; }
			 else if(cm == 5){ btn_cm->Text="mm"; cm = 6; }
			 else if(cm == 6){ btn_cm->Text="cm"; cm = 0; }
		 }//akhir event
private: System::Void btn_km_Click(System::Object^  sender, System::EventArgs^  e) {

			 //perubahan konversi2
			 if(km == 0){ btn_km->Text="mm"; km = 1;}
			 else if(km == 1){ btn_km->Text="dm"; km = 2;}
			 else if(km == 2){ btn_km->Text="cm"; km = 3;}
			 else if(km == 3){ btn_km->Text="m"; km = 4;}
			 else if(km == 4){ btn_km->Text="dam"; km = 5;}
			 else if(km == 5){ btn_km->Text="hm"; km = 6;}
			 else if(km == 6){ btn_km->Text="km"; km = 0;}

		 }

};
}

