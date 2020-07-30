// 9weekq14.cpp : Defines the entry point for the console application.
//

// 9weekq10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "math.h"
#include "cstdlib"
using namespace std;
int min(int *a, int size)
{
	int min=a[0];
	for (int i=1;i<size;i++)
	{
		if (a[i]<min)
		{
			min=a[i];
		}
	}
	return min;
}
int max(int *a, int size)
{
	int max=a[0];
	for (int i=1;i<size;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
void populate(int *a, int size)
{
	for (int i=0;i<size;i++)
	{
		a[i]=(rand()%21)-10;
	}
}
void print(int *a,int size)
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
	int *a=new int[size];
	populate(a,size);
	print(a,size);
	cout<<"Here is the sum "<<abs(sum(a,size))<<endl;
	delete []a;
	system("pause");
	return 0;
}

