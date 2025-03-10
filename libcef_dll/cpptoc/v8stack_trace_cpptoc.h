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
// $hash=7d064189557bf22631a1daf8a757128680743960$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_V8STACK_TRACE_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_V8STACK_TRACE_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_v8_capi.h"
#include "include/cef_v8.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefV8StackTraceCppToC : public CefCppToCRefCounted<CefV8StackTraceCppToC,
                                                         CefV8StackTrace,
                                                         cef_v8stack_trace_t> {
 public:
  CefV8StackTraceCppToC();
  virtual ~CefV8StackTraceCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_V8STACK_TRACE_CPPTOC_H_
