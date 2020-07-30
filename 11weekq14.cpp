// 11weekq14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int *add(int *s,int c,int &size)
{
	int *a=new int [++size];
	for (int i=0;i<size-1;i++)
	{
		a[i]=s[i];
	}
	a[size-1]=c;
	return a;
}
bool lin(int *s,int c,int size)
{
	for (int i=0;i<size;i++)
	{
		if (s[i]==c)                          
		{                               
			return true;                                       
		}                                                                             
	}                                   
	return false;                                  
}                                   
                                      
int un(int *s,int length)                         
{                                      
	int count=0,size=0;         
	int *b=new int[size];             
	for (int i=0;i<length;i++)               
	{                                   
		if (lin(b,s[i],size)==false)
		{
			count++;
			b=add(b,s[i],size);
		}
	}
	return count;
}

int main()
{	const int size=4;
	int s[size]={1,1,2,4};
	cout<<un(s,size)<<endl;
	system("pause");
	return 0;
}
