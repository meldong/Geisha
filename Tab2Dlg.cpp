// MiscellaneousToolsDlg.cpp : implementation file
//

#include "stdafx.h"
#include "LES V3R1.h"
#include "MiscellaneousToolsDlg.h"
#include "afxdialogex.h"


// MiscellaneousToolsDlg dialog

IMPLEMENT_DYNAMIC(MiscellaneousToolsDlg, CDialogEx)

MiscellaneousToolsDlg::MiscellaneousToolsDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MISCELLANEOUSTOOLS, pParent)
{

}

MiscellaneousToolsDlg::~MiscellaneousToolsDlg()
{
}

void MiscellaneousToolsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_IRRADIANCE, m_btn_irradiance);
	DDX_Control(pDX, IDC_BUTTON_CANDELA, m_btn_candela);
	DDX_Control(pDX, IDC_BUTTON_QUEUE, m_btn_queue);
	DDX_Control(pDX, IDC_BUTTON_TOLERANCE, m_btn_tolerance);
	DDX_Control(pDX, IDC_BUTTON_CONTRAST, m_btn_contrast);
}


BEGIN_MESSAGE_MAP(MiscellaneousToolsDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_IRRADIANCE, &MiscellaneousToolsDlg::OnBnClickedButtonIrradiance)
	ON_BN_CLICKED(IDC_BUTTON_CANDELA, &MiscellaneousToolsDlg::OnBnClickedButtonCandela)
	ON_BN_CLICKED(IDC_BUTTON_QUEUE, &MiscellaneousToolsDlg::OnBnClickedButtonQueue)
	ON_BN_CLICKED(IDC_BUTTON_TOLERANCE, &MiscellaneousToolsDlg::OnBnClickedButtonTolerance)
	ON_BN_CLICKED(IDC_BUTTON_CONTRAST, &MiscellaneousToolsDlg::OnBnClickedButtonContrast)
END_MESSAGE_MAP()


// MiscellaneousToolsDlg message handlers


void MiscellaneousToolsDlg::OnBnClickedButtonIrradiance()
{
	// TODO: Add your control notification handler code here
	ShellExecute(NULL, _T("open"), _T("C:\\auto-tools\\excel\\irr_calculator_v1.1.xlsm"), NULL, NULL, SW_MAXIMIZE);
}


void MiscellaneousToolsDlg::OnBnClickedButtonCandela()
{
	// TODO: Add your control notification handler code here
	ShellExecute(NULL, _T("open"), _T("C:\\auto-tools\\excel\\can_calculator_v1.1.xlsm"), NULL, NULL, SW_MAXIMIZE);
}


void MiscellaneousToolsDlg::OnBnClickedButtonQueue()
{
	// TODO: Add your control notification handler code here
	ShellExecute(NULL, _T("open"), _T("C:\\auto-tools\\excel\\aqs_v1.0.xlsm"), NULL, NULL, SW_MAXIMIZE);
}


void MiscellaneousToolsDlg::OnBnClickedButtonTolerance()
{
	// TODO: Add your control notification handler code here
}


void MiscellaneousToolsDlg::OnBnClickedButtonContrast()
{
	// TODO: Add your control notification handler code here
	ShellExecute(NULL, _T("open"), _T("C:\\auto-tools\\excel\\obi_v1.1.xlsm"), NULL, NULL, SW_MAXIMIZE);
}
