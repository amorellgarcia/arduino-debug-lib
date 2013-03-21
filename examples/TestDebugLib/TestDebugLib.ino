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

#include <Streaming.h>
#include <DebugLib.h>
#include <util/debug.h>

int a = 1;
int errorCode = 3001;
int modifiedArray[] = {0x02, 0x01, 0x03, 0x04, 0x05};

SET_SERIAL_DEBUG_PRINTER(Serial)

void setup() {
	// Setup debugging Serial
	Serial.begin(9600);

	dbgInfo(F("Entering setup()"));

	// Primitive assert. It doesn't abort/exit application, only shows message.

	// This should show nothing.
	assert(a == 1);

	dbg(F("Test assertion"));
	// This should show an assert message
	assert(a == 0);

	dbgInfo(F("Debug a"));
	dbgExpr(a);

	// Streaming library is used, so you can use operator << to create complex
	// debugging messages
	dbgError(F("reading file, errorCode=") << errorCode << F(" (0x")
			<< _HEX(errorCode) << ')');

	dbgInfo(F("Not sorted array"));
	dbgArrayHex(modifiedArray, sizeof(modifiedArray) / sizeof(modifiedArray[0]));
	for (int i = 0; i < sizeof(modifiedArray) / sizeof(modifiedArray[0]); ++i) {
		dbgExpr(i);
		dbgExpr(modifiedArray[i]);
	}
	dbgInfo(F("Sorted array"));
	modifiedArray[0] = 0x01;
	modifiedArray[1] = 0x02;
	dbgArrayHex(modifiedArray, sizeof(modifiedArray) / sizeof(modifiedArray[0]));


	dbgInfo(F("Exiting setup()"));
}

void loop() {

}
