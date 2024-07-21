//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

void send_food() {
    cout << "小梅，我给你买了早餐！" << endl;
}

void send_flower() {
    cout << "小梅，我给你买了鲜花！" << endl;
}

void say_like() {
    cout << "小梅，我喜欢你！" << endl;
}

void watch_movie() {
    cout << "小梅，我们一起看电影吧！" << endl;
}

void str_plan(int num) {
    switch (num) {
        case 1:
            send_food();
            send_flower();
            say_like();
            break;
        case 2:
            send_flower();
            say_like();
            watch_movie();
            break;
        case 3:
            watch_movie();
            send_flower();
            say_like();
            break;
        default:
            cout << "今天没有任何计划。" << endl;
    }
}

int main() {
    cout << "今天天气不错,执行方案3" << endl;
    str_plan(3);

    return 0;
}