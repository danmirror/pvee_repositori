#pragma once

namespace multimedia {

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
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  zoom;
	private: System::Windows::Forms::RadioButton^  center;
	private: System::Windows::Forms::RadioButton^  autosize;
	private: System::Windows::Forms::RadioButton^  strecth;
	private: System::Windows::Forms::RadioButton^  normal;

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
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->zoom = (gcnew System::Windows::Forms::RadioButton());
			this->center = (gcnew System::Windows::Forms::RadioButton());
			this->autosize = (gcnew System::Windows::Forms::RadioButton());
			this->strecth = (gcnew System::Windows::Forms::RadioButton());
			this->normal = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"muat file";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->pictureBox1->Location = System::Drawing::Point(262, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(124, 140);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->zoom);
			this->groupBox1->Controls->Add(this->center);
			this->groupBox1->Controls->Add(this->autosize);
			this->groupBox1->Controls->Add(this->strecth);
			this->groupBox1->Controls->Add(this->normal);
			this->groupBox1->Location = System::Drawing::Point(12, 71);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(94, 134);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// zoom
			// 
			this->zoom->AutoSize = true;
			this->zoom->Location = System::Drawing::Point(6, 108);
			this->zoom->Name = L"zoom";
			this->zoom->Size = System::Drawing::Size(50, 17);
			this->zoom->TabIndex = 4;
			this->zoom->TabStop = true;
			this->zoom->Text = L"zoom";
			this->zoom->UseVisualStyleBackColor = true;
			this->zoom->CheckedChanged += gcnew System::EventHandler(this, &Form1::zoom_CheckedChanged);
			// 
			// center
			// 
			this->center->AutoSize = true;
			this->center->Location = System::Drawing::Point(6, 85);
			this->center->Name = L"center";
			this->center->Size = System::Drawing::Size(55, 17);
			this->center->TabIndex = 3;
			this->center->TabStop = true;
			this->center->Text = L"center";
			this->center->UseVisualStyleBackColor = true;
			this->center->CheckedChanged += gcnew System::EventHandler(this, &Form1::center_CheckedChanged);
			// 
			// autosize
			// 
			this->autosize->AutoSize = true;
			this->autosize->Location = System::Drawing::Point(6, 62);
			this->autosize->Name = L"autosize";
			this->autosize->Size = System::Drawing::Size(47, 17);
			this->autosize->TabIndex = 2;
			this->autosize->TabStop = true;
			this->autosize->Text = L"Auto";
			this->autosize->UseVisualStyleBackColor = true;
			this->autosize->CheckedChanged += gcnew System::EventHandler(this, &Form1::autosize_CheckedChanged);
			// 
			// strecth
			// 
			this->strecth->AutoSize = true;
			this->strecth->Location = System::Drawing::Point(6, 39);
			this->strecth->Name = L"strecth";
			this->strecth->Size = System::Drawing::Size(57, 17);
			this->strecth->TabIndex = 1;
			this->strecth->TabStop = true;
			this->strecth->Text = L"stretch";
			this->strecth->UseVisualStyleBackColor = true;
			this->strecth->CheckedChanged += gcnew System::EventHandler(this, &Form1::strecth_CheckedChanged);
			// 
			// normal
			// 
			this->normal->AutoSize = true;
			this->normal->Location = System::Drawing::Point(6, 16);
			this->normal->Name = L"normal";
			this->normal->Size = System::Drawing::Size(56, 17);
			this->normal->TabIndex = 0;
			this->normal->TabStop = true;
			this->normal->Text = L"normal";
			this->normal->UseVisualStyleBackColor = true;
			this->normal->CheckedChanged += gcnew System::EventHandler(this, &Form1::normal_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(438, 290);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(openFileDialog1->ShowDialog()== System::Windows::Forms::DialogResult::OK){
					pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
					
				 
				 }

			 }
	private: System::Void normal_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->SizeMode=System::Windows::Forms::PictureBoxSizeMode::Normal;
			 }
private: System::Void strecth_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->SizeMode=System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		 }
private: System::Void autosize_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->SizeMode=System::Windows::Forms::PictureBoxSizeMode::AutoSize;
		 }
private: System::Void center_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->SizeMode=System::Windows::Forms::PictureBoxSizeMode::CenterImage;
		 }
private: System::Void zoom_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->SizeMode=System::Windows::Forms::PictureBoxSizeMode::Zoom;
		 }
};
}

