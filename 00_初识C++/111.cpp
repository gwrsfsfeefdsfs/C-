#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int FRUIT_COUNT = 4;
    float prices[] = {5.0, 4.0, 3.0, 2.0};
    float weights[] = {0.0, 0.0, 0.0, 0.0};
    string fruits[] = {"ƻ��", "����", "����", "����"};
    
    cout << "��ӭ����ˮ���꣬����������ˮ��" << endl;
    for (int i = 0; i < FRUIT_COUNT; i++) {
        cout << fruits[i] << "(" << i + 1 << "):" << prices[i] << "Ԫ/��" << endl;
    }

    while(true) {
        cout << "\n������Ҫ�����ˮ�����(1-4)������������5: ";
        int choice;
        cin >> choice;
        
        // �����߼�
        if (choice == 5) {
            float total = 0.0;
            cout << "\n�����嵥��" << endl;
            for (int j = 0; j < FRUIT_COUNT; j++) {
                if (weights[j] > 0) {
                    float subtotal = prices[j] * weights[j];
                    cout << fruits[j] << ": " << weights[j] << "�С��:" << subtotal << "Ԫ" << endl;
                    total += subtotal;
                }
            }
            cout << "�ܼ�: " << total << "Ԫ" << endl;
            cout << "��л���Ĺ��٣�" << endl;
            break;
        }
        // �����߼�
        else if (choice >= 1 && choice <= FRUIT_COUNT) {
            cout << "����Ҫ����ٽ�" << fruits[choice - 1] << "? ";
            float weight;
            cin >> weight;
            
            if (weight <= 0) {
                cout << "�����������0�����������룡" << endl;
                continue;
            }
            
            weights[choice - 1] += weight;
            cout << "����� " << weight << "��" << fruits[choice - 1] << endl;
        }
        else {
            cout << "������Ч��������1-5֮������֣�" << endl;
        }
    }
    
    return 0;
}