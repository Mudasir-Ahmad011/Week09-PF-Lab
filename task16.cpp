#include<iostream>
using namespace std;
main() {
    int arrsize = 4;
    float sum = 0, pro = 1;
    float totalchange[arrsize];
    float product_prize;
    cout << "Enter the prize of product: ";
    cin >> product_prize;
    for (int i = 0;i < arrsize;i++) {
        cout << "Enter the amount of change in your pocket: ";
        cin >> totalchange[i];
        if (i == 0) {
            float quater = 0.25;
            pro = quater * totalchange[i];
        }
        if (i == 1) {
            float dime = 0.10;
            pro = dime * totalchange[i];
        }
        if (i == 2) {
            float nickel = 0.05;
            pro = nickel * totalchange[i];
        }
        if (i == 3) {
            float penny = 0.01;
            pro = penny * totalchange[i];
        }
        sum = sum + pro;
    }
    if (sum >= product_prize) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}