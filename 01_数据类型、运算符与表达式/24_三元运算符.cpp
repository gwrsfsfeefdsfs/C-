//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    // 表达式? v1 : v2;
    int num1, num2;
    cout << "输入num1" << endl;
    cin >> num1;
    cout << "输入num2" << endl;
    cin >> num2;

    string value = num1 > num2? "num1>num2" : "num1<num2";
    cout << value << endl;


    return 0;
}