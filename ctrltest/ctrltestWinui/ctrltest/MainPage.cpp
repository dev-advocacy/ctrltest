#include "pch.h"
#include "MainPage.h"
#if __has_include("MainPage.g.cpp")
#include "MainPage.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace winrt::Windows::UI::Xaml::Controls;

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
    void winrt::ctrltest::implementation::MainPage::bt1_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {		
        BasicDialog();
    }

    winrt::fire_and_forget MainPage::BasicDialog()
    {
        DialogSample dialog{};
		dialog.XamlRoot(this->Content().XamlRoot());
		
		winrt::Microsoft::UI::Xaml::Input::ManipulationModes dd1 = winrt::Microsoft::UI::Xaml::Input::ManipulationModes::All;

        dialog.ManipulationMode(dd1);

        dialog.Style(Microsoft::UI::Xaml::Application::Current().Resources().TryLookup(winrt::box_value(L"DefaultContentDialogStyle")).as<Microsoft::UI::Xaml::Style>());
        dialog.Title(winrt::box_value(L"sample dialog"));
        auto result{ co_await dialog.ShowAsync() };

        if (result != winrt::Microsoft::UI::Xaml::Controls::ContentDialogResult::Primary)
            co_return;        
    }
}