// ctrltestLib.h : main header file for the ctrltestLib DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CctrltestLibApp
// See ctrltestLib.cpp for the implementation of this class
//

class CctrltestLibApp : public CWinApp
{
public:
	CctrltestLibApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
