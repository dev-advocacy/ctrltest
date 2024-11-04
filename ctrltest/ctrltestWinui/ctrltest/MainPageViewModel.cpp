#include "pch.h"
#include "MainPageViewModel.h"
#if __has_include("MainPageViewModel.g.cpp")
#include "MainPageViewModel.g.cpp"
#endif

#include "..\ctrltestLib\ctrltestLibExported.h"

using namespace winrt;
using namespace ctrltest::implementation;
using namespace Windows::Foundation;

/// <summary>
/// Initializes a new instance of the MainPageViewModel class.
/// </summary>
MainPageViewModel::MainPageViewModel()
{
    clickCommand = make<DelegateCommand>(std::bind(&MainPageViewModel::MenuClick, this, std::placeholders::_1));
}

/// <summary>
/// Handles the menu click command.
/// </summary>
/// <param name="parameter">The command parameter.</param>
void MainPageViewModel::MenuClick(IInspectable const& parameter)
{
    hstring commandParameter = unbox_value<hstring>(parameter);

    if (commandParameter == L"OpenCommand")
    {
        // Handle Open command
    }
    else if (commandParameter == L"SaveCommand")
    {
        // Handle Save command
    }
    else if (commandParameter == L"DemoA")
    {
        CBMTest1DlgExport dlg;
        dlg.DoModal();
    }
    else if (commandParameter == L"DemoB")
    {
        CBMTest2DlgExport dlg2;
        dlg2.DoModal();
    }
    else if (commandParameter == L"DemoC")
    {
        CBMTest3DlgExport dlg3;
        dlg3.DoModal();
    }
    else
    {
        // Handle unknown command
    }
}
