//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    /*
     * switch (){
     *      case 1:
     *          ...;
     *          break;
     *      case 2:
     *          ...;
     *          break;
     *      ...
     *      default:
     *          ...;
     * }
     * */

    //输入数字1~7，输出星期几
    int num = 0;
    cout << "请输入数字1~7：";
    cin >> num;

    switch (num) {
        case 1:
            cout << "星期一" << endl;
            break;
        case 2:
            cout << "星期二" << endl;
            break;
        case 3:
            cout << "星期三" << endl;
            break;
        case 4:
            cout << "星期四" << endl;
            break;
        case 5:
            cout << "星期五" << endl;
            break;
        case 6:
            cout << "星期六" << endl;
            break;
        case 7:
            cout << "星期日" << endl;
            break;
        default:
            cout << "输入错误" << endl;
    }

    int num2 = 0;
    cout << "输入你对电影的评分（0~10分）" << endl;
    cin >> num2;
    switch (num2) {
        case 10:
        case 9:
            cout << "优秀" << endl;
            break;
        case 8:
        case 7:
            cout << "良好" << endl;
            break;
        case 6:
        case 5:
            cout << "普通" << endl;
            break;
        default:
            cout << "烂片" << endl;
    }

    return 0;
}