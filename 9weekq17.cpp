// 9weekq17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "cstdlib"
#include "math.h"
using namespace std;

bool isdig(char *a, int size)
{	
	for (int i=0;i<size;i++)
	{
		if (a[i]>=48&&a[i]<=57)
		{
			return true;
		}
	}
	return false;
}
void populate(char *a, int size)
{
	for (int i=0;i<size;i++)
	{
		a[i]=(rand()%93)+33;
	}
}
void print(char *a,int size)
{	
	for (int i=0;i<size;i++)
	{
	cout<<a[i]<<" ";
	}
	cout<<endl;
	return;
}
int main()
{	
	int size;
	cin>>size;
	char *a=new char[size];
	populate(a,size);
	print(a,size);
	cout<<isdig(a,size)<<endl;
	delete []a;
	system("pause");
	return 0;
}

