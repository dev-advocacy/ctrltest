#include "pch.h"
#include "ctrltestexports.h"
#include "ctrltest.h"
#include "custlist.h"

int CCustListDlgExported::DoModal()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	TRACE0("running dialog with custom listbox (owner draw)\n");
	CCustListDlg dlg;
	dlg.DoModal();


	return 0;
}
