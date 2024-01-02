#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
// 定义全局变量
int min = 0;  // 最小值
int max = 0;  // 最大值
int delay = 0; // 延时时间（单位：秒）
int index = 0; // 历史随机数索引
int t;
int c;
int rand_nums[100]; // 历史随机数数组  周期10 内不重复
 
// 初始化函数
void init() 
{
    // 输入数字范围
    printf("请输入数字范围：");
    scanf("%d-%d", &min, &max);

    // 输入延时时间（单位：秒）：
    printf("请输入延时时间（单位：秒）：");
    scanf("%d", &delay);
}

// 随机抽取函数
int rand_num() {
    // 生成随机数
    int num = rand() % (max - min + 1) + min;

    // 递归 判断是否重复
    for (int i = 0; i < index; i++) {
        if (num == rand_nums[i]) {
            return rand_num();
        }
    }

    // 将随机数存入数组
    rand_nums[index++] = num;

    return num;
}

// 主函数
int main() 
{
    // 初始化
    init();
    //设置周期
    printf("请输入周期：");
    scanf("%d", &t);
    printf("请输入艺术效果对应的数字(1-256):");
    scanf("%d", &c);
    // 循环抽取
    while (1) 
    {
        // 等待用户输入
        getchar();

        // 抽取随机数
        int num = rand_num();

        // 输出随机数
        //改变颜色
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);//效果见showcolor.cpp
        printf("抽取到数字：%d\n", num);

        // 延时
        Sleep(delay * 1000);

        // 判断是否清空历史随机数
        if (index == t)
        {
            index = 0;
        }
    }

    return 0;
}
