// 11weekq5.cpp : Defines the entry point for the console application.
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
int bin(char s[],int c)
{	
	int start=0,end=len(s);
	while (end>=start)
	{
		int mid=(start+end)/2;
		if (s[mid]==c)
		{
			return mid;
		}
		else if (s[mid]>c)
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	return -1;
}
int main()
{	
	char s[]={'a','b','c','c','d','\0'};
	cout<<bin(s,'d')<<endl;
	system("pause");
	return 0;
}

