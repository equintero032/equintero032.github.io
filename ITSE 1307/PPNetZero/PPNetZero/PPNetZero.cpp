// Eric Quintero
// ITSE 1307
// 3/1/2018
// Program asks for a number, outputs the number and states whether it is negative, positive, or zero.

/*
#includes
using namespace std;

main{

variables declared

cout
cin >> number

if statement for negative, positive and zero

}

*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int intNumber = 0;

	cout << "Please enter a number: " << endl;
	cin >> intNumber;

	if (intNumber < 0) {
		cout << intNumber << " is negative" << endl;
	}
	else if (intNumber > 0) {
		cout << intNumber << " is positve." << endl;
	}
	else {
		cout << intNumber << " is zero." << endl;
	}

    return 0;
}

