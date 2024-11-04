#include "pch.h"
#include "MainPage.h"
#if __has_include("MainPage.g.cpp")
#include "MainPage.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

#include "MainPageViewModel.h"

namespace winrt::ctrltest::implementation
{
    /// <summary>
    /// Gets the ViewModel for the MainPage.
    /// </summary>
    /// <returns>The ViewModel for the MainPage.</returns>
    ctrltest::MainPageViewModel MainPage::ViewModel()
    {
        return m_mainViewModel;
    }
    /// <summary>
    /// Initializes a new instance of the MainPage class.
    /// </summary>
    MainPage::MainPage()
    {
        m_mainViewModel = winrt::make<ctrltest::implementation::MainPageViewModel>();
    }    
}
