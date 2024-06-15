//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    //指针悬挂：指针指向区域已经被回收（delete）
    //解决方法：1.不要轻易进行指针之间赋值操作
    //        2.delete回收空间前，确保此空间100%不再被使用

    int *p1 = new int;
    *p1 = 10;

    int *p2 = p1;   //指针之间相互赋值

    cout << "p1指向的内存区域的值是：" << *p1 << endl;
    delete p1;
    cout << "p2指向的内存区域的值是：" << *p2 << endl;

    return 0;
}