//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    struct Student {
        string name = "无";
        int age = 0;
        string gender = "无";
    };

    Student stu[3];
    for (int i = 0; i < 3; i++) {
        cout << "请输入第" << i + 1 << "个学生的姓名：";
        cin >> stu[i].name;
        cout << "请输入第" << i + 1 << "个学生的年龄：";
        cin >> stu[i].age;
        cout << "请输入第" << i + 1 << "个学生的性别：";
        cin >> stu[i].gender;
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        cout << "第" << i + 1 << "个学生的姓名：\t" << stu[i].name << endl;
        cout << "第" << i + 1 << "个学生的年龄：\t" << stu[i].age << endl;
        cout << "第" << i + 1 << "个学生的性别：\t" << stu[i].gender << endl;
        cout << endl;
    }

    Student stu2[2] = {
            {"张三", 18, "男"},
            {"李四", 19, "女"}
    };

    for (int i = 0; i < 2; i++) {
        cout << "第" << i + 1 << "个学生的姓名：\t" << stu2[i].name << endl;
        cout << "第" << i + 1 << "个学生的年龄：\t" << stu2[i].age << endl;
        cout << "第" << i + 1 << "个学生的性别：\t" << stu2[i].gender << endl;
        cout << endl;
    }

    return 0;
}