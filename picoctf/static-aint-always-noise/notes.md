### original version of file:
`
#!/bin/bash

echo "Attempting disassembly of $1 ..."


#This usage of "objdump" disassembles all (-D) of the first file given by 
#invoker, but only prints out the ".text" section (-j .text) (only section
#that matters in almost any compiled program...

objdump -Dj .text $1 > $1.ltdis.x86_64.txt


#Check that $1.ltdis.x86_64.txt is non-empty
#Continue if it is, otherwise print error and eject

if [ -s "$1.ltdis.x86_64.txt" ]
then
	echo "Disassembly successful! Available at: $1.ltdis.x86_64.txt"

	echo "Ripping strings from binary with file offsets..."
	strings -a -t x $1 > $1.ltdis.strings.txt
	echo "Any strings found in $1 have been written to $1.ltdis.strings.txt with file offset"



else
	echo "Disassembly failed!"
	echo "Usage: ltdis.sh <program-file>"
	echo "Bye!"
fi
`

### run:
`./ltdis.sh static`

## this gives the files:
static.ltdis.strings.txt and static.ltdis.x86_64.txt

## run 
cat static.ltdis.strings.txt | grep pico

## flag:
picoCTF{d15a5m_t34s3r_20335e41}