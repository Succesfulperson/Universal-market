//---------------------------------------------------------------------------

#ifndef designH
#define designH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *menu;
	TPanel *header;
	TPanel *logo;
	TPanel *search;
	TImage *Image1;
	TEdit *Edit1;
	TPanel *profile;
	TImage *Image2;
	TLabel *Label1;
	TPanel *m2;
	TImage *Image4;
	TLabel *Label3;
	TPanel *m3;
	TImage *Image5;
	TLabel *Label4;
	TPanel *m4;
	TImage *Image6;
	TLabel *Label5;
	TPanel *o1;
	TPanel *o2;
	TPanel *o3;
	TPanel *o4;
	TPanel *m1;
	TImage *Image8;
	TLabel *Label7;
	TPanel *oyna;
	TPanel *m5;
	TImage *Image3;
	TLabel *Label2;
	TPanel *o5;
	TPanel *m6;
	TImage *Image7;
	TLabel *Label6;
	TPanel *o6;
	TPanel *m7;
	TImage *Image9;
	TLabel *Label8;
	TPanel *o7;
	void __fastcall m2Click(TObject *Sender);
	void __fastcall m3Click(TObject *Sender);
	void __fastcall m4Click(TObject *Sender);
	void __fastcall m1Click(TObject *Sender);
	void __fastcall m5Click(TObject *Sender);
	void __fastcall m7Click(TObject *Sender);
	void __fastcall m6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
