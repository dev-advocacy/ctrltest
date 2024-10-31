#include "pch.h"
#include "ctrltestLibExported.h"
#include "bbutton.h"


int CBMTest1DlgExport::DoModal()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	CBMTest1Dlg dlg;
	return (int) dlg.DoModal();
}

