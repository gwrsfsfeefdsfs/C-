//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <random>
using namespace std;

int getRandomNum(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(min, max);
    return dis(gen);
}

int main(){

    //int num = getRandomNum(1, 100);
    //cout << "随机数：" << num << endl;
    /*   for (bool result = false; result == false;) {
           cout << "请输入一个数字：";
           cin >> guess_num;
           if (guess_num > num) {
               cout << "猜大了" << endl;
           } else if (guess_num < num) {
               cout << "猜小了" << endl;
           } else {
               cout << "猜对了" << endl;
               result = true;
           }
       }*/

    //改进版猜数字
    int guess_num = 0;
    for (int num = getRandomNum(1, 100); num != guess_num;) {
        cout << "请输入一个数字：";
        cin >> guess_num;
        if (guess_num > num) {
            cout << "猜大了" << endl;
        } else if (guess_num < num) {
            cout << "猜小了" << endl;
        } else {
            cout << "猜对了" << endl;
            return 0;
        }
    }

    return 0;
}