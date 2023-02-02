#include<iostream>
using namespace std;
main() {
    string name;
    cout << "Enter the name: ";
    getline(cin, name);
    int i = 0;
    while (name[i] != '\0') {
        i++;
    }
    cout << i;
}