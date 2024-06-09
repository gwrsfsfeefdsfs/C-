//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    //字符串拼接
    string name = "小黑";
    string major = "物理";

    int height = 180;
    //to_string() 函数，可以将内容转换为字符串类型，用法:  to_string(内容)
    string msg = "我叫:" + name + ",我的专业是:" + major + "我的身高" + to_string(height);

    cout << msg << endl;

    return 0;
}