#pragma once

#include "DialogSample.g.h"

namespace winrt::ctrltest::implementation
{
    struct DialogSample : DialogSampleT<DialogSample>
    {
        DialogSample()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::ctrltest::factory_implementation
{
    struct DialogSample : DialogSampleT<DialogSample, implementation::DialogSample>
    {
    };
}
