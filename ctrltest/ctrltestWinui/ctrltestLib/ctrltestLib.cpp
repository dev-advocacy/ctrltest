// ctrltestLib.cpp : Defines the initialization routines for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "ctrltestLib.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


BEGIN_MESSAGE_MAP(CctrltestLibApp, CWinApp)
END_MESSAGE_MAP()


CctrltestLibApp::CctrltestLibApp()
{
	//disable memory leak checking
	_CrtSetDbgFlag(0);
	
}
CctrltestLibApp theApp;

BOOL CctrltestLibApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
