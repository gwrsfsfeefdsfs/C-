//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    //快捷方式1,声明变量的同时进行赋值。
    //语法：变量类型 变量名 = 变量值;
    int num = 102030;
    string name = "周杰伦";

    //快捷方式2,一次性定义（声明）多个变量。
    //语法：变量类型 变量名, 变量名, ...;
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;

    //快捷方式3,一次性定义（声明）多个变量的同时进行赋值。
    //语法：变量类型 变量名 = 变量值, 变量名 = 变量值, ...;
    int x = 10, y = 20, z = 30;

    cout << num << endl;
    cout << a << b << c << endl;
    cout << x << y << z << endl;

    return 0;
}