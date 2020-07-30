// 6weekq2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include "cstdlib"
using namespace std;
void populate(int arrayParam[],const int size)
{
	for (int i=0;i<10;i++)
	{
		arrayParam[i]=rand();
	}
}
bool isprime(int number)
{
	for (int i=2;i<number;i++)
	{
		if (number%i==0)
		{
			return false;
		}
	}
	return true;
}
void primecount(int arrayParam[],int size)
{
	int pcount=0;
	for (int i=0;i<10;i++)
	{	
		if (isprime(arrayParam[i])==true)
		{
			++pcount;
		}
	}
	for (int i=0;i<10;i++)
	{
		cout<<arrayParam[i]<<" ";
	}
	cout<<endl;
	cout<<"There are "<<pcount<<" Prime numbers and "<<(10-pcount)<<" None-prime numbers."<<endl;
}
int main()
{	
	const int n=10;
	int randlist[n];
	populate(randlist,n);
	primecount(randlist,n);
	system("pause");
	return 0;
}


