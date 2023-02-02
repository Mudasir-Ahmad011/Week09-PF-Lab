#include<iostream>
using namespace std;
main() {
    float sum = 0.0;
    int arrsize;
    cout << "Enter the size of array: ";
    cin >> arrsize;
    int num[arrsize];
    for (int idx = 0;idx < arrsize;idx++) {
        cout << "Enter the number: ";
        cin >> num[idx];
        sum = sum + num[idx];

    }
    float average = sum / arrsize;
    cout << "sum is " << sum << endl << "average is " << average;
}