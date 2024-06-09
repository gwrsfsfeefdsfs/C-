//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    bool love = true;
    bool weather = true;
    cout << "小梅对我的态度是怎么样的？1是喜欢，0是不喜欢：" << endl;
    cin >> love;

    if (love){
        cout << "小梅爱我" << endl;
        cout << "今天天气怎么样？1是晴天，0是阴天：" << endl;
        cin >> weather;
        if (weather){
            cout << "小梅，我好喜欢你啊！为了你，我要带你踏青" << endl;
        }else{
            cout << "小梅，我好喜欢你啊！为了你，我要带你看电影" << endl;
        }
    }else{
        cout << "还是小红好啊！" << endl;
    }

    return 0;
}