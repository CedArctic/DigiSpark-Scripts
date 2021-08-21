![alt text](https://cdn.instructables.com/FKP/MAA2/HH2VJNW1/FKPMAA2HH2VJNW1.MEDIUM.jpg "The DigiSpark")

# DigiSpark-Scripts
This is a set of hand-written DigiSpark sketches for the Arduino IDE that utilize the DigiKeyboard.h library making the DigiSpark to act as a keyboard and execute a variety of actions. If you have found a USB Rubber Ducky scipt that you want to convert to a DigiSpark sketch, you can always use digiQuack, a tool which can be found in my repositories.

# Instructions
Configure the Arduino IDE for the DigiSpark using: https://digistump.com/wiki/digispark/tutorials/connecting or Seytonic's tutorial: https://youtu.be/fGmGBa-4cYQ. Then download one of scripts (sketches), open them with Arduino IDE, modify them if needed and upload them to the DigiSpark.

# Script Descriptions

- **Create_Account**: Creates a new admin account and optionally hides it
- **DNS Poisoner**: Injects lines into the Windows hosts file and redirects URLs to wherever you want
- **Execute_Powershell_Script**: Downloads and executes a powershell script in hidden mode
- **Fork_Bomb**: Opens up an obfuscated windows terminal and makes it multiply itself uncontrolably causing the machine to either lock or crash
- **Rapid_Shell**: Seamlessly executes metasploit payloads through powershell
- **Reverse_Shell**: Opens a netcat reverse shell from a Windows machine to the host
- **RickRoll_Update**: Plays Never Gonna Give you up while performing a fake windows update
- **Silly_Mouse**: Switches primary and secondary mouse buttons, display mouse trails, decreases mouse speed and other mouse related pranks
- **Talker**: Makes the computer speak out a message using powershell
- **Wallpaper_Changer**: Downloads and applies a wallpaper via powershell.
- **Wallpaper_Changer_macOS**: Downloads and applies a wallpaper via applescript on macOS.
- **Wallpaper_Prank**: Takes a screenshot of the desktop, sets it as the wallpaper, hides desktop icons
- **WiFi_Profile_Grabber**: Extracts wifi profiles and saves the csv to a USB drive
- **WiFi_Profile_Mailer**: Writes the wireless network credentials to a csv file and emails it
- **Window_Jammer**: Spams ALT + F4 and CTRL + W key combos to force close all active windows

# See the scripts in action

Click the gifs to see the full video

[![Wifi Stealer](https://j.gifs.com/N9KP5v.gif)](https://www.youtube.com/watch?v=b5E0u4qNH4s)

[![Wallpaper Prank](https://j.gifs.com/32r7ER.gif)](https://www.youtube.com/watch?v=yHPRZnpxvks)

# Contributors

- **samratashok**
- **NassimBentarka**
- **p0wc0w**
- **apsecdev**
- **BlackBoot**
- **Michyus**
- **Vel1khaN**
- **slipperyavocado**
- **bernsteining**

# Resources

- USB Rubber Ducky Documentation by hak5darren: https://github.com/hak5darren/USB-Rubber-Ducky/wiki/Duckyscript

- Digistump DigiSpark Documentation: https://github.com/digistump/DigisparkArduinoIntegration/blob/master/libraries/DigisparkKeyboard/DigiKeyboard.h

- USB Usage IDs by usb.org (page 53): http://www.usb.org/developers/hidpage/Hut1_12v2.pdf
