//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

/* 主函数，程序的入口点 */
int main(){
    /* 初始化num2为1，用于控制外层循环，遍历1到9 */
    int num2 = 1;
    /* 外层循环，打印1到9的乘法表 */
    while(num2 <= 9){
        /* 初始化num1为1，用于控制内层循环，遍历1到当前的num2 */
        int num1 = 1;
        /* 内层循环，计算并打印num1和num2的乘积 */
        while (num1 <= num2) {
            /* 计算num1和num2的乘积 */
            int num3 = num1 * num2;
            /* 打印乘法运算式及结果 */
            cout << num1 << "*" << num2 << "=" << num3 << "\t";
            /* 内层循环递增num1 */
            num1++;
        }
        /* 每行乘法表结束后换行 */
        cout << endl;
        /* 外层循环递增num2 */
        num2++;
    }
    /* 程序正常结束 */
    return 0;
}
