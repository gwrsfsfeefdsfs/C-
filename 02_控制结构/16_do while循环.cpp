//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <random>
using namespace std;

int get_random_num(int min, int max){
    // 初始化随机数生成器设备
    random_device rd;
    // 使用随机数生成设备初始化随机数生成器
    mt19937 gen(rd());
    // 定义一个均匀分布，用于生成[min, max]范围内的整数
    uniform_int_distribution<> dis(min, max);
    // 生成随机数
    int random_number = dis(gen);
    // 返回生成的随机数
    return random_number;
}

int main(){
    /*语法：
     * do {
     *    循环体
     *    code;
     *    ...
     * } while (条件表达式);
     * */

    int num = get_random_num(1, 100);
    cout << "随机数是：" << num << endl;
    int times = 0;
    int guess_num =0;


    do {
        cout << "请输入猜测的数字：";
        cin >> guess_num;
        times++;
        if (guess_num == num) {
            cout << "恭喜你" << times << "次猜对！" << endl;
            return 0;
        }else if (guess_num > num) {
            cout << "猜大了" << endl;
        }else {
            cout << "猜小了" << endl;
        }
    } while (guess_num != num);

    return 0;
}