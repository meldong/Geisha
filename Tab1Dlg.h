#pragma once
#include "afxwin.h"


// Tab1Dlg dialog

class Tab1Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Tab1Dlg)

public:
	Tab1Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~Tab1Dlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAB1_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CButton m_Button1;
	CButton m_Button2;
	CButton m_Button3;
	CButton m_Button4;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	virtual BOOL OnInitDialog();
};
