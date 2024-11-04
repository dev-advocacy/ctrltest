#include "pch.h"
#include "MainWindowViewModel.h"
#if __has_include("MainWindowViewModel.g.cpp")
#include "MainWindowViewModel.g.cpp"
#endif

using namespace winrt;
using namespace ctrltest::implementation;

namespace winrt::ctrltest::implementation
{
    MainWindowViewModel::MainWindowViewModel()
    {
        clickCommand = make<DelegateCommand>(std::bind(&MainWindowViewModel::AnotherClick, this));   
        textSize = 150;
    }

    void MainWindowViewModel::Click(IInspectable const& parameter)
    {
        hstring value = unbox_value<hstring>(parameter);
        AnotherClick();
    }

    double MainWindowViewModel::TextSize() {
        return textSize;
    }

    void MainWindowViewModel::AnotherClick()
    {
        Title(L"Clicked");
        textSize = 100;
        RaisePropertyChanged(L"TextSize");
    }

    int32_t MainWindowViewModel::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindowViewModel::MyProperty(int32_t /*value*/)
    {
        throw hresult_not_implemented();
    }

    hstring MainWindowViewModel::Title() {
        return title;
    }

    void MainWindowViewModel::Title(hstring const& value)
    {
        if (title != value) {
            title = value;
        }
    }
}
