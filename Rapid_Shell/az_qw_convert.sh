#!/bin/sh
#!/bin/bash

#az_qw_convert.sh - Enhanced by NBN - (Case sensitive input)
#Dependencies: sed

echo "Do you want to convert :\n\n1. QWERTY to AZERTY\n2. AZERTY to QWERTY "; read chx
if test "$chx" -eq "1"; then
	sleep .5
	echo "Please, insert the text you want to convert in AZERTY"; read txt
	sleep .5
	echo "$txt" | sed 'y/qQaAzZwWmM,<.;:/aAqQwWzZ,?;.:mM/' | sed "y/4'/'ù/" | sed 'y/123567890-_!@#$%^&*()[{]}¦"?/&é"(-è_çà)°1234567890^¨$£µ%§/' | sed 'y/>\\\//\/*!/'
elif test "$chx" -eq "2"; then
	sleep .5
	echo "Please, insert the text you want to convert in QWERTY "; read txt
	sleep .5
	echo "$txt" | sed 'y/aAqQwWzZ,?;.:mM/qQaAzZwWmM,<.;:/' | sed "y/!\//\/>/" | sed 'y/&é"(-è_çà)°1234567890^¨$£µ%§/123567890-_!@#$%^&*()[{]}¦"?/' | sed "y/ù'/'4/"
else
	exit
fi

