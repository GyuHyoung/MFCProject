
// WinTestView.h : CWinTestView Ŭ������ �������̽�
//

#pragma once


class CWinTestView : public CView
{
protected: // serialization������ ��������ϴ�.
	CWinTestView();
	DECLARE_DYNCREATE(CWinTestView)

// Ư���Դϴ�.
public:
	CWinTestDoc* GetDocument() const;

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
	virtual ~CWinTestView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // WinTestView.cpp�� ����� ����
inline CWinTestDoc* CWinTestView::GetDocument() const
   { return reinterpret_cast<CWinTestDoc*>(m_pDocument); }
#endif

