#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    cout << "Content-type: text/html\n\n";
    cout << "<html><head><title>View Animals</title></head><body>";
    cout << "<h1>Animal List</h1>";

    ifstream file("/home/malware/animals.txt");
    if (!file) {
        cout << "<p>No animals found.</p>";
    } else {
        string line;
        cout << "<table border='1'><tr><th>Name</th><th>Species</th><th>Age</th></tr>";
        while (getline(file, line)) {
            stringstream ss(line);
            string name, species, age;
            getline(ss, name, ',');
            getline(ss, species, ',');
            getline(ss, age, ',');
            cout << "<tr><td>" << name << "</td><td>" << species << "</td><td>" << age << "</td></tr>";
        }
        cout << "</table>";
        file.close();
    }

    cout << "</body></html>";
    return 0;
}
