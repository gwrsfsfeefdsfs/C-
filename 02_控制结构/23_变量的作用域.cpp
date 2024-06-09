//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    int num1 = 10;

    if (1) {
        int num2 = 100;
        num1 += 1;
        cout << num1 << endl;
    }
    cout << num1 << endl;
    cout << num2 << endl;   // 代码块内变量，作用域只在代码块内

    return 0;
}