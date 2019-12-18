
#include"stack.h"
void InitStack(MyStack *p)
{
	p->base = (MyStack *)malloc(M * sizeof(char));
	if (p->base == NULL)
	{
		printf("分配失败");
	}
	p->top = p->base;
	p->g = p->base;
	p->f = p->base;
	p->size = M;
}
void Push1(MyStack *p, char ch)
{
	
	if (p->top == p->base)
	{
		if (ch == ')' || ch == ']' || ch == '}')
		{
			printf("输入的符号不符合规定！！！");
		}
		else
		{
			*(p->top) = ch;
			p->top++;
			p->f++;
			p->g=p->top-1;
			
		}
	}
	else
	{
		if (ch == '(' || ch == '[' || ch == '{')
		{
			*(p->top) = ch;
			p->top++;
			p->f++;
			
			p->g = p->top-1;
		}
		else if (ch == ')' || ch == ']' || ch == '}')
		{
			
			if ((ch-*(p->g)) ==  1 || (ch - *(p->g)) ==  2)
			{
				*(p->top) = ch;
				p->top++;
				if ((p->g) > (p->f))
				{
					p->g = p->f - 1;
				}
				else
				{

					p->f--;
					if (p->f != p->base)
					{
						p->g = p->f - 1;
					}
					
				}
				
				
				
				
				//p->g = p->f-1;

				
			}
			else
			{
				printf("与临近不匹配！！！");
			}
		}
		else
		{
			printf("请输入括号、中括号、大括号！！！");
		}
	}
}
void Push2(MyStack *d, char ch)
{
	*(d->top) = ch;
	d->top++;
}
void Pop(MyStack *p,MyStack *p2,int n)
{
	if (n)//n=1;将符号压栈到另一个栈
	{
		MyStack *sta3;
		sta3 = p2;
		while (p->top != p->base)
		{
			char dh;
			dh = *(p->top - 1);
			p->top--;
			Push2(sta3, dh);
		}
	}
	else
	{
		while (p2->top != p2->base)
		{
			char dh;
			dh = *(p2->top - 1);
			p2->top--;
			printf("%2c", dh);
		}
		printf("\n");
	}
}
