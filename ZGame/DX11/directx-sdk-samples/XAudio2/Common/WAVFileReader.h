﻿//--------------------------------------------------------------------------------------
// File: WAVFileReader.h
//
// Functions for loading WAV audio files
//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//
// Copyright (c) Microsoft Corporation. All rights reserved.
//
// http://go.microsoft.com/fwlink/?LinkId=248929
//-------------------------------------------------------------------------------------

#pragma once

#include <stdint.h>
#include <objbase.h>
#include <memory>
#include <mmreg.h>


namespace DirectX
{
HRESULT LoadWAVAudioInMemory( _In_reads_bytes_(wavDataSize) const uint8_t* wavData,
                              _In_ size_t wavDataSize,
                              _Outptr_ const WAVEFORMATEX** wfx,
                              _Outptr_ const uint8_t** startAudio,
                              _Out_ uint32_t* audioBytes );

HRESULT LoadWAVAudioFromFile( _In_z_ const wchar_t* szFileName,
                              _Inout_ std::unique_ptr<uint8_t[]>& wavData,
                              _Outptr_ const WAVEFORMATEX** wfx,
                              _Outptr_ const uint8_t** startAudio,
                              _Out_ uint32_t* audioBytes );

struct WAVData
{
    const WAVEFORMATEX* wfx;
    const uint8_t* startAudio;
    uint32_t audioBytes;
    uint32_t loopStart;
    uint32_t loopLength;
    const uint32_t* seek;       // Note: XMA Seek data is Big-Endian
    uint32_t seekCount;
};

HRESULT LoadWAVAudioInMemoryEx( _In_reads_bytes_(wavDataSize) const uint8_t* wavData,
                                _In_ size_t wavDataSize, _Out_ WAVData& result );

HRESULT LoadWAVAudioFromFileEx( _In_z_ const wchar_t* szFileName,
                                _Inout_ std::unique_ptr<uint8_t[]>& wavData,
                                _Out_ WAVData& result );
}
