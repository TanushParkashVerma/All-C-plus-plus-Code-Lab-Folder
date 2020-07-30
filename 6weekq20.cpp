// 6weekq20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <string>
#include "cstdlib"
using namespace std;

void randomNames(string arrayParam[],int size)
{	
	for (int i=0;i<100;i++)
	{	
		string a;
		a+=char((rand()%25)+65);
		for (int i=0;i<10;i++)
		{
			a+=char((rand()%25)+97);
		}
		arrayParam[i]=a;
	}
	for (int i=0;i<100;i++)
	{
		cout<<arrayParam[i]<<" ";
	}
	cout<<endl;
	return;
}
int	main()
{	
	string stringli[100];
	randomNames (stringli ,100);
	system("pause");
	return 0;
}

