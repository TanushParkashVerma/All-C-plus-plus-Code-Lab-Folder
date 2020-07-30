// 11weekq1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int len(char s[])
{	int count=0;
	while (s[count]!='\0')
	{
		++count;
	}
	return count;
}
int main()
{	
	char s[]={'c', 'm', 'p', 't', ' ', '1', '3', '0', '\0'};
	cout<<len(s)<<endl;
	system("pause");
	return 0;
}

