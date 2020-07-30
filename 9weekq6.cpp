// 9weekq6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "cstdlib"
using namespace std;


int main()
{	
	int size,pcount=0,ncount=0;
	cin>>size;
	float *a=new float[size];
	for (int i=0;i<size;i++)
	{
		a[i]=((float(rand())/RAND_MAX)*2)-1;
		if (a[i]>=0)
		{
			pcount++;
		}
		else
		{
			ncount++;
		}
	}
	for (int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"There are "<<pcount<<" numbers and "<<ncount<<" negative numbers"<<endl;
	system("pause");
	return 0;
}

