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
	MessageBox(NULL,"�ɶ񣬾�Ȼ�Ҳ�ϲ���ң�����","�ɶ�",MB_OK);
	MessageBox(NULL,"ע�⿴����԰�����","�ɶ�",MB_OK);
	MessageBox(NULL,"��������","�ɶ�",MB_OK);
	MessageBox(NULL,"��������","�ɶ�",MB_OK);
	MessageBox(NULL,"����һ��","�ɶ�",MB_OK);
//	music();
	virus();
}

int main() {
	if(MessageBox(NULL,"��ϲ���Ҽ������𣨲������� ϲ���� ȷ�����������ȡ��","ϲ������",MB_OKCANCEL)==1) {
		
	}else{
		shut();
	}



}
