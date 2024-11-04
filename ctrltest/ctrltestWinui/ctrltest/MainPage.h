#pragma once

#include "MainPage.g.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;

namespace winrt::ctrltest::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();
        ctrltest::MainPageViewModel ViewModel();

        private:        
            ctrltest::MainPageViewModel m_mainViewModel{ nullptr };
    };
}

namespace winrt::ctrltest::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
