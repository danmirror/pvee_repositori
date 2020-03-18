#pragma once

namespace menu_prak6 {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  styleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  boldToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  italicToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  boldItalicToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolStripMenuItem^  warnaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hitamToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  kuningToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  underlineToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  regularToolStripMenuItem;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->styleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->boldToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->italicToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->boldItalicToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->underlineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->regularToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warnaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hitamToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kuningToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->styleToolStripMenuItem, 
				this->warnaToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// styleToolStripMenuItem
			// 
			this->styleToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->boldToolStripMenuItem, 
				this->italicToolStripMenuItem, this->boldItalicToolStripMenuItem, this->underlineToolStripMenuItem, this->regularToolStripMenuItem});
			this->styleToolStripMenuItem->Name = L"styleToolStripMenuItem";
			this->styleToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->styleToolStripMenuItem->Text = L"Style";
			// 
			// boldToolStripMenuItem
			// 
			this->boldToolStripMenuItem->Name = L"boldToolStripMenuItem";
			this->boldToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->boldToolStripMenuItem->Text = L"Bold";
			this->boldToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::boldToolStripMenuItem_Click);
			// 
			// italicToolStripMenuItem
			// 
			this->italicToolStripMenuItem->Name = L"italicToolStripMenuItem";
			this->italicToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->italicToolStripMenuItem->Text = L"Italic";
			this->italicToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::italicToolStripMenuItem_Click);
			// 
			// boldItalicToolStripMenuItem
			// 
			this->boldItalicToolStripMenuItem->Name = L"boldItalicToolStripMenuItem";
			this->boldItalicToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->boldItalicToolStripMenuItem->Text = L"Bold Italic";
			this->boldItalicToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::boldItalicToolStripMenuItem_Click);
			// 
			// underlineToolStripMenuItem
			// 
			this->underlineToolStripMenuItem->Name = L"underlineToolStripMenuItem";
			this->underlineToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->underlineToolStripMenuItem->Text = L"underline";
			this->underlineToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::underlineToolStripMenuItem_Click);
			// 
			// regularToolStripMenuItem
			// 
			this->regularToolStripMenuItem->Name = L"regularToolStripMenuItem";
			this->regularToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->regularToolStripMenuItem->Text = L"regular";
			this->regularToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::regularToolStripMenuItem_Click);
			// 
			// warnaToolStripMenuItem
			// 
			this->warnaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->hitamToolStripMenuItem, 
				this->kuningToolStripMenuItem});
			this->warnaToolStripMenuItem->Name = L"warnaToolStripMenuItem";
			this->warnaToolStripMenuItem->Size = System::Drawing::Size(51, 20);
			this->warnaToolStripMenuItem->Text = L"warna";
			// 
			// hitamToolStripMenuItem
			// 
			this->hitamToolStripMenuItem->Name = L"hitamToolStripMenuItem";
			this->hitamToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->hitamToolStripMenuItem->Text = L"hitam";
			this->hitamToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::hitamToolStripMenuItem_Click);
			// 
			// kuningToolStripMenuItem
			// 
			this->kuningToolStripMenuItem->Name = L"kuningToolStripMenuItem";
			this->kuningToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->kuningToolStripMenuItem->Text = L"kuning";
			this->kuningToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::kuningToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(87, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 55);
			this->label1->TabIndex = 1;
			this->label1->Text = L"UAD";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void boldToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				label1->Font = gcnew System::Drawing::Font(label1->Font,FontStyle::Bold);
			 }
private: System::Void italicToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  label1->Font = gcnew System::Drawing::Font(label1->Font,FontStyle::Italic);

		 }
private: System::Void boldItalicToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  label1->Font = gcnew System::Drawing::Font(label1->Font,FontStyle::Bold+FontStyle::Italic);
		 }
private: System::Void hitamToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 label1->ForeColor = System::Drawing::Color::Black;
		 }
private: System::Void kuningToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  label1->ForeColor = System::Drawing::Color::Yellow;
		 }
private: System::Void underlineToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 label1->Font = gcnew System::Drawing::Font(label1->Font,FontStyle::Underline);
		 }
private: System::Void regularToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 label1->Font = gcnew System::Drawing::Font(label1->Font,FontStyle::Regular);
		 }
};
}

