#include<iostream>
using namespace std;
main() {
    string n;
    cout << "Enter the string value: ";
    getline(cin, n);
    int i = 0;
    while (n[i] != '\0') {
        i++;
    }
    int idx = i;
    cout << "Reverse string ";
    while (idx >= 0) {
        cout << n[idx];
        idx--;
    }
}