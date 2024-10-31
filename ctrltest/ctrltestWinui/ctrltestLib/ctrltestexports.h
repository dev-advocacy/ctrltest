#pragma once

#ifdef MFCctrltestLib
#define MFCctrltestLib_API __declspec(dllexport)
#else
#define MFCctrltestLib_API __declspec(dllimport)
#endif



class MFCctrltestLib_API CCustListDlgExported
{
public :
	int DoModal();
};

