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
	ctrltest::MainPageViewModel MainPage::ViewModel()
	{
		return m_mainViewModel;
	}
	MainPage::MainPage()
	{
		m_mainViewModel = winrt::make<ctrltest::implementation::MainPageViewModel>();
	}    
}
