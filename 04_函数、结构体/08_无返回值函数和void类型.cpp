//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

void say_hello(string name) {
    cout << name << ",你好,我是家人侠!" << endl;
}

void love_num(int a) {
    for (int i = 0; i < 9; i++) {
        cout << "小梅，我喜欢你！" << endl;
    }
}

int main() {
    say_hello("周杰伦");
    say_hello("林俊杰");

    love_num(9);

    return 0;
}