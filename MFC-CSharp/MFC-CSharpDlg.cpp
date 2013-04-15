
// MFC-CSharpDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFC-CSharp.h"
#include "MFC-CSharpDlg.h"
#include "afxdialogex.h"

#include "DialogLoaderFactory.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCCSharpDlg dialog



CMFCCSharpDlg::CMFCCSharpDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMFCCSharpDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCCSharpDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCCSharpDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCCSharpDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CMFCCSharpDlg message handlers

BOOL CMFCCSharpDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCCSharpDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCCSharpDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCCSharpDlg::OnBnClickedButton1()
{
	DialogLoaderFactory factory;
	IDialogLoader* dialogLoader = factory.GetDialogLoader();

	//try
	//{
		dialogLoader->LoadDialog();
	//}
	//catch(EETypeLoadingException ex)
	//{

	//}
}
