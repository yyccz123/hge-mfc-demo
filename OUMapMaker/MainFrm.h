// MainFrm.h : OUMainFrame ��Ľӿ�
//
#include "OUAssetsDock.h"
#pragma once

class OUMainFrame : public CFrameWnd
{
	
protected: // �������л�����
	OUMainFrame();
	DECLARE_DYNCREATE(OUMainFrame)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// ʵ��
public:
	virtual ~OUMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // �ؼ���Ƕ���Ա
	CStatusBar  m_wndStatusBar;
	CToolBar    m_wndToolBar;
    OUAssetsDock m_wndAssetsDock;

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnClickSetSkin();
};