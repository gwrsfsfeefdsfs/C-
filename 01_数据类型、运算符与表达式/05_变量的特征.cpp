//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int bmi;        //声明
    bmi = 30;       //赋值
    cout << "小明之前的BMI是：" << bmi << endl;

    //再一次使用赋值语句，就可以修改变量内记录的值
    bmi = 26;
    cout << "小明现在的BMI是：" << bmi << endl;

    //进行数学计算，可以用：+ - * /
    bmi = bmi - 2;
    cout << "小明预测的BMI是：" << bmi << endl;

    return 0;
}