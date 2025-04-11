#include <iostream>
#include <fstream>
#include <cgicc/Cgicc.h>
#include <cgicc/HTTPHTMLHeader.h>
#include <cgicc/HTMLClasses.h>

using namespace std;
using namespace cgicc;

int main() {
    cout << HTTPHTMLHeader() << endl;
    cout << html() << head(title("Add Animal")) << body();

    try {
        Cgicc cgi;
        string name = cgi("name");
        string species = cgi("species");
        string age = cgi("age");

        if (!name.empty() && !species.empty() && !age.empty()) {
            ofstream file("/home/malware/animals.txt", ios::app);
            file << name << "," << species << "," << age << endl;
            file.close();
            cout << h3("Animal added successfully!") << endl;
        }

        cout << "<form method='GET' action='/cgi-bin/add.cgi'>";
        cout << "Name: <input type='text' name='name'><br>";
        cout << "Species: <input type='text' name='species'><br>";
        cout << "Age: <input type='text' name='age'><br>";
        cout << "<input type='submit' value='Add Animal'>";
        cout << "</form>";

    } catch (exception& e) {
        cout << "Error: " << e.what();
    }

    cout << body() << html();
    return 0;
}
