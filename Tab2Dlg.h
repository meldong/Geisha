#pragma once
#include "afxwin.h"


// MiscellaneousToolsDlg dialog

class MiscellaneousToolsDlg : public CDialogEx
{
	DECLARE_DYNAMIC(MiscellaneousToolsDlg)

public:
	MiscellaneousToolsDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~MiscellaneousToolsDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MISCELLANEOUSTOOLS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CButton m_btn_irradiance;
	CButton m_btn_candela;
	CButton m_btn_queue;
	CButton m_btn_tolerance;
	afx_msg void OnBnClickedButtonIrradiance();
	afx_msg void OnBnClickedButtonCandela();
	afx_msg void OnBnClickedButtonQueue();
	afx_msg void OnBnClickedButtonTolerance();
	CButton m_btn_contrast;
	afx_msg void OnBnClickedButtonContrast();
};
