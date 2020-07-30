// 11weekq4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int len(char s[])
{	int count=0;
	while (s[count]!='\0')
	{
		++count;
	}
	return count;
}
int revlin(char s[],int c)
{	
	char *r=new char [len(s)];
	for (int i=0;i<len(s);i++)
	{
		r[i]=s[len(s)-i-1];
		cout<<r[i];
	}
	cout<<endl;
	for (int i=0;i<len(s);i++)
	{
		if (r[i]==c)
		{
			return len(s)-i-1;
		}
	}
	return -1;
}
int main()
{	
	char s[]={'a','b','c','c','a','\0'};
	cout<<revlin(s,'c')<<endl;
	system("pause");
	return 0;
}

