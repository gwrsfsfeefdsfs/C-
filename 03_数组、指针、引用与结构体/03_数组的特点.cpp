//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){

    //数组特点1:任意类型都可以构建数组
    float v1[] = {1.2, 2.3, 3.4, 4.5};
    double v2[] = {1.2, 2.3, 3.4, 4.5};
    char v3[] = {'a', 'b', '1', '2', '3'};
    string v4[] = {"abc", "123", "满穗"};
    bool v5[] = {true, false, 1, 0, true};
    enum Color {Red, Green, Blue};
    Color v6[] = {Red, Green, Blue};

    cout << "特点1:任意类型都可以构建数组----------------------------" << endl;
    cout << "float数组的第一个元素为: " << v1[0] << endl;
    cout << "double数组的第一个元素为: " << v2[0] << endl;
    cout << "char数组的第一个元素为: " << v3[0] << endl;
    cout << "string数组的第一个元素为: " << v4[0] << endl;
    cout << "bool数组的第一个元素为: " << v5[0] << endl;
    cout << "枚举数组的第一个元素为: " << v6[0] << endl;
    cout << endl;

    //数组特点2:大小固定(无边界检查)
    cout << "特点2:大小固定(无边界检查)------------------------------" << endl;
    int v7[] = {1, 2, 3, 4, 5};
//    cout << "数组v7的10号下标: " << v7[10] << endl;
//    v7[100] = 10;
//    cout << "数组v7的100号下标: " << v7[100] << endl;
    cout << endl;

    //数组特点3:内存连续且有序
    cout << "特点3:内存连续且有序------------------------------------" << endl;
    cout << "数组v7的第一个元素为: " << v7[0] << endl;
    cout << "数组v7的第一个元素为: " << v7[0] << endl;
    cout << "数组v7的第一个元素为: " << v7[0] << endl;
    cout << "数组v7的空间占用大小为:\t" << sizeof(v7) << "字节" << endl;
    cout << "数组v7的第一个元素空间占用大小为:\t" << sizeof(v7[0]) << "字节" << endl;
    cout << endl;

    //数组特点4:元素值可以修改
    cout << "特点4:元素值可以修改------------------------------------" << endl;
    int v8[] = {1, 2, 3, 4, 5};
    cout << "数组v8的下标1元素为: " << v8[0] << endl;
    cout << "数组v8的下标2元素为: " << v8[1] << endl;
    v8[0] = 11;
    v8[1] = 66;
    cout << "修改后，数组v8的下标1元素为: " << v8[0] << endl;
    cout << "修改后，数组v8的下标2元素为: " << v8[1] << endl;
    cout << endl;

    //数组特点5:数组变量不记录数据。
    cout << "特点5:数组变量不记录数据。-------------------------------" << endl;
    int v9[] = {1, 2, 3, 4, 5};
    cout << "直接cout v9为: " << v9 << endl;
    //v9变量本身记录的是内存地址，这个地址是v9的0号元素的地址。
    cout << endl;

    return 0;
}