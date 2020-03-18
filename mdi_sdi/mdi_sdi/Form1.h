#pragma once

#include "mdi.h"
#include "sdi.h"

namespace mdi_sdi {

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
		void form(int data){
				mdi^ mdnew=gcnew mdi;
				mdnew->MdiParent= this;
				if (data==1){
					mdnew->Show();
				}
	
				}
			void form2(int data){
				sdi^ mdnew2=gcnew sdi;
				mdnew2->MdiParent= this;
				if (data==1){
					mdnew2->Show();
				}
	
				}
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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  gb1;
	private: System::Windows::Forms::Button^  simpan;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gb1 = (gcnew System::Windows::Forms::GroupBox());
			this->simpan = (gcnew System::Windows::Forms::Button());
			this->gb1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(160, 189);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 54);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ISI DATA ANDA";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(87, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(306, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"PENGISIAN DATA DIRI";
			// 
			// gb1
			// 
			this->gb1->BackColor = System::Drawing::Color::Transparent;
			this->gb1->Controls->Add(this->button1);
			this->gb1->Controls->Add(this->label1);
			this->gb1->Location = System::Drawing::Point(84, 58);
			this->gb1->Name = L"gb1";
			this->gb1->Size = System::Drawing::Size(493, 289);
			this->gb1->TabIndex = 3;
			this->gb1->TabStop = false;
			// 
			// simpan
			// 
			this->simpan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->simpan->Location = System::Drawing::Point(247, 367);
			this->simpan->Name = L"simpan";
			this->simpan->Size = System::Drawing::Size(146, 47);
			this->simpan->TabIndex = 5;
			this->simpan->Text = L"SIMPAN";
			this->simpan->UseVisualStyleBackColor = false;
			this->simpan->Click += gcnew System::EventHandler(this, &Form1::simpan_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(693, 443);
			this->Controls->Add(this->simpan);
			this->Controls->Add(this->gb1);
			this->IsMdiContainer = true;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->gb1->ResumeLayout(false);
			this->gb1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int noloop;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 noloop +=1;
				 if(noloop==1){
					 gb1->Hide();
					 simpan->Show();
					 Form1::form2(1);
					 Form1::form(1);
					 
					 LayoutMdi(MdiLayout::TileVertical);

				 }
			 }

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 simpan->Hide();
			 }
private: System::Void simpan_Click(System::Object^  sender, System::EventArgs^  e) {
					
					gb1->Show();
					Form1::form(2);
					
		 }
};
}

