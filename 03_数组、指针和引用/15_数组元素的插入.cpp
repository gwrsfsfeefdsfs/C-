//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    int *pArr = new int[5] {1,3,5,7,9};
    int *NewArr = new int[7];

    for (int i = 0, j = 0; i < 7; i++) {
        if (i == 1) {
            NewArr[i] = 11;
        } else if (i == 3) {
            NewArr[i] = 66;
        } else {
            NewArr[i] = pArr[j];
            j++;
        }
    }

    delete []pArr;

    for (int i = 0; i < 7; i++) {
        cout << "NewArr[" << i << "] = "<< NewArr[i] << endl;
    }

    delete []NewArr;

    return 0;
}