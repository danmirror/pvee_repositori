#pragma once
#include "stdafx.h"
namespace aplikasi_borang {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tb_nama;
	private: System::Windows::Forms::ComboBox^  cb_bln;
	protected: 

	protected: 

	private: System::Windows::Forms::ComboBox^  cb_tgl;
	private: System::Windows::Forms::ComboBox^  cb_th;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tb_status;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  cb_jenis;


	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  cb_negara;



	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::Label^  label10;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ComboBox^  cb_ke;

	private: System::Windows::Forms::ComboBox^  cb_th_k;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  tb_email;
	private: System::Windows::Forms::TextBox^  tb_no;


	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::ComboBox^  cb_gel;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  tb_pekerjaan;
	private: System::Windows::Forms::TextBox^  tb_prof;
	private: System::Windows::Forms::TextBox^  tb_kab;
	private: System::Windows::Forms::TextBox^  tb_kota;
	private: System::Windows::Forms::Button^  btn_kirim;
	private: System::Windows::Forms::GroupBox^  main_grub;
	private: System::Windows::Forms::GroupBox^  login_groub;

	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  btn_kembali;



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
			this->tb_nama = (gcnew System::Windows::Forms::TextBox());
			this->cb_bln = (gcnew System::Windows::Forms::ComboBox());
			this->cb_tgl = (gcnew System::Windows::Forms::ComboBox());
			this->cb_th = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tb_status = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cb_jenis = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cb_negara = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_prof = (gcnew System::Windows::Forms::TextBox());
			this->tb_kab = (gcnew System::Windows::Forms::TextBox());
			this->tb_kota = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tb_email = (gcnew System::Windows::Forms::TextBox());
			this->tb_no = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->login_groub = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tb_pekerjaan = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->cb_gel = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->cb_ke = (gcnew System::Windows::Forms::ComboBox());
			this->cb_th_k = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btn_kirim = (gcnew System::Windows::Forms::Button());
			this->main_grub = (gcnew System::Windows::Forms::GroupBox());
			this->btn_kembali = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->login_groub->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->main_grub->SuspendLayout();
			this->SuspendLayout();
			// 
			// tb_nama
			// 
			this->tb_nama->Location = System::Drawing::Point(148, 17);
			this->tb_nama->Name = L"tb_nama";
			this->tb_nama->Size = System::Drawing::Size(100, 20);
			this->tb_nama->TabIndex = 0;
			// 
			// cb_bln
			// 
			this->cb_bln->FormattingEnabled = true;
			this->cb_bln->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", 
				L"10", L"11", L"12"});
			this->cb_bln->Location = System::Drawing::Point(179, 47);
			this->cb_bln->Name = L"cb_bln";
			this->cb_bln->Size = System::Drawing::Size(28, 21);
			this->cb_bln->TabIndex = 1;
			// 
			// cb_tgl
			// 
			this->cb_tgl->FormattingEnabled = true;
			this->cb_tgl->Items->AddRange(gcnew cli::array< System::Object^  >(31) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", 
				L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", L"27", 
				L"28", L"29", L"30", L"31"});
			this->cb_tgl->Location = System::Drawing::Point(148, 47);
			this->cb_tgl->Name = L"cb_tgl";
			this->cb_tgl->Size = System::Drawing::Size(25, 21);
			this->cb_tgl->TabIndex = 2;
			// 
			// cb_th
			// 
			this->cb_th->FormattingEnabled = true;
			this->cb_th->Items->AddRange(gcnew cli::array< System::Object^  >(31) {L"1970", L"1971", L"1972", L"1973", L"1974", L"1975", 
				L"1976", L"1977", L"1978", L"1979", L"1980", L"1981", L"1982", L"1983", L"1984", L"1985", L"1986", L"1987", L"1988", L"1989", 
				L"1990", L"1991", L"1992", L"1993", L"1994", L"1995", L"1996", L"1997", L"1998", L"2000", L"19"});
			this->cb_th->Location = System::Drawing::Point(213, 47);
			this->cb_th->Name = L"cb_th";
			this->cb_th->Size = System::Drawing::Size(35, 21);
			this->cb_th->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"NAMA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"TANGGAL LAHIR";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"PROVINSI";
			// 
			// tb_status
			// 
			this->tb_status->Location = System::Drawing::Point(148, 99);
			this->tb_status->Name = L"tb_status";
			this->tb_status->Size = System::Drawing::Size(100, 20);
			this->tb_status->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"JENIS KELAMIN";
			// 
			// cb_jenis
			// 
			this->cb_jenis->FormattingEnabled = true;
			this->cb_jenis->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"laki-laki", L"perempuan"});
			this->cb_jenis->Location = System::Drawing::Point(148, 74);
			this->cb_jenis->Name = L"cb_jenis";
			this->cb_jenis->Size = System::Drawing::Size(100, 21);
			this->cb_jenis->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"STATUS";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"PEKERJAAN";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 133);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(122, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"KEWARGANEGARAAN";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 31);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"EMAIL";
			// 
			// cb_negara
			// 
			this->cb_negara->FormattingEnabled = true;
			this->cb_negara->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"indonesia"});
			this->cb_negara->Location = System::Drawing::Point(148, 130);
			this->cb_negara->Name = L"cb_negara";
			this->cb_negara->Size = System::Drawing::Size(100, 21);
			this->cb_negara->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(21, 22);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"KOTA";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tb_prof);
			this->groupBox1->Controls->Add(this->tb_kab);
			this->groupBox1->Controls->Add(this->tb_kota);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(19, 247);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(329, 124);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			// 
			// tb_prof
			// 
			this->tb_prof->Location = System::Drawing::Point(148, 87);
			this->tb_prof->Name = L"tb_prof";
			this->tb_prof->Size = System::Drawing::Size(100, 20);
			this->tb_prof->TabIndex = 24;
			// 
			// tb_kab
			// 
			this->tb_kab->Location = System::Drawing::Point(148, 53);
			this->tb_kab->Name = L"tb_kab";
			this->tb_kab->Size = System::Drawing::Size(100, 20);
			this->tb_kab->TabIndex = 23;
			// 
			// tb_kota
			// 
			this->tb_kota->Location = System::Drawing::Point(148, 19);
			this->tb_kota->Name = L"tb_kota";
			this->tb_kota->Size = System::Drawing::Size(100, 20);
			this->tb_kota->TabIndex = 22;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(22, 56);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 13);
			this->label10->TabIndex = 20;
			this->label10->Text = L"KABUPATEN";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tb_email);
			this->groupBox2->Controls->Add(this->tb_no);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Location = System::Drawing::Point(391, 45);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(264, 109);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			// 
			// tb_email
			// 
			this->tb_email->Location = System::Drawing::Point(155, 24);
			this->tb_email->Name = L"tb_email";
			this->tb_email->Size = System::Drawing::Size(100, 20);
			this->tb_email->TabIndex = 20;
			// 
			// tb_no
			// 
			this->tb_no->Location = System::Drawing::Point(155, 68);
			this->tb_no->Name = L"tb_no";
			this->tb_no->Size = System::Drawing::Size(100, 20);
			this->tb_no->TabIndex = 18;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(15, 68);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(65, 13);
			this->label14->TabIndex = 19;
			this->label14->Text = L"NOMER HP";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->login_groub);
			this->groupBox3->Controls->Add(this->tb_pekerjaan);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->cb_jenis);
			this->groupBox3->Controls->Add(this->cb_negara);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->tb_nama);
			this->groupBox3->Controls->Add(this->cb_th);
			this->groupBox3->Controls->Add(this->tb_status);
			this->groupBox3->Controls->Add(this->cb_bln);
			this->groupBox3->Controls->Add(this->cb_tgl);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Location = System::Drawing::Point(19, 45);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(329, 196);
			this->groupBox3->TabIndex = 22;
			this->groupBox3->TabStop = false;
			// 
			// login_groub
			// 
			this->login_groub->Controls->Add(this->checkBox2);
			this->login_groub->Controls->Add(this->checkBox1);
			this->login_groub->Controls->Add(this->label17);
			this->login_groub->Location = System::Drawing::Point(213, 84);
			this->login_groub->Name = L"login_groub";
			this->login_groub->Size = System::Drawing::Size(264, 109);
			this->login_groub->TabIndex = 22;
			this->login_groub->TabStop = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(124, 53);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(92, 17);
			this->checkBox2->TabIndex = 21;
			this->checkBox2->Text = L"ISI RIWAYAT";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(124, 30);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(117, 17);
			this->checkBox1->TabIndex = 20;
			this->checkBox1->Text = L"ISI DATA PRIBADI";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(15, 31);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(98, 13);
			this->label17->TabIndex = 15;
			this->label17->Text = L"ISI DATA PRIBADI";
			// 
			// tb_pekerjaan
			// 
			this->tb_pekerjaan->Location = System::Drawing::Point(148, 163);
			this->tb_pekerjaan->Name = L"tb_pekerjaan";
			this->tb_pekerjaan->Size = System::Drawing::Size(100, 20);
			this->tb_pekerjaan->TabIndex = 18;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->cb_gel);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->cb_ke);
			this->groupBox4->Controls->Add(this->cb_th_k);
			this->groupBox4->Location = System::Drawing::Point(391, 165);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(265, 111);
			this->groupBox4->TabIndex = 22;
			this->groupBox4->TabStop = false;
			// 
			// cb_gel
			// 
			this->cb_gel->FormattingEnabled = true;
			this->cb_gel->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"1", L"2", L"3", L"4", L"5"});
			this->cb_gel->Location = System::Drawing::Point(155, 57);
			this->cb_gel->Name = L"cb_gel";
			this->cb_gel->Size = System::Drawing::Size(100, 21);
			this->cb_gel->TabIndex = 19;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 60);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(75, 13);
			this->label15->TabIndex = 18;
			this->label15->Text = L"GELOMBANG";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 33);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(143, 13);
			this->label11->TabIndex = 14;
			this->label11->Text = L"TAHUN KEBERANGKATAN";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 90);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(94, 13);
			this->label12->TabIndex = 15;
			this->label12->Text = L"PERJALANAN KE";
			// 
			// cb_ke
			// 
			this->cb_ke->FormattingEnabled = true;
			this->cb_ke->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"1", L"2", L"3", L"4", L"5", L">5"});
			this->cb_ke->Location = System::Drawing::Point(155, 84);
			this->cb_ke->Name = L"cb_ke";
			this->cb_ke->Size = System::Drawing::Size(100, 21);
			this->cb_ke->TabIndex = 17;
			// 
			// cb_th_k
			// 
			this->cb_th_k->FormattingEnabled = true;
			this->cb_th_k->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"2015", L"2016", L"2017", L"2018", L"2019"});
			this->cb_th_k->Location = System::Drawing::Point(155, 30);
			this->cb_th_k->Name = L"cb_th_k";
			this->cb_th_k->Size = System::Drawing::Size(100, 21);
			this->cb_th_k->TabIndex = 16;
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(249, 29);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(370, 37);
			this->label13->TabIndex = 11;
			this->label13->Text = L"DATA PESERTA UMROH";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_kirim
			// 
			this->btn_kirim->Location = System::Drawing::Point(406, 306);
			this->btn_kirim->Name = L"btn_kirim";
			this->btn_kirim->Size = System::Drawing::Size(117, 37);
			this->btn_kirim->TabIndex = 23;
			this->btn_kirim->Text = L"KIRIM";
			this->btn_kirim->UseVisualStyleBackColor = true;
			this->btn_kirim->Click += gcnew System::EventHandler(this, &Form2::btn_kirim_Click);
			// 
			// main_grub
			// 
			this->main_grub->Controls->Add(this->btn_kembali);
			this->main_grub->Controls->Add(this->btn_kirim);
			this->main_grub->Controls->Add(this->groupBox4);
			this->main_grub->Controls->Add(this->groupBox3);
			this->main_grub->Controls->Add(this->groupBox2);
			this->main_grub->Controls->Add(this->groupBox1);
			this->main_grub->Location = System::Drawing::Point(77, 97);
			this->main_grub->Name = L"main_grub";
			this->main_grub->Size = System::Drawing::Size(695, 396);
			this->main_grub->TabIndex = 24;
			this->main_grub->TabStop = false;
			// 
			// btn_kembali
			// 
			this->btn_kembali->Location = System::Drawing::Point(546, 306);
			this->btn_kembali->Name = L"btn_kembali";
			this->btn_kembali->Size = System::Drawing::Size(118, 37);
			this->btn_kembali->TabIndex = 24;
			this->btn_kembali->Text = L"KEMBALI";
			this->btn_kembali->UseVisualStyleBackColor = true;
			this->btn_kembali->Click += gcnew System::EventHandler(this, &Form2::btn_kembali_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(853, 477);
			this->Controls->Add(this->main_grub);
			this->Controls->Add(this->label13);
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->login_groub->ResumeLayout(false);
			this->login_groub->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->main_grub->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	


private: System::Void btn_kirim_Click(System::Object^  sender, System::EventArgs^  e) {
			 if((cb_tgl->Text->Equals(" "))||(cb_tgl->Text->Equals(" "))||(cb_th->Text->Equals(" "))
				 ||(cb_jenis->Text->Equals(" "))||(cb_negara->Text->Equals(" "))
				 ||(cb_th_k->Text->Equals(" "))||(cb_gel->Text->Equals(" "))
				 ||(cb_tgl->Text->Equals(" "))||(cb_ke->Text->Equals(" "))||(tb_nama->Text->Equals(""))
				 ||(tb_status->Text->Equals(" "))||(tb_pekerjaan->Text->Equals(" "))||(tb_pekerjaan->Text->Equals(" "))
				 ||(tb_kota->Text->Equals(" "))||(tb_kab->Text->Equals(" "))||(tb_prof->Text->Equals(" "))
				 ||(tb_email->Text->Equals(" "))||(tb_no->Text->Equals(" "))
				 ){
			
					MessageBox::Show("Data belum lengkap");

			 }
			 else{
					MessageBox::Show("Data terkirim");
			 }
		 }
private: System::Void btn_kembali_Click(System::Object^  sender, System::EventArgs^  e) {
			 DATA:Show();
			 groupBox2->Hide();
			 //Form1::Hide();
			// My.Forms.DATA.Show();
			 
			
		 }

};
}

