//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    //示例数组
    int *pArr = new int[5] {1,2,3,4,5};

    //创建一个新的数组，将需要保留的复制到新数组中
    int * pNewArr = new int[4];

    //循环遍历老数组，将需要的元素放入新数组中（不要的要跳过）
    for (int i = 0; i < 5; ++i) {
        if (i == 2) {
            continue;
        } else if (i > 2) {
        pNewArr[i - 1] = pArr[i];
        } else {
            pNewArr[i] = pArr[i];
        }
    }

    //pArr = pNewArr; //将老数组的指针指向新数组(可选，根据需要)
    //delete[] pArr;  //释放老数组(可选，根据需要)

    for (int i = 0; i < 4; ++i) {
        cout << pNewArr[i] << endl;
        //cout << pArr[i] << endl;
    }

    return 0;
}