#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<windows.h>
#pragma comment(lib, "libvlc.lib")
#pragma comment(lib, "libvlccore.lib")
#include<stdio.h>
#pragma comment(lib,"WinMM.Lib")
using namespace std;
//void music()
//{	
//	PlaySound("c:\\Desktop\\virus\\jinitaimei.wav",NULL,SND_FILENAME|SND_ASYNC);
//}
void virus()
{
	int x = GetSystemMetrics(SM_CXSCREEN);
	int y = GetSystemMetrics(SM_CYSCREEN);
	srand(time(0));
	while (true){
	SetCursorPos(rand()%x,rand()%y);
	}
}
void shut()
{
	MessageBox(NULL,"可恶，竟然敢不喜欢我？？？","可恶",MB_OK);
	MessageBox(NULL,"注意看你电脑啊！！","可恶",MB_OK);
	MessageBox(NULL,"还有三秒","可恶",MB_OK);
	MessageBox(NULL,"还有两秒","可恶",MB_OK);
	MessageBox(NULL,"还有一秒","可恶",MB_OK);
//	music();
	virus();
}

int main() {
	if(MessageBox(NULL,"你喜欢我家坤坤吗（蔡徐坤） 喜欢点 确定，不讨厌点取消","喜欢我吗？",MB_OKCANCEL)==1) {
		
	}else{
		shut();
	}



}
