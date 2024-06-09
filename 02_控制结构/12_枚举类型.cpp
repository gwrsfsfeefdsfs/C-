//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    /* enmu 枚举类型
     * 语法:
     * enmu 枚举名 {
     *      枚举元素1,
     *      枚举元素2,
     *      枚举元素3,
     *      ...
     * };
     * */

    enum Season {
        SPRING,
        SUMMER,
        AUTUMN,
        WINTER
        //枚举元素默认从0开始，如果要指定枚举元素的值，则需要手动指定
        //枚举元素值必须为整型常量，本质为int类型数字
        //也可以手动指定
        //SPRING = 1,
        //SUMMER,
        //AUTUMN,
        //WINTER
    };

    int Season;
    cout << "现在是什么季节(0~3)" << endl;
    cin >> Season;

    switch (Season) {
        case SPRING:
            cout << "春天" << endl;
            break;
        case SUMMER:
            cout << "夏天" << endl;
            break;
        case AUTUMN:
            cout << "秋天" << endl;
            break;
        case WINTER:
            cout << "冬天" << endl;
            break;
    }

    return 0;
}