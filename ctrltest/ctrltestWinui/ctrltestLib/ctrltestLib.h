// ctrltestLib.h : main header file for the ctrltestLib DLL
//

#pragma once

#ifndef __AFXWIN_H__
    #error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols

/// <summary>
/// The application class for the ctrltestLib DLL.
/// </summary>
class CctrltestLibApp : public CWinApp
{
public:
    /// <summary>
    /// Constructor for CctrltestLibApp.
    /// </summary>
    CctrltestLibApp();

    // Overrides
public:
    /// <summary>
    /// Initializes the instance of the application.
    /// </summary>
    /// <returns>TRUE if initialization is successful, otherwise FALSE.</returns>
    virtual BOOL InitInstance();

    DECLARE_MESSAGE_MAP()
};
