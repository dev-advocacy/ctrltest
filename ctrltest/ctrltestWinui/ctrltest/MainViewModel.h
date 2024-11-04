#pragma once

#include "MainViewModel.g.h"
#include "BindableBase.h"
#include "DelegateCommand.h"

namespace winrt::ctrltest::implementation
{
    struct MainViewModel : MainViewModelT<MainViewModel, BindableBase>
    {
        MainViewModel();
    };
}

namespace winrt::ctrltest::factory_implementation
{
    struct MainViewModel : MainViewModelT<MainViewModel, implementation::MainViewModel>
    {
    };
}
