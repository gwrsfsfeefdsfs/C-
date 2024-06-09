//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    // !
    int num = 1;
    if (!num){
        cout << "if被执行" << endl;
    }else{
        cout << "else被执行" << endl;
    }

    // &&
    int age1, height1;
    cout << "请输入年龄" << endl;
    cin >> age1;
    cout << "请输入身高" << endl;
    cin >> height1;
    if (age1 < 18 && height1 < 180){
        cout << "免费游玩" << endl;
    }else{
        cout << "收费游玩" << endl;
    }

    // ||
    int age2, height2;
    cout << "请输入年龄" << endl;
    cin >> age2;
    cout << "请输入身高" << endl;
    cin >> height2;
    if (age2 < 18 || height2 < 180){
        cout << "免费游玩" << endl;
    }else{
        cout << "收费游玩" << endl;
    }



    return 0;
}