#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>



void bcode(int N,char strb[33])
{
	unsigned int data = 1 << 31;
	for (int i = 1; i <= 32; i++)
	{
		if (N&data)
		{
			strb[i - 1] = '1';
		}
		else
		{
			strb[i - 1] = '0';
		}
		N <<= 1;
	}
}
void fcode(int N,char strf[33])
{
	unsigned int data = 1 << 31;
	if (N < 0)
	{
		N = N - 1;
	}
	for (int i = 1; i <= 32; i++)
	{
		if (N&data)
		{
			strf[i - 1] = '1';
		}
		else
		{
			strf[i - 1] = '0';
		}
		N <<= 1;
	}
	
}
void ycode(int N,char stry[33])
{
	unsigned int data = 1 << 31;
	if (N < 0)
	{
		N = ~N+ 1;
		N = N | data;
	}
	for (int i = 1; i <= 32; i++)
	{
		if (N&data)
		{
			stry[i - 1] = '1';
		}
		else
		{
			stry[i - 1] = '0';
		}
		N <<= 1;
	}
}

void main()
{
	char stry[33] = { 0 };
	char strf[33] = { 0 };
	char strb[33] = { 0 };
	int num;
	scanf("%d", &num);
	bcode(num,strb);
	printf("%s\n", strb);
	fcode(num,strf);
	printf("%s\n", strf);
	ycode(num,stry);
	printf("%s\n", stry);
	system("pause");
}