#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define M 10
typedef struct
{
	char *base;
	char *top;
	char *g;
	char *f;
	int size;
}MyStack;



void InitStack(MyStack *p);
void Push1(MyStack *p, char ch);
void Push2(MyStack *p, char ch);
void Pop(MyStack *p, MyStack *p2,int n);
