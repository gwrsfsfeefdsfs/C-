//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    int day = 1;
    float weight = 0;
    while (day <= 5) {
        int a = 1;
        int b = 1;
        cout << "开始减肥第" << day << "天!" << endl;
        while (a <= 3) {
            cout << "开始减肥第" << day << "天的第" << a << "个俯卧撑!  ";
            a++;
        }
        cout << endl << "减肥第" << day << "天的3个俯卧撑做完，目前减少" << ++weight << "斤" << endl;
        while (b <= 3) {
            cout << "开始减肥第" << day << "天的第" << b << "批400米冲刺跑!  ";
            b++;
        }
        cout << endl << "减肥第" << day << "天的3批400米冲刺跑做完，目前减少" << ++weight << "斤" << endl << endl;
        day++;
    }
    cout << day-1 << "天减肥结束，累计减少" << weight << "斤" << endl;

    return 0;
}