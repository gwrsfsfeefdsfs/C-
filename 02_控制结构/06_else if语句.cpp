//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    /*
     * if (条件){
     *      ...
     * }else if (条件){
     *      ...
     * }else if (条件){
     *      ...
     * }else {
     *      ...
     * }
     * */
    bool xiaomei = true;    //ture 喜欢 flase 不喜欢
    bool xiaohong = false;
    bool xiaoqing = true;

    if (xiaomei){
        cout << "我喜欢小美" << endl;
    }else if (xiaohong){
        cout << "我喜欢小红" << endl;
    }else if (xiaoqing){
        cout << "我喜欢小青" << endl;
    }else{
        cout << "我喜欢小甜" << endl;
    }


    return 0;
}