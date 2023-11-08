#pragma once

#include"Filehandling.h"
#include"MyForm1.h"
namespace Project34 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;



	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			pnlTerms->Hide();
			//
			//TODO: Add the constructor code here
			//
			Signup->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Signup_MouseUp);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btnExit;
	protected:

	private: System::Windows::Forms::Label^ lblUser;
	private: System::Windows::Forms::Label^ lblPass;
	private: System::Windows::Forms::TextBox^ txtboxUser;
	private: System::Windows::Forms::TextBox^ txtBoxPass;




	private: System::Windows::Forms::Button^ btnSignin;
	private: System::Windows::Forms::Label^ Signup;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ pnlTerms;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->lblPass = (gcnew System::Windows::Forms::Label());
			this->txtboxUser = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxPass = (gcnew System::Windows::Forms::TextBox());
			this->btnSignin = (gcnew System::Windows::Forms::Button());
			this->Signup = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnlTerms = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pnlTerms->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnExit
			// 
			resources->ApplyResources(this->btnExit, L"btnExit");
			this->btnExit->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnExit->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnExit->Name = L"btnExit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lblUser
			// 
			resources->ApplyResources(this->lblUser, L"lblUser");
			this->lblUser->BackColor = System::Drawing::Color::Transparent;
			this->lblUser->ForeColor = System::Drawing::SystemColors::Control;
			this->lblUser->Name = L"lblUser";
			this->lblUser->Click += gcnew System::EventHandler(this, &MyForm::lblUser_Click);
			// 
			// lblPass
			// 
			resources->ApplyResources(this->lblPass, L"lblPass");
			this->lblPass->BackColor = System::Drawing::Color::Transparent;
			this->lblPass->ForeColor = System::Drawing::SystemColors::Control;
			this->lblPass->Name = L"lblPass";
			// 
			// txtboxUser
			// 
			resources->ApplyResources(this->txtboxUser, L"txtboxUser");
			this->txtboxUser->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtboxUser->ForeColor = System::Drawing::SystemColors::ControlText;
			this->txtboxUser->Name = L"txtboxUser";
			// 
			// txtBoxPass
			// 
			resources->ApplyResources(this->txtBoxPass, L"txtBoxPass");
			this->txtBoxPass->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtBoxPass->ForeColor = System::Drawing::SystemColors::Control;
			this->txtBoxPass->Name = L"txtBoxPass";
			this->txtBoxPass->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// btnSignin
			// 
			resources->ApplyResources(this->btnSignin, L"btnSignin");
			this->btnSignin->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnSignin->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnSignin->Name = L"btnSignin";
			this->btnSignin->UseVisualStyleBackColor = false;
			this->btnSignin->Click += gcnew System::EventHandler(this, &MyForm::btnSignin_Click);
			// 
			// Signup
			// 
			resources->ApplyResources(this->Signup, L"Signup");
			this->Signup->BackColor = System::Drawing::Color::Transparent;
			this->Signup->ForeColor = System::Drawing::SystemColors::Highlight;
			this->Signup->Name = L"Signup";
			this->Signup->Click += gcnew System::EventHandler(this, &MyForm::Signup_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Name = L"label1";
			// 
			// checkBox1
			// 
			resources->ApplyResources(this->checkBox1, L"checkBox1");
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label2->Name = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// pnlTerms
			// 
			resources->ApplyResources(this->pnlTerms, L"pnlTerms");
			this->pnlTerms->Controls->Add(this->button1);
			this->pnlTerms->Controls->Add(this->textBox1);
			this->pnlTerms->Controls->Add(this->label3);
			this->pnlTerms->Name = L"pnlTerms";
			this->pnlTerms->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pnlTerms_Paint);
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Name = L"label3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Name = L"label4";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Name = L"label5";
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AllowDrop = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pnlTerms);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Signup);
			this->Controls->Add(this->btnSignin);
			this->Controls->Add(this->txtBoxPass);
			this->Controls->Add(this->txtboxUser);
			this->Controls->Add(this->lblPass);
			this->Controls->Add(this->lblUser);
			this->Controls->Add(this->btnExit);
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowInTaskbar = false;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->pnlTerms->ResumeLayout(false);
			this->pnlTerms->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close(); 

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void lblUser_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSignin_Click(System::Object^ sender, System::EventArgs^ e) {
	Login::login(txtboxUser, txtBoxPass);	
	}

	private: System::Void Signup_Click(System::Object^ sender, System::EventArgs^ e) {
		Signup->ForeColor = System::Drawing::Color::Red;

		MyForm1^ signup = gcnew MyForm1();
		signup->ShowDialog();
	}
	private: System::Void Signup_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Signup->ForeColor = System::Drawing::Color::Black;

	}





private: System::Void pnlTerms_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlTerms->Show();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	pnlTerms->Hide();
}

};
}
