//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    //单目（只有一个操作数）操作符：+、-
    int num1 = +10;
    int num2 = -10;
    cout << num1 << "," << num2 << endl;

    //双目（有两个操作数）操作符：+、-、*、/、%
    int num3 = 5 + 5;
    int num4 = 5 - 3;
    int num5 = 5 * 5;
    int num6 = 10 / 3;
    int num7 = 10 % 3;
    cout << "5 + 5 = " << num3 << endl;
    cout << "5 - 3 = " << num4 << endl;
    cout << "5 * 5 = " << num5 << endl;
    cout << "10 / 3 = " << num6 << endl;
    cout << "10 % 3 = " << num7 << endl;

    int num8 = 2;
    int a = ++num8;

    int num9 = 2;
    int b = num9++;

    int num10 = 2;
    int c = --num10;

    int num11 = 2;
    int d = num11--;

    cout << "num8 =" << num8 << endl;
    cout << "++num8 = " << a << endl;
    cout << "num9 =" << num9 << endl;
    cout << "num9++ = " << b << endl;
    cout << "num10 =" << num10 << endl;
    cout << "--num10 = " << c << endl;
    cout << "num11 =" << num11 << endl;
    cout << "num11-- = " << d << endl;


    return 0;
}