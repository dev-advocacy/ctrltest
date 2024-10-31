#pragma once

#ifdef CTRLTESTLIB
#define CTRLTESTLIB_API __declspec(dllexport)
#else
#define CTRLTESTLIB_API __declspec(dllimport)
#endif


class CTRLTESTLIB_API CBMTest1DlgExport
{
public:
	int DoModal();
};

class CTRLTESTLIB_API CBMTest2DlgExport
{
public:
	int DoModal();
};

class CTRLTESTLIB_API CBMTest3DlgExport
{
public:
	int DoModal();
};

