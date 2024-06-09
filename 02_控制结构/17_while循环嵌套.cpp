//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <random>
using namespace std;

int get_random_num (int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    int random_number = dis(gen);
    return random_number;
}

int main(){
    bool love = false;

    while (love == false) {
        cout << "我喜欢你小梅" << endl;
        int i = 0;
        int num = get_random_num(1, 20);

        while (i < 3) {
            cout << "送给小梅一朵玫瑰花" << endl;
            i++;
        }
        if (num == 1) {
            cout << "小梅也喜欢我" << endl;
            love = true;
        }
        cout << "总算表白成功了" << endl;
    }

    return 0;
}