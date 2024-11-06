#include "pch.h"

#define CTRLTESTLIB

#include "ctrltestLibExported.h"
#include "bbutton.h"


int CBMTest1DlgExport::DoModal()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	CBMTest1Dlg dlg;
	return (int) dlg.DoModal();	
}

int CBMTest2DlgExport::DoModal()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	CBMTest2Dlg dlg;
	return (int)dlg.DoModal();
	
}

int CBMTest3DlgExport::DoModal()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	CBMTest3Dlg dlg;
	return (int)dlg.DoModal();	
}