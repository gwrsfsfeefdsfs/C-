//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
  /*  a:
    cout << "a" << endl;
    b:
    cout << "b" << endl;
    c:
    cout << "c" << endl;
    d:
    cout << "d" << endl;
  */
    int i = 1;
    loop:
    cout << i << endl;
    i++;
    if (i <= 10){
        goto loop;
    }

    return 0;
}