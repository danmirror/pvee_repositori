#pragma once

namespace browser {

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
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::Windows::Forms::Button^  cari;
	private: System::Windows::Forms::Button^  back;
	private: System::Windows::Forms::Button^  forward;
	private: System::Windows::Forms::Button^  home;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->cari = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			this->forward = (gcnew System::Windows::Forms::Button());
			this->home = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(75, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 20);
			this->textBox1->TabIndex = 0;
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(55, 80);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(353, 196);
			this->webBrowser1->TabIndex = 1;
			// 
			// cari
			// 
			this->cari->Location = System::Drawing::Point(304, 9);
			this->cari->Name = L"cari";
			this->cari->Size = System::Drawing::Size(75, 23);
			this->cari->TabIndex = 2;
			this->cari->Text = L"ok";
			this->cari->UseVisualStyleBackColor = true;
			this->cari->Click += gcnew System::EventHandler(this, &Form1::button1_Click);

			// 
			// back
			// 
			this->back->Location = System::Drawing::Point(75, 51);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(75, 23);
			this->back->TabIndex = 3;
			this->back->Text = L"back";
			this->back->UseVisualStyleBackColor = true;
			this->back->Click += gcnew System::EventHandler(this, &Form1::back_Click);
			// 
			// forward
			// 
			this->forward->Location = System::Drawing::Point(166, 51);
			this->forward->Name = L"forward";
			this->forward->Size = System::Drawing::Size(75, 23);
			this->forward->TabIndex = 4;
			this->forward->Text = L"forward";
			this->forward->UseVisualStyleBackColor = true;
			// 
			// home
			// 
			this->home->Location = System::Drawing::Point(258, 51);
			this->home->Name = L"home";
			this->home->Size = System::Drawing::Size(75, 23);
			this->home->TabIndex = 5;
			this->home->Text = L"home";
			this->home->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 302);
			this->Controls->Add(this->home);
			this->Controls->Add(this->forward);
			this->Controls->Add(this->back);
			this->Controls->Add(this->cari);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				webBrowser1->Navigate(textBox1->Text);
				

			 }

	private: System::Void cari_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 if (e->KeyCode == System::Windows::Forms::Keys::Enter&& !textBox1->Text->Equals("")){
				 webBrowser1->Navigate(textBox1->Text);}
			 }
	private: System::Void webBrowser1_Navigated(System::Object^  sender, System::Windows::Forms::WebBrowserNavigatedEventArgs^  e) {
				 textBox1->Text = webBrowser1->Url->ToString();
				 textBox1->Text="danu";
			 }
			 
	private: System::Void back_Click(System::Object^  sender, System::EventArgs^  e) {
				 

			 }
};
}

