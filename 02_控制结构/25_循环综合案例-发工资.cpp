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
    int fund = 10000;
    for (int id = 1; id <= 20; id++) {
        if (fund <= 0) {
            cout << "公司账户余额为0，停止发放工资" << endl;
            break;
        }
        int score = get_random_num(1, 10);
        if (score <= 5) {
            cout << "员工" << id << "绩效分低于5，不发工资" << endl;
            continue;
        }
        fund -= 1000;
        cout << "向员工" << id << "发放工资1000元,公司账户余额还剩" << fund << endl;

    }
    return 0;
}