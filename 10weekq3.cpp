// 10weekq3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "cstdlib"
using namespace std;

bool islower(char c[])
{	
	int count=0;
	while (c[count]!='\0')
	{
		if ((c[count]>122)||(c[count]<97))
		{
			return false;
		}
	}
	return true;
}

int main()
{	
	char* C1 = new char[20];
	for (int i=0;i<19;i++)
	{
		C1[i]=rand()%26+65;
	}
	C1[19]='\0';
	if (islower(C1)==true)
	{
		cout<<"Lower"<<endl;
	}
	else
	{
		cout<<"nah"<<endl;
	}
	system("Pause");
	return 0;
}

