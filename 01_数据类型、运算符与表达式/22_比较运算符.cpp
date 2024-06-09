//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <cstring>  //C语言字符串库
using namespace std;

int main(){
    //比较运算符：==、!=、<、>、<=、>=
    int num1 = 5;
    int num2 = 7;
    bool r1 = num1 == num2;
    bool r2 = num1 != num2;
    cout << "num1 == num2 :" << r1 << endl;
    cout << "num1 != num2 :" << r2 << endl;
    cout << "3 < 5 :" << (3 < 5) << endl;
    cout << "3 > 5 :" << (3 > 5) << endl;
    cout << "3 <= 5 :" << (3 <= 5) << endl;
    cout << "3 >= 5 :" << (3 >= 5) << endl;

    //字符串比较
    //C语言风格字符串
    char s1[] = "hello";
    char *s2 = "hello";
    "hello";
    //C语言风格字符串 直接应用比较运算符，比较的是内存地址，而不是内容
    cout << "s1 == s2 :" << (s1 == s2) << endl;
    //使用strcmp进行比较，0相等、-1 s1 < s2   1 s1 > s2
    int result = strcmp(s1,s2);
    cout << "strcmp(s1,s2) :" << result << endl;
    cout << "字符串字面量 c 是否大于 a ：" << strcmp("c","a") << endl;

    //C++风格字符串（string类型的都是C++风格字符串）
    //在比较中只要有一个C++风格字符串参与 就可以用比较运算符了
    string s3 = "a";    //C++语言风格
    char s4[] = "a";    //C语言风格
    cout << "s3 是否等于 s4 :" << (s3 == s4) << endl;

    return 0;
}