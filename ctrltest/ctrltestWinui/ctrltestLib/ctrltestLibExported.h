#pragma once

#ifdef CTRLTESTLIB
#define CTRLTESTLIB_API __declspec(dllexport)
#else
#define CTRLTESTLIB_API __declspec(dllimport)
#endif

/**
* @brief Class representing the first dialog export.
*/
class CTRLTESTLIB_API CBMTest1DlgExport
{
public:
   /**
    * @brief Displays the modal dialog.
    * @return An integer indicating the result of the dialog.
    */
   int DoModal();
};

/**
* @brief Class representing the second dialog export.
*/
class CTRLTESTLIB_API CBMTest2DlgExport
{
public:
   /**
    * @brief Displays the modal dialog.
    * @return An integer indicating the result of the dialog.
    */
   int DoModal();
};

/**
* @brief Class representing the third dialog export.
*/
class CTRLTESTLIB_API CBMTest3DlgExport
{
public:
   /**
    * @brief Displays the modal dialog.
    * @return An integer indicating the result of the dialog.
    */
   int DoModal();
};
