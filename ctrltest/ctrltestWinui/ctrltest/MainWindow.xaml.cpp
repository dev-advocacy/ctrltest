#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif
#include "INavigationService.h"

#include <wil/cppwinrt.h>
#include <wil/cppwinrt_helpers.h>
#include <winrt/Microsoft.UI.Dispatching.h>

using namespace winrt;
using namespace Microsoft::UI::Xaml;

#include "MainViewModel.h"

namespace winrt::ctrltest::implementation
{
	ctrltest::MainViewModel MainWindow::ViewModel()
	{
		return m_mainViewModel;
	}
	MainWindow::MainWindow()
	{		
		m_mainViewModel = winrt::make<ctrltest::implementation::MainViewModel>();
		
		INavigationService _navigationService;
		InitializeComponent();
		_navigationService.InitializeFrame(MainWindow::MainFrame());
		_navigationService.NavigateTo(xaml_typename<MainPage>());
	}

	void MainWindow::MainFrame_Navigated(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Navigation::NavigationEventArgs const& e)
	{
		if (!MainFrame().CanGoBack())
		{
			INavigationService _navigationService;
			_navigationService.InitializeFrame(MainWindow::MainFrame());
		}
	}
}