// 9weekq4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "cstdlib"
#include "math.h"
using namespace std;

int main()
{	
	int arraySize;
	cout<<"Please enter the size of the array to be created"<<endl;
	cin >> arraySize;
	int *A= new int[arraySize],evcount=0,odcount=0;
	for (int i=0;i<arraySize;i++)
	{
		A[i]=rand();
	}
	for (int i=0;i<arraySize;i++)
	{
		if (A[i]%2==0)
		{
			evcount++;
		}
		else
		{
			odcount++;
		}
	}
	cout<<"There are "<<evcount<<" Even integers and "<<odcount<<" Odd integers"<<endl;
	system("pause");
	return 0;
}

