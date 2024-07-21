//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <string>
using namespace std;

struct account {
    string password;
    double balance;
};
// 查询
double select(account *p, int i) {
    if (i < 0 || i > 4) {
        cout << "输入错误" << endl;
        return 0;
    }
    return p[i].balance;
}

// 存款
void deposit(account *p, int i) {
    if (i < 0 || i > 4) {
        cout << "输入错误" << endl;
    }
    int num;
    cout << "请输入存款金额：";
    cin >> num;
    cout << endl;
    p[i].balance += num;
    cout << "存款成功,目前余额为：" << p[i].balance << endl;
}

// 取款
void withdraw(account *p, int i) {
    if (i < 0 || i > 4) {
        cout << "输入错误" << endl;
    }
    int num;
    cout << "请输入取款金额：";
    cin >> num;
    cout << endl;
    p[i].balance -= num;
    cout << "取款成功,目前余额为：" << p[i].balance << endl;
}

int menu(account *p) {
    cout << "请输入账号：";
    int i;
    cin >> i;
    string password;
    cout << "1.查询余额\n"
         << endl
         << "2.存款\n"
         << endl
         << "3.取款\n"
         << endl
         << "4.退出\n"
         << endl
         << "请选择(输入序列号)：";
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "请输入密码：";
            cin >> password;
            if (password == p[i].password) {
                cout << "余额为：" << select(p, i) << endl;
            } else {
                cout << "密码错误" << endl;
            }
            break;
        case 2:
            cout << "请输入密码：";
            cin >> password;
            if (password == p[i].password) {
                deposit(p, i);
            } else {
                cout << "密码错误" << endl;
            }
            break;
        case 3:
            cout << "请输入密码：";
            cin >> password;
            if (password == p[i].password) {
                withdraw(p, i);
            } else {
                cout << "密码错误" << endl;
            }
            break;
        case 4:
            cout << "退出成功" << endl;
            return 0;
    }
}
int main() {
    account accounts[5] = {
            {"M", 1000000000.0},
            {"A", 52112.0},
            {"B", 10006.1},
            {"R", 96523.0},
            {"C", 1500.9}};
    account *p = accounts;
    menu(p);


    return 0;
}