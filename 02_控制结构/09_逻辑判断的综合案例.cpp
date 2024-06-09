//
// Created by Monster on 24-6-1.
//
#include <iostream>
#include <random>
using namespace std;

/**
 * 生成一个介于最小值和最大值之间的随机整数。
 *
 * @param min 随机数的下限。
 * @param max 随机数的上限。
 * @return 生成的随机整数，其值在[min, max]范围内。
 */
int get_random_num(int min, int max){
    // 初始化随机数生成器设备
    random_device rd;
    // 使用随机数生成设备初始化随机数生成器
    mt19937 gen(rd());
    // 定义一个均匀分布，用于生成[min, max]范围内的整数
    uniform_int_distribution<> dis(min, max);
    // 生成随机数
    int random_number = dis(gen);
    // 返回生成的随机数
    return random_number;
}

// 主函数，程序的入口点
int main(){
    // 生成一个1到10之间的随机数
    // 生成一个随机的数字
    int num = get_random_num(1,10);
    // 随机选择一种颜色，可能是红色或黑色
    // 生成一个随机的颜色
    string color = get_random_num(0,1)? "红色" : "黑色";

    // 根据颜色选择一种花色，红色对应红桃或方块，黑色对应黑桃或梅花
    // 根据颜色生成花色
    string suit;
    if (color == "红色"){
        suit = get_random_num(0,1)? "红桃" : "方块";
    }else{
        suit = get_random_num(0,1)? "黑桃" : "梅花";
    }

    // 输出随机生成的数字、颜色和花色
    cout << "随机生成的数字是：" << num << endl;
    cout << "随机生成的颜色是：" << color << endl;
    cout << "随机生成的花色是：" << suit << endl;

    // 定义用户输入猜测的数字、颜色和花色
    int guess_num;
    string guess_color;
    string guess_suit;

    cout << "请输入猜测的数字：";
    cin >> guess_num;

    // 检查用户是否猜对了数字
    if (guess_num == num){
        cout << "恭喜你，猜对数字了！" << endl;
        // 如果猜对了数字，再检查颜色
        cout << "请输入猜测的颜色" << endl;
        cin >> guess_color;
        if (guess_color == color){
            cout << "恭喜你，猜对颜色了！" << endl;
            // 如果猜对了颜色，再检查花色
            cout << "请输入猜测的花色" << endl;
            cin >> guess_suit;
            if (guess_suit == suit){
                cout << "恭喜你，猜对了！" << endl;
                return 0;
            }else{
                cout << "很遗憾，猜错了。" << endl;
                return 0;
            }
        }else{
            cout << "很遗憾，猜错了。" << endl;
            return 0;
        }
    }else{
        cout << "很遗憾，猜错了。" << endl;
        return 0;
    }

    return 0;
}
