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
class T��2 : public TForm
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
	TButton *��������1;
	TButton *�������������1;
	TButton *�������1;
	TButton *��������2;
	TButton *�������������2;
	TButton *�������2;
	TButton *��������3;
	TButton *�������������3;
	TButton *�������3;
	TButton *�����;
	TADOTable *ADOTable3;
	TADOConnection *ADOConnection3;
	TDataSource *DataSource3;
	void __fastcall ��������1Click(TObject *Sender);
	void __fastcall ��������2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall T��2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE T��2 *��2;
//---------------------------------------------------------------------------
#endif