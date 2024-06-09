//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    float height = 0;
    cout << "欢迎来到游乐场！" << endl;
    cout << "请输入身高(cm): ";
    cin >> height;
    if (height > 180.0) {
        cout << "您的身高超出120cm，游玩需要支付10元门票。";
    }else{
        cout << "您的身高未超出120cm，可免费游玩。";
    }
    return 0;
}