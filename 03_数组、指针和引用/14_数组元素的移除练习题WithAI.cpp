//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    int *pArr = new int[10] {3,5,1,11,99,66,22,2,8,6};
    int *NewArr = new int[8];

    for(int i = 0; i < 10; i++) {
        if (i == 0) {
            continue;
        } else if (i == 5) {
            continue;
        } else if (i < 5 && i > 0) {
            NewArr[i - 1] = pArr[i];
        } else {
            NewArr[i - 2] = pArr[i];
        }
    }

    delete[] pArr;

    for (int i = 0; i < 8; i++) {
        cout << "NewArr[" << i << "] =" << NewArr[i] << endl;
    }

    return 0;
}