/*
颜色函数SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),前景色 | 背景色 | 前景加强 | 背景加强);
    前景色：数字0-15 或 FOREGROUND_XXX 表示	（其中XXX可用BLUE、RED、GREEN表示）
    前景加强：数字8 或 FOREGROUND_INTENSITY 表示
    背景色：数字16 32 64 或 BACKGROUND_XXX 三种颜色表示
    背景加强： 数字128 或 BACKGROUND_INTENSITY 表示
主要应用：改变指定区域字体与背景的颜色
前景颜色对应值：
　　0=黑色                8=灰色　　
  　1=蓝色                9=淡蓝色        十六进制        　　
　　2=绿色                10=淡绿色       0xa        　　
　　3=湖蓝色              11=淡浅绿色     0xb　
　　4=红色                12=淡红色       0xc　　
　　5=紫色                13=淡紫色       0xd        　　
　　6=黄色                14=淡黄色       0xe        　　
　　7=白色                15=亮白色       0xf
*/


#include <stdio.h>
#include <windows.h>

void show_color()
{
    for (int i = 0;i < 256;i++)
    {
        printf("艺术效果及编号如下：");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);//一个参数起四个参数叠加效果，范围也相应扩大为1-256
        printf("%-3d", i);
        if (i % 16 == 0)	printf("\n");
    }

}
