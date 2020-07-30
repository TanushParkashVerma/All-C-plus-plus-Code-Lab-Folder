// 6weekq10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include "cstdlib"
#include "math.h"
using namespace std;
void populate(int arrayParam[],const int size)
{
	for (int i=0;i<10;i++)
	{
		arrayParam[i]=((rand()%20)-10);
	}
}
void posneg(int arrayParam[],int size)
{
	int min=arrayParam[0],max=arrayParam[0];
	for (int i=0;i<10;i++)
	{	
		if (arrayParam[i]<min)
		{
			min=arrayParam[i];
		}
		if (arrayParam[i]>max)
		{
			max=arrayParam[i];
		}
	}
	for (int i=0;i<10;i++)
	{
		cout<<arrayParam[i]<<" ";
	}
	cout<<endl;
	cout<<"The maximum value is "<<max<<" and the minimum value is "<<min<<endl;
}
int main()
{	
	const int n=10;
	int randlist[n];
	populate(randlist,n);
	posneg(randlist,n);
	system("pause");
	return 0;
}
