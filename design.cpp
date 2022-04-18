//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "design.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::m2Click(TObject *Sender)
{
o1->Visible=false;
o2->Visible=true;
o3->Visible=false;
o4->Visible=false;
o5->Visible=false;
o6->Visible=false;

m1->ParentBackground=true;
m2->ParentBackground=false;
m3->ParentBackground=true;
m4->ParentBackground=true;
m5->ParentBackground=true;
m6->ParentBackground=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::m3Click(TObject *Sender)
{
o1->Visible=false;
o2->Visible=false;
o3->Visible=true;
o4->Visible=false;
o5->Visible=false;
o6->Visible=false;


m1->ParentBackground=true;
m2->ParentBackground=true;
m3->ParentBackground=false;
m4->ParentBackground=true;
m5->ParentBackground=true;
m6->ParentBackground=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::m4Click(TObject *Sender)
{
o1->Visible=false;
o2->Visible=false;
o3->Visible=false;
o4->Visible=true;
o5->Visible=false;
o6->Visible=false;

m1->ParentBackground=true;
m2->ParentBackground=true;
m3->ParentBackground=true;
m4->ParentBackground=false;
m5->ParentBackground=true;
m6->ParentBackground=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::m1Click(TObject *Sender)
{
o1->Visible=true;
o2->Visible=false;
o3->Visible=false;
o4->Visible=false;
o5->Visible=false;
o6->Visible=false;


m1->ParentBackground=false;
m2->ParentBackground=true;
m3->ParentBackground=true;
m4->ParentBackground=true;
m5->ParentBackground=true;
m6->ParentBackground=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::m5Click(TObject *Sender)
{
o1->Visible=false;
o2->Visible=false;
o3->Visible=false;
o4->Visible=false;
o5->Visible=true;
o6->Visible=false;


m1->ParentBackground=true;
m2->ParentBackground=true;
m3->ParentBackground=true;
m4->ParentBackground=true;
m5->ParentBackground=false;
m6->ParentBackground=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::m7Click(TObject *Sender)
{
//o1->Visible=false;
//o2->Visible=false;
//o3->Visible=false;
//o4->Visible=false;
//o5->Visible=false;
//o6->Visible=true;
////o7->Visible=false;
//
//
//m1->ParentBackground=true;
//m2->ParentBackground=true;
//m3->ParentBackground=true;
//m4->ParentBackground=true;
//m5->ParentBackground=true;
//m6->ParentBackground=false;
////m7->ParentBackground=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::m6Click(TObject *Sender)
{
o1->Visible=false;
o2->Visible=false;
o3->Visible=false;
o4->Visible=false;
o5->Visible=false;
o6->Visible=false;
o7->Visible=true;


m1->ParentBackground=true;
m2->ParentBackground=true;
m3->ParentBackground=true;
m4->ParentBackground=true;
m5->ParentBackground=true;
m6->ParentBackground=true;
m7->ParentBackground=false;
}
//---------------------------------------------------------------------------

