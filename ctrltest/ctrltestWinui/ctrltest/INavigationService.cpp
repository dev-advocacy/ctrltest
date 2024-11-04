#include "pch.h"
#include "INavigationService.h"

namespace winrt::ctrltest::implementation
{
	winrt::Microsoft::UI::Xaml::Controls::Frame INavigationService::m_Frame{ nullptr };
	void INavigationService::InitializeFrame(winrt::Microsoft::UI::Xaml::Controls::Frame rootFrame)
	{
		m_Frame = rootFrame;
	}
	void INavigationService::NavigateTo(winrt::Windows::UI::Xaml::Interop::TypeName pageNavigateTo)
	{
		m_Frame.Navigate(pageNavigateTo);
	}
}