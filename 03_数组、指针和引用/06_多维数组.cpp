//
// Created by Monster on 24-6-1.
//
#include <iostream>
using namespace std;

int main(){
    int v1[2][2];
    v1[0][0] = 11;
    v1[0][1] = 22;

    v1[1][0] = 33;
    v1[1][1] = 44;

    int v2[2][2] = {{11, 22}, {33, 44}};

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "v1数组的第" << i << "个元素内的第" << j << "个元素的值为：" << v1[i][j] << endl;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "v2数组的第" << i << "个元素内的第" << j << "个元素的值为：" << v2[i][j] << endl;
        }
    }

    int v3[2][2][2];
    v3[0][0][0] = 11;
    v3[0][0][1] = 22;

    v3[0][1][0] = 33;
    v3[0][1][1] = 44;

    v3[1][0][0] = 55;
    v3[1][0][1] = 66;

    v3[1][1][0] = 77;
    v3[1][1][1] = 88;

    int v4[2][2][2] = {
            {
                    {11, 22},
                    {33, 44}
            },
            {
                    {55, 66},
                    {77, 88}
            }
    };

    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            for (int z = 0; z < 2; z++) {
                cout << "v3数组的第" << x << "个元素内的第" << y << "个元素内的第" << z << "个元素的值为：" << v3[x][y][z] << endl;
            }
        }
    }

    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            for (int z = 0; z < 2; z++) {
                cout << "v4数组的第" << x << "个元素内的第" << y << "个元素内的第" << z << "个元素的值为：" << v4[x][y][z] << endl;
            }
        }
    }

    return 0;
}
