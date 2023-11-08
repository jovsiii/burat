#pragma once
#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

ref class Login {
public:
    // function for reading and loging in
    static void login(TextBox^ txtboxUser, TextBox^ txtBoxPass) {
        String^ username = txtboxUser->Text;
        String^ password = txtBoxPass->Text;

        String^ documentsPath = Environment::GetFolderPath(Environment::SpecialFolder::MyDocuments);
        String^ fileName = "cred.txt";
        String^ filePath = Path::Combine(documentsPath, fileName);

        try {
            StreamReader^ file = gcnew StreamReader(filePath);

            String^ line;
            bool loggedIn = false;

            while ((line = file->ReadLine()) != nullptr) {
                array<String^>^ parts = line->Split(',');

                if (parts->Length == 4 && parts[0]->Trim() == username && parts[1]->Trim() == password) {
                    loggedIn = true;
                    break;
                }
            }

            file->Close();

            if (loggedIn) {
                MessageBox::Show("Login successful!");
            }
            else {
                MessageBox::Show("Invalid username or password. Please try again.");
            }
        }
        catch (IOException^ e) {
            MessageBox::Show("Error accessing the file: " + e->Message);
        }
    
    }
};

ref class Register {


public: static void reg(TextBox^ tbUsername, TextBox^ tbEmail, TextBox^ tbPassword, TextBox^ tbConfirm) {

    array<TextBox^>^ textBoxes = { tbUsername, tbEmail, tbPassword, tbConfirm };
    //Detect id the text box is empty
    for each (TextBox ^ textBox in textBoxes) {
        String^ text = textBox->Text->Trim(); 
        if (String::IsNullOrEmpty(text) || String::IsNullOrWhiteSpace(text)) {
            MessageBox::Show("Please fill in all the fields.");
            return;
        }
    }
    //checks if password match with confirm password
    if (tbPassword->Text->Trim() != tbConfirm->Text->Trim()) {
        MessageBox::Show("Passwords do not match.");
    }
    String^ documentsPath = Environment::GetFolderPath(Environment::SpecialFolder::MyDocuments);
    String^ fileName = "cred.txt";
    String^ filePath = Path::Combine(documentsPath, fileName);
    try {
        StreamWriter^ file = gcnew StreamWriter(filePath, true);
        // Create the string to write to the file
        String^ newAccount = tbUsername->Text->Trim() + "," + tbPassword->Text->Trim() + "," + tbEmail->Text->Trim() + "," + tbConfirm->Text->Trim();

        // Write the new account information to the file
        file->WriteLine(newAccount);

        file->Close(); // Close the StreamWriter

        MessageBox::Show("Account created successfully!");
    }
    catch (IOException^ ex) {
        MessageBox::Show("Error accessing the file: " + ex->Message);
    }
}


};