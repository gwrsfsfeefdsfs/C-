//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int min (int x, int y) {
    return x < y ? x : y;
}

int main(){
    int * pArr = new int[10] {3, 5, 1, 11, 99, 66, 22, 2, 8, 6};

    int min;
    int min_index;

    for (int i = 0; i < 9; i++) {
        for (int j = i; j < 10; j++) {
            if (j == i) {
                min = pArr[j];
                min_index = j;
                continue;
            } else {
                if (pArr[j] < min) {
                    min = pArr[j];
                    min_index = j;
                }
            }
        }
        pArr[min_index] = pArr[i];
        pArr[i] = min;
    }

    for (int i = 0; i < 10; i++) {
        cout << pArr[i] << " ";
    }

    int max;
    int max_index;

    for (int i = 0; i < 9; i++) {
        for (int j = i; j < 10; j++) {
            if (j == i) {
                max = pArr[j];
                max_index = j;
                continue;
            } else {
                if (pArr[j] > max) {
                    max = pArr[j];
                    max_index = j;
                }
            }
        }
        pArr[max_index] = pArr[i];
        pArr[i] = max;
    }

    for (int i = 0; i < 10; i++) {
        cout << pArr[i] << " ";
    }

    return 0;
}