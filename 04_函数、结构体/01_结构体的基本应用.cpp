//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main() {
    /*结构体   语法
    struct 结构体类型名 {
        成员类型 成员名;
        ...;
        ...;
    };
    */

    struct Student {
        string name;
        int age;
        string gender;
    };

    struct Student stu1;
    stu1 = {"李四", 19, "女"};

    cout << "姓名：" << stu1.name << endl;
    cout << "年龄：" << stu1.age << endl;
    cout << "性别：" << stu1.gender << endl;

    struct Student stu2;
    cout << "请输入姓名：";
    cin >> stu2.name;
    cout << "请输入年龄：";
    cin >> stu2.age;
    cout << "请输入性别：";
    cin >> stu2.gender;
    cout << "学生2信息核对：" << stu2.name << " " << stu2.age << " " << stu2.gender << endl;

    return 0;
}