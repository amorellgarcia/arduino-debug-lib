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
/// Modify this file to enable or disable global debugging.                  ///
////////////////////////////////////////////////////////////////////////////////

#ifndef UTIL_DEBUG_CONFIG_H_
#define UTIL_DEBUG_CONFIG_H_


/// Comment this line to disable global debugging
#define DEBUG

#ifdef DEBUG

class Print;
namespace util {

extern Print &PrintDebug;

} // namespace util

#endif // DEBUG


#endif // UTIL_DEBUG_CONFIG_H_
