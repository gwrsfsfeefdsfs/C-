//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    int v1[2][3] = {
            {1,2,3},
            {4,5,6}
    };

    for (int x = 0; x < sizeof(v1) / sizeof(v1[0]); x++) {
        for (int y = 0; y < sizeof(v1[x]) / sizeof(v1[x][0]); y++) {
            cout << "数组v1第[" << x << "个元素内的第" << y << "个元素] = " << v1[x][y] << endl;
        }
    }

    int v2[2][2][3] = {
            {
                    {1,2,3},
                    {4,5,6}
            },
            {
                    {7,8,9},
                    {10,11,12}
            }
    };

    for (int x = 0; x < sizeof(v2) / sizeof(v2[0]); x++) {
        for (int y = 0; y < sizeof(v2[x]) / sizeof(v2[x][0]); y++) {
            for (int z = 0; z < sizeof(v2[x][y]) / sizeof(v2[x][y][0]); z++) {
                cout << "数组v2第[" << x << "个元素内的第" << y << "个元素内的第" <<z << "个元素] = " << v2[x][y][z] << endl;
            }
        }
    }

    cout << "v2所占的内存大小为" << sizeof(v2) << endl;
    cout << "v2[0]所占的内存大小为" << sizeof(v2[0]) << endl;
    cout << "v2[0][0]所占的内存大小为" << sizeof(v2[0][0]) << endl;
    cout << "v2[0][0][0]所占的内存大小为" << sizeof(v2[0][0][0]) << endl;

    return 0;
}