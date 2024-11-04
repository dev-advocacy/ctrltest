#include "pch.h"
#include "MainPageViewModel.h"
#if __has_include("MainPageViewModel.g.cpp")
#include "MainPageViewModel.g.cpp"
#endif

#include "..\ctrltestLib\ctrltestLibExported.h"

using namespace winrt;
using namespace ctrltest::implementation;
using namespace Windows::Foundation;

MainPageViewModel::MainPageViewModel() {
	clickCommand = make<DelegateCommand>(std::bind(&MainPageViewModel::AnotherClick, this, std::placeholders::_1));
	openCommand = make<DelegateCommand>(std::bind(&MainPageViewModel::AnotherOpenCommand, this, std::placeholders::_1));
}

hstring MainPageViewModel::Title() {
	return title;
}
void MainPageViewModel::Title(hstring const& value)
{
	if (title != value) {
		title = value;
		RaisePropertyChanged(L"Title");
		clickCommand.RaiseCanExecuteChanged();
	}
}

double MainPageViewModel::TextSize() {
	return textSize;
}



void MainPageViewModel::Click(IInspectable const& parameter) {
	hstring value = unbox_value<hstring>(parameter);
	AnotherClick(parameter);
}

//void MainPageViewModel::AnotherOpenCommand(IInspectable const& parameter)
//{
//	hstring value = unbox_value<hstring>(parameter);
//	// Handle the command parameter
//	//System::Diagnostics::Debug::WriteLine(L"Open command parameter: " + value);
//}


void MainPageViewModel::AnotherOpenCommand(IInspectable const& parameter)
{
}

void MainPageViewModel::AnotherClick(IInspectable const& parameter)

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



bool MainPageViewModel::CanClick()
{
	return Title() != L"Clicked";
}
