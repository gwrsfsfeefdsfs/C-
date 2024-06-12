//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <random>
using namespace std;

int getRandom(int min, int max){
    static default_random_engine e;
    uniform_int_distribution<int> u(min, max);
    return u(e);
}

int main(){
    int success_num = 0;
    int num = getRandom(1, 10);
    cout << "随机数：" << num << endl;

    int guess_num[10];
    for (int i = 0; i < 10; i++) {
        cout << "请输入第" << i + 1 << "次猜测的数字(1~10)：";
        cin >> guess_num[i];
    }
    for (int i = 0; i < 10; i++) {
        if (guess_num[i] == num) {
            success_num++;
        }
    }
    cout << "成功次数：" << success_num << endl;

    return 0;
}