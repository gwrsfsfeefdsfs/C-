//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    //短整型
    short num1 = 1;
    cout << num1 << "    " << "short变量所占字节" << sizeof(num1) << endl;

    //整型
    int num2 = 10;
    cout << num2 << "   " << "int变量所占字节" << sizeof(num2) << endl;

    //长整型
    long num3 = 100;
    cout << num3 << "  " << "long变量所占字节" << sizeof(num3) << endl;

    //长长整型
    long long num4 = 1000;
    cout << num4 << " " << "long long变量所占字节" << sizeof(num4) << endl;

    //sizeof()函数，用法：sizeof(数据),会告知得到数据所占用的字节

    return 0;
}