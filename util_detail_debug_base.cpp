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
////////////////////////////////////////////////////////////////////////////////

#include "util/detail/debug_base.h"

namespace util {
namespace debug {
	PGMSPACE_STRING(PREFIX_ASSERT, 	"[ASSERT] ");
	PGMSPACE_STRING(PREFIX_DEBUG, 	"[DBG] ");
	PGMSPACE_STRING(PREFIX_INFO, 	"[NFO] ");
	PGMSPACE_STRING(PREFIX_ERROR, 	"[ERR");
	PGMSPACE_STRING(SECTION_ARRAY, 	"={");
	PGMSPACE_STRING(SECTION_SEP, 	"][");
	PGMSPACE_STRING(SECTION_END, 	"] ");
	PGMSPACE_STRING(COMMA, ", ");
	PGMSPACE_STRING(PREFIX_HEX, "0x");
} // namespace debug
} // namespace util
