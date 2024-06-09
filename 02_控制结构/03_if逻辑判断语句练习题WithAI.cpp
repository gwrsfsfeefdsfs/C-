//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    //定义变量，定义年龄
    int age;

    cout << "请输入年龄：";
    cin >> age;

    //通过if判断，如果age小于8岁·，则输出提示信息
    if (age < 18){
        cout << "未成年人禁止入内" << endl;

    }


    return 0;
}