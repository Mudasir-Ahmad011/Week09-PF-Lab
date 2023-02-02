#include<iostream>
using namespace std;
main() {
    int arrsize, n, pro = 1;
    cout << "Enter the size of array: ";
    cin >> arrsize;
    cout << "Enter the number from which you wanna take product: ";
    cin >> n;
    int num[arrsize];
    for (int idx = 0;idx < arrsize;idx++) {
        cout << "Enter the number: ";
        cin >> num[idx];

    }
    for (int i = 0;i < arrsize;i++) {
        pro = n * num[i];
        cout << pro << " ";
    }
}