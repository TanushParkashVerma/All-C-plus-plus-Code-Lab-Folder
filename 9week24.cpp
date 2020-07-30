// 9week24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "cstdlib"
#include "math.h"
#include <string>
using namespace std;
void populate(int **a, int m, int n)
{	
	for (int i=0;i<m;i++)
	{	
		for (int x=0;x<n;x++)
		{
			a[i][x]=(rand()%11)-5;
		}
	}
	return;
}
void print(int **a,int m, int n)
{	
	for (int i=0;i<m;i++)
	{
		for (int x=0;x<n;x++)
		{
			cout<<a[i][x]<<"\t";
		}
		cout<<endl;
	}
	return;
}
int main()
{
	int m,n;
	cin>>m>>n;
	int **a=new int*[m];
	for (int i=0;i<m;i++)
	{
		a[i]=new int[n];
	}
	populate(a,m,n);
	print(a,m,n);
	for (int i = 0; i < m; i++)
		delete [] a[i];
	delete [] a;
	system("pause");
	return 0;
}

