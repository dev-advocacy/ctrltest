// ctrltestLib.cpp : Defines the initialization routines for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "ctrltestLib.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

/**
 * @brief The application class for the ctrltestLib DLL.
 */
class CctrltestLibApp : public CWinApp {
public:
    /**
     * @brief Constructor for CctrltestLibApp.
     * Disables memory leak checking.
     */
    CctrltestLibApp();

    /**
     * @brief Initializes the instance of the application.
     * @return TRUE if initialization is successful, otherwise FALSE.
     */
    virtual BOOL InitInstance();

    DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CctrltestLibApp, CWinApp)
END_MESSAGE_MAP()

/// <summary>
/// Constructor for CctrltestLibApp.
/// Disables memory leak checking.
/// </summary>
CctrltestLibApp::CctrltestLibApp()
{
    // Disable memory leak checking
    _CrtSetDbgFlag(0);
}

/// <summary>
/// The application object for the ctrltestLib DLL.
/// </summary>
CctrltestLibApp theApp;

/// <summary>
/// Initializes the instance of the application.
/// </summary>
/// <returns>TRUE if initialization is successful, otherwise FALSE.</returns>
BOOL CctrltestLibApp::InitInstance()
{
    CWinApp::InitInstance();

    return TRUE;
}
