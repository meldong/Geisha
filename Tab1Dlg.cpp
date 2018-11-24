// StandardSolutionsDlg.cpp : implementation file
//

#include "stdafx.h"
#include "LES V3R1.h"
#include "StandardSolutionsDlg.h"
#include "afxdialogex.h"


// StandardSolutionsDlg dialog

IMPLEMENT_DYNAMIC(StandardSolutionsDlg, CDialogEx)

StandardSolutionsDlg::StandardSolutionsDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_STANDARDSOLUTIONS, pParent)
{

}

StandardSolutionsDlg::~StandardSolutionsDlg()
{
}

void StandardSolutionsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_COAXIAL, m_btn_coaxial);
	DDX_Control(pDX, IDC_BUTTON_BAR, m_btn_bar);
	DDX_Control(pDX, IDC_BUTTON_RING, m_btn_ring);
	DDX_Control(pDX, IDC_BUTTON_PANEL, m_btn_panel);
}


BEGIN_MESSAGE_MAP(StandardSolutionsDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_COAXIAL, &StandardSolutionsDlg::OnBnClickedButtonCoaxial)
	ON_BN_CLICKED(IDC_BUTTON_BAR, &StandardSolutionsDlg::OnBnClickedButtonBar)
	ON_BN_CLICKED(IDC_BUTTON_RING, &StandardSolutionsDlg::OnBnClickedButtonRing)
	ON_BN_CLICKED(IDC_BUTTON_PANEL, &StandardSolutionsDlg::OnBnClickedButtonPanel)
END_MESSAGE_MAP()


// StandardSolutionsDlg message handlers


void StandardSolutionsDlg::OnBnClickedButtonCoaxial()
{
	// TODO: Add your control notification handler code here
}


void StandardSolutionsDlg::OnBnClickedButtonBar()
{
	// TODO: Add your control notification handler code here
}


void StandardSolutionsDlg::OnBnClickedButtonRing()
{
	// TODO: Add your control notification handler code here
	ShellExecute(NULL, _T("open"), _T("C:\\auto-tools\\excel\\les_v10_ring.xlsm"), NULL, NULL, SW_RESTORE);
}


void StandardSolutionsDlg::OnBnClickedButtonPanel()
{
	// TODO: Add your control notification handler code here
	ShellExecute(NULL, _T("open"), _T("C:\\auto-tools\\excel\\les_v10_panel.xlsm"), NULL, NULL, SW_RESTORE);
}


BOOL StandardSolutionsDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Add extra initialization here
	HBITMAP hBmpCoaxial = ::LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP_COAXIAL));
	m_btn_coaxial.SetBitmap(hBmpCoaxial);

	HBITMAP hBmpBar = ::LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP_BAR));
	m_btn_bar.SetBitmap(hBmpBar);

	HBITMAP hBmpRing = ::LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP_RING));
	m_btn_ring.SetBitmap(hBmpRing);

	HBITMAP hBmpPanel = ::LoadBitmap(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_BITMAP_PANEL));
	m_btn_panel.SetBitmap(hBmpPanel);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}
