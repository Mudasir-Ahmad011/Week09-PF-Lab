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
    int smallest = num[0];
    for (int idx = 1;idx < arrsize;idx++) {
        if (num[idx] < smallest) {
            smallest = num[idx];

        }
    }
    cout << "Smallest number is " << smallest;

}