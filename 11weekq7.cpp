// 11weekq7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int countlow(char s[])
{
	int index=0,count=0;
	while (s[index]!='\0')
	{
		if ((s[index]>=97)&&(s[index]<=122))
		{
			++count;
		}
		++index;
	}
	return count;
}
int len(char *s)
{
	int count=0;
	while (s[count]!='\0')
	{
		count++;
	}
	return count+1;
}

char *getlow(char s[])
{
	char *r=new char[1];
	r[0]='\0';
	int count=0;
	while (s[count]!='\0')
	{
		if ((s[count]>=97)&&(s[count]<=122))
		{	
			char *b=new char[len(r)+1];
			int count1=0;
			while (r[count1]!='\0')
			{
				b[count1]=r[count1];
				++count1;
			}
			b[len(r)-1]=s[count];
			b[len(r)]='\0';
			r=b;
		}
		++count;
	}
	return r;
}

int main()
{	
	char s[]={'A','a','b','A','c','c','d','\0'};
	char *b=new char [countlow(s)];
	b=getlow(s);
	int count=0;
	while (b[count]!='\0')
	{
		cout<<b[count];
		++count;
	}
	cout<<endl;
	system("pause");
	return 0;
}

