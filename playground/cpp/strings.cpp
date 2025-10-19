#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "Hello";
    cout << "Initial string: " << str << endl;

    // Concatenation
    str += " World";
    cout << "After concatenation: " << str << endl;

    // Length
    cout << "Length of string: " << str.length() << endl;
    cout << "Size of string: " << str.size() << endl;

    // Accessing characters
    cout << "First character: " << str[0] << endl;
    cout << "Last character: " << str[str.length() - 1] << endl;

    // Substring
    string sub = str.substr(0, 5);
    cout << "Substring (0,5): " << sub << endl;

    // Finding a substring
    size_t pos = str.find("World");
    if (pos != string::npos) {
        cout << "'World' found at position: " << pos << endl;
    } else {
        cout << "'World' not found" << endl;
    }

    // Replacing a substring
    str.replace(pos, 5, "C++");
    cout << "After replacement: " << str << endl;

    // Inputting a string with spaces
    string inputStr;
    cout << "Enter a string with spaces: ";
    cin.ignore(); // To ignore the leftover newline character from previous input
    getline(cin, inputStr);
    cout << "You entered: " << inputStr << endl;

    return 0;
}