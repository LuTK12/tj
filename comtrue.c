#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
//1、打开浏览器；2、输入、点击；3、关闭

void open(char *str)
{
	ShellExecuteA(0, "open", str, 0, 0, 0);
	Sleep(3000);

}
void visualin()
{
	keybd_event('J', 0, 0, 0);
	keybd_event('J', 0, 2, 0);
	Sleep(400);
	keybd_event('I', 0, 0, 0);
	keybd_event('I', 0, 2, 0);
	Sleep(400);
	keybd_event('N', 0, 0, 0);
	keybd_event('N', 0, 2, 0);
	Sleep(400);
	keybd_event('G', 0, 0, 0);
	keybd_event('G', 0, 2, 0);
	Sleep(400);
	keybd_event('D', 0, 0, 0);
	keybd_event('D', 0, 2, 0);
	Sleep(400);
	keybd_event('O', 0, 0, 0);
	keybd_event('O', 0, 2, 0);
	Sleep(400);
	keybd_event('N', 0, 0, 0);
	keybd_event('N', 0, 2, 0);
	Sleep(400);
	keybd_event('G', 0, 0, 0);
	keybd_event('G', 0, 2, 0);
	Sleep(400);
	keybd_event('1', 0, 0, 0);
	keybd_event('1', 0, 2, 0);
	Sleep(400);
	keybd_event(VK_RETURN, 0, 0, 0);
	keybd_event(VK_RETURN, 0, 2, 0);
	Sleep(1000);
}
void click(int dx,int dy)
{
	mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE, dx * 65535 / 1920, dy * 65535 / 1280, 0, 0);
	Sleep(1000);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	Sleep(400);
}
void close()
{
	Sleep(4000);
	system("taskkill /f /im MicrosoftEdge.exe");
}
void SearchInJD()
{
	Sleep(4000);
	int dx=600, dy=330;
	click(dx,dy);
	keybd_event('P', 0, 0, 0);
	keybd_event('P', 0, 2, 0);
	Sleep(400);
	keybd_event('I', 0, 0, 0);
	keybd_event('I', 0, 2, 0);
	Sleep(400);
	keybd_event('N', 0, 0, 0);
	keybd_event('N', 0, 2, 0);
	Sleep(400);
	keybd_event('G', 0, 0, 0);
	keybd_event('G', 0, 2, 0);
	Sleep(400);
	keybd_event('G', 0, 0, 0);
	keybd_event('G', 0, 2, 0);
	Sleep(400);
	keybd_event('U', 0, 0, 0);
	keybd_event('U', 0, 2, 0);
	Sleep(400);
	keybd_event('O', 0, 0, 0);
	keybd_event('O', 0, 2, 0);
	Sleep(400);
	keybd_event('S', 0, 0, 0);
	keybd_event('S', 0, 2, 0);
	Sleep(400);
	keybd_event('H', 0, 0, 0);
	keybd_event('H', 0, 2, 0);
	Sleep(400);
	keybd_event('O', 0, 0, 0);
	keybd_event('O', 0, 2, 0);
	Sleep(400);
	keybd_event('U', 0, 0, 0);
	keybd_event('U', 0, 2, 0);
	Sleep(400);
	keybd_event('J', 0, 0, 0);
	keybd_event('J', 0, 2, 0);
	Sleep(400);
	keybd_event('I', 0, 0, 0);
	keybd_event('I', 0, 2, 0);
	Sleep(400);
	keybd_event('Z', 0, 0, 0);
	keybd_event('Z', 0, 2, 0);
	Sleep(400);
	keybd_event('I', 0, 0, 0);
	keybd_event('I', 0, 2, 0);
	Sleep(400);
	keybd_event('Y', 0, 0, 0);
	keybd_event('Y', 0, 2, 0);
	Sleep(400);
	keybd_event('I', 0, 0, 0);
	keybd_event('I', 0, 2, 0);
	Sleep(400);
	keybd_event('N', 0, 0, 0);
	keybd_event('N', 0, 2, 0);
	Sleep(400);
	keybd_event('G', 0, 0, 0);
	keybd_event('G', 0, 2, 0);
	Sleep(400);
	keybd_event('1', 0, 0, 0);
	keybd_event('1', 0, 2, 0);
	Sleep(400);
	keybd_event(VK_RETURN, 0, 0, 0);
	keybd_event(VK_RETURN, 0, 2, 0);
	Sleep(400);

}
void OpenAppleStor()
{
	int dx = 600, dy = 1000;
	click(dx, dy);

}
void main()
{
	int x = 200, y = 380;
	char str[100] = "http://www.baidu.com";
	open(str);
	
	visualin();
	click(x,y);
	SearchInJD();
	OpenAppleStor();
	Sleep(4000);
	close();
	

}