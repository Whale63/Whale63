#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()//将一个正整数分解质因数
{
	//创建一个正整数
	int n = 0;
	scanf("%d", &n);
	printf("%d=", n);
	//找到最小质数
	// 1.判断是否为质数
	// 2.不是质数，能被最小质数整除，打印
	// 3.最小整除质数+1，重复执行1.
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
	//输出结果 
	printf("%d\n", n);
	return 0;
}