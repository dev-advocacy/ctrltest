#pragma once
#include "afxdialogex.h"


/////////////////////////////////////////////////////////////////////////////
// BitmapButton Test dialog #2

// In this example we use the CBitmapButton AutoLoad member function.
//  Autoload uses the text/title of the button as the base resource name.
//  For this trivial example the buttons are called "OK" and "CANCEL",
//  which use the bitmaps "OKU", "OKD", "OKF", "CANCELU", "CANCELD"
//  and "CANCELF" respectively for the up, down and focused images.


class CBMTest1Dlg : public CDialog
{
protected:
	CBitmapButton button1, button2;
public:
	//{{AFX_DATA(CBMTest1Dlg)
	enum { IDD = IDM_TEST_BITMAP_BUTTON1 };
	//}}AFX_DATA
	CBMTest1Dlg();

	BOOL OnInitDialog();
	//{{AFX_MSG(CBMTest1Dlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#define ID_BUTTON_MIN       IDOK
#define N_BUTTONS   (IDCANCEL - ID_BUTTON_MIN + 1)

class CBMTest2Dlg : public CDialog
{
protected:
	// array of buttons constructed with no attached bitmap images
	CBitmapButton buttons[N_BUTTONS];
public:
	//{{AFX_DATA(CBMTest2Dlg)
	enum { IDD = IDM_TEST_BITMAP_BUTTON2 };
	//}}AFX_DATA
	CBMTest2Dlg()
		: CDialog(CBMTest2Dlg::IDD)
	{
	}

	BOOL OnInitDialog();
	//{{AFX_MSG(CBMTest2Dlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////
// BitmapButton Test dialog #3

// This is an extension of test dialog 2 using AutoLoad using the disabled
//   state with the "X" suffix.
// Here we use bitmap buttons to select a number between 1 and 10.
// The "PREV" and "NEXT" buttons change the number.  These buttons are
//  disabled when the number hits the limits.

class CBMTest3Dlg : public CDialog
{
protected:
	// construct
	CBitmapButton okButton;
	CBitmapButton prevButton;
	CBitmapButton nextButton;

public:
	int m_nNumber;
	//{{AFX_DATA(CBMTest3Dlg)
	enum { IDD = IDM_TEST_BITMAP_BUTTON3 };
	//}}AFX_DATA

	CBMTest3Dlg()
		: CDialog(CBMTest3Dlg::IDD)
	{
	}

	BOOL OnInitDialog();
	void Update();

	//{{AFX_MSG(CBMTest3Dlg)
	afx_msg void OnNextNumber();
	afx_msg void OnPrevNumber();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};