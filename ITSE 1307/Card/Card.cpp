// Card.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string strFirstName = "";
	string strLastName = "";
	int Number = 0;


	cout << "Enter your first name: "; 
	cin >> strFirstName;			
	cout << "Enter your last name: ";
	cin >> strLastName;
	cout << "Enter phone number: ";
	cin >> Number;
	cout << strFirstName << endl; 
	cout << strLastName << endl; 
	cout << Number << endl;

	return 0;
}

