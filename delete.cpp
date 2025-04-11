#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cgicc/Cgicc.h>
#include <cgicc/HTTPHTMLHeader.h>
#include <cgicc/HTMLClasses.h>

using namespace std;
using namespace cgicc;

int main() {
    cout << HTTPHTMLHeader() << endl;
    cout << html() << head(title("Delete Animal")) << body();

    try {
        Cgicc cgi;
        string nameToDelete = cgi("name");

        // Load all animals into a vector
        vector<string> lines;
        ifstream inFile("/home/malware/animals.txt");
        string line;

        while (getline(inFile, line)) {
            if (!nameToDelete.empty()) {
                stringstream ss(line);
                string name;
                getline(ss, name, ',');
                if (name != nameToDelete) {
                    lines.push_back(line);
                }
            } else {
                lines.push_back(line);
            }
        }
        inFile.close();

        // Rewrite file without deleted entry
        ofstream outFile("/home/malware/animals.txt");
        for (const auto& l : lines) {
            outFile << l << endl;
        }
        outFile.close();

        if (!nameToDelete.empty()) {
            cout << "<p>Deleted: " << nameToDelete << "</p>";
        }

        // Display remaining entries with delete buttons
        cout << "<h2>Current Animals</h2>";
        cout << "<ul>";
        for (const auto& l : lines) {
            stringstream ss(l);
            string name, species, age;
            getline(ss, name, ',');
            getline(ss, species, ',');
            getline(ss, age, ',');
            cout << "<li>" << name << " (" << species << ", " << age << " yrs)";
            cout << " <form style='display:inline;' method='GET' action='/cgi-bin/delete.cgi'>";
            cout << "<input type='hidden' name='name' value='" << name << "'>";
            cout << "<input type='submit' value='Delete'>";
            cout << "</form></li>";
        }
        cout << "</ul>";

    } catch (exception& e) {
        cout << "<p>Error: " << e.what() << "</p>";
    }

    cout << body() << html();
    return 0;
}
