//NOTE: This is meant to be used on Linux machines

#include "DigiKeyboard.h"

void setup() {
  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on Model A
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("terminal");
  DigiKeyboard.delay(1250);
  DigiKeyboard.println("cd Downloads");
  DigiKeyboard.delay(100);
  DigiKeyboard.println("nano passwd.txt");
  DigiKeyboard.delay(100);
}

void loop() {
  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  char passwd[12];
  for(int x=0; x<12; x++) passwd[x]=random(33, 127);
  DigiKeyboard.println(String(passwd));
  DigiKeyboard.delay(50);
  digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(50);               // wait for a second   
}
