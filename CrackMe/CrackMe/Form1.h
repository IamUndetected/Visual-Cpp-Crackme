#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Label^ label2;


		   String^ Min;

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txt_User;
	private: System::Windows::Forms::TextBox^ txt_Pass;
	private: System::Windows::Forms::Button^ bnt_Login;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_User = (gcnew System::Windows::Forms::TextBox());
			this->txt_Pass = (gcnew System::Windows::Forms::TextBox());
			this->bnt_Login = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"500$ Program!";
			// 
			// txt_User
			// 
			this->txt_User->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_User->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_User->Location = System::Drawing::Point(12, 81);
			this->txt_User->Name = L"txt_User";
			this->txt_User->Size = System::Drawing::Size(207, 24);
			this->txt_User->TabIndex = 1;
			// 
			// txt_Pass
			// 
			this->txt_Pass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_Pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Pass->Location = System::Drawing::Point(12, 124);
			this->txt_Pass->Name = L"txt_Pass";
			this->txt_Pass->PasswordChar = '*';
			this->txt_Pass->Size = System::Drawing::Size(207, 24);
			this->txt_Pass->TabIndex = 1;
			// 
			// bnt_Login
			// 
			this->bnt_Login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bnt_Login->Location = System::Drawing::Point(15, 160);
			this->bnt_Login->Name = L"bnt_Login";
			this->bnt_Login->Size = System::Drawing::Size(90, 33);
			this->bnt_Login->TabIndex = 2;
			this->bnt_Login->Text = L"Login";
			this->bnt_Login->UseVisualStyleBackColor = true;
			this->bnt_Login->Click += gcnew System::EventHandler(this, &Form1::bnt_Login_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(207, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"X";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(237, 220);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->bnt_Login);
			this->Controls->Add(this->txt_Pass);
			this->Controls->Add(this->txt_User);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->Text = L"500$ Program";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bnt_Login_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_User->Text == "YourACoolHackerman" && txt_Pass->Text == "CrackMeByMiraii")
		{
			MessageBox::Show("Sucess! You cracked it!", "Keep it up bro!");
		}
		else
		{
			MessageBox::Show("Bruh try it again", ":(");
			Application::Exit();
		}
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Welcome to Miraiis 500$ Program!", "No cap 500$");
		
		
	}



private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
