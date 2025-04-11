# Delete Animal CGI Program

This is a C++ CGI program for COMP6014 Coursework 2. It allows users to delete animals from a stored list by selecting them from a displayed list in the browser.

## How it works

The program uses the Common Gateway Interface (CGI) to:
- Load animals from `animals.txt`
- Display each entry in a list with a "Delete" button
- Remove the selected animal from the file when submitted

## Features

- Displays all animals with individual delete buttons
- Handles removal via form submission
- Refreshes the list to reflect current state

## How to run it

1. Place `delete.cgi` in `/usr/lib/cgi-bin/`
2. Compile the C++ file using:
   ```bash
   g++ delete.cpp -o /usr/lib/cgi-bin/delete.cgi -lcgicc
