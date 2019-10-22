#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<Windows.h>
void fortime(void *p)
{
	int i = 0;
	for (;;)
	{
		i++;
		char str[100] = { 0 };
		sprintf(str, "title 뒤%d취", i);
		system(str);
		Sleep(1000);
	}
}
void forcolor(void *p)
{
	time_t ts;
	unsigned int num = time(&ts);
	srand(num);

	for (;;)
	{
		int num1 = rand() % 16;
		Sleep(100);
		int num2 = rand() % 16;
		char str[20] = { 0 };
		sprintf(str, "color %x%x", num1, num2);
		system(str);
		Sleep(1000);

	}
}
void gocolor(void *p)
{
	time_t ts;
	unsigned int num = time(&ts);
	srand(num);
color: 
	{
		int num1 = rand() % 16;
		Sleep(100);
		int num2 = rand() % 16;
		char str[20] = { 0 };
		sprintf(str, "color %x%x", num1, num2);
		system(str);
		Sleep(1000);
	}
	goto color;
}
void gotime(void *p)
{
	int i = 0;
time:
	{
		i++;
		char str[100] = { 0 };
		sprintf(str, "title 뒤%d취", i);
		system(str);
		Sleep(1000);
	}
	goto time;
}
void DGcolor(void *p)//뒵백color
{
	time_t ts;
	unsigned int num = time(&ts);
	srand(num);
	int num1 = rand() % 16;
	Sleep(100);
	int num2 = rand() % 16;
	char str[20] = { 0 };
	sprintf(str, "color %x%x", num1, num2);
	system(str);
	Sleep(500);
	DGcolor(NULL);
}
int DGtime(int i,void *p)
{
	
	char str[100] = { 0 };
	i++;
	sprintf(str, "title 뒤%d취", i);
	system(str);
	Sleep(1000);
	DGtime(i,NULL);

}
void main()
{
	int i = 0;
	//_beginthread(runcolor, 0, NULL);
	//_beginthread(runtime, 0, NULL);
	//_beginthread(gotime, 0, NULL);
	//_beginthread(gocolor, 0, NULL);
	_beginthread(DGcolor, 0, NULL);
	_beginthread(DGtime(i,NULL), 0, NULL);
	system("pause");
}