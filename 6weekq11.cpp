// 6weekq11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include "cstdlib"
#include "math.h"
#include <string>
using namespace std;
void populate(int arrayParam[],const int size)
{
	for (int i=0;i<10;i++)
	{
		arrayParam[i]=((rand()%20)-10);
	}
}
string posneg(int arrayParam[],int size)
{
	int min=arrayParam[0],max=arrayParam[0];
	
	for (int i=0;i<10;i++)
	{
		cout<<arrayParam[i]<<" ";
	}
	cout<<endl;

	for (int i=0;i<10;i++)
	{	
		if (arrayParam[i]<0)
		{
			return ("There is at least one negative number");
		}
	}
	return ("There are no negative numbers");
}
int main()
{	
	const int n=10;
	int randlist[n];
	populate(randlist,n);
	cout<<posneg(randlist,n)<<endl;
	system("pause");
	return 0;
}
