//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

struct maxmin {
    int max, min;
};


int min_get(int a, int b) {
    return a < b ? a : b;
}

int max_get(int a, int b) {
    return a > b ? a : b;
}

maxmin get_mm(int a, int b) {
    maxmin mm = {};
    mm.max = max_get(a, b);
    mm.min = min_get(a, b);
    return mm;
}


int main() {
    int x = 1564, y = 123;
    maxmin mm = get_mm(x, y);
    cout << "max = " << mm.max << endl;
    cout << "min = " << mm.min << endl;
    return 0;
}