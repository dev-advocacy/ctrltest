#include "pch.h"
#include "MainViewModel.h"
#if __has_include("MainViewModel.g.cpp")
#include "MainViewModel.g.cpp"
#endif


using namespace winrt;
using namespace ctrltest::implementation;
using namespace Windows::Foundation;

MainViewModel::MainViewModel() {
	clickCommand = make<DelegateCommand>(std::bind(&MainViewModel::AnotherClick, this));
	openCommand = make<DelegateCommand>(std::bind(&MainViewModel::AnotherOpenCommand, this));
	textSize = 150;
}

hstring MainViewModel::Title() {
	return title;
}

void MainViewModel::Title(hstring const& value)
{
	if (title != value) {
		title = value;
		RaisePropertyChanged(L"Title");
		clickCommand.RaiseCanExecuteChanged();
	}
}

double MainViewModel::TextSize() {
	return textSize;
}

void MainViewModel::Click(IInspectable const& parameter) {
	hstring value = unbox_value<hstring>(parameter);
	AnotherClick();
}

void MainViewModel::AnotherOpenCommand()
{
}
void MainViewModel::AnotherClick() {
	Title(L"Clicked");
	textSize = 100;
	RaisePropertyChanged(L"TextSize");
}

bool MainViewModel::CanClick() {
	return Title() != L"Clicked";
}
