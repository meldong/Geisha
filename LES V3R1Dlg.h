
// LES V3R1Dlg.h : header file
//

#pragma once
#include "afxcmn.h"
#include "StandardSolutionsDlg.h"
#include "MiscellaneousToolsDlg.h"


// CLESV3R1Dlg dialog
class CLESV3R1Dlg : public CDialogEx
{
// Construction
public:
	CLESV3R1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LESV3R1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	StandardSolutionsDlg m_TabPage1;
	MiscellaneousToolsDlg m_TabPage2;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_tab;
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};
