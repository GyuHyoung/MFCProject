
// testestView.cpp : CtestestView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "testest.h"
#endif

#include "testestDoc.h"
#include "testestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CtestestView

IMPLEMENT_DYNCREATE(CtestestView, CView)

BEGIN_MESSAGE_MAP(CtestestView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CtestestView ����/�Ҹ�

CtestestView::CtestestView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CtestestView::~CtestestView()
{
}

BOOL CtestestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CtestestView �׸���

void CtestestView::OnDraw(CDC* /*pDC*/)
{
	CtestestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CtestestView �μ�

BOOL CtestestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CtestestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CtestestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CtestestView ����

#ifdef _DEBUG
void CtestestView::AssertValid() const
{
	CView::AssertValid();
}

void CtestestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CtestestDoc* CtestestView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CtestestDoc)));
	return (CtestestDoc*)m_pDocument;
}
#endif //_DEBUG


// CtestestView �޽��� ó����
