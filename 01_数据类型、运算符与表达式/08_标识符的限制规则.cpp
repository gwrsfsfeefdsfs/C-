//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <windows.h>
using namespace std;

/*标识符的限制规则
 * 1.内容限定：（1）只允许字母、数字、下划线的组合
 *           （2）数字不可开头
 *
 * 2.大小写敏感：大写字母和小写字母的名称，是不同的可区分的。eg：int num 不等于 int NUM
 *
 * 3.不可使用关键字：详情搜索：标准C++关键字
 * */

int main(){
    SetConsoleOutputCP(CP_UTF8);
    //内容限定
    //int 1num = 10;
    //int num-1 = 6;
    //int num*1 = 10;

    //大小写敏感
    int CCC = 30;
    int ccc = 60;
    cout << CCC << endl << ccc << endl;

    //不可使用关键字
    //int int = 67;

    return 0;
}