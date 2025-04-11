# Menu CGI Program

This is the second C++ CGI program for COMP6014 Coursework 2.

## How it works
The program outputs an HTML page displaying a basic menu with options via the Common Gateway Interface (CGI), running on an Apache web server.

## How to run it
1. Place `menu.cgi` in `/usr/lib/cgi-bin/`.
2. Compile the C++ file:
   ```bash
   g++ menu.cpp -o /usr/lib/cgi-bin/menu.cgi
