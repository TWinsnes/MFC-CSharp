
// MFC-CSharpDlg.h : header file
//

#pragma once


// CMFCCSharpDlg dialog
class CMFCCSharpDlg : public CDialogEx
{
// Construction
public:
	CMFCCSharpDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_MFCCSHARP_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
