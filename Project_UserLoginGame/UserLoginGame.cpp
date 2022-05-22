//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "UserLoginGame.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
bool isNumberEntered = false;
int guessNumber;
int attemptsCounter=0;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	lblTitle->Text="Please enter the number:";
	lblCounter->Text="0";
	lblHelper->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnConfirmClick(TObject *Sender)
{
   if(!isNumberEntered){
	  guessNumber=edtNumber->Text.ToInt();
	  isNumberEntered=true;
	  lblTitle->Text="Now you can guess the number:";
      edtNumber->Text="";
   }
   else{
		int secondUsersNumber=edtNumber->Text.ToInt();
		if(secondUsersNumber == guessNumber){
			lblHelper->Text="You WON!!! Congratulations!";
			btnConfirm->Enabled=false;
            return;
		}
		else if(secondUsersNumber > guessNumber)
			lblHelper->Text="Number too Big!";
		else
			lblHelper->Text="Number too Low!";

		//attemptsCounter++;
		lblCounter->Text= ++attemptsCounter;
   }
}
//---------------------------------------------------------------------------
