#pragma once
#include "afxwin.h"


// StandardSolutionsDlg dialog

class StandardSolutionsDlg : public CDialogEx
{
	DECLARE_DYNAMIC(StandardSolutionsDlg)

public:
	StandardSolutionsDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~StandardSolutionsDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_STANDARDSOLUTIONS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CButton m_btn_coaxial;
	CButton m_btn_bar;
	CButton m_btn_ring;
	CButton m_btn_panel;
	afx_msg void OnBnClickedButtonCoaxial();
	afx_msg void OnBnClickedButtonBar();
	afx_msg void OnBnClickedButtonRing();
	afx_msg void OnBnClickedButtonPanel();
	virtual BOOL OnInitDialog();
};
