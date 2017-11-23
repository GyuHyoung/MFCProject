
// MFCProjectView.h : CMFCProjectView Ŭ������ �������̽�
//

#pragma once


class CMFCProjectView : public CView
{
protected: // serialization������ ��������ϴ�.
	CMFCProjectView();
	DECLARE_DYNCREATE(CMFCProjectView)

// Ư���Դϴ�.
public:
	CMFCProjectDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CMFCProjectView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCProjectView.cpp�� ����� ����
inline CMFCProjectDoc* CMFCProjectView::GetDocument() const
   { return reinterpret_cast<CMFCProjectDoc*>(m_pDocument); }
#endif

