// Tab1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "Geisha.h"
#include "Tab1Dlg.h"
#include "afxdialogex.h"


// Tab1Dlg dialog

IMPLEMENT_DYNAMIC(Tab1Dlg, CDialogEx)

Tab1Dlg::Tab1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAB1_DIALOG, pParent)
{

}

Tab1Dlg::~Tab1Dlg()
{
}

void Tab1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON1, m_Button1);
	DDX_Control(pDX, IDC_BUTTON2, m_Button2);
	DDX_Control(pDX, IDC_BUTTON3, m_Button3);
	DDX_Control(pDX, IDC_BUTTON4, m_Button4);
}


BEGIN_MESSAGE_MAP(Tab1Dlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Tab1Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Tab1Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &Tab1Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &Tab1Dlg::OnBnClickedButton4)
END_MESSAGE_MAP()


// Tab1Dlg message handlers


void Tab1Dlg::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	ShellExecute(NULL, _T("open"), _T("res\\Cloud.png"), NULL, NULL, SW_RESTORE);
}


void Tab1Dlg::OnBnClickedButton2()
{
	// TODO: Add your control notification handler code here
	ShellExecute(NULL, _T("open"), _T("res\\Fireware.png"), NULL, NULL, SW_RESTORE);
}


void Tab1Dlg::OnBnClickedButton3()
{
	// TODO: Add your control notification handler code here
	ShellExecute(NULL, _T("open"), _T("res\\Server.png"), NULL, NULL, SW_RESTORE);
}


void Tab1Dlg::OnBnClickedButton4()
{
	// TODO: Add your control notification handler code here
	ShellExecute(NULL, _T("open"), _T("res\\Time.png"), NULL, NULL, SW_RESTORE);
}


BOOL Tab1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Add extra initialization here
	m_Button1.SetBitmap(::LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP1)));
	m_Button2.SetBitmap(::LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP2)));
	m_Button3.SetBitmap(::LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP3)));
	m_Button4.SetBitmap(::LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP4)));

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}
