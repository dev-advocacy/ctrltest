#include "pch.h"
#include "DialogSample.xaml.h"
#if __has_include("DialogSample.g.cpp")
#include "DialogSample.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::ctrltest::implementation
{
    int32_t DialogSample::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void DialogSample::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void DialogSample::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
