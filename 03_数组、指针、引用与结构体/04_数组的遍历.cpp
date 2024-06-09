//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <random>
using namespace std;

int getRandom(int min, int max) {
    static default_random_engine e;
    static uniform_int_distribution<int> u(min, max);
    return u(e);
}

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int main(){
    //传统数组遍历
    int v1[] = {1,2,3,4,5};

    int i1 = 0;
    while(i1 < sizeof(v1)/sizeof(v1[0])){
        cout << v1[i1] << endl;
        i1++;
    }

    for (int i2 = 0; i2 < sizeof(v1)/sizeof(v1[0]); i2++) {
        cout << v1[i2] << endl;
    }

    //高级for循环写法
    /*for (元素类型 临时变量名 : 数组变量) {
        临时变量存的就是一个个元素;
    }
    */

    int v2[] = {1,2,3,4,5};

    for (int i3 : v2) {
        cout << i3 << endl;
    }

    cout << "----------------------------------------------------" << endl;
    int max_num = 0;
    int min_num = 101;
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = getRandom(1, 100);
        if (i >= 0) {
            max_num = max(max_num, arr[i]);
            min_num = min(min_num, arr[i]);
        }
    }
    cout << "max_num: " << max_num << endl;
    cout << "min_num: " << min_num << endl;

    return 0;
}