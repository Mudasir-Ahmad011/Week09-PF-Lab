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
    int largest = num[0];
    for (int idx = 1;idx < arrsize;idx++) {
        if (num[idx] > largest) {
            largest = num[idx];

        }
    }
    cout << "Largest number is " << largest;

}