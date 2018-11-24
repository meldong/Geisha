#pragma once


// Tab2Dlg dialog

class Tab2Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Tab2Dlg)

public:
	Tab2Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~Tab2Dlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAB2_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
