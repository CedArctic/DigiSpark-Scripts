# Fork_Bomb
## This script does the following:
1. Starts Command prompt
2. Resizes and changes colors of Command prompt
3. Executes fork bomb

# Persistent_Fork_Bomb
## This script does the following:
1. Starts Command prompt
2. Creates fork.bat in Startup directory
3. Exits

# Additional information:
- The `for /l %%x in (0, 0, 0) do start` command will run indefinitely. If you want to limit number of cmd instances change it like this(this will start 10 instances):
```for /l %%x in (1, 1, 10) do start```
- When using Persistent_Fork_Bomb it usually takes few seconds to get started, this depends on hw and how many other programs are in Startup directory. Still this might be hard to remove. If you are unable to remove it using Windows, try to boot another OS(for example debian from live USB https://www.debian.org/CD/live/), then connect it to the disk with Windows installed on it, and you should be able to remove fork.bat from Startup(This won't work if disk with Windows is encrypted).

# Credits
- Fork_Bomb: BlackBoot
- Persistent_Fork_Bomb: https://github.com/Michyus

