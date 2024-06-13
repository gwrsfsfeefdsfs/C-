//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    //1.指针可进行加减运算，即：+、 -、 ++、 --
    //每次加减n，都是对内存地址进行 n * 类型大小 的加减
    int num = 10;
    int *p = &num;

    cout << "指针变量p中记录的地址为：" << p << endl;
    p++;
    cout << "指针变量p进行了+1操作，记录的地址为：" << p << endl;

    double num2 = 10.0;
    double *p2 = &num2;
    cout << "指针变量p2中记录的地址为：" << p2 << endl;
    p2 += 4;
    cout << "指针变量p2进行了+1操作，记录的地址为：" << p2 << endl;

    int v[] = {1,2,3,4,5};
    int *vp = v;

    cout << "数组的第一个元素是：" << *vp << endl;
    cout << "数组的第一个元素是：" << v[0] << endl;

    cout << "数组的第二个元素是：" << *(vp + 1) << endl;
    cout << "数组的第二个元素是：" << v[1] << endl;

    //2.数组对象本身记录的是内存地址（第一个元素地址）
    //可通过指针运算，完成使用指针存取数组元素
    //v[2] = 33
    //*(vp + 2) = 33;
    cout << "数组的第三个元素是：" << *(vp + 2) << endl;
    cout << "数组的第三个元素是：" << v[2] << endl;

    int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char v2[5] = {'a', 'b', 'c', 'd', 'e'};

    cout << "-----------------------------------------------" << endl;
    int *q1 = v1;
    char *q2 = v2;

    for (int i = 0; i < sizeof(v1) / sizeof(v1[0]); i++) {
        cout << "v1[" << i << "] = " << *(q1 + i) << endl;
    }

    for (int i = 0; i < sizeof(v2) / sizeof(v2[0]); i++) {
        cout << "v2[" << i << "] = " << *(q2 + i) << endl;
    }

    return 0;
}