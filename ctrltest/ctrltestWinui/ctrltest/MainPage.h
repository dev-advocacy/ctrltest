#pragma once

#include "MainPage.g.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;

namespace winrt::ctrltest::implementation
{
    /// <summary>
    /// Represents the MainPage of the application.
    /// </summary>
    struct MainPage : MainPageT<MainPage>
    {
        /// <summary>
        /// Initializes a new instance of the MainPage class.
        /// </summary>
        MainPage();

        /// <summary>
        /// Gets the ViewModel for the MainPage.
        /// </summary>
        /// <returns>The ViewModel for the MainPage.</returns>
        ctrltest::MainPageViewModel ViewModel();

    private:
        ctrltest::MainPageViewModel m_mainViewModel{ nullptr };
    public:
        void bt1_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
        winrt::fire_and_forget BasicDialog();
    };
}

namespace winrt::ctrltest::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
