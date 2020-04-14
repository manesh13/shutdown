#include <iostream>
#include<windows.h>
void hide();
int main()
{
    hide();
    system("C:\\windows\\system32\\shutdown /s /t 20 ");
    return 0;
}

void hide() //function to hide the console screen
{
	HWND hide;
	AllocConsole();
	hide= FindWindowA("ConsoleWindowClass",NULL);
	ShowWindow(hide,0);
}
