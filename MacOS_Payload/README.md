# Mac (OSX) Payload

In order to prevent the keyboard configuration dialog box from appearing when the DigiSpark is plugged into an Apple computer, we must configure the DigiSpark to appear as if it’s an Apple keyboard.

VID and PID are defined in the file `~/.arduino15/packages/digistump/hardware/avr/1.6.7/libraries/DigisparkKeyboard/usbconfig.h` We will replace the existing file with a modified Apple version when compiling the script for OSX. When we change Vendor Name and Device Name, we also have to adapt the constants for the name length.

It is very similar to what we’ve used to exploit Linux machines. The major difference is the way the terminal is opened. We’ve had to modify our OSX version to use `DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);`, which will open Spotlight search. The code will delay for .5 seconds, and search `terminal`, delay for .5 seconds, and press enter, opening the terminal.

After this, in order to ensure we aren’t using Z Shell, we’ll enter `bash`. From this point on the rest of the code is exactly the same as our Linux payload. It too downloads linux_loader, which downloads and runs `linux_payload.py`.

