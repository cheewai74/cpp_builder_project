//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblQuestionLabel;
	TRadioButton *rdbAnswer1;
	TRadioButton *rdbAnswer2;
	TRadioButton *rdbAnswer3;
	TButton *btnConfirm;
	TLabel *lblPoints;
	TLabel *lblPointsLabel;
	void __fastcall rdbAnswer1Change(TObject *Sender);
	void __fastcall rdbAnswer2Change(TObject *Sender);
	void __fastcall rdbAnswer3Change(TObject *Sender);
	void __fastcall btnConfirmClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
