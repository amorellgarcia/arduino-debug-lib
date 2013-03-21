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

#ifndef UTIL_DETAIL_DEBUG_BASE_H_
#define UTIL_DETAIL_DEBUG_BASE_H_

#include <Print.h>
#include <Streaming.h>

#ifndef PGMSPACE_STRING
#include <avr/pgmspace.h>
#define PGMSPACE_STRING(name, text) \
	const char name##__pgmspace[] PROGMEM = text;\
	const __FlashStringHelper * const name = reinterpret_cast<const __FlashStringHelper *>(name##__pgmspace)
#endif

#ifndef PGMSPACE_EXTERN_STRING
#include <avr/pgmspace.h>
#define PGMSPACE_EXTERN_STRING(name) extern const __FlashStringHelper * const name
#endif


namespace util {
	extern Print &PrintDebug;

namespace debug {
	PGMSPACE_EXTERN_STRING(PREFIX_ASSERT);
	PGMSPACE_EXTERN_STRING(PREFIX_DEBUG);
	PGMSPACE_EXTERN_STRING(PREFIX_INFO);
	PGMSPACE_EXTERN_STRING(PREFIX_ERROR);
	PGMSPACE_EXTERN_STRING(SECTION_SEP);
	PGMSPACE_EXTERN_STRING(SECTION_END);
	PGMSPACE_EXTERN_STRING(SECTION_END);
	PGMSPACE_EXTERN_STRING(SECTION_ARRAY);
	PGMSPACE_EXTERN_STRING(COMMA);
	PGMSPACE_EXTERN_STRING(PREFIX_HEX);
} // namespace debug

#define _assert(EXP) \
	if (!(EXP)) { ::util::PrintDebug << ::util::debug::PREFIX_ASSERT << F( #EXP ) << endl; }

#define _dbg(x)      ::util::PrintDebug << ::util::debug::PREFIX_DEBUG << x << endl
#define _dbgInfo(x)  ::util::PrintDebug << ::util::debug::PREFIX_INFO << x << endl
// FIXME __func__ and __LINE__ macros should be in program space but F() macro
// doesn't allows it.
#define _dbgError(x) ::util::PrintDebug << ::util::debug::PREFIX_ERROR \
	<< ::util::debug::SECTION_SEP << F( __FILE__ ) \
	<< ::util::debug::SECTION_SEP << __func__ \
	<< ::util::debug::SECTION_SEP << __LINE__ << \
	::util::debug::SECTION_END << x << endl
#define _dbgArrayHex(x, len) \
		::util::PrintDebug << F( #x ) << ::util::debug::SECTION_ARRAY; \
		if (len > 0) { \
			::util::PrintDebug << ::util::debug::PREFIX_HEX << _HEX(x[0]); \
			for(size_t i = 1; i < len; i++) { \
				::util::PrintDebug << ::util::debug::COMMA \
					<< ::util::debug::PREFIX_HEX << _HEX(x[i]); \
			} \
		} \
		::util::PrintDebug.println('}')

#define _DEBUG_PGMSPACE_STRING(x, text) PGMSPACE_STRING(x, text)

} // namespace util

#endif // UTIL_DETAIL_DEBUG_BASE_H_
