// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Project1PCH1.h"
#include "Unit1.h"
#include "design.h"
#include "login.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit6.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "PraButtonStyle"
#pragma resource "*.dfm"
TForm2 *Form2;

// ---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner) {
}
// ---------------------------------------------------------------------------

void __fastcall TForm2::PraButtonStyle27Click(TObject *Sender) {
	///Saqlash
	TDate sana = Date().CurrentDate();

	DataModule1->ADOQueryombor->SQL->Clear();
	DataModule1->ADOQueryombor->SQL->Add("INSERT INTO `store` (`barcode`, `product_name`, `desc`, `category` , `list_price`, `min_price`, `volume`, `type`, `warranty_date`, `supplier_id`, `date`, `status`) VALUES ('"+Edit1->Text.Trim()+"', '"+Edit3->Text.Trim()+"', '"+Edit6->Text.Trim()+"', '"+ComboBox1->ItemIndex+"', '"+Edit2->Text.Trim()+"', '"+Edit4->Text.Trim()+"', '"+Edit5->Text.Trim()+"', '"+ComboBox2->ItemIndex+"', '"+Edit7->Text.Trim()+"', '"+ComboBox3->ItemIndex+"', )");  // '"+Edit8->Text.Trim()+"'
	DataModule1->ADOQueryombor->ExecSQL();

	DataModule1->ADOQueryombor->SQL->Clear();
	DataModule1->ADOQueryombor->SQL->Text = "SELECT id, barcode, product_name, desc, (SELECT name FROM category  WHERE id=category) as category, list_price, min_price, volume, (SELECT name FROM type WHERE id=type) as type, warranty_date, supplier_id, date, `status`  FROM store WHERE `status`=1;";
	DataModule1->ADOQueryombor->Active=true;


	////o'zgartirish
    	TDate sssss = Date().CurrentDate();

	int id=DataModule1->ADOQueryombor->FieldByName(id)->AsInteger;

	DataModule1->ADOQueryombor->Open();
	DataModule1->ADOQueryombor->SQL->Text="update store set barcode='"+Edit1->Text.Trim()+"',product_name='"+Edit3->Text.Trim()+"',desc='"+Edit6->Text.Trim()+"',category='"+ComboBox1->ItemIndex+"',list_price='"+Edit2->Text.Trim()+"',min_price='"+Edit5->Text.Trim()+"',type='"+ComboBox2->ItemIndex+"',warranty_date='"+Edit7->Text.Trim()+"',supplier_id='"+ComboBox3->Text.Trim()+"',date='"+sssss+"' where id='"+id+"'";
	DataModule1->ADOQueryombor->ExecSQL();
	DataModule1->ADOQueryombor->Close();
	DataModule1->ADOQueryombor->SQL->Text="select * from store";
	DataModule1->ADOQueryombor->Open();

	Form2->Close();
}
// ---------------------------------------------------------------------------


void __fastcall TForm2::FormShow(TObject *Sender)
{

//	if (Form1->Qosh_Ozgar=="ozgartirish") {
//
//	}
	 ///Categoriya chiqarish
	DataModule1->ADOQueryCategory->Close();
	ComboBox1->Items->Clear();
	DataModule1->ADOQueryCategory->SQL->Text =
		"SELECT * FROM category WHERE `status`=1;";
	DataModule1->ADOQueryCategory->Open();
	DataModule1->ADOQueryCategory->First();
	for (int i = 0; i < DataModule1->ADOQueryCategory->RecordCount; i++) {
		String fish = DataModule1->ADOQueryCategory->FieldByName("name")
			->AsString;
		ComboBox1->Items->Add(fish);
		DataModule1->ADOQueryCategory->Next();
	}

		DataModule1->ADOQuerycurrier_id->Close();
	DataModule1->ADOQuerycurrier_id->SQL->Text=" select * from currier_id ";
	DataModule1->ADOQuerycurrier_id->Open();
	ComboBox3->Items->Clear();
	DataModule1->ADOQuerycurrier_id->First();

	for(int i=0;i<DataModule1->ADOQuerycurrier_id->RecordCount;i++)
	{
	 String a=DataModule1->ADOQuerycurrier_id->FieldByName("name")->AsString;
	 ComboBox3->Items->Add(a);
 DataModule1->ADOQuerycurrier_id->Next();
}
}
// ---------------------------------------------------------------------------
void __fastcall TForm2::ComboBox3Select(TObject *Sender)
{
	DataModule1->ADOQuerycurrier_id->Close();
  DataModule1->ADOQuerycurrier_id->SQL->Text=" select * from currier_id ";
  DataModule1->ADOQuerycurrier_id->Open();
  DataModule1->ADOQuerycurrier_id->First();
  for(int i=0;i<DataModule1->ADOQuerycurrier_id->RecordCount;i++)
  {
   String name=DataModule1->ADOQuerycurrier_id->FieldByName("Name")->AsString;
   int id=DataModule1->ADOQuerycurrier_id->FieldByName("id")->AsInteger;
   if(name==ComboBox3->Text)
   {
	Label1->Caption=IntToStr(id);
   }

		DataModule1->ADOQuerycurrier_id->Next();
  }
}
//---------------------------------------------------------------------------


