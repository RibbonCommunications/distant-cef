// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=f5efbaafb5a54dfb9deb422cf31a0908c8a4cfc3$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_RESOURCE_READ_CALLBACK_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_RESOURCE_READ_CALLBACK_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_resource_handler_capi.h"
#include "include/cef_resource_handler.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefResourceReadCallbackCppToC
    : public CefCppToCRefCounted<CefResourceReadCallbackCppToC,
                                 CefResourceReadCallback,
                                 cef_resource_read_callback_t> {
 public:
  CefResourceReadCallbackCppToC();
  virtual ~CefResourceReadCallbackCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_RESOURCE_READ_CALLBACK_CPPTOC_H_
