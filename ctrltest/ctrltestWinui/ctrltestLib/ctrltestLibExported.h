#pragma once
class ctrltestLibExported
{
};



#ifdef MFCLibUI1
#define CTRLTESTLIB_API __declspec(dllexport)
#else
#define CTRLTESTLIB_API __declspec(dllimport)
#endif


class CTRLTESTLIB_API CBMTest1DlgExport
{
public:
	int DoModal();
};