#include<iostream>
using namespace std;
main() {
    int firstarr[2];
    for (int i = 0;i < 2;i++) {
        cout << "Enter the number in first array: ";
        cin >> firstarr[i];
    }
    int arrsize;
    cout << "Enter the second array size";
    cin >> arrsize;
    int secondarr[arrsize];
    for (int n = 0;n < arrsize;n++) {
        cout << "Enter the number in second: ";
        cin >> secondarr[n];
    }
    int newarray[arrsize + 2];
    newarray[0] = firstarr[0];
    for (int idx = 1;idx <= arrsize;idx++) {
        newarray[idx] = secondarr[idx - 1];
        if (idx == arrsize) {
            newarray[idx + 1] = firstarr[1];
        }
    }
    for (int i = 0;i < arrsize + 2;i++) {
        cout << newarray[i];
    }

}