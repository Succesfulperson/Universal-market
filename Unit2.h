//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "PraButtonStyle.hpp"
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TEdit *Edit1;
	TImage *Image2;
	TEdit *Edit2;
	TImage *Image3;
	TEdit *Edit3;
	TImage *Image4;
	TEdit *Edit4;
	TImage *Image5;
	TImage *Image6;
	TImage *Image7;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TImage *Image8;
	TEdit *Edit8;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TImage *Image9;
	TImage *Image10;
	TPraButtonStyle *PraButtonStyle27;
	TDateTimePicker *DateTimePicker1;
	TComboBox *ComboBox3;
	TPraButtonStyle *PraButtonStyle1;
	TLabel *Label1;
	void __fastcall PraButtonStyle27Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall ComboBox3Select(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
