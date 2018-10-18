![alt text](https://cdn.instructables.com/FKP/MAA2/HH2VJNW1/FKPMAA2HH2VJNW1.MEDIUM.jpg "The DigiSpark")

# DigiSpark-Scripts
This is a set of hand-written DigiSpark sketches for the Arduino IDE that utilize the DigiKeyboard.h library making the DigiSpark to act as a keyboard and execute a variety of actions. If you have found a USB Rubber Ducky scipt that you want to convert to a DigiSpark sketch, you can always use digiQuack, a tool which can be found in my repositories.

# Instructions
Configure the Arduino IDE for the DigiSpark using: https://digistump.com/wiki/digispark/tutorials/connecting or Seytonic's tutorial: https://youtu.be/fGmGBa-4cYQ. Then download one of scripts (sketches), open them with Arduino IDE, modify them if needed and upload them to the DigiSpark.

# Script Descriptions
>RickRoll_Update : Plays Never Gonna Give you up while performing a fake windows update.

>WallpaperChanger : Downloads and applies a wallpaper via powershell.

>Wallpaper_Prank : Takes a screenshot of the desktop, sets it as the wallpaper, hides desktop icons.

>Talker : Opens up powershell and speaks out a message.

>PowerShell Script Executer : Downloads and runs a powershell script.

>WiFi_Profile_Grabber: Using cmd, extracts wifi profiles and saves the csv to the usb mounted on d:\

>WiFi_Profile_Mailer : Writes the wireless network credentials to a csv file and emails it.

>Fork_Bomb : Opens up an obfuscated windows terminal and makes it multiply itself uncontrolably causing the machine to either lock or crash.

>Rapid_Shell : Seamlessly executes metasploit payloads through powershell.

>Reverse_Shell : Opens a reverse shell in 3 seconds.

>Window_Jammer : Spams ALT + F4 and CTRL + W key combos to force close all active windows.

>Wallpaper_Prank_Update : Makes all the desktop icons unclickable and indefinitely gives the appearance that Windows is updating

>Password_Generator : Uses Bash to create a list of randomly-generated passwords and save it in the user's Downloads folder

>Pinger : Opens command prompt and pings to [google.com](google.com)

>WiFi_Info_Display : Opens command prompt and displays network information using ipconfig

# See the scripts in action

Click the gifs to see the full video

[![Wifi Stealer](https://j.gifs.com/N9KP5v.gif)](https://www.youtube.com/watch?v=b5E0u4qNH4s)

[![Wallpaper Prank](https://j.gifs.com/32r7ER.gif)](https://www.youtube.com/watch?v=yHPRZnpxvks)

# Credits, contributors and resources:

-samratashok for the Nishang reverse shell used in Reverse_Shell.

-nassimosaz for the Rapid_Shell script.

-p0wc0w for the original WiFi Grabber and Mailer Scripts.

-BlackBoot for the original fork bomb.

-hak5darren for the USB Rubber Ducky Documentation: https://github.com/hak5darren/USB-Rubber-Ducky/wiki/Duckyscript

-Digistump for the DigiSpark and their documentation: https://github.com/digistump/DigisparkArduinoIntegration/blob/master/libraries/DigisparkKeyboard/DigiKeyboard.h

-usb.org for the USB Usage IDs on page 53: http://www.usb.org/developers/hidpage/Hut1_12v2.pdf
