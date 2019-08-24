# This script does the following:
1. Starts Command prompt as Administrator
2. Runs sequence of powershell commands
    1. Stores password in a variable
    2. Creates new local user account
    3. Gives newly created account administrator priviliages
3. Exits Command prompt

# Additional information:
- Running time is around 15 seconds(depending on hw and length of user name, password, description...)
- Optionally you can add `-FullName` and `-Description` parameters to give account more believable look: 
`New-LocalUser \"accName\" -Password $pass -FullName \"User name\" -Description \"Description of new account\"`

# Credits
- https://github.com/Michyus