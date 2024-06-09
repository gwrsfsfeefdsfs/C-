//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    // cin >> 变量；
    int num;
    cout << "请输入一个整数" << endl;
    cin >> num;
    cout << num << endl;

    double num2;
    cout << "请输入一个实型数字" << endl;
    cin >> num2;
    cout << num2 << endl;

    char num3;
    cout << "请输入一个字符" << endl;
    cin >> num3;
    cout << num3 << endl;

    string num4;
    cout << "请输入一个字符串" << endl;
    cin >> num4;
    cout << num4 << endl;

    return 0;
}