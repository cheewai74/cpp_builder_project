//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnAddClick(TObject *Sender)
{
   String taskText = txtTask->Text;
   lstTask->Items->Add(taskText);
   txtTask->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::lstTaskItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	int index = Item->Index;
	lstTask->Items->Delete(index);

}
//---------------------------------------------------------------------------
