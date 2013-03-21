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
/// Include this header in your compilation unit to disable debugging        ///
/// messages. Global flag (DEBUG) doesn't affect this file.                  ///
////////////////////////////////////////////////////////////////////////////////

#ifndef DEBUG_DISABLE_H_
#define DEBUG_DISABLE_H_

#define assert(x)
#define dbg(x)
#define dbgInfo(x)
#define dbgError(x)
#define dbgArrayHex(x, len)

#define DEBUG_PGMSPACE_STRING(x, text)

#define SET_SERIAL_DEBUG_PRINTER(printer)

#endif /* DEBUG_DISABLE_H_ */
