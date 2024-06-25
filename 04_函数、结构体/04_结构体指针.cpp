//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    struct Student{
        string name;
        string major_code = "003032";
        int dormitory_num = 1;
    };

    struct Student stu = {"周街路", "003099", 5};
    struct Student * p1 = &stu;
    struct Student * p2 = new Student {"房门口", "003039", 6};

    cout << p1->name << endl;
    cout << p1->major_code << endl;
    cout << p1->dormitory_num << endl;
    cout << endl;

    cout << p2->name << endl;
    cout << p2->major_code << endl;
    cout << p2->dormitory_num << endl;
    cout << endl;

    p2->name = "李四";
    p2->major_code = "003099";
    p2->dormitory_num = 8;

    cout << p2->name << endl;
    cout << p2->major_code << endl;
    cout << p2->dormitory_num << endl;
    cout << endl;

    delete p2;

    return 0;
}