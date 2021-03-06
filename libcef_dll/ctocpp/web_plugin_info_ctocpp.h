// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
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

#ifndef _WEBPLUGININFO_CTOCPP_H
#define _WEBPLUGININFO_CTOCPP_H

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else // USING_CEF_SHARED

#include "include/cef.h"
#include "include/cef_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefWebPluginInfoCToCpp
    : public CefCToCpp<CefWebPluginInfoCToCpp, CefWebPluginInfo,
        cef_web_plugin_info_t>
{
public:
  CefWebPluginInfoCToCpp(cef_web_plugin_info_t* str)
      : CefCToCpp<CefWebPluginInfoCToCpp, CefWebPluginInfo,
          cef_web_plugin_info_t>(str) {}
  virtual ~CefWebPluginInfoCToCpp() {}

  // CefWebPluginInfo methods
  virtual CefString GetName() OVERRIDE;
  virtual CefString GetPath() OVERRIDE;
  virtual CefString GetVersion() OVERRIDE;
  virtual CefString GetDescription() OVERRIDE;
};

#endif // USING_CEF_SHARED
#endif // _WEBPLUGININFO_CTOCPP_H

