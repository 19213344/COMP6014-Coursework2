#include <iostream>
using namespace std;

int main() {
    cout << "Content-type: text/html\n\n";
    cout << "<html><head><title>Welcome</title></head><body>";
    cout << "<h1>Welcome to My CGI Web App!</h1>";
    cout << "<p>This is a simple C++ CGI program running on Apache.</p>";
    cout << "</body></html>";
    return 0;
}
