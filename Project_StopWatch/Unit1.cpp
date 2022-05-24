//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::TimerTimer(TObject *Sender)
{
	static unsigned long count;
	if(TimerEnabledCheckBox->Checked ==true){
		EditBox->Text = count;
		count++;
	}


}
//---------------------------------------------------------------------------
void __fastcall TMainForm::StartButtonClick(TObject *Sender)
{
	Timer->Enabled = true;

}
//---------------------------------------------------------------------------
void __fastcall TMainForm::StopButtonClick(TObject *Sender)
{
	Timer->Enabled = false;
}

void __fastcall TMainForm::ViewToolbarMenuItemClick(TObject *Sender)
{
	Toolbar->Visible =  ViewToolbarMenuItem->Checked;
}
//---------------------------------------------------------------------------

