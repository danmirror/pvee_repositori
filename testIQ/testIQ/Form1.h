#pragma once
#include <cstdlib>
#include <ctime>
namespace testIQ {

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
	private: System::Windows::Forms::RadioButton^  rb_a;
	protected: 
	private: System::Windows::Forms::RadioButton^  rb_b;
	private: System::Windows::Forms::RadioButton^  rb_c;
	private: System::Windows::Forms::RadioButton^  rb_d;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_next;








	private: System::Windows::Forms::Button^  btb_sub;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;







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
			this->rb_a = (gcnew System::Windows::Forms::RadioButton());
			this->rb_b = (gcnew System::Windows::Forms::RadioButton());
			this->rb_c = (gcnew System::Windows::Forms::RadioButton());
			this->rb_d = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->btb_sub = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// rb_a
			// 
			this->rb_a->AutoSize = true;
			this->rb_a->Location = System::Drawing::Point(6, 19);
			this->rb_a->Name = L"rb_a";
			this->rb_a->Size = System::Drawing::Size(32, 17);
			this->rb_a->TabIndex = 0;
			this->rb_a->TabStop = true;
			this->rb_a->Text = L"A";
			this->rb_a->UseVisualStyleBackColor = true;
			// 
			// rb_b
			// 
			this->rb_b->AutoSize = true;
			this->rb_b->Location = System::Drawing::Point(6, 68);
			this->rb_b->Name = L"rb_b";
			this->rb_b->Size = System::Drawing::Size(32, 17);
			this->rb_b->TabIndex = 1;
			this->rb_b->TabStop = true;
			this->rb_b->Text = L"B";
			this->rb_b->UseVisualStyleBackColor = true;
			// 
			// rb_c
			// 
			this->rb_c->AutoSize = true;
			this->rb_c->Location = System::Drawing::Point(115, 19);
			this->rb_c->Name = L"rb_c";
			this->rb_c->Size = System::Drawing::Size(32, 17);
			this->rb_c->TabIndex = 2;
			this->rb_c->TabStop = true;
			this->rb_c->Text = L"C";
			this->rb_c->UseVisualStyleBackColor = true;
			// 
			// rb_d
			// 
			this->rb_d->AutoSize = true;
			this->rb_d->Location = System::Drawing::Point(115, 68);
			this->rb_d->Name = L"rb_d";
			this->rb_d->Size = System::Drawing::Size(33, 17);
			this->rb_d->TabIndex = 3;
			this->rb_d->TabStop = true;
			this->rb_d->Text = L"D";
			this->rb_d->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->rb_b);
			this->groupBox1->Controls->Add(this->rb_d);
			this->groupBox1->Controls->Add(this->rb_a);
			this->groupBox1->Controls->Add(this->rb_c);
			this->groupBox1->Location = System::Drawing::Point(115, 167);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 100);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(76, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"label1";
			// 
			// btn_next
			// 
			this->btn_next->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_next->Location = System::Drawing::Point(363, 229);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(75, 23);
			this->btn_next->TabIndex = 6;
			this->btn_next->Text = L"NEXT";
			this->btn_next->UseVisualStyleBackColor = false;
			this->btn_next->Click += gcnew System::EventHandler(this, &Form1::btn_next_Click);
			// 
			// btb_sub
			// 
			this->btb_sub->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btb_sub->Location = System::Drawing::Point(363, 258);
			this->btb_sub->Name = L"btb_sub";
			this->btb_sub->Size = System::Drawing::Size(75, 23);
			this->btb_sub->TabIndex = 15;
			this->btb_sub->Text = L"SUBMIT";
			this->btb_sub->UseVisualStyleBackColor = false;
			this->btb_sub->Click += gcnew System::EventHandler(this, &Form1::btb_sub_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(354, 167);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(380, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 16);
			this->label2->TabIndex = 17;
			this->label2->Text = L"NILAI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(99, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 29);
			this->label3->TabIndex = 18;
			this->label3->Text = L"label3";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(466, 334);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btb_sub);
			this->Controls->Add(this->btn_next);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"TEST IQ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int nilai;
		int del1,del2,del3;
		int count;
		int drop,x,y;
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 label1->Hide();
				 textBox1->Hide();
				  label3->Text = "mulai text IQ sekarang juga???";
				 nilai = 0;
				 groupBox1->Hide();
				  btn_next->Text ="START";
				  btb_sub->Hide();
				  label2->Hide();

				// label1->Font = gcnew System::Drawing::Font(label1->Font,Size::16pt);
			 }
		
private: System::Void btn_next_Click(System::Object^  sender, System::EventArgs^  e) {
			 label1->Show();
			 label2->Show();
			 btb_sub->Show();
			 textBox1->Show();
			 groupBox1->Show();
			 label3->Hide();
			 drop = 1;
			 int jumlah_soal=3;
			 btn_next->Text ="NEXT";
			// srand(time(0));
			 count++;
			 x = rand()%3;
			 y =rand()%3;
			

			 if (count==1) {del1 = x; drop = 1;}
			 else if (count==2 && del1==x ) {x = rand()%3; }
			 else if ((count==3 )&( del1==x )||(del2==x)){x = rand()%3; }

			 if(count==2 && del1!=x){del2=x;}
			 else if((count==3 )&( del1!=x )&(del2!=x)){del3=x;}

			 //////

			 //textBox4->Text = Convert::ToString(count);
			 /////

			 // textBox6->Text = Convert::ToString(nilai);
			 if(count==4){
				
				 del1 = 0;
				 del2=0;
				 del3=0;
				 double hasil=nilai*100/3;
				 textBox1->Text=Convert::ToString(hasil);
				 
				 btn_next->Text ="MULAI LAGI";
			 }//hapus all
				
			 if (!btn_next->Text->Equals("MULAI LAGI")&& count>=4 ){

			 
				textBox1->Text="0";
				nilai =0;
				 count=0;
			 }
			 
		
			 if (x==0){
				label1->Text="Bila Seorang Bankir, memiliki anak 3 Umam "
					"\n, Miftah, Wahyudi, dan memiliki suami bernama Rozaq."
					"\n Coba tebak siapakah nama bankir itu ??";
				
				if (y==0){
					
					rb_a->Text="rozaq";
					rb_b->Text="miftah";
					rb_c->Text="wahyu";
					rb_d->Text="bila";
					
				}
				else if (y==1){
					
					rb_b->Text="rozaq";
					rb_c->Text="miftah";
					rb_d->Text="wahyu";
					rb_a->Text="bila";
					
				}
				else if (y==2){
				
					rb_c->Text="rozaq";
					rb_d->Text="miftah";
					rb_a->Text="wahyu";
					rb_b->Text="bila";
					
				
				}

				else if (y==3){
				
					rb_d->Text="rozaq";
					rb_a->Text="miftah";
					rb_b->Text="wahyu";
					rb_c->Text="bila";
					
				}
			 }
			 else if(x==1){
				 label1->Text="Seorang petani mengkombinasikan \n"
					 "dua tumpukan semen dengan tiga yang lain" 
					 "\n Berapa banyak tumpukan yang ia miliki sekarang ?";
				 if(y==0){
					 rb_c->Text="1";//
					 rb_d->Text="2";
					 rb_a->Text="3";
					 rb_b->Text="4";
					
					
				 }
				 else if(y==1){
					 rb_d->Text="1";//
					 rb_a->Text="2";
					 rb_b->Text="3";
					 rb_c->Text="4";
					
				 }
				 else if(y==2){
					 rb_a->Text="1";//
					 rb_b->Text="2";
					 rb_c->Text="3";
					 rb_d->Text="4";
					
				 }
				 else if(y==3){
					 rb_b->Text="1";//
					 rb_c->Text="2";
					 rb_d->Text="3";
					 rb_a->Text="4";
					
				 }
			 }
			 else if(x==2){
				 label1->Text="Berapa kali angka 7 muncul \n diantara bilangan 1 sampai 100?";
				 if(y==0){
					  rb_b->Text="10";
					  rb_c->Text="20";//
					  rb_d->Text="30";
					  rb_a->Text="44";
				
				 }
				 else  if(y==1){
					  rb_c->Text="10";
					  rb_d->Text="20";//
					  rb_a->Text="30";
					  rb_b->Text="44";
				
				 }
				else  if(y==2){
					  rb_d->Text="10";
					  rb_a->Text="20";//
					  rb_b->Text="30";
					  rb_c->Text="44";
				
				 }
				else  if(y==3){
					  rb_a->Text="10";
					  rb_b->Text="20";//
					  rb_c->Text="30";
					  rb_d->Text="44";
					 
					 
		 
				}
			 }
		
		}
		 
		 

private: System::Void btb_sub_Click(System::Object^  sender, System::EventArgs^  e) {
			if (drop==1){
			 if((x==0)&(y==0)){
					if (rb_d->Checked){nilai+=1;drop=0;}
				}
			  if((x==0)&(y==1)){
					if (rb_a->Checked){nilai+=1;drop=0;}
				}
			  if((x==0)&(y==2)){
					if (rb_b->Checked){nilai+=1;drop=0;}
				}
			  if((x==0)&(y==3)){
					if (rb_c->Checked){nilai+=1;drop=0;}
				}
			  /////////nomer 2///////
			   if((x==1)&(y==0)){
					  if(rb_c->Checked){nilai+=1;drop=0;}
				}
			    if((x==1)&(y==1)){
					  if(rb_d->Checked){nilai+=1;drop=0;}
				}
				 if((x==1)&(y==2)){
					  if(rb_a->Checked){nilai+=1;drop=0;}
				}
				  if((x==1)&(y==3)){
					  if(rb_b->Checked){nilai+=1;drop=0;}
				}
				  ///nomer3/////
				   if((x==2)&(y==0)){
					  if(rb_c->Checked){nilai+=1;drop=0;}
				}
				   if((x==2)&(y==1)){
					  if(rb_d->Checked){nilai+=1;drop=0;}
				}
				   if((x==2)&(y==2)){
					  if(rb_a->Checked){nilai+=1;drop=0;}
				}
				  if((x==2)&(y==3)){
					  if(rb_b->Checked){nilai+=1;drop=0;}
				}


			  
			 
			 
			 }//akhir drop
		 }
};
}

