//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

/*
 * 返回值类型 函数名(参数声明){
 *     函数体
 *     return 返回值;
 * }
 *
 * */

int max(int a, int b) {
    return a > b ? a : b;
}

int min_3(int a, int b, int c) {
    int num[3] = {a, b, c};
    int min = num[0];
    for (int i = 1; i < 3; i++) {
        if (min > num[i]) {
            min = num[i];
        }
    }
    return min;
}

int main() {
    //函数的使用在main函数中编写
    //调用函数：函数名称(传入数据,传入数据,...);
    int num1 = 6, num2 = 9;
    int num3 = (num1, num2);
    cout << "函数的结果是：" << num3 << endl;

    int a = 56, b = 65, c = 5;
    int min = min_3(a, b, c);
    cout << "a,b,c中的最小值是：" << min << endl;

    return 0;
}