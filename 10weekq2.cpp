// 10weekq2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "cstdlib"
using namespace std;

int stringlength(char c[])
{
	int count=0;
	while (c[count]!='\0')
	{
		count++;
	}
	return count;
}

int compare(char c1[],char c2[])
{
	int a=stringlength(c1),b=stringlength(c2),comp=0;
	if (a>b)
	{
		comp=1;
	}
	else if (a==b)
	{
		comp=0;
	}
	else
	{
		comp=-1;
	}
	return comp;
}

int main()
{	
	char C1[]={'6','%','a',']','\0'};
	char* C2 = new char[20];
	for (int i=0;i<19;i++)
	{
		C2[i]=rand()%26+65;
	}
	C2[19]='\0';
	cout<<compare(C1,C2)<<endl;
	system("Pause");
	return 0;
}

