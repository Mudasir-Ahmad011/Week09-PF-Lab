#include<iostream>
using namespace std;
main() {
    int arrsize, n;
    cout << "Enter the size of array: ";
    cin >> arrsize;
    cout << "Enter the number you want to find: ";
    cin >> n;
    int num[arrsize];
    bool isbool = false;
    for (int idx = 0;idx < arrsize;idx++) {
        cout << "Enter the number: ";
        cin >> num[idx];
        if (num[idx] == n) {
            isbool = true;
            break;
        }
    }
    if (isbool == true) {
        cout << n << " is found";
    }
    else {
        cout << n << " is not found";
    }
}