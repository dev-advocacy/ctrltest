#pragma once

#include "MainPageViewModel.g.h"
#include "BindableBase.h"
#include "DelegateCommand.h"

namespace winrt::ctrltest::implementation
{
    struct MainPageViewModel : MainPageViewModelT<MainPageViewModel, BindableBase>
    {
	public:
        MainPageViewModel();
    public:
        winrt::Microsoft::UI::Xaml::Input::ICommand OnClickCommand() { return clickCommand; }
    private:
        void MenuClick(IInspectable const& parameter);
    private:
        ctrltest::DelegateCommand clickCommand{ nullptr };
    };
}

namespace winrt::ctrltest::factory_implementation
{
    struct MainPageViewModel : MainPageViewModelT<MainPageViewModel, implementation::MainPageViewModel>
    {
    };
}
