// 9weekq5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

bool prime(int a)
{
	for (int i=2; i<a; i++)
	{
		if (a%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{	
	int size, pcount=0, ccount=0;
	cin>>size;
	int *a=new int[size];
	for (int i=0;i<size;i++)
	{
		a[i]=rand()%10;
	}
	for (int i=0;i<size;i++)
	{
		if (prime(a[i])==true)
		{
			pcount++;
		}
		else
		{
			ccount++;
		}
	}
	for (int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<pcount<<" "<<ccount<<endl;
	system("pause");
	return 0;
}

