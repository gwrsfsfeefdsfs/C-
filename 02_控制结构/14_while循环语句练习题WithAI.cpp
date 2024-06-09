//
// Created by Monster on 24-6-1.
//
/c++
#include <iostream>
using namespace std;

/* 主函数 */
int main(){
    /* 初始化变量a为1，用于后续的累加操作 */
    int a = 1;
    /* 初始化变量b为0，用于存储累加结果 */
    int b = 0;
    /* 当a小于等于100时，执行循环 */
    while (a <= 100) {
        /* 将变量a的值累加到变量b上，并将a自增 */
        b += a++;
    }
    /* 输出累加结果 */
    cout << b << endl;

    /* 程序正常退出 */
    return 0;
}
