//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    /*
     * 数据类型 数组名[数组长度]
     *
     * 数组名[下标索引]，访问数组元素
     * */

    int v[5];

    v[0] = 11;
    v[1] = 22;
    v[2] = 33;
    v[3] = 44;
    v[4] = 55;

    for (int i = 1; i <=5; i++) {
        cout << "数组的第" << i << "个元素：" << v[i-1] << endl;
    }

    // 数组的声明和赋值同步完成的快捷写法
    // 数字类型 数组名[] = {元素, 元素, 元素, ...};
    int v2[] = {11, 22, 33, 44, 55};

    return 0;
}