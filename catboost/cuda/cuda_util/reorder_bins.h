#pragma once

#include <catboost/cuda/cuda_lib/fwd.h>

template <class TMapping>
void ReorderBins(
    NCudaLib::TCudaBuffer<ui32, TMapping>& bins,
    NCudaLib::TCudaBuffer<ui32, TMapping>& indices,
    ui32 offset,
    ui32 bits,
    ui64 stream = 0);

template <class TMapping>
void ReorderBins(
    NCudaLib::TCudaBuffer<ui32, TMapping>& bins,
    NCudaLib::TCudaBuffer<ui32, TMapping>& indices,
    ui32 offset,
    ui32 bits,
    NCudaLib::TCudaBuffer<ui32, TMapping>& tmpBins,
    NCudaLib::TCudaBuffer<ui32, TMapping>& tmpIndices,
    ui64 stream = 0);
