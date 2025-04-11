# Welcome CGI Program

This is a simple C++ CGI program for COMP6014 Coursework 2.

## How it works
The program outputs a basic HTML welcome page via the Common Gateway Interface (CGI), running on an Apache web server.

## How to run it
1. Place `welcome.cgi` in `/usr/lib/cgi-bin/`.
2. Compile the C++ file:
   ```bash
   g++ welcome.cpp -o /usr/lib/cgi-bin/welcome.cgi
