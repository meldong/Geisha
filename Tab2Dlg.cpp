// Tab2Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "Geisha.h"
#include "Tab2Dlg.h"
#include "afxdialogex.h"


// Tab2Dlg dialog

IMPLEMENT_DYNAMIC(Tab2Dlg, CDialogEx)

Tab2Dlg::Tab2Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAB2_DIALOG, pParent)
{

}

Tab2Dlg::~Tab2Dlg()
{
}

void Tab2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Tab2Dlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &Tab2Dlg::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &Tab2Dlg::OnBnClickedCancel)
END_MESSAGE_MAP()


// Tab2Dlg message handlers


void Tab2Dlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
}


void Tab2Dlg::OnBnClickedCancel()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnCancel();
}
