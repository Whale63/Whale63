#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()//��һ���������ֽ�������
{
	//����һ��������
	int n = 0;
	scanf("%d", &n);
	printf("%d=", n);
	//�ҵ���С����
	// 1.�ж��Ƿ�Ϊ����
	// 2.�����������ܱ���С������������ӡ
	// 3.��С��������+1���ظ�ִ��1.
	for (int i = n;i <= n;n--)//3.
	{
		while (n != i)
		{
			if (i % n == 0)//1.
			{
				printf("%d*", n);//2.
				n = i / n;
			}
			else
			{
				break;
			}
		}


	}
	//������ 
	printf("%d\n", n);
	return 0;
}