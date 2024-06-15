//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    int num1 = 10, num2 = 20;
    //指向const的指针：表示指向区域的数据，是不变的，但可以更换指向。
    //const 数据类型 * 指针;  or  数据类型 const * 指针;
//    const int * p = &num1;
//    cout << "指针p当前指向的数据是：" << *p << endl;
//    //*p = 20;
//    p = &num2;
//    cout << "指针p当前指向的数据是：" << *p << endl;

    //const指针：表示指针本身不可更改，但指向的数据可以更改。
    //数据类型 * const 指针 = 地址;
//    int * const p = &num1;
//    cout << "指针p当前指向的数据是：" << *p << endl;
//    *p = 20;
//    cout << "指针p当前指向的数据是：" << *p << endl;
//    //p = &num2;

    //指向const的const指针：指针和指向区域的值，都不可更改。
    //const 数据类型 * const 指针 = 地址;
//    const int * const p = &num1;
//    cout << "指针p当前指向的数据是：" << *p << endl;
//    //p = &num2;
//    //*p = 20;

    return 0;
}