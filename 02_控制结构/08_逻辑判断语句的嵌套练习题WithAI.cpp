//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    int times = 1, num1 = 0, num2 = 0;
    cout << "请出题人提供数字： " << endl;
    cin >> num1;

    if (times == 1){
        cout << "现在有3次机会，请猜测数字： " << endl;
        cin >> num2;
        times++;
        if (num2 > num1){
            cout << "猜大了" << endl;
        }else if (num2 < num1){
            cout << "猜小了" << endl;
        }else{
            cout << "猜对了" << endl;
            return 0;
        }
    }
    if (times == 2){
        cout << "现在有2次机会，请猜测数字： " << endl;
        cin >> num2;
        times++;
        if (num2 > num1){
            cout << "猜大了" << endl;
        }else if (num2 < num1){
            cout << "猜小了" << endl;
        }else{
            cout << "猜对了" << endl;
            return 0;
        }
    }
    if (times == 3){
        cout << "现在有2次机会，请猜测数字： " << endl;
        cin >> num2;
        times++;
        if (num2 > num1){
            cout << "猜大了" << endl;
        }else if (num2 < num1){
            cout << "猜小了" << endl;
        }else{
            cout << "猜对了" << endl;
            return 0;
        }
    }
    if(times == 4){
        cout << "游戏结束,你失败了" << endl;
    }

    return 0;
}