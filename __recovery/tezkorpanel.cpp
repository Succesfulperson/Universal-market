//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "tezkorpanel.h"
#include "design.h"
#include "login.h"
#include "Project1PCH1.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "PraButtonStyle"
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::ScrollBox1MouseWheelDown(TObject *Sender, TShiftState Shift,
		  TPoint &MousePos, bool &Handled)
{
//    Form5->ScrollBox1->VertScrollBar->Position++;
}
//---------------------------------------------------------------------------
void __fastcall TForm5::ScrollBox1MouseWheelUp(TObject *Sender, TShiftState Shift,
		  TPoint &MousePos, bool &Handled)
{
//	Form5->ScrollBox1->VertScrollBar->Position--;
}
//---------------------------------------------------------------------------


void __fastcall TForm5::FormShow(TObject *Sender)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::PraButtonStyle9Click(TObject *Sender)
{

}
//---------------------------------------------------------------------------

