#include "DigiKeyboard.h"

int led = 0;  // Change to pin 1 for MODEL A
int on_wait = 1000;  // How long to toggle CAPS LOCK for.
int off_wait = 5000;  // Delay between toggles.

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(70, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("mspaint");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("%USERPROFILE%\\wall.jpg");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_K);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_X);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F10, MOD_SHIFT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_V);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("http://fakeupdate.net/win10u/index.html");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  
  pinMode(led, OUTPUT);
  DigiKeyboard.update();
}

void loop() {
  DigiKeyboard.sendKeyStroke(57);
  digitalWrite(led, 1);
  delay(on_wait);
  DigiKeyboard.sendKeyStroke(57);
  digitalWrite(led, 0);
  delay(off_wait);
}
