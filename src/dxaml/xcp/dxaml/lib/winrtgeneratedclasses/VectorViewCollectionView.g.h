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

#pragma once

#include "CollectionView.g.h"

#define __VectorViewCollectionView_GUID "c3265e94-53a7-4d16-b89e-32048ee131b8"

namespace DirectUI
{
    class VectorViewCollectionView;

    class __declspec(novtable) VectorViewCollectionViewGenerated:
        public DirectUI::CollectionView
    {
        friend class DirectUI::VectorViewCollectionView;



    public:
        VectorViewCollectionViewGenerated();
        ~VectorViewCollectionViewGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::VectorViewCollectionView;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::VectorViewCollectionView;
        }

        // Properties.

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "VectorViewCollectionView_Partial.h"
