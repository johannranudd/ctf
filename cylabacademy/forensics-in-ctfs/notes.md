# Forensics in CTF's

1. Information -> picoCTF{the_m3tadata_1s_modified}
2. Glory of the Garden -> picoCTF{more_than_m33ts_the_3y339140129}
3. Sleuthkit Intro -> picoCTF{mm15_f7w!}
4. Disk, disk, sleuth! -> picoCTF{f0r3ns1c4t0r_n30phyt3_5e56e786}
5. Disk, disk, sleuth! II -> 
   1. + d/d 2045:     conf.d
   2. + r/r 18291:  down-at-the-bottom.txt
   3. picoCTF{f0r3ns1c4t0r_n0v1c3_4bd721f2}
6. Sleuthkit Apprentice -> 

└─$ mmls disk.flag.img
DOS Partition Table
Offset Sector: 0
Units are in 512-byte sectors

      Slot      Start        End          Length       Description
000:  Meta      0000000000   0000000000   0000000001   Primary Table (#0)
001:  -------   0000000000   0000002047   0000002048   Unallocated
002:  000:000   0000002048   0000206847   0000204800   Linux (0x83)
003:  000:001   0000206848   0000360447   0000153600   Linux Swap / Solaris x86 (0x82)
004:  000:002   0000360448   0000614399   0000253952   Linux (0x83)

d/d 11: lost+found  ?????


++ r/r * 2082(realloc): flag.txt
++ r/r 2371:    flag.uni.txt

icat -o 360448 disk.flag.img  2371 
flag: picoCTF{by73_5urf3r_2f22df38}
--------------------------------------------------------------------------
7. extensions -> picoCTF{now_you_know_about_extensions}