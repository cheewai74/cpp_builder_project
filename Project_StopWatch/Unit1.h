//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <System.ImageList.hpp>
#include <Vcl.BaseImageCollection.hpp>
#include <Vcl.ImageCollection.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.VirtualImageList.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *EditBox;
	TTimer *Timer;
	TCheckBox *TimerEnabledCheckBox;
	TButton *StartButton;
	TButton *StopButton;
	TMainMenu *MainMenu;
	TMenuItem *TimerMenu;
	TMenuItem *StartTimerMenuItem;
	TMenuItem *StopTimerMenuItem;
	TToolButton *StartTimerToolButton;
	TToolButton *ToolButton2;
	TToolButton *ToolButton3;
	TToolBar *Toolbar;
	TMenuItem *ViewMenu;
	TMenuItem *ViewToolbarMenuItem;
	TActionList *Action;
	TAction *StartTimerAction;
	TAction *StopTimerAction;
	TImageCollection *ImageCollection;
	TVirtualImageList *VirtualImageList;
	void __fastcall TimerTimer(TObject *Sender);
	void __fastcall StartButtonClick(TObject *Sender);
	void __fastcall StopButtonClick(TObject *Sender);
	void __fastcall ViewToolbarMenuItemClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
