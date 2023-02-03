#include<iostream>
using namespace std;
main() {
    int arrsize;
    float sum = 0.0;
    cout << "Enter the array size: ";
    cin >> arrsize;
    float RT[arrsize];
    for (int i = 0;i < arrsize;i++) {
        cout << "Enter the resistance: ";
        cin >> RT[i];
        sum = sum + RT[i];
    }
    cout << "Total resistance of circuit is: " << sum << " ohms";
}