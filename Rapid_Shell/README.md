# This script does the following:
1. Starts Command prompt as Administrator
2. Run a powershell script which self-creates/opens a metasploit payload seemlessly
3. Exits letting down everything as it was at the beginning

- Maximum running time: 30 seconds (+- 5 seconds <--> dependent);
- Exposed time: 15 seconds (means in 50% of time since plugging in the Digispark, the screen will have movement)

# Additional information:
  #### How it works:
   The Digispark once it is plugged in will take 5 seconds for the bootloader, and starts its job when the second led lights up, it will first open CMD as administrator using the start menu and create a new file which will be used to trigger the attack and open the shell.
   There is another way to open CMD as administrator, which is using the run prompt and running this command: "powershell Start-Process cmd -Verb runAs" but it showed that it takes much time to open the powershell prompt. If you desire to use this method (cmd_2) refer to the comments in the code.
   #### Tricks:   
  - You can reduce the running time by 5-8 seconds by tricking the bootloader, visit [this page](https://digistump.com/wiki/digispark/tricks) for more.
  - The powershell script features a 6 seconds screensaver to hide the backdooring process, we will make it possible to disable/enable in the future.
  - If the keyboard layout of the target machine is not in QWERTY/English you can use the bash script on a linux machine to convert text from AZERTY <--> QWERTY and vice versa.
  
# Known issues:

Found that my metasploit just sat at "Meterpreter shell 1 opened at....". This could be because it attempts to automatically run the smart_migrate module upon connection. All I did to resolve this was to hit enter to get the msf prompt back, and then connect into the meterpreter session and run smart_migrate automatically.

Smart_migrate can be found at

    post/windows/manage/smart_migrate

in the metasploit trunk. Although, be warned - smart_migrate automatically attempts to migrate into explorer.exe which ##DOES NOT## have an administrative privileges. So, you'll have to utilise the post modules to grant yourself admin and eventually even SYSTEM (If you want to dump firefox/chrome/IE passwords, hashes or use mimikatz or WCE to get the wDigest passwords from memory). I'd recommend the bypass_uac or ask modules to grab yourself admin - particularly ask in lower security environments.

# For the Forensics Conscious:
If you're concerned about remaining undetected on the machine you've got the shell on, then I recommend the following steps:

1. Delete tmp.cmd from %TEMP% - You don't want to come back to bite you on the ass once you're done with the machine.

2. Kill the powershell.exe process once you've migrated out of it.

Hope you all enjoy! I know many of you will find good use of this, and as always - use responsibly!
# Credits:
- https://github.com/PowerShellMafia/PowerSploit/
- https://github.com/nassimosaz
