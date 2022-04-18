//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include "PraButtonStyle.hpp"
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabeledEdit *LabeledEdit1;
	TLabel *Label1;
	TLabel *Label3;
	TLabel *Label2;
	TPraButtonStyle *PraButtonStyle39;
	TPanel *Panel2;
	TLabeledEdit *LabeledEdit2;
	TDateTimePicker *DateTimePicker1;
	TDateTimePicker *DateTimePicker2;
	TEdit *Edit1;
	TPraButtonStyle *PraButtonStyle1;
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
