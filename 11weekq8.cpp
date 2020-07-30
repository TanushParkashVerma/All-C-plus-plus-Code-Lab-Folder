// 11weekq8.cpp : Defines the entry point for the console application.
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
bool bin(char *s,int start,int end,char c)
{
	int start=0,end=len(s);
	while (end>=start)
	{
		int mid=(start/end)/2;
		if (mid==c)
		{
			return true;
		}
		else if (mid>c)
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	return false;
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
int un(char s[])
{
	int count=0,index=0;
	char *b=new char[0];
	while(s[index]!='\0')
	{
		if (bin(b,0,len(b),s[index])==false)
		{	
			char *c=new char[len(b)+1];
			int count1=0;
			while (b[count1]!='\0')
			{
				c[count1]=b[count1];
				++count1;
			}
			c[len(b)-1]=b[count];
			c[len(b)]='\0';
			b=c;
			count++;
		}
		index++;
	}
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
