/*
��ɫ����SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),ǰ��ɫ | ����ɫ | ǰ����ǿ | ������ǿ);
    ǰ��ɫ������0-15 �� FOREGROUND_XXX ��ʾ	������XXX����BLUE��RED��GREEN��ʾ��
    ǰ����ǿ������8 �� FOREGROUND_INTENSITY ��ʾ
    ����ɫ������16 32 64 �� BACKGROUND_XXX ������ɫ��ʾ
    ������ǿ�� ����128 �� BACKGROUND_INTENSITY ��ʾ
��ҪӦ�ã��ı�ָ�����������뱳������ɫ
ǰ����ɫ��Ӧֵ��
����0=��ɫ                8=��ɫ����
  ��1=��ɫ                9=����ɫ        ʮ������        ����
����2=��ɫ                10=����ɫ       0xa        ����
����3=����ɫ              11=��ǳ��ɫ     0xb��
����4=��ɫ                12=����ɫ       0xc����
����5=��ɫ                13=����ɫ       0xd        ����
����6=��ɫ                14=����ɫ       0xe        ����
����7=��ɫ                15=����ɫ       0xf
*/


#include <stdio.h>
#include <windows.h>

void show_color()
{
    for (int i = 0;i < 256;i++)
    {
        printf("����Ч����������£�");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);//һ���������ĸ���������Ч������ΧҲ��Ӧ����Ϊ1-256
        printf("%-3d", i);
        if (i % 16 == 0)	printf("\n");
    }

}
