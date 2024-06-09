//
// Created by Monster on 24-6-1.
//
#include "iostream"
#include "windows.h"
using namespace std;

#define FAT_BMI 28
#define J2C_RATE 4.19
//符号常量：
// #define 名称（标识符） 常量值，符号常量定义在代码头部
//符号常量的定义 不需要分号结尾

int main() {
    SetConsoleOutputCP(CP_UTF8);  //main函数内部编写
    system("chcp 65001");           //main函数内部编写
    //使用符号常量的语句，就是正常的代码了，要写在main函数中
    // 如何使用：使用符号常量，就直接用它的名字即可
    cout << FAT_BMI << endl;
    cout << "焦耳转卡路里需要除以：" << J2C_RATE << endl;

    /*中文乱码解决方法：
     * （1）引入windows.h库          参考第5、15行
     * （2）system("chcp 65001");   参考第16行
     * */

    return 0;
}