#include "pch.h"
#include "BindableBase.h"
#if __has_include("BindableBase.g.cpp")
#include "BindableBase.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml::Data;

namespace winrt::ctrltest::implementation
{
    void BindableBase::RaisePropertyChanged(hstring const& propertyName)
	{
		propertyChanged(*this, PropertyChangedEventArgs(propertyName));
	}
	event_token BindableBase::PropertyChanged(PropertyChangedEventHandler const& handler)
	{
		return propertyChanged.add(handler);
	}
	void BindableBase::PropertyChanged(winrt::event_token const& token) noexcept
	{
		propertyChanged.remove(token);
	}
}