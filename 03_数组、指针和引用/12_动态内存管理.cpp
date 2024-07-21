//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main() {
    //new 运算符 语法
    //new type      申请普通变量空间
    //new type[n]   申请数组空间

    //delete 运算符 语法:
    //delete 指针;    删除普通变量空间
    //delete[] 指针;  删除数组空间

    int *p1 = new int;
    *p1 = 10;
    cout << *p1 << endl;
    delete p1;

    int x = 5;
    int *p2 = new int[x];
    p2[0] = 1;//指针也可用下标，等同于 *(p2+0)
    p2[1] = 2;//指针也可用下标，等同于 *(p2+1)
    p2[2] = 3;
    p2[3] = 4;
    p2[4] = 5;

    cout << "sizeof(p2) = " << sizeof(p2) << endl;
    cout << "sizeof(p2[0]) = " << sizeof(p2[0]) << endl;

    for (int i = 0; i < sizeof(int[x]) / sizeof(p2[0]); ++i) {
        cout << "p2[" << i << "] = " << p2[i] << endl;
    }

    cout << p2[0] << endl;
    cout << *(p2 + 1) << endl;
    delete[] p2;


    //不可删除静态内存
    //    int num = 10;
    //    cout << num << endl;
    //    delete &num;
    cout << "-----------------------------------------" << endl;

    int size = 0;
    cout << "请输入数组大小：";
    cin >> size;
    int *p3 = new int[size];
    for (int i = 0; i < sizeof(int[size]) / sizeof(p3[0]); ++i) {
        p3[i] = i * 11;
        cout << "p3[" << i << "] = " << p3[i] << endl;
    }
    delete[] p3;

    return 0;
}