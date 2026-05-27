## solution:
`exiftool confidential.pdf`

result:
`┌──(kali㉿jrpc)-[/mnt/c/Users/johann/downloads]
└─$ cat result.txt
ExifTool Version Number         : 13.36
File Name                       : confidential.pdf
Directory                       : .
File Size                       : 183 kB
File Modification Date/Time     : 2026:01:23 21:07:34+01:00
File Access Date/Time           : 2026:01:23 21:20:13+01:00
File Inode Change Date/Time     : 2026:01:23 21:07:53+01:00
File Permissions                : -rwxrwxrwx
File Type                       : PDF
File Type Extension             : pdf
MIME Type                       : application/pdf
PDF Version                     : 1.7
Linearized                      : No
Page Count                      : 1
Producer                        : PyPDF2
Author                          : cGljb0NURntwdXp6bDNkX20zdGFkYXRhX2YwdW5kIV9lZTQ1NDk1MH0=`


Go to cyberchef and translate from base64:
cGljb0NURntwdXp6bDNkX20zdGFkYXRhX2YwdW5kIV9lZTQ1NDk1MH0=

answer: 
picoCTF{puzzl3d_m3tadata_f0und!_ee454950}