#pragma once

namespace tebak_hewan {

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  radioButtonJawaban1;
	private: System::Windows::Forms::RadioButton^  radioButtonJawaban2;

	protected: 


	private: System::Windows::Forms::GroupBox^  groupBox1;
	public: System::Windows::Forms::ImageList^  imageList1;
	private: 

	private: System::Windows::Forms::ListBox^  listBoxHewan;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelRespon;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::RadioButton^  rb_salah;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButtonJawaban1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonJawaban2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->listBoxHewan = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelRespon = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->rb_salah = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(76, 40);
			this->label1->Margin = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(314, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gambar apa ini ya\?\?";
			// 
			// radioButtonJawaban1
			// 
			this->radioButtonJawaban1->AutoSize = true;
			this->radioButtonJawaban1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButtonJawaban1->Location = System::Drawing::Point(37, 33);
			this->radioButtonJawaban1->Name = L"radioButtonJawaban1";
			this->radioButtonJawaban1->Size = System::Drawing::Size(101, 20);
			this->radioButtonJawaban1->TabIndex = 1;
			this->radioButtonJawaban1->TabStop = true;
			this->radioButtonJawaban1->Text = L"radioButton1";
			this->radioButtonJawaban1->UseVisualStyleBackColor = true;
			this->radioButtonJawaban1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonJawaban1_CheckedChanged);
			// 
			// radioButtonJawaban2
			// 
			this->radioButtonJawaban2->AutoSize = true;
			this->radioButtonJawaban2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButtonJawaban2->Location = System::Drawing::Point(65, 59);
			this->radioButtonJawaban2->Name = L"radioButtonJawaban2";
			this->radioButtonJawaban2->Size = System::Drawing::Size(101, 20);
			this->radioButtonJawaban2->TabIndex = 2;
			this->radioButtonJawaban2->TabStop = true;
			this->radioButtonJawaban2->Text = L"radioButton2";
			this->radioButtonJawaban2->UseVisualStyleBackColor = true;
			this->radioButtonJawaban2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonJawaban2_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox1->Controls->Add(this->rb_salah);
			this->groupBox1->Controls->Add(this->radioButtonJawaban1);
			this->groupBox1->Controls->Add(this->radioButtonJawaban2);
			this->groupBox1->Location = System::Drawing::Point(290, 125);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 110);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"anjing2.jpg");
			this->imageList1->Images->SetKeyName(1, L"jerapah2.jpg");
			this->imageList1->Images->SetKeyName(2, L"singa2.jpg");
			this->imageList1->Images->SetKeyName(3, L"sapi2.jpg");
			this->imageList1->Images->SetKeyName(4, L"tikus2.jpg");
			this->imageList1->Images->SetKeyName(5, L"kelinci2.jpg");
			this->imageList1->Images->SetKeyName(6, L"monyet.jpg");
			// 
			// listBoxHewan
			// 
			this->listBoxHewan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBoxHewan->FormattingEnabled = true;
			this->listBoxHewan->ItemHeight = 16;
			this->listBoxHewan->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"anjing", L"jerapah", L"singa", L"sapi", L"tikus", 
				L"kelinci", L"kera"});
			this->listBoxHewan->Location = System::Drawing::Point(21, 151);
			this->listBoxHewan->Name = L"listBoxHewan";
			this->listBoxHewan->Size = System::Drawing::Size(120, 84);
			this->listBoxHewan->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(462, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 41);
			this->button1->TabIndex = 5;
			this->button1->Text = L"mulai";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// labelRespon
			// 
			this->labelRespon->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelRespon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelRespon->Location = System::Drawing::Point(303, 241);
			this->labelRespon->Name = L"labelRespon";
			this->labelRespon->Size = System::Drawing::Size(153, 35);
			this->labelRespon->TabIndex = 6;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(147, 125);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(126, 79);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// rb_salah
			// 
			this->rb_salah->AutoSize = true;
			this->rb_salah->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rb_salah->Location = System::Drawing::Point(93, 84);
			this->rb_salah->Name = L"rb_salah";
			this->rb_salah->Size = System::Drawing::Size(101, 20);
			this->rb_salah->TabIndex = 3;
			this->rb_salah->TabStop = true;
			this->rb_salah->Text = L"radioButton3";
			this->rb_salah->UseVisualStyleBackColor = true;
			this->rb_salah->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb_salah_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(671, 308);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->labelRespon);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBoxHewan);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int banyaknyaGambar;
		int misteri;
		Random^ aRnd;
		String^ jawaban;
		String^ a;
		String^ b;
		void TebakanBaru(){
			misteri = aRnd->Next(banyaknyaGambar);
			pictureBox1->Image = imageList1->Images[misteri];
			jawaban = (String^) listBoxHewan->Items[misteri];
			int jawabanBenar = aRnd->Next(1,4);
			radioButtonJawaban1->Enabled = true;
			radioButtonJawaban2->Enabled = true;
			radioButtonJawaban1->Checked = false;
			radioButtonJawaban2->Checked = false;
			radioButtonJawaban1->Text = "";
			radioButtonJawaban2->Text = "";
			switch (jawabanBenar)
			{
				case 1:
				radioButtonJawaban1->Text = jawaban;
				break;
				case 2:
				radioButtonJawaban2->Text = jawaban;
				break;
			}
			int aNumber;
			if (radioButtonJawaban1->Text->Equals(""))
			do {
			aNumber = aRnd->Next(banyaknyaGambar);
			radioButtonJawaban1->Text = (String^) listBoxHewan->Items[aNumber];
			}
			while (radioButtonJawaban1->Text->Equals(jawaban));
			if (radioButtonJawaban2->Text->Equals(""))
			do {
			aNumber = aRnd->Next(banyaknyaGambar);
			radioButtonJawaban2->Text = (String^) listBoxHewan->Items[aNumber];
			}
			while (radioButtonJawaban2->Text->Equals(jawaban) ||
			radioButtonJawaban2->Text->Equals(radioButtonJawaban1->Text));
			labelRespon->Text = "";
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 TebakanBaru();
				 rb_salah->Enabled = true;
			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 aRnd = gcnew System::Random();
				banyaknyaGambar = imageList1->Images->Count;
				listBoxHewan->Hide();
				TebakanBaru();
				rb_salah->Text = "salah semua";
		 }
private: System::Void radioButtonJawaban1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (((RadioButton^)sender)->Text->Equals(jawaban))
				{
					rb_salah->Enabled = false;
					radioButtonJawaban1->Enabled = false;
					radioButtonJawaban2->Enabled = false;
					labelRespon->Text = "Betul,  "+jawaban;
				}
			else {
					labelRespon->Text = "jawaban salah  ";
				}
		 }
private: System::Void radioButtonJawaban2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  if (((RadioButton^)sender)->Text->Equals(jawaban))
				{
					rb_salah->Enabled = false;
					radioButtonJawaban1->Enabled = false;
					radioButtonJawaban2->Enabled = false;
					labelRespon->Text = "Betul, "+jawaban;
				}
				else {
					labelRespon->Text = "jawaban salah ";
				}
		 }
private: System::Void rb_salah_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				
			  if (radioButtonJawaban1->Text->Equals(jawaban)||radioButtonJawaban1->Text->Equals(jawaban))
				{
					labelRespon->Text = "jawaban salah ";
				}
				else {
					
					rb_salah->Enabled = false;
					radioButtonJawaban1->Enabled = false;
					radioButtonJawaban2->Enabled = false;
					labelRespon->Text = "Betul ";
				}
		 }
};
}

