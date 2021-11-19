//Ncage by Padsala Tushal
// install ncage extension on chrome
//This extension is just for making jokes with your friends or jobmates. It will substitute all the images on the pages the user is navigating by random images of nicolas cage
#include "DigiKeyboard.h"
void setup() {
  //empty
}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("chrome");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(3000);
  DigiKeyboard.print("https://chrome.google.com/webstore/detail/ncage/mpnfndnehgmmonhfcfdnaemdeokofgaf?hl=en");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5500);
  
  
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(500);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(500);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(500);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(500);
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
 
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(700);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);

  
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  for(;;){ /*empty*/ }
}
