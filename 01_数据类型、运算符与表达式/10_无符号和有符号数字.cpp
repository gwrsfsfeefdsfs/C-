//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <windows.h>
using namespace std;

/* 有符号（可正可负）：
 * [signed] int
 * [signed] short
 * [signed] long
 * [signed] long long
 *
 * 无符号（只可负）：
 * unsigned int           =  u_int      快捷写法
 * unsigned short         =  u_short
 * unsigned long          =  u_long
 * unsigned long long
 * */

int main(){
    SetConsoleOutputCP(CP_UTF8);

    //有符号（输出可正可负，输入可正可负）
    signed int num1 = 10;
    int num2 = -10;
    cout << num1 << "," << num2 << endl;

    //无符号（输出只可负，输入只能正）
    //unsigned int num3 = -30;
    unsigned int num3 = 30;
    cout << num3 << endl;

    //无符号的int、short、long 有快捷写法
    u_short num4 = 1;
    u_int num5 = 10;
    u_long num6 = 100;
    cout << num4 << "," << num5 << "," << num6 << endl;

    return 0;
}