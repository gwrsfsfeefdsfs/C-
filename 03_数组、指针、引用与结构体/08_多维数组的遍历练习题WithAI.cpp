//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <random>
using namespace std;

int getRandom (int min, int max) {
    static default_random_engine e;
    uniform_int_distribution<int> u(min, max);
    return u(e);
}

int main(){
    //姓名数组
    string names[] = {
            "Olivia", "Liam", "Emma", "Noah", "Ava",
            "Oliver", "Sophia", "Elijah", "Isabella", "Lucas",
            "Mia", "Mason", "Amelia", "Ethan", "Harper",
            "James", "Evelyn", "Benjamin", "Abigail", "Logan",
            "Ella", "Alexander", "Elizabeth", "Jackson", "Sofia",
            "Michael", "Avery", "Daniel", "Mila", "Henry",
            "Aria", "Sebastian", "Scarlett", "Jack", "Victoria",
            "Aiden", "Luna", "Owen", "Grace", "Samuel",
            "Chloe", "Matthew", "Camila", "Joseph", "Penelope",
            "Levi", "Riley", "Mateo", "Layla", "David"
    };
    //专业数组
    string majors[] = {"C++", "Java"};
    //班级数组
    string classes[] = {"一班", "二班"};
    //座位号数组
    string seats[] = {"1座", "2座", "3座", "4座", "5座"};
    //分配方法数组
    string assignment[2][2][5];

    //遍历随机分配学生
    for (int x =0; x < sizeof(assignment) / sizeof(assignment[0]); x++) {
        for (int y = 0; y < sizeof(assignment[x]) / sizeof(assignment[0][0]); y++) {
            for (int z = 0; z < sizeof(assignment[x][y]) / sizeof(assignment[0][0][0]); z++) {
                assignment[x][y][z] = names[getRandom(0, sizeof(names) / sizeof(names[0]) - 1)];
                cout << "专业:" << majors[x] << "\t班级:" << classes[y] << "\t座位号:" << seats[z] << "\t学生:" << assignment[x][y][z] << endl;
            }
        }
    }

    return 0;
}