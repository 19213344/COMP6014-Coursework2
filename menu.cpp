#include <iostream>
using namespace std;

int main() {
    cout << "Content-type: text/html\n\n";
    cout << "<html>\n";
    cout << "<head><title>Zoo Menu</title></head>\n";
    cout << "<body>\n";
    cout << "<h1>Zoo Management System</h1>\n";
    cout << "<ul>\n";
    cout << "<li><a href='/cgi-bin/add.cpp'>Add Animal</a></li>\n";
    cout << "<li><a href='/cgi-bin/view.cpp'>View Animals</a></li>\n";
    cout << "<li><a href='/cgi-bin/delete.cpp'>Delete Animal</a></li>\n";
    cout << "</ul>\n";
    cout << "</body>\n";
    cout << "</html>\n";
    return 0;
}
