#include<iostream>
using namespace std;
main() {
    string name;
    getline(cin, name);
    char character;
    cout << "Enter the character: ";
    cin >> character;
    int size = name.length();
    if (name[size - 1] == character) {
        cout << character << " is last character of our name";
    }
    else {
        cout << character << " is not the last character of our name";
    }
}