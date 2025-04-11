# View Animal CGI Program

This is a C++ CGI program for COMP6014 Coursework 2. It displays all animals previously added to the system by reading and presenting them in a structured HTML table.

## How it works

The program uses the Common Gateway Interface (CGI) to read lines from a text file (`animals.txt`). Each line contains animal information in the format: `name,species,age`. It then dynamically generates an HTML table to display the data in the browser.

## Features

- Reads data from `/home/malware/animals.txt`
- Displays each animal's name, species, and age in an HTML table
- Handles empty or missing files 

## How to run it

1. Place `view.cgi` in `/usr/lib/cgi-bin/`
2. Compile the C++ file using:
   ```bash
   g++ view.cpp -o /usr/lib/cgi-bin/view.cgi
