//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    //  赋值运算符：=、+=、-=、*=、/=、%=
    // +=，将变量本身进行加法操作，将结果再赋值变量本身
    int num = 2;
    num = num + 3;
    cout << num << endl;
    num += 3;
    cout << num << endl;

    // -=，将变量本身进行减法操作，将结果再赋值变量本身
    num -= 3;
    cout << num << endl;

    // *=，将变量本身进行乘法操作，将结果再赋值变量本身
    num *= 5;
    cout << num << endl;

    // /=，将变量本身进行除法操作，将结果再赋值变量本身
    num /= 5;
    cout << num << endl;

    // %=，将变量本身进行取余操作，将结果再赋值变量本身
    num %= 3;
    cout << num << endl;


    return 0;
}
