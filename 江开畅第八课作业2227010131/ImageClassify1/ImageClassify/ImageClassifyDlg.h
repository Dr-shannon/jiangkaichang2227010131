﻿
// ImageClassifyDlg.h: 头文件
//

#pragma once


// CImageClassifyDlg 对话框
class CImageClassifyDlg : public CDialogEx
{
// 构造
public:
	CImageClassifyDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IMAGECLASSIFY_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonSingle();
	afx_msg void OnBnClickedButtonStartSingle();
	afx_msg void OnBnClickedButtonDir();
	afx_msg void OnBnClickedButtonStartDir();
private:
	CFont m_oFont;
public:
	afx_msg void OnEnChangeEditNormallightDir();
};
