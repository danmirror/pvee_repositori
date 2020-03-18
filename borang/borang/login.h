#pragma once
#include "stdafx.h"
#include "Form1.h"
#include "Form2.h"

namespace borang {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		void spesialOpen1(){
			Form1^ form = gcnew Form1();
			form->Show();
		}
		void spesialClose1(){
			Form1^ form = gcnew Form1();
			form->Hide();
		}

		void spesialOpen2(){
			Form2^ form2 = gcnew Form2();
			form2->Show();
		}
		void spesialClose2(){
			Form2^ form2 = gcnew Form2();
			form2->Hide();
		}
		
		
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  login_groub;
	protected: 
	private: System::Windows::Forms::RadioButton^  rb_riwayat;
	private: System::Windows::Forms::RadioButton^  rb_pribadi;
	private: System::Windows::Forms::Button^  btn_kirim;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label13;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->login_groub = (gcnew System::Windows::Forms::GroupBox());
			this->rb_riwayat = (gcnew System::Windows::Forms::RadioButton());
			this->rb_pribadi = (gcnew System::Windows::Forms::RadioButton());
			this->btn_kirim = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->login_groub->SuspendLayout();
			this->SuspendLayout();
			// 
			// login_groub
			// 
			this->login_groub->BackColor = System::Drawing::Color::Transparent;
			this->login_groub->Controls->Add(this->rb_riwayat);
			this->login_groub->Controls->Add(this->rb_pribadi);
			this->login_groub->Controls->Add(this->btn_kirim);
			this->login_groub->Controls->Add(this->label17);
			this->login_groub->Location = System::Drawing::Point(218, 119);
			this->login_groub->Name = L"login_groub";
			this->login_groub->Size = System::Drawing::Size(282, 189);
			this->login_groub->TabIndex = 23;
			this->login_groub->TabStop = false;
			// 
			// rb_riwayat
			// 
			this->rb_riwayat->AutoSize = true;
			this->rb_riwayat->ForeColor = System::Drawing::SystemColors::Control;
			this->rb_riwayat->Location = System::Drawing::Point(72, 94);
			this->rb_riwayat->Name = L"rb_riwayat";
			this->rb_riwayat->Size = System::Drawing::Size(123, 17);
			this->rb_riwayat->TabIndex = 27;
			this->rb_riwayat->TabStop = true;
			this->rb_riwayat->Text = L"ISI DATA RIWAYAT";
			this->rb_riwayat->UseVisualStyleBackColor = true;
			this->rb_riwayat->CheckedChanged += gcnew System::EventHandler(this, &login::rb_riwayat_CheckedChanged);
			// 
			// rb_pribadi
			// 
			this->rb_pribadi->AutoSize = true;
			this->rb_pribadi->ForeColor = System::Drawing::SystemColors::Control;
			this->rb_pribadi->Location = System::Drawing::Point(72, 71);
			this->rb_pribadi->Name = L"rb_pribadi";
			this->rb_pribadi->Size = System::Drawing::Size(116, 17);
			this->rb_pribadi->TabIndex = 26;
			this->rb_pribadi->TabStop = true;
			this->rb_pribadi->Text = L"ISI DATA PRIBADI";
			this->rb_pribadi->UseVisualStyleBackColor = true;
			this->rb_pribadi->CheckedChanged += gcnew System::EventHandler(this, &login::rb_pribadi_CheckedChanged);
			// 
			// btn_kirim
			// 
			this->btn_kirim->Location = System::Drawing::Point(72, 126);
			this->btn_kirim->Name = L"btn_kirim";
			this->btn_kirim->Size = System::Drawing::Size(117, 37);
			this->btn_kirim->TabIndex = 25;
			this->btn_kirim->Text = L"KIRIM";
			this->btn_kirim->UseVisualStyleBackColor = true;
			this->btn_kirim->Click += gcnew System::EventHandler(this, &login::btn_kirim_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(15, 31);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(97, 13);
			this->label17->TabIndex = 15;
			this->label17->Text = L"PENGISIAN DATA";
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(177, 39);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(370, 37);
			this->label13->TabIndex = 24;
			this->label13->Text = L"DATA PESERTA UMROH";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(721, 411);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->login_groub);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"login";
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->login_groub->ResumeLayout(false);
			this->login_groub->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void rb_pribadi_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (rb_pribadi->Checked){
				 login::spesialOpen1();
				 login::spesialClose2();
				}

			 }
private: System::Void login_Load(System::Object^  sender, System::EventArgs^  e) {
			 login::Hide();
		 }
private: System::Void rb_riwayat_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				  
			 if(rb_riwayat->Checked){
				 login::spesialOpen2();
				  login::spesialClose1();
			 }
				
		 }
private: System::Void btn_kirim_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 
			 if(MessageBox::Show("apakah data sudah anda isi","peringatan", MessageBoxButtons::YesNo,MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
				login::Close();
			 }
		 }
};
}