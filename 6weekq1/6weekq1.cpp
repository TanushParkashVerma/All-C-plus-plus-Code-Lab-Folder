// 6weekq1.cpp : Defines the entry point for the console application.
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
void oddeven(int arrayParam[],const int size,int evencount,int oddcount)
{
	for (int i=0;i<10;i++)
	{
		if (arrayParam[i]%2==0)
		{
			evencount++;
		}
		else
		{
			oddcount++;
		}
	}
	for (int i=0;i<10;i++)
	{
		cout<<arrayParam[i]<<" ";
	}
	cout<<endl;
	cout<<"There are "<<evencount<<" even numbers and "<<oddcount<<" odd numbers."<<endl;
}
int main()
{	
	const int n=10;
	int randlist[n],even=0,odd=0;
	populate(randlist,n);
	oddeven(randlist,n,even,odd);
	system("pause");
	return 0;
}

