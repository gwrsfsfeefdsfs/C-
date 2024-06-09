//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <windows.h>
using namespace std;

/*变量：
 * （1）变量的声明
 *      语法：变量类型 变量名;
 *      示例：int num;         常见变量类型：
 *                             int      整型
 *                             float    实型
 *                             char     字符型
 *                             string   字符串型
 *
 * （2）变量的赋值
 *      语法：变量名 = 变量值;
 *      示例：num = 10;
 * */
int main() {
    SetConsoleOutputCP(CP_UTF8);

    //（1）变量的声明   语法：变量类型 变量名;
    int age;
    float height;
    char gender;
    string name;

    //（2）变量的赋值   语法：变量名 = 变量值;
    age = 21;
    height = 180.5;
    gender = 'm';
    name = "小明";

    //（2）变量的使用(取值)，直接使用变量名称即可
    cout << name << "年纪:" << age << endl;
    cout << name << "身高:" << height << endl;
    cout << name << "性别:" << gender << endl;

    return 0;
}
