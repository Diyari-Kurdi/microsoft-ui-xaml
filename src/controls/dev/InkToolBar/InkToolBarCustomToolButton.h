// AUTOGENERATED_FOR_WINRT
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "pch.h"
#include "common.h"

#include "InkToolBarCustomToolButton.g.h"
#include "InkToolBarCustomToolButton.properties.h"

#include "InkToolBarToolButton.h"

class InkToolBarCustomToolButton :
    public winrt::implementation::InkToolBarCustomToolButtonT<InkToolBarCustomToolButton, InkToolBarToolButton>, 
    public InkToolBarCustomToolButtonProperties
{
public:
    ForwardRefToBaseReferenceTracker(InkToolBarToolButton)

    // These functions are ambiguous with InkToolBarToolButton, disambiguate
    using InkToolBarCustomToolButtonProperties::EnsureProperties;
    using InkToolBarCustomToolButtonProperties::ClearProperties;

    winrt::UIElement ConfigurationContent() { winrt::throw_hresult(E_NOTIMPL); }
    void ConfigurationContent(winrt::UIElement value) { winrt::throw_hresult(E_NOTIMPL); } 
};
