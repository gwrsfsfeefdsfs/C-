//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

/* 主函数：程序的入口点 */
int main(){
    /* 初始化循环运行标志为true，用于控制while循环的执行 */
    bool is_run = true;
    /* 初始化计数器num，用于记录hello world的输出次数 */
    int num = 0;
    /* 当is_run为true时，持续输出hello world */
    while (is_run) {
        cout << "hello world" << endl;
        num++;
        /* 当输出次数超过5次时，将is_run设置为false，结束循环 */
        if (num > 5) {
            is_run = false;
        }
    }

    int times = 1;
    while (times <= 10) {
        cout << "第" << times << "天，小梅我喜欢你" << endl;
        times++;
    }

    return 0;
}
