// Eric Quintero
// ITSE 1307
// A program that converts input Temperature from celsius to fahrenheit.
// Created 01/30/2018

#include "stdafx.h""
#include <iostream>;

using namespace std;



int main()
{
	double TempC = 0.0;
	double TempF = 0.0;

	cout << "Input a temperature: ";
	cin >> TempC;
	TempF = (TempC * 1.8) + 32;
	cout << TempC << " degrees celsius is " << TempF << " degrees fahrenheit. ";
    return 0;
}

