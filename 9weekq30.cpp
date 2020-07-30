// 9weekq30.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
string *addEntry(string *s, int &size, const string &newEntry){	
	string *b=new string[size++];
	for (int i=0;i<size-2;i++)
	{
		b[i]=s[i];
	}
	b[size-1]=newEntry;
	return b;
}
int main()
{		
	int size=0;
	string *a=new string[size];
	string * b=addEntry(a,size,'c');
	for (int i=0;i<size;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	system("pause");
	return 0;
}

