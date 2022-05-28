//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#pragma hdrstop

#include "LoginForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyLoginForm *MyLoginForm;
//---------------------------------------------------------------------------
__fastcall TMyLoginForm::TMyLoginForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

 const char* convertToCharPtr(AnsiString ansiStr){
	 return ansiStr.c_str();
 }

std::vector<std::string> parseCommaDelimitedString(std::string line){
	std::vector<std::string> result;
	std::stringstream s_stream(line);

	while(s_stream.good()){
		std::string substr;
		getline(s_stream, substr,',');
		result.push_back(substr);
	}
    return result;
}

void __fastcall TMyLoginForm::loginButtonClick(TObject *Sender)
{
	fstream myFile;
	myFile.open("registeredUsers.txt",ios::in);
	if(myFile.is_open()){
		std::string line;

		while(getline(myFile, line)){
		   std::vector<std::string> parsedLine =  parseCommaDelimitedString(line);
		   const char* username=  parsedLine.at(2).c_str();

//		   AnsiString editUsername=usernameEdit->Text;
//		   const char* usernameString=editUsername.c_str();

		   //if(std::strcmp(username, usernameString)==0){
		   if(std::strcmp(username, convertToCharPtr(usernameEdit->Text))==0){
				const char* password=  parsedLine.at(3).c_str();
				// AnsiString editPassword=passwordEdit->Text;
				// const char* passwordString=editPassword.c_str();

				//if(std::strcmp(password, passwordString)==0){
				if(std::strcmp(password, convertToCharPtr(passwordEdit->Text))==0){
                    messageLabel->Text= "Login Successfully !!!";
				}
				else{
                    messageLabel->Text= "Error Wrong Username or Password !!!";
                }
		   }
        }

	}
}
//---------------------------------------------------------------------------
