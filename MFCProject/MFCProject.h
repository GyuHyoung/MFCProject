
// MFCProject.h : MFCProject ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CMFCProjectApp:
// �� Ŭ������ ������ ���ؼ��� MFCProject.cpp�� �����Ͻʽÿ�.
//

class CMFCProjectApp : public CWinAppEx
{
public:
	CMFCProjectApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCProjectApp theApp;
