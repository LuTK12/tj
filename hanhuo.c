#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//��Ҫ�ĺ����� ��λ���ݵĺ����������Ƶĵݹ麯��������ʾ����
int a[10][3] = { 0 };
void show(int a[10][3])
{
	printf("\n%5c%5c%5c\n",'A', 'B', 'C');
	printf("----------------------\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}

void move(char X, char Y)
{
	int m = X - 65;
	int n = Y - 65;
	int imove = -1;
	for (int i = 0; i < 10; i++)
	{
		if (a[i][m] != 0)	//�ҵ���һ�в�Ϊ���������ֵ������ֵ��imove����
		{
			imove = i;	
			break;
		}
	}
	//a[imove][m]
	//a[jmove][n]

	int jmove = 10;
	for (int j = 0; j < 10; j++)
	{
		if (a[j][n] != 0)
		{
			jmove = j;
			break;
		}
	}
	jmove -= 1;
	int temp;
	temp = a[jmove][n];
	a[jmove][n] = a[imove][m];
	a[imove][m] = temp;
}

int hannuo(int N,char A,char B,char C)	//��Ϊ�ݹ�ĵ���Ӧ�ã���ʹ�ù��ɷ���С������ɳ����ݵĹ��ɣ��ݹ���ǴӴ�С��һ�����̡�
{
	if(N<1)
	{
		return 0;
	}
	else if (N == 1)
	{
		show(a);
		printf("%c->%c", A, C);
		move(A, C);
		show(a);
	}
	else
	{
		hannuo(N - 1, A, C, B);
		printf("%c->%c", A, C);
		move(A, C);
		show(a);
		hannuo(N - 1, B, A, C);

	}
}


void main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		a[9-i][0] = n-i;
	}

	hannuo(n,'A','B','C');
	/*show(a);
	move('A', 'C');
	show(a);*/
	system("pause");
}