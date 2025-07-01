#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int FRUIT_COUNT = 4;
    float prices[] = {5.0, 4.0, 3.0, 2.0};
    float weights[] = {0.0, 0.0, 0.0, 0.0};
    string fruits[] = {"苹果", "梨子", "橘子", "西瓜"};
    
    cout << "欢迎来到水果店，以下是销售水果" << endl;
    for (int i = 0; i < FRUIT_COUNT; i++) {
        cout << fruits[i] << "(" << i + 1 << "):" << prices[i] << "元/斤" << endl;
    }

    while(true) {
        cout << "\n请输入要购买的水果编号(1-4)，结算请输入5: ";
        int choice;
        cin >> choice;
        
        // 结算逻辑
        if (choice == 5) {
            float total = 0.0;
            cout << "\n购买清单：" << endl;
            for (int j = 0; j < FRUIT_COUNT; j++) {
                if (weights[j] > 0) {
                    float subtotal = prices[j] * weights[j];
                    cout << fruits[j] << ": " << weights[j] << "斤，小计:" << subtotal << "元" << endl;
                    total += subtotal;
                }
            }
            cout << "总价: " << total << "元" << endl;
            cout << "感谢您的光临！" << endl;
            break;
        }
        // 购买逻辑
        else if (choice >= 1 && choice <= FRUIT_COUNT) {
            cout << "请问要买多少斤" << fruits[choice - 1] << "? ";
            float weight;
            cin >> weight;
            
            if (weight <= 0) {
                cout << "重量必须大于0，请重新输入！" << endl;
                continue;
            }
            
            weights[choice - 1] += weight;
            cout << "已添加 " << weight << "斤" << fruits[choice - 1] << endl;
        }
        else {
            cout << "输入无效，请输入1-5之间的数字！" << endl;
        }
    }
    
    return 0;
}