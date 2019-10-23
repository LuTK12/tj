#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void mainfor()
{
	int num = 0;
	scanf("%d", &num);
	int newnum = 0;
	for (; num; num /= 10)
	{
		int i = num % 10;
		newnum = newnum * 10 + i;
	}
	printf("\n%d", newnum);
	system("pause");
}
void maindowhile()
{
	int num = 0;
	scanf("%d", &num);
	int newnum = 0;
	int i = 0;
	do
	{
		i = num % 10;
		newnum = newnum * 10 + i;
		num /= 10;
	} while (num);
	printf("\n%d", newnum);
	system("pause");
}
void maingoto()
{
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	int newnum = 0;
AA: if(num)	//在使用goto语句进行循环时，最好将goto AA放在循环体内部，以避免死循环。
	{
	i = num % 10;
	newnum = newnum * 10 + i;
	num /= 10;
	goto AA;
	}
	
	printf("\n%d", newnum);
	system("pause");
}
int num(int a,int newnum)
{

	if (a == 0)
	{
		return newnum;
	}
	else
	{
	
		newnum = newnum * 10 + a%10;
		num(a / 10, newnum);
	}
	
	
	
	
}
void main()
{
	int a = 123;
	int newnum = 0;
	
	printf("%d\n", num(a, newnum));
	
	system("pause");
}