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
	DataModule1->ADOQueryfast_panel->Close();
	DataModule1->ADOQueryfast_panel->SQL->Text=" select * from fast_panel ";
	DataModule1->ADOQueryfast_panel->Open();



	if(DataModule1->ADOQueryfast_panel->RecordCount)
	{
	String fish = DataModule1->ADOQueryfast_panel->FieldByName("Name")->AsString;
	  TPraButtonStyle *tugma=new TPraButtonStyle(Form5);
	  tugma->Parent=FlowPanel1;
	  tugma->Left=PraButtonStyle9->Left;
	  tugma->Width=PraButtonStyle9->Width;
	  tugma->Height=PraButtonStyle9->Height;
	  tugma->Caption=fish;
	  tugma->Margins->Left = PraButtonStyle9->Margins->Left;
	  tugma->Margins->Top = PraButtonStyle9->Margins->Top;
	  tugma->Margins->Right = PraButtonStyle9->Margins->Right;
	  tugma->Margins->Bottom = PraButtonStyle9->Margins->Bottom;
	  //tugma->Focused=PraButtonStyle9->Focused;
	  tugma->Brush->Color=PraButtonStyle9->Brush->Color;
	  tugma->Brush->Style=PraButtonStyle9->Brush->Style;
	  tugma->BrushDown->Color=PraButtonStyle9->BrushDown->Color;
	  tugma->BrushFocused->Color=PraButtonStyle9->BrushFocused->Color;
	  tugma->Font->Color=PraButtonStyle9->Font->Color;
	  tugma->Font->Size=PraButtonStyle9->Font->Size;
	  //tugma->FontDisabled->Color=PraButtonStyle9->FontDisabled;
	  tugma->FontDisabled->Size=PraButtonStyle9->FontDisabled->Size;
	  tugma->FontDown->Color=PraButtonStyle9->FontDown->Color;
	  tugma->FontDown->Size=PraButtonStyle9->FontDown->Size;
	  tugma->FontFocused->Color=PraButtonStyle9->FontFocused->Color;
	  tugma->FontFocused->Size=PraButtonStyle9->FontFocused->Size;
	  tugma->Height=PraButtonStyle9->Height;
	  tugma->Margins->Bottom=PraButtonStyle9->Margins->Bottom;
	  tugma->Margins->Left=PraButtonStyle9->Margins->Left;
	  tugma->Margins->Right=PraButtonStyle9->Margins->Right;
	  tugma->Margins->Top=PraButtonStyle9->Margins->Top;
	  tugma->Pen->Color=PraButtonStyle9->Pen->Color;
	  tugma->PenDisabled->Color=PraButtonStyle9->PenDisabled->Color;
	  tugma->PenDown->Color=PraButtonStyle9->PenDown->Color;
	  tugma->FontFocused->Color=PraButtonStyle9->PenFocused->Color;
	  tugma->Pen->Color=PraButtonStyle9->Pen->Color;
	  tugma->PenDisabled->Color=PraButtonStyle9->PenDisabled->Color;
	  tugma->PenDown->Color=PraButtonStyle9->PenDown->Color;
	  tugma->PenDown->Width=PraButtonStyle9->PenDown->Width;
	  tugma->PenFocused->Width=PraButtonStyle9->PenFocused->Width;
	  tugma->PenFocused->Color=PraButtonStyle9->PenFocused->Color;
	  tugma->Radius=PraButtonStyle9->Radius;
	  tugma->Width=PraButtonStyle9->Width;


	}
}
//---------------------------------------------------------------------------
