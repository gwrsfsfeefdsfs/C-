//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    "hello";            // 底层是char数组
    char v[] = "hello"; // 底层是char数组
    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    cout << v[4] << endl;
    cout << v[5] << endl;
    cout << sizeof(v) << endl;
    cout << endl;

    char s[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    cout << sizeof(s) << endl;
    cout << sizeof(s[0]) << endl;
    cout << s[5] << endl;

    for (char i : v) {
        cout << i;
    }

    return 0;
}