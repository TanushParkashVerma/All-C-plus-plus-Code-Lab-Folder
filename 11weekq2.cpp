// 11weekq2.cpp : Defines the entry point for the console application.
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
int lin(char s[],char c)
{
	int index=0;
	while (s[index]!='\0')
	{
		if (s[index]==c)
		{
			return index;
		}
		++index;
	}
	return -1;
}
int main()
{	
	char s[]={'c', 'm', 'p', 't', ' ', '1', '3', '0', '\0'};
	cout<<lin(s,'z')<<endl;
	system("pause");
	return 0;
}
