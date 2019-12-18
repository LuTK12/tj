#include"stack.h"
void main()
{
	 MyStack sta1;
	MyStack sta2;
	InitStack(&sta1);
	InitStack(&sta2);
	char ch[M] = { "[(())]" };
	for (int i = 0; i < strlen(ch); i++)
	{
		Push1(&sta1, ch[i]);
	}
	/*while (1)
	{
		scanf("%c", &ch);
		if (ch == 'q')
		{
			break;
		}
		else
		{
			Push1(&sta1, ch);
			if (sta1.f == sta1.base)
			{
				break;
			}
		}
	}*/
	Pop(&sta1, &sta2, 1);
	Pop(&sta1, &sta2, 0);



	system("pause");

}