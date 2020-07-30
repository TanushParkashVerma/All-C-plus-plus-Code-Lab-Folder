// 11weekq17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

char *add(char *s,char c,int &size)
{
	char *a=new char [++size];
	for (int i=0;i<size-1;i++)
	{
		a[i]=s[i];
	}
	a[size-1]=c;
	a[size]='\0';
	return a;
}

bool lin(char *s,char c)
{
	int count=0;
	while (s[count]!='\0')
	{
		if (s[count]==c)
		{
			return true;
		}
		count++;
	}
	return false;
}

char *un(char *s)
{
	int count=0,index=0,size=0;
	char *b=new char[size];
	while(s[index]!='\0')
	{
		if (lin(b,s[index])==false)
		{
			count++;
			b=add(b,s[index],size);
		}
		index++;
	}
	return b;
}

int main()
{	
	char s[]={'a','a','b','b','b','e','t','\0'};char *e=new char[0];
	e=un(s);
	int count=0;
	while (e[count]!='\0')
	{
		cout<<e[count];
		++count;
	}
	cout<<endl;
	system("pause");
	return 0;
}

