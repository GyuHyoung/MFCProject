
// WinTestView.cpp : CWinTestView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "WinTest.h"
#endif

#include "WinTestDoc.h"
#include "WinTestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWinTestView

IMPLEMENT_DYNCREATE(CWinTestView, CView)

BEGIN_MESSAGE_MAP(CWinTestView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CWinTestView ����/�Ҹ�

CWinTestView::CWinTestView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CWinTestView::~CWinTestView()
{
}

BOOL CWinTestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CWinTestView �׸���

void CWinTestView::OnDraw(CDC* /*pDC*/)
{
	CWinTestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CWinTestView �μ�

BOOL CWinTestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CWinTestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CWinTestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CWinTestView ����

#ifdef _DEBUG
void CWinTestView::AssertValid() const
{
	CView::AssertValid();
}

void CWinTestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWinTestDoc* CWinTestView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWinTestDoc)));
	return (CWinTestDoc*)m_pDocument;
}
#endif //_DEBUG


// CWinTestView �޽��� ó����
