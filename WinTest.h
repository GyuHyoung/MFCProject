
// WinTest.h : WinTest ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CWinTestApp:
// �� Ŭ������ ������ ���ؼ��� WinTest.cpp�� �����Ͻʽÿ�.
//

class CWinTestApp : public CWinAppEx
{
public:
	CWinTestApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWinTestApp theApp;
