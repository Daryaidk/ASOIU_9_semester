//---------------------------------------------------------------------------

#ifndef LR2H
#define LR2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TЛР2 : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TDBGrid *DBGrid2;
	TDBGrid *DBGrid3;
	TADOTable *ADOTable1;
	TADOConnection *ADOConnection1;
	TDataSource *DataSource1;
	TADOTable *ADOTable2;
	TADOConnection *ADOConnection2;
	TDataSource *DataSource2;
	TButton *Добавить1;
	TButton *Редактировать1;
	TButton *Удалить1;
	TButton *Добавить2;
	TButton *Редактировать2;
	TButton *Удалить2;
	TButton *Добавить3;
	TButton *Редактировать3;
	TButton *Удалить3;
	TButton *Выйти;
	TADOTable *ADOTable3;
	TADOConnection *ADOConnection3;
	TDataSource *DataSource3;
	void __fastcall Добавить1Click(TObject *Sender);
	void __fastcall Добавить2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TЛР2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TЛР2 *ЛР2;
//---------------------------------------------------------------------------
#endif
