#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
// ����ȫ�ֱ���
int min = 0;  // ��Сֵ
int max = 0;  // ���ֵ
int delay = 0; // ��ʱʱ�䣨��λ���룩
int index = 0; // ��ʷ���������
int t;
int c;
int rand_nums[100]; // ��ʷ���������  ����10 �ڲ��ظ�
 
// ��ʼ������
void init() 
{
    // �������ַ�Χ
    printf("���������ַ�Χ��");
    scanf("%d-%d", &min, &max);

    // ������ʱʱ�䣨��λ���룩��
    printf("��������ʱʱ�䣨��λ���룩��");
    scanf("%d", &delay);
}

// �����ȡ����
int rand_num() {
    // ���������
    int num = rand() % (max - min + 1) + min;

    // �ݹ� �ж��Ƿ��ظ�
    for (int i = 0; i < index; i++) {
        if (num == rand_nums[i]) {
            return rand_num();
        }
    }

    // ���������������
    rand_nums[index++] = num;

    return num;
}

// ������
int main() 
{
    // ��ʼ��
    init();
    //��������
    printf("���������ڣ�");
    scanf("%d", &t);
    printf("����������Ч����Ӧ������(1-256):");
    scanf("%d", &c);
    // ѭ����ȡ
    while (1) 
    {
        // �ȴ��û�����
        getchar();

        // ��ȡ�����
        int num = rand_num();

        // ��������
        //�ı���ɫ
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);//Ч����showcolor.cpp
        printf("��ȡ�����֣�%d\n", num);

        // ��ʱ
        Sleep(delay * 1000);

        // �ж��Ƿ������ʷ�����
        if (index == t)
        {
            index = 0;
        }
    }

    return 0;
}
