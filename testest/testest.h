
// testest.h : testest ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CtestestApp:
// �� Ŭ������ ������ ���ؼ��� testest.cpp�� �����Ͻʽÿ�.
//

class CtestestApp : public CWinAppEx
{
public:
	CtestestApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CtestestApp theApp;
