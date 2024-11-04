#pragma once

using namespace winrt;

namespace winrt::ctrltest::implementation
{
	class INavigationService
	{
		public:
			void InitializeFrame(winrt::Microsoft::UI::Xaml::Controls::Frame rootFrame);
			void NavigateTo(winrt::Windows::UI::Xaml::Interop::TypeName pageNavigateTo);
		private:
			static winrt::Microsoft::UI::Xaml::Controls::Frame m_Frame;
	};
}