
// testestView.h : CtestestView Ŭ������ �������̽�
//

#pragma once


class CtestestView : public CView
{
protected: // serialization������ ��������ϴ�.
	CtestestView();
	DECLARE_DYNCREATE(CtestestView)

// Ư���Դϴ�.
public:
	CtestestDoc* GetDocument() const;

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
	virtual ~CtestestView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // testestView.cpp�� ����� ����
inline CtestestDoc* CtestestView::GetDocument() const
   { return reinterpret_cast<CtestestDoc*>(m_pDocument); }
#endif

