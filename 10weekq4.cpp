// 10weekq4.cpp : Defines the entry point for the console application.
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
void copy(char c1[],char c2[])
{
	if (compare(c1,c2)==-1)
	{
		int count=0;
		while (c1[count]!='\0')
		{
			c2[count]=c1[count];
			count++;
		}
		c2[count]='\0';
	}
	else if (compare(c1,c2)==0)
	{
		int count=0;
		while (c1[count]!='\0')
		{
			c2[count]=c1[count];
			count++;
		}
	}
	return;
}

int main()
{	
	char C1[]={'6','%','a',']','4','\0'};
	char* C2 = new char[20];
	for (int i=0;i<19;i++)
	{
		C2[i]=rand()%26+65;
	}
	C2[19]='\0';
	copy(C1,C2);
	int count=0;
	while (C1[count]!='\0')
	{
		cout<<C1[count];
		++count;
	}
	cout<<endl;
	count=0;
	while (C2[count]!='\0')
	{
		cout<<C2[count];
		++count;
	}
	cout<<endl;
	system("Pause");
	return 0;
}

