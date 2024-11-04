#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif
#include "INavigationService.h"

#include <wil/cppwinrt.h>

using namespace winrt;
using namespace Microsoft::UI::Xaml;

#include "MainViewModel.h"

namespace winrt::ctrltest::implementation
{
    /// <summary>
    /// Gets the ViewModel for the MainWindow.
    /// </summary>
    /// <returns>The ViewModel for the MainWindow.</returns>
    ctrltest::MainViewModel MainWindow::ViewModel()
    {
        return m_mainViewModel;
    }

    /// <summary>
    /// Initializes a new instance of the MainWindow class.
    /// </summary>
    MainWindow::MainWindow()
    {        
        m_mainViewModel = winrt::make<ctrltest::implementation::MainViewModel>();
        
        INavigationService _navigationService;
        InitializeComponent();
        _navigationService.InitializeFrame(MainWindow::MainFrame());
        _navigationService.NavigateTo(xaml_typename<MainPage>());
    }

    /// <summary>
    /// Handles the MainFrame navigated event.
    /// </summary>
    /// <param name="sender">The event sender.</param>
    /// <param name="e">The navigation event arguments.</param>
    void MainWindow::MainFrame_Navigated(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Navigation::NavigationEventArgs const& e)
    {
        if (!MainFrame().CanGoBack())
        {
            INavigationService _navigationService;
            _navigationService.InitializeFrame(MainWindow::MainFrame());
        }
    }
}