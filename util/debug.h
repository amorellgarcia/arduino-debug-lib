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
/// Include this header in your compilation unit to use debugging macros     ///
/// To enable or disable debugging messages modify the global flag (DEBUG)   ///
/// located in @a debug_config.h file.                                       ///
////////////////////////////////////////////////////////////////////////////////

#ifndef UTIL_DEBUG_H_
#define UTIL_DEBUG_H_

#include "debug_config.h"

#ifdef DEBUG
	#include "debug_enable.h"
#else
	#include "debug_disable.h"
#endif // DEBUG


#endif /* UTIL_DEBUG_H_ */
