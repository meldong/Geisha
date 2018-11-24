// GeishaDlg.h : header file
//

#pragma once
#include "afxcmn.h"
#include "Tab1Dlg.h"
#include "Tab2Dlg.h"


// CGeishaDlg dialog
class CGeishaDlg : public CDialogEx
{
// Construction
public:
	CGeishaDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GEISHA_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	Tab1Dlg m_TabPage1;
	Tab2Dlg m_TabPage2;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_Tab;
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};
