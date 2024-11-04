#pragma once

#include "MainWindowViewModel.g.h"

#include "DelegateCommand.h"
#include "BindableBase.h"

namespace winrt::ctrltest::implementation
{
    struct MainWindowViewModel : MainWindowViewModelT<MainWindowViewModel, BindableBase>
    {
        MainWindowViewModel();
        winrt::hstring Title();
        void Title(winrt::hstring const& value);
        int32_t MyProperty();
        void MyProperty(int32_t value);
        double TextSize();
        double textSize;
		winrt::Microsoft::UI::Xaml::Input::ICommand OnClickCommand() { return clickCommand; }

	private:
        winrt::hstring title = L"BlaBla";
        void Click(winrt::Windows::Foundation::IInspectable const& parameter);
        ctrltest::DelegateCommand clickCommand{ nullptr };
        void AnotherClick();
    };
}

namespace winrt::ctrltest::factory_implementation
{
    struct MainWindowViewModel : MainWindowViewModelT<MainWindowViewModel, implementation::MainWindowViewModel>
    {
    };
}
