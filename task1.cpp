#include<iostream>
using namespace std;
main() {
    int arrsize;
    cout << "Enter the size of array: ";
    cin >> arrsize;
    float cgpa[arrsize];
    for (int idx = 0; idx < arrsize;idx++) {
        cout << "enter the value: ";
        cin >> cgpa[idx];

    }
    for (int idx = 0; idx < arrsize;idx++) {
        cout << cgpa[idx] << " ";
    }
}