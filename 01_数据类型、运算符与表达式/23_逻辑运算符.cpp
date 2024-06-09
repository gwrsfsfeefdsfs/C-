//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    // 逻辑运算符 ! 非、&& 与、|| 或
    // ! 非
    int a = 1;
    int b = 3;
    bool r1 = !(1 == 1);
    cout << !(a > b) << endl;
    cout << !(a < b) << endl;
    cout << r1 << endl;

    // && 与
    bool r2 = 1 == 1 && 2 == 2;
    bool r3 = 2 == 1 && 2 == 2;
    cout << r2 << endl;
    cout << r3 << endl;

    // || 或
    bool r4 = 1 == 1 || 2 == 2;
    bool r5 = 2 == 1 || 2 == 2;
    bool r6 = 3 == 1 || 1 == 2;
    cout << r4 << endl;
    cout << r5 << endl;
    cout << r6 << endl;

    return 0;
}