#pragma once

#include "MainWindow.g.h"


using namespace winrt;
using namespace Microsoft::UI::Xaml;



namespace winrt::ctrltest::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();
        void MainFrame_Navigated(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Navigation::NavigationEventArgs const& e);
        /*void EnsureDispatcher();*/
        ctrltest::MainViewModel ViewModel();

	private:
        /*winrt::Windows::System::DispatcherQueueController m_dispatcherQueueController{ nullptr };*/
        ctrltest::MainViewModel m_mainViewModel{ nullptr };
    };
}

namespace winrt::ctrltest::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
