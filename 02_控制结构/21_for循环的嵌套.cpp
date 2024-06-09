//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    cout << "九九乘法表" << endl;
    for (int y = 1; y <= 9; y++) {

        for (int x =1; x <= y; x++) {
            int z = x * y;
            cout << x << "*" << y << "=" << z << "\t";
        }
        cout << endl;
    }

    cout << endl;
    for (int y = 1; y <= 9; y++) {
        int x = 1;
        while (x <= y) {
            int z = x * y;
            cout << x << "*" << y << "=" << z << "\t";
            x++;
        }
        cout << endl;
    }

    return 0;
}