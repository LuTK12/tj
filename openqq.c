#include<stdlib.h>
#include<windows.h>
#include<stdio.h>

void open()
{
	ShellExecuteA(0, "open", "\"D:\\Tencent\\QQ\\Tencent\\QQ\\Bin\\QQScLauncher.exe\"", 0, 0, 1);
	
}
void move()
{
	HWND win = FindWindow("TXGuiFoundation", "QQ");
	if (win == NULL)
		printf("Its NONE QQ");
	else
	{
		int i = 0;//´ú±í×Ý×ø±ê
		for (; i < 680; i += 10)
		{
			SetWindowPos(win, NULL, i * 192 / 128, i, 400, 400, 0);
			if (i / 10 % 2 == 1)
				ShowWindow(win, SW_HIDE);
			else
				ShowWindow(win, SW_SHOW);
			Sleep(150);
		}

	}

}

void main()
{
	system("taskkill /f /im QQ.exe");
	open();
	Sleep(2000);
	move();
	
	

}