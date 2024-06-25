//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    struct Student {
        string name = "未知";
        string major_code = "003032";
        int dormitory_num = 1;
    };

    struct Student stu1 = {"张三", "003033", 3};
    struct Student stu2;

    cout << "姓名：" << stu1.name << endl;
    cout << "专业代码：" << stu1.major_code << endl;
    cout << "宿舍号：" << stu1.dormitory_num << endl;

    cout << "姓名：" << stu2.name << endl;
    cout << "专业代码：" << stu2.major_code << endl;
    cout << "宿舍号：" << stu2.dormitory_num << endl;

    return 0;
}