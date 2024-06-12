//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    //野指针：被声明但未被初始化（赋值）的指针。这个指针会指向随机的内存空间，可能会导致未知问题。
//    int *p;
//    *p = 10；

    //空指针：指向空地址的指针。空指针不能被初始化，也不能被赋值。
    //为避免野指针，及时初始化，或将指针置为空指针更为安全。
    int *q = NULL;
    int *p = nullptr;
    cout << "q = " << q << endl;
    //cout << "*q = " << *q << endl;

    cout << "p = " << p << endl;
    //cout << "*p = " << *p << endl;

    return 0;
}