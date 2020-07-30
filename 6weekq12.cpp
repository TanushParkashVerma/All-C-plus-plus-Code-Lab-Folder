// 6weekq12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include "cstdlib"
#include <string>
using namespace std;
void populate(int arrayParam[],const int size)
{
	for (int i=0;i<10;i++)
	{
		arrayParam[i]=(rand()%10);
	}
}

void primecount(int arrayParam[],int size)
{	
	for (int a=0;a<10;a++)
	{
		cout<<arrayParam[a]<<" ";
	}
	cout<<endl;
	int pcount=0;
	for (int i=0;i<10;i++)
	{	
		for (int x=0;x<(10-i);x++)
		{
			if (arrayParam[x]>arrayParam[x+1])
			{
				int temp=arrayParam[x+1];
				arrayParam[x+1]=arrayParam[x];
				arrayParam[x]=temp;
			}
			else if (x==i)
			{
				continue;
			}
		}
	}
	for (int a=0;a<10;a++)
	{
		cout<<arrayParam[a]<<" ";
	}
	cout<<endl;
	return;
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