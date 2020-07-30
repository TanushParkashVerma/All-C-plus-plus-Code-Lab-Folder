// 10weekq1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "cstdlib"
using namespace std;

int stringlength(char c[])
{
	int count=0;
	while (c[count]!='\0')
	{
		count++;
	}
	return count;
}

int main()
{	
	char C1[]={'6','%','a',']','\0'};
	cout<<"The length of the C-String c1 is "<<stringlength(C1)<<endl;
	char* C2 = new char[20];
	for (int i=0;i<19;i++)
	{
		C2[i]=rand()%26+65;
	}
	C2[19]='\0';
	cout<<"The length of the C-String c2 is "<<stringlength(C2)<<endl;
	system("Pause");
	return 0;
}

