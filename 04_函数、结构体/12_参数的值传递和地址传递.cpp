//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

void switch_value_1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void switch_value_2(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 1, b = 2;
    switch_value_1(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    switch_value_2(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}