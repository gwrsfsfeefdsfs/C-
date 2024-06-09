//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    // continue 跳过本次循环，进入下一次循环
    // break 直接停止所在循环的执行
    // 两者都只针对所在循环


    //通过for循环输出1~20之间的奇数
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << endl;
    }

    int i = 1;
    while (i <= 20) {
        if (i % 2 == 0) {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }

    //通过for循环输出1~20的数字
    for (int i = 1; true; i++) {
        cout << i << endl;
        if (i == 20) {
            break;
        }
    }



    return 0;
}