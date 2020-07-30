// 9week18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "cstdlib"
#include "math.h"
#include <string>
using namespace std;

void populate(string *a, int size)
{	
	for (int i=0;i<size;i++)
	{	
		string b="";
		b+=char((rand()%24)+65);
		for(int i=1;i<size;i++)
		{
			b+=char((rand()%24)+97);
		}
		a[i]=b;
	}
}
void print(string *a,int size)
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
	string *a=new string[size];
	populate(a,size);
	print(a,size);
	delete []a;
	system("pause");
	return 0;
}

