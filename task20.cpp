#include<iostream>
using namespace std;
main() {
    int arr1[2];
    for (int idx = 0;idx < 2;idx++) {
        cout << "Enter the number in first array: ";
        cin >> arr1[idx];
    }
    int arr2[] = { 2,3,4,5,6,7,8,9 };
    int arrsize = sizeof(arr2) / sizeof(arr2[0]);
    int newarr[arrsize + 2];
    newarr[0] = arr1[0];
    for (int index = 1;index <= arrsize;index++) {
        newarr[index] = arr2[index - 1];
        if (index == arrsize) {
            newarr[index + 1] = arr1[1];
        }
    }

    for (int i = 0;i < arrsize + 2;i++) {
        cout << newarr[i] << " ";
    }
}