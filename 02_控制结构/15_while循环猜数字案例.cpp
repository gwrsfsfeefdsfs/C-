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
    int times = 1; // 记录猜测次数

    // 生成1到100之间的随机数
    int num = get_random_num(1, 100);
    cout << "猜测的数字：" << num << endl;

    int guess_num = 0;

    // 循环直到猜对为止
    while (guess_num != num) {
        cout << "请输入猜测的数字：" << endl;
        cin >> guess_num;

        if (guess_num == num) {
            cout << "恭喜你第" << times << "次猜对！" << endl;
            return 0;
        }else if (guess_num > num) {
            cout << "猜大了，请重新输入" << endl;
            times++;
        }else{
            cout << "猜小了，请重新输入" << endl;
            times++;
        }
    }
    return 0;
}
