// bbutton.cpp : bitmap button test
//
// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.

#include "pch.h"
#include "ctrltest.h"
#include "bbutton.h"

/////////////////////////////////////////////////////////////////////////////
// BitmapButton Test dialog #1

// In this example we pass the bitmap resource names to LoadBitmaps
//  OnInitDialog is used to Subclass the buttons so the dialog
//  controls get attached to the MFC WndProc for C++ message map dispatch.


BEGIN_MESSAGE_MAP(CBMTest1Dlg, CDialog)
	//{{AFX_MSG_MAP(CBMTest1Dlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


CBMTest1Dlg::CBMTest1Dlg()
	: CDialog(CBMTest1Dlg::IDD)
{
	// NOTE: The obsolete MFC V1 CBitmapButton constructor with 3 arguments is
	//  replaced by a call to LoadBitmaps.
	if (!button1.LoadBitmaps(_T("Image1Up"), _T("Image1Down"), _T("Image1Focus")) ||
		!button2.LoadBitmaps(_T("Image2Up"), _T("Image2Down"), _T("Image2Focus")))
	{
		TRACE0("Failed to load bitmaps for buttons\n");
		AfxThrowResourceException();
	}
}

BOOL CBMTest1Dlg::OnInitDialog()
{
	// each dialog control has special bitmaps
	VERIFY(button1.SubclassDlgItem(IDOK, this));
	button1.SizeToContent();
	VERIFY(button2.SubclassDlgItem(IDCANCEL, this));
	button2.SizeToContent();

	return TRUE;
}

BEGIN_MESSAGE_MAP(CBMTest2Dlg, CDialog)
	//{{AFX_MSG_MAP(CBMTest2Dlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


BOOL CBMTest2Dlg::OnInitDialog()
{
	// load bitmaps for all the bitmap buttons (does SubclassButton as well)
	for (int i = 0; i < N_BUTTONS; i++)
		VERIFY(buttons[i].AutoLoad(ID_BUTTON_MIN + i, this));
	return TRUE;
}


BOOL CBMTest3Dlg::OnInitDialog()
{
	// load bitmaps for all the bitmap buttons (does SubclassButton as well)
	VERIFY(okButton.AutoLoad(IDOK, this));
	VERIFY(prevButton.AutoLoad(ID_PREV, this));
	VERIFY(nextButton.AutoLoad(ID_NEXT, this));
	Update();
	return TRUE;
}

BEGIN_MESSAGE_MAP(CBMTest3Dlg, CDialog)
	//{{AFX_MSG_MAP(CBMTest3Dlg)
	ON_COMMAND(ID_PREV, OnPrevNumber)
	ON_COMMAND(ID_NEXT, OnNextNumber)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

void CBMTest3Dlg::OnPrevNumber()
{
	m_nNumber--;
	Update();
}

void CBMTest3Dlg::OnNextNumber()
{
	m_nNumber++;
	Update();
}

void CBMTest3Dlg::Update()
{
	SetDlgItemInt(IDC_NUMBEROUT, m_nNumber);
	prevButton.EnableWindow(m_nNumber > 1);
	nextButton.EnableWindow(m_nNumber < 10);
	// move focus to active button
	if (!prevButton.IsWindowEnabled())
		nextButton.SetFocus();
	else if (!nextButton.IsWindowEnabled())
		prevButton.SetFocus();
}

/////////////////////////////////////////////////////////////////////////////
// Test driver routines

void CTestWindow::OnTestBitmapButton1()
{
	CBMTest1Dlg dlg;
	dlg.DoModal();
}

void CTestWindow::OnTestBitmapButton2()
{
	CBMTest2Dlg dlg;
	dlg.DoModal();
}

void CTestWindow::OnTestBitmapButton3()
{
	CBMTest3Dlg dlg;
	dlg.m_nNumber = 5;
	dlg.DoModal();

	CString strYouChose;
	strYouChose.LoadString(IDS_YOU_CHOSE);
	CString strMsg;
	strMsg.Format(strYouChose, dlg.m_nNumber);
	AfxMessageBox(strMsg);
}

/////////////////////////////////////////////////////////////////////////////
