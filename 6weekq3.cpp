// 6weekq3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include "cstdlib"
using namespace std;
void populate(float arrayParam[],const int size)
{
	for (int i=0;i<10;i++)
	{
		arrayParam[i]=((rand()/float(RAND_MAX))*2)-1;
	}
}
void posneg(float arrayParam[],int size)
{
	int pcount=0;
	for (int i=0;i<10;i++)
	{	
		if (arrayParam[i]>=0)
		{
			++pcount;
		}
	}
	for (int i=0;i<10;i++)
	{
		cout<<arrayParam[i]<<" ";
	}
	cout<<endl;
	cout<<"There are "<<pcount<<" + numbers and "<<(10-pcount)<<" - numbers."<<endl;
}
int main()
{	
	const int n=10;
	float randlist[n];
	populate(randlist,n);
	posneg(randlist,n);
	system("pause");
	return 0;
}