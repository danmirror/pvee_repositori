#pragma once

namespace borang {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
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
	private: System::Windows::Forms::GroupBox^  riwayat_grub;
	protected: 
	private: System::Windows::Forms::Button^  btn_kembali2;
	private: System::Windows::Forms::Button^  bt_simpan;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::ComboBox^  cb_gel;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ComboBox^  cb_ke;
	private: System::Windows::Forms::ComboBox^  cb_th_k;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->riwayat_grub = (gcnew System::Windows::Forms::GroupBox());
			this->btn_kembali2 = (gcnew System::Windows::Forms::Button());
			this->bt_simpan = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->cb_gel = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->cb_ke = (gcnew System::Windows::Forms::ComboBox());
			this->cb_th_k = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->riwayat_grub->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// riwayat_grub
			// 
			this->riwayat_grub->Controls->Add(this->btn_kembali2);
			this->riwayat_grub->Controls->Add(this->bt_simpan);
			this->riwayat_grub->Controls->Add(this->groupBox4);
			this->riwayat_grub->Location = System::Drawing::Point(111, 49);
			this->riwayat_grub->Name = L"riwayat_grub";
			this->riwayat_grub->Size = System::Drawing::Size(297, 285);
			this->riwayat_grub->TabIndex = 26;
			this->riwayat_grub->TabStop = false;
			// 
			// btn_kembali2
			// 
			this->btn_kembali2->Location = System::Drawing::Point(162, 232);
			this->btn_kembali2->Name = L"btn_kembali2";
			this->btn_kembali2->Size = System::Drawing::Size(118, 37);
			this->btn_kembali2->TabIndex = 25;
			this->btn_kembali2->Text = L"KEMBALI";
			this->btn_kembali2->UseVisualStyleBackColor = true;
			this->btn_kembali2->Click += gcnew System::EventHandler(this, &Form2::btn_kembali2_Click);
			// 
			// bt_simpan
			// 
			this->bt_simpan->Location = System::Drawing::Point(24, 232);
			this->bt_simpan->Name = L"bt_simpan";
			this->bt_simpan->Size = System::Drawing::Size(117, 37);
			this->bt_simpan->TabIndex = 24;
			this->bt_simpan->Text = L"SIMPAN";
			this->bt_simpan->UseVisualStyleBackColor = true;
			this->bt_simpan->Click += gcnew System::EventHandler(this, &Form2::bt_simpan_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->cb_gel);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->cb_ke);
			this->groupBox4->Controls->Add(this->cb_th_k);
			this->groupBox4->Location = System::Drawing::Point(15, 35);
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
			this->label13->Location = System::Drawing::Point(84, 9);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(370, 37);
			this->label13->TabIndex = 27;
			this->label13->Text = L"DATA PESERTA UMROH";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(571, 346);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->riwayat_grub);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->riwayat_grub->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bt_simpan_Click(System::Object^  sender, System::EventArgs^  e) {
				 if((cb_th_k->Text->Equals(" "))||(cb_gel->Text->Equals(" "))
				 ||(cb_ke->Text->Equals(" "))){
					 MessageBox::Show("data anda belum lengkap");
				 }
			 else{
					MessageBox::Show("Database tidak tersedia data tidak tersimpan");
					Form2::Hide();
					 }
			 }
private: System::Void btn_kembali2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form2::Hide();
		 }
};
}
