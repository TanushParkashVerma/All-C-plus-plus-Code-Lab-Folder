// 9weekq26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "cstdlib"
#include "math.h"
#include <string>
using namespace std;
bool ident(int **a,int m,int n)
{
	for (int i=0;i<m;i++)
	{	
		for (int x=0;x<n;x++)
		{
			if (x==i)
			{
				if (a[i][x]!=1)
				{
					return false;
				}
			}
			else
			{
				if (a[i][x]!=0)
				{
					return false;
				}
			}
		}
	}
	return true;
}
void populate(int **a, int m, int n)
{	
	for (int i=0;i<m;i++)
	{	
		for (int x=0;x<n;x++)
		{
			if (x==i)
			{
				a[x][i]=1;
			}
			else
			{
				a[x][i]=0;
			}
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
	cout<<ident(a,m,n)<<endl;
	for (int i = 0; i < m; i++)
		delete [] a[i];
	delete [] a;
	system("pause");
	return 0;
}
