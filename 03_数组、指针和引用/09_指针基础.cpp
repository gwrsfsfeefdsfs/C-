//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

/* 主函数：程序的入口点 */
int main(){
    /* 初始化一个整型变量data，赋值为10 */
    int data = 10;
    /* 定义一个整型指针p，指向变量data的地址 */
    int * p = &data;

    /* 输出&data取地址的结果 */
    cout << "&data = " << &data << endl;
    /* 输出指针p的值，即变量data的地址 */
    cout << "p = " << p << endl;
    /* 输出指针p所指向的值，即变量data的值 */
    cout << "*p = " << *p << endl;

    //指针可直接对内存操控
    *p = 20;
    cout << "*p赋值后 " << *p << endl;
    cout << "data结果 " << data << endl;

    /* 程序正常退出 */
    return 0;
}
