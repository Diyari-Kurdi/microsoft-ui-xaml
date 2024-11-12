// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//------------------------------------------------------------------------
//
//  Abstract:
//
//      XAML types.
//      NOTE: This file was generated by a tool.
//
//------------------------------------------------------------------------

#include "PolyQuadraticBezierSegment.g.h"
#include "PointCollection.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::PolyQuadraticBezierSegment::PolyQuadraticBezierSegment()
{
}

DirectUI::PolyQuadraticBezierSegment::~PolyQuadraticBezierSegment()
{
}

HRESULT DirectUI::PolyQuadraticBezierSegment::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::PolyQuadraticBezierSegment)))
    {
        *ppObject = static_cast<DirectUI::PolyQuadraticBezierSegment*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IPolyQuadraticBezierSegment)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IPolyQuadraticBezierSegment*>(this);
    }
    else
    {
        RRETURN(DirectUI::PathSegment::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::PolyQuadraticBezierSegment::get_Points(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Foundation::Point>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PolyQuadraticBezierSegment_Points, ppValue));
}
IFACEMETHODIMP DirectUI::PolyQuadraticBezierSegment::put_Points(_In_opt_ ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Foundation::Point>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::PolyQuadraticBezierSegment_Points, pValue));
}

// Events.

// Methods.

HRESULT DirectUI::PolyQuadraticBezierSegmentFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.
IFACEMETHODIMP DirectUI::PolyQuadraticBezierSegmentFactory::get_PointsProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::PolyQuadraticBezierSegment_Points, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_PolyQuadraticBezierSegment()
    {
        RRETURN(ctl::ActivationFactoryCreator<PolyQuadraticBezierSegmentFactory>::CreateActivationFactory());
    }
}