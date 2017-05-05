![alt text](https://cdn.instructables.com/FKP/MAA2/HH2VJNW1/FKPMAA2HH2VJNW1.MEDIUM.jpg "The DigiSpark")

# DigiSpark-Scripts
This is a set of hand-written DigiSpark sketches for the Arduino IDE that utilize the DigiKeyboard.h library making the DigiSpark to act as a keyboard and execute a variety of actions. If you have found a USB Rubber Ducky scipt that you want to convert to a DigiSpark sketch, you can always use digiQuack a tool which can be found in my repositories.

# Instructions
Configure the Arduino IDE for the DigiSpark using: https://digistump.com/wiki/digispark/tutorials/connecting or Seytonic's tutorial: https://youtu.be/fGmGBa-4cYQ. Then download one of scripts (sketches), open them with Arduino IDE, modify them if needed and upload them to the DigiSpark.

# Script Descriptions
>RickRoll_Update : Plays Never Gonna Give you up while performing a fake windows update.

>WallpaperChanger : Downloads and applies a wallpaper via powershell.

>Wallpaper_Prank : Takes a screenshot of the desktop, sets it as the wallpaper, hides desktop icons.

>Talker :  Opens up powershell and speaks out a message.

>PowerShell Script Executer : Downloads and runs a powershell script.

>WiFi_Profile_Grabber: Using cmd, extracts wifi profiles and saves the csv to the usb mounted on d:\

>WiFi_Profile_Mailer : Writes the wireless network credentials to a csv file and emails it.

# Credits and resources:
p0wc0w for the original WiFi Grabber and Mailer Scripts
hak5darren for the USB Rubber Ducky Documentation: https://github.com/hak5darren/USB-Rubber-Ducky/wiki/Duckyscript
Digistump for the DigiSpark and their documentation: https://github.com/digistump/DigisparkArduinoIntegration/blob/master/libraries/DigisparkKeyboard/DigiKeyboard.h
