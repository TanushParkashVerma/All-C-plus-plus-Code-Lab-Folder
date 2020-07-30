// 9weekq7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "cstdlib"
using namespace std;


int main()
{	
	int size,sum=0;
	cin>>size;
	int *a=new int[size];
	for (int i=0;i<size;i++)
	{
		a[i]=(rand()%21)-10;
		sum+=a[i];
	}
	cout<<float(sum)/size<<endl;
	system("pause");
	return 0;
}

