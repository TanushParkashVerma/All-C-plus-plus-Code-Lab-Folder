// 11weekq3.cpp : Defines the entry point for the console application.
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
int revlin(int s[],const int size,int c)
{	
	int r[7];
	for (int i=0;i<size;i++)
	{
		r[i]=s[size-i-1];
		cout<<r[i];
	}
	cout<<endl;
	for (int i=0;i<size;i++)
	{
		if (r[i]==c)
		{
			return size-i-1;
		}
	}
	return -1;
}
int main()
{	
	const int size=7;
	int s[size]={1,2,3,4,5,6,2};
	cout<<revlin(s,size,2)<<endl;
	system("pause");
	return 0;
}
