
// SampleDlg.h : 头文件
//

#pragma once


// CSampleDlg 对话框
class CSampleDlg : public CSkinDialog
{
	CFlashControl					m_FlashControl;

// 构造
public:
	CSampleDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_SAMPLE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer( UINT_PTR nIDEvent );
	DECLARE_MESSAGE_MAP()
};
