#pragma once
#include "afxdialogex.h"


// CUItestDlg 对话框

class CUItestDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CUItestDlg)

public:
	CUItestDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CUItestDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_UI_OF_JKC_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
