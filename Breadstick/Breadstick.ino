// Fun little script to mess with your friends.
// Opens a powershell instance that downloads a picture of a breadstick (or any other picture that you can download via a link) and copy/pastes it 300 times to the desktop.
// The number of duplications can be chaged by editing the number on line 26 in the "foreach($number in 1..300)" where the number of duplications would be 300

#include "DigiKeyboard.h"

void setup() {
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT,KEY_R);
    DigiKeyboard.delay(50);
    DigiKeyboard.print("powershell");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(50);
    DigiKeyboard.print("Invoke-WebRequest https://www.iheartnaptime.net/wp-content/uploads/2019/01/breadsticks-recipe.jpg -OutFile ~/Desktop/breadstick.jpg");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(50);
    DigiKeyboard.print("foreach($number in 1..300) { Copy-Item '~/Desktop\\breadstick.jpg' -Destination ""~/Desktop\\breadstick$number.jpg""}");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(50);
    DigiKeyboard.print("exit");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);}

void loop() { }