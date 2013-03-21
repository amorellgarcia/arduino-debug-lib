arduino-debug-lib
=================

A debugging library for Arduino. Includes a set of macros to ease printing debug messages.

Features
--------
This library includes the following macros:

- Uses *Streaming* for printing. You can use it's features (*<<* operator,
number formating (*_HEX()*, *_DEC()*, ...), etc) in debugging macros.
- *assert(x)* to show a message when assert condition is false.
- *dbg(x)* for showing general debugging messages.
- *dbgInfo(x)* for informational messages.
- *dbgError(x)* for showing errors. It includes the file, function and line of
where error ocurred.
- *dbgArrayHex(x, len)* that shows array contents in hexadecimal format, etc.

License
------
Distributed under Boost license. See *LICENSE_1_0.txt*.

Dependencies
-----------
Requires *Streaming* library.

Installation notes
----------------
Copy contents in *libraries* folder of your sketchbooks.

Usage
-----
Include *DebugLib.h* and *Streaming.h* in your sketch (file .ino) so Arduino IDE adds this library
at compilation time.
Add *debug.h* in each file where you want to use debugging macros.
See included examples for a more detailed usage.

Take care when using *dbgError(x)* as it currently saves function and line
strings in RAM memory. This is a great problem that should be fixed in future
releases.

Version History
-------------
- 1.0 Initial version (21 March 2013). Stable version to use.

TODO
----
- Store *__func__* and *__LINE__* values in program space. Currently *F(text)*
macro doesn't allow it.
- Allow disabling or enabling each macro separately (eg. enable *dbg()*, disable
*dbgInfo()*, etc).

