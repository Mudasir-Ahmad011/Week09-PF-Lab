#include<iostream>
using namespace std;
main() {
    string name;
    getline(cin, name);
    int length = name.length();
    if (length % 2 == 0) {
        cout << "Even";
    }
    else {
        cout << "odd";
    }
}