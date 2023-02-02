#include<iostream>
using namespace std;
main() {
    int arrsize;
    cout << "Enter the size of array: ";
    cin >> arrsize;
    int num[arrsize];
    for (int idx = 0;idx < arrsize;idx++) {
        cout << "Enter the number: ";
        cin >> num[idx];

    }
    for (int i = arrsize - 1; i >= 0;i--) {
        cout << num[i] << endl;
    }
}