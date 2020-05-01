// This script launches Spotlight to launch Terminal.app in order to download a picture, and sets it as a wallpaper, in less than 3 seconds.
// Tested on El Capitan (macOS 10.11.6)
#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("Terminal");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("curl https://tr3.cbsistatic.com/hub/i/2014/05/15/f8964afd-bd82-4e0e-bcbe-e927363dcdc1/3b858e39e2cf183b878f54cad0073a67/codedoge.jpg > /Users/Shared/wallpaper.jpg");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("osascript -e 'tell application \"Finder\" to set desktop picture to POSIX file \"/Users/Shared/wallpaper.jpg\"'");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_Q, MOD_GUI_LEFT);

  for (;;) {
    /*Stops the digispark from running the scipt again*/
  }
}
