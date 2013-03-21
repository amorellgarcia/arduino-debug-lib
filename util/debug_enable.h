////////////////////////////////////////////////////////////////////////////////
/// @section LICENSE                                                         ///
///                (C) Copyright 2013 Alejandro Morell Garcia                ///
///        Distributed under the Boost Software License, Version 1.0.        ///
///             (See accompanying file LICENSE_1_0.txt or copy at            ///
///                  http://www.boost.org/LICENSE_1_0.txt)                   ///
///                                                                          ///
/// @file                                                                    ///
/// @author  Alejandro Morell Garcia (http://github.com/amorellgarcia)       ///
/// @version 1.0                                                             ///
///                                                                          ///
/// @section DESCRIPTION                                                     ///
/// Include this header in your compilation unit to enable debugging         ///
/// messages. Global flag (DEBUG) doesn't affect this file.                  ///
////////////////////////////////////////////////////////////////////////////////

#ifndef UTIL_DEBUG_ENABLE_H_
#define UTIL_DEBUG_ENABLE_H_

#include "detail/debug_base.h"


#define assert(x)						_assert(x)
#define dbg(x)							_dbg(x)
#define dbgInfo(x)						_dbgInfo(x)
#define dbgError(x)						_dbgError(x)
#define dbgExpr(x)						_dbgExpr(x)
#define dbgArrayHex(x, len)				_dbgArrayHex(x, len)

#define DEBUG_PGMSPACE_STRING(x, text)	_DEBUG_PGMSPACE_STRING(x, text)
#define SET_SERIAL_DEBUG_PRINTER(x) namespace util { Print &PrintDebug = (x); }

#endif // UTIL_DEBUG_ENABLE_H_
