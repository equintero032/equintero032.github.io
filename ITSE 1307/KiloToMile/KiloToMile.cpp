// KiloToMile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	
	float km = 0.0;
	float m = 0.0;


	cout << "Enter kilometer distance: " << endl;
	cin >> km;
	m = km * 0.62;
	cout << "Miles run equals " << m << endl;


}

