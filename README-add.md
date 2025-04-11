# Add Animal CGI Program

This is a C++ CGI program for COMP6014 Coursework 2. It allows users to input and store animal information through a web form.

## How it works

The program uses the Common Gateway Interface (CGI) to render an HTML form in the browser. When submitted, it collects animal details—name, species, and age—and saves them to a text file (`animals.txt`) on the server.

## Features

- Form input: name, species, age
- Appends animal info to a text file (`animals.txt`)
- Displays confirmation message after successful addition

## How to run it

1. Place `add.cgi` in `/usr/lib/cgi-bin/`
2. Compile the C++ file using:
   ```bash
   g++ add.cpp -o /usr/lib/cgi-bin/add.cgi -lcgicc
