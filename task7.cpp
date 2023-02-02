#include<iostream>
using namespace std;
main() {
    string name;
    getline(cin, name);
    int i = 0;
    while (name[i] != '\0') {
        cout << name[i] << " is at index" << i << endl;
        i++;
    }
}