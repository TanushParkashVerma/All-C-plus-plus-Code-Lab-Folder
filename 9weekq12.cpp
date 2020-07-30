// 9weekq12.cpp : Defines the entry point for the console application.
//

// 9weekq10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "math.h"
#include "cstdlib"
using namespace std;
int product(int *a,int size)
{
	int product=1;
	for (int i=0;i<size;i++)
	{
		product*=a[i];
	}
	return abs(product);
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

