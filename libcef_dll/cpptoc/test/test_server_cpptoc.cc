// Copyright (c) 2022 The Chromium Embedded Framework Authors. All rights
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
// $hash=77804eaa33c7102c39f0748006ecc52d97b7265b$
//

#include "libcef_dll/cpptoc/test/test_server_cpptoc.h"
#include "libcef_dll/ctocpp/test/test_server_handler_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_test_server_t* cef_test_server_create_and_start(
    uint16 port,
    int https_server,
    cef_test_cert_type_t https_cert_type,
    struct _cef_test_server_handler_t* handler) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: handler; type: refptr_diff
  DCHECK(handler);
  if (!handler)
    return NULL;

  // Execute
  CefRefPtr<CefTestServer> _retval = CefTestServer::CreateAndStart(
      port, https_server ? true : false, https_cert_type,
      CefTestServerHandlerCToCpp::Wrap(handler));

  // Return type: refptr_same
  return CefTestServerCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK test_server_stop(struct _cef_test_server_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefTestServerCppToC::Get(self)->Stop();
}

cef_string_userfree_t CEF_CALLBACK
test_server_get_origin(struct _cef_test_server_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefTestServerCppToC::Get(self)->GetOrigin();

  // Return type: string
  return _retval.DetachToUserFree();
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefTestServerCppToC::CefTestServerCppToC() {
  GetStruct()->stop = test_server_stop;
  GetStruct()->get_origin = test_server_get_origin;
}

// DESTRUCTOR - Do not edit by hand.

CefTestServerCppToC::~CefTestServerCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefTestServer>
CefCppToCRefCounted<CefTestServerCppToC, CefTestServer, cef_test_server_t>::
    UnwrapDerived(CefWrapperType type, cef_test_server_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefTestServerCppToC,
                                   CefTestServer,
                                   cef_test_server_t>::kWrapperType =
    WT_TEST_SERVER;
