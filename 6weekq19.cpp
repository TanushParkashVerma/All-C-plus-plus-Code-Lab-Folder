// 6weekq19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <string>
#include "cstdlib"
using namespace std;

int	main()
{	
	string a;
	a+=char((rand()%25)+65);
	for (int i=0;i<10;i++)
	{
		a+=char((rand()%25)+97);
	}
	cout<<a<<endl;
	system("pause");
	return 0;
}

