//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main() {
  struct Student {
    string name;
    string major_code = "003032";
    int dormitory_num = 1;
  };

  struct Student arr[5] = {{"张三", "003022", 1},
                           {"李四", "003038", 2},
                           {"王五", "003036", 3},
                           {"赵六", "003039", 4},
                           {"孙七", "003042", 5}};

  struct Student *p = arr;
  p[0].name = "王八蛋";

  for (int i = 0; i < 5; i++) {
    cout << p[i].name << "\t" << p[i].major_code << "\t" << p[i].dormitory_num
         << endl;
  }

  struct Student *p2 = new Student[5]{{"王八蛋", "003042", 5},
                                      {"李四", "003038", 2},
                                      {"王五", "003036", 3},
                                      {"赵六", "003039", 4},
                                      {"孙七", "003042", 5}};

  for (int i = 0; i < 5; i++) {
    cout << p2[i].name << "\t" << p2[i].major_code << "\t"
         << p2[i].dormitory_num << endl;
  }

  p2[2].name = "沟槽";

  for (int i = 0; i < 5; i++) {
    cout << p2[i].name << "\t" << p2[i].major_code << "\t"
         << p2[i].dormitory_num << endl;
  }

  delete[] p2;

  return 0;
}