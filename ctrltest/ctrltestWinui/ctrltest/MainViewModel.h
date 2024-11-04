#pragma once

#include "MainViewModel.g.h"
#include "BindableBase.h"
#include "DelegateCommand.h"

namespace winrt::ctrltest::implementation
{
    struct MainViewModel : MainViewModelT<MainViewModel, BindableBase>
    {
        MainViewModel();

        winrt::hstring Title();
        void Title(winrt::hstring const& value);
        double TextSize();
        winrt::Microsoft::UI::Xaml::Input::ICommand OnClickCommand() { return clickCommand; }
        winrt::Microsoft::UI::Xaml::Input::ICommand OpenCommand() { return openCommand; }

    private:
        void Click(winrt::Windows::Foundation::IInspectable const& parameter);
        void AnotherClick();
        void AnotherOpenCommand();
        bool CanClick();

        winrt::hstring title;
        double textSize;
        ctrltest::DelegateCommand clickCommand{ nullptr };
        ctrltest::DelegateCommand openCommand{ nullptr };
    };
}

namespace winrt::ctrltest::factory_implementation
{
    struct MainViewModel : MainViewModelT<MainViewModel, implementation::MainViewModel>
    {
    };
}
