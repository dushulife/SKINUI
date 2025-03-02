#pragma once

#include "SkinUI.h"

class SKINUI_CLASS CSkinListBox : public CListBox,public ISkinControl
{
	DECLARE_DYNAMIC(CSkinListBox)

	//基本变量
protected:
	int								m_nHovenItem;
	vector<tagItemStruct>			m_ItemStruct;
	int								nItemHeight;
	bool							m_bMouseTracking;;

	//资源定义
protected:
	CImageEx 						* m_pBackImgN;			//正常资源
	CImageEx 						* m_pBackImgH;			//正常资源
	CImageEx 						* m_pSelectImg;			//选中资源

	//函数定义
public:
	//构造函数
	CSkinListBox(void);
	//析构函数
	~CSkinListBox(void);

	//功能函数
public:
	//是否单选
	bool IsSingleSel();
	//增加文本
	void AddString(LPCTSTR lpszItem);

	void InsertItem();

	//设置高度
	int SetItemHeight( int nIndex, UINT cyItemHeight );
	//删除文本
	int DeleteString( UINT nIndex );

	//资源加载
public:
	//正常背景
	BOOL SetBackNormalImage(LPCTSTR lpszFileName, CONST LPRECT lpNinePart = NULL);
	//选中资源
	BOOL SetSelectImage(LPCTSTR lpszFileName, CONST LPRECT lpNinePart = NULL);
	//节点高亮
	BOOL SetHovenImage(LPCTSTR lpszFileName, CONST LPRECT lpNinePart = NULL);

	//消息定义
private:
	//窗口销毁
	afx_msg void OnDestroy();
	//鼠标右键
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	//鼠标右键
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//鼠标移动
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	//鼠标离开
	afx_msg LRESULT OnMouseLeave(WPARAM wparam, LPARAM lparam);
	//非客户区
	afx_msg void OnNcPaint();

	//重载函数
protected:
	//绘制函数
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	//
	virtual void MeasureItem(LPMEASUREITEMSTRUCT /*lpMeasureItemStruct*/);

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};


