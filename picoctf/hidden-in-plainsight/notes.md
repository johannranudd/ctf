# hidden in plainsight


┌──(kali㉿jrpc)-[/mnt/c/Users/johann/documents/picoctf/hidden-in-plainsight]
└─$ exiftool img.jpg
ExifTool Version Number         : 13.36
File Name                       : img.jpg
Directory                       : .
File Size                       : 73 kB
File Modification Date/Time     : 2026:01:23 22:15:22+01:00
File Access Date/Time           : 2026:01:23 22:15:36+01:00
File Inode Change Date/Time     : 2026:01:23 22:15:35+01:00
File Permissions                : -rwxrwxrwx
File Type                       : JPEG
File Type Extension             : jpg
MIME Type                       : image/jpeg
JFIF Version                    : 1.01
Resolution Unit                 : None
X Resolution                    : 1
Y Resolution                    : 1
Comment                         : c3RlZ2hpZGU6Y0VGNmVuZHZjbVE9
Image Width                     : 640
Image Height                    : 640
Encoding Process                : Baseline DCT, Huffman coding
Bits Per Sample                 : 8
Color Components                : 3
Y Cb Cr Sub Sampling            : YCbCr4:2:0 (2 2)
Image Size                      : 640x640
Megapixels                      : 0.410


from base 64:
steghide:cEF6endvcmQ=

then to:
pAzzword


steghide extract -sf img.jpg
picoCTF{h1dd3n_1n_1m4g3_67479645}
