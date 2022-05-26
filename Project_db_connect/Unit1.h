//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Data.Bind.Grid.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.FMXUI.Wait.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.IB.hpp>
#include <FireDAC.Phys.IBDef.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <Fmx.Bind.DBEngExt.hpp>
#include <Fmx.Bind.Editors.hpp>
#include <Fmx.Bind.Grid.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Grid.hpp>
#include <FMX.Grid.Style.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.Types.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Data.Bind.Controls.hpp>
#include <Fmx.Bind.Navigator.hpp>
#include <FMX.Layouts.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TFDConnection *EmployeeConnection;
	TFDQuery *StudentsTable;
	TStringGrid *StringGrid1;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TLinkGridToDataSource *LinkGridToDataSourceBindSourceDB1;
	TBindNavigator *BindNavigator1;
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
