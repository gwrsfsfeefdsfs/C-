//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    /*
     * if (判断){
     *      ...
     * }else{
     *      ...
     * }
     * */
    bool love;
    cout << "小美你喜欢我吗？喜欢扣1，不喜欢扣0" << endl;
    cin >> love;

    if (love == true){
        cout << "小美我也喜欢你" << endl;
    }else{
        cout << "伤心，我去追求小新去了" << endl;
    }


    return 0;
}