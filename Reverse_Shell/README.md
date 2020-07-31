# DigiSpark Reverse Shell Script:
This DigiSpark script downloads and executes the Invoke-PowerShellTcpOneLine.ps1 powershell script which essentially opens a netcat reverse shell from a Windows machine to the host computer in about 3 seconds.

## Instructions:
  ### On the host machine (I assume you are using linux for this):
  1. Open a netcat listener on a port (the script uses port 4444 by default): `nc -lp 4444`
  2. Download and modify the Invoke-PowerShellTcpOneLine.ps1 by removing the first line comment and changing the IP address to the one of your host machine and the port to the one you chose earlier.
  3. You now need to host the payload on a web server so it can be downloaded on the Windows computer. There are many ways to do this, but for anyone who wants a quick and easy solution you can host a php web server from the linux terminal like this: `sudo php -S 0.0.0.0:80 -t /directory/to/folder/of/powershellScript/`
  4. Download and edit the `Reverse_Shell.ino` DigiSpark script to match the address where the ps1 powershell script is hosted and compile and load `Reverse_Shell.ino` to your DigiSpark. 
  
  ### On the Windows machine:
  Plug in the DigiSpark and enjoy your reverse shell on the host machine!
  
Hope you all enjoy this script and as always use it responsibly!

## Credits:
- hak5: https://www.hak5.org/episodes/hak5-2110-how-to-get-a-reverse-shell-in-3-seconds-with-the-usb-rubber-ducky
- samratashok for Nishang: https://github.com/samratashok/nishang/blob/master/Shells/Invoke-PowerShellTcpOneLine.ps1
