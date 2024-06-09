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
    /* for循环语句语法:
     * for (循环因子初始化语句; 条件判断; 循环因子变化语句) {
     *      循环体，当条件判断为真时执行
     *      code;
     *      ...
     * }
     * */
    for (int num; num <=10; num++) {
        cout << num << endl;
    }
    //1~100偶数求和
    int sum = 0;
    for (int num = 2; num <= 100; num += 2) {
        sum += num;
        if (num == 100) {
            cout << sum << endl;
        }
    }
    //cout << sum << endl;

    return 0;
}