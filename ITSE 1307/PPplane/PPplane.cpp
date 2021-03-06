// Eric Quintero
// ITSE 1307
//4/17/2018
// Asks user for input of row and column for a seat they would like to reserve. Outputs the seats available and reserved/available seats.

/*
includes
using namespace std;

for loops to display seats


*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char arySeats[12][6];
	int rowSelect = 0;
	int colmnSelect = 0;

	for (int rowPrint = 0; rowPrint < 12; rowPrint++) {
		for (int colmnPrint = 0; colmnPrint < 6; colmnPrint++) {
			arySeats[colmnPrint][rowPrint] = '[]';
		}
	}

	for (int rowPrint = 0; rowPrint < 12; rowPrint++) {
		for (int colmnPrint = 0; colmnPrint < 6; colmnPrint++) {
			cout << arySeats[colmnPrint][rowPrint];
		}
		cout << endl;
	}

	cout << "Enter a row: " << endl;
	cin >> rowSelect;
	cout << "Enter a column: " << endl;
	cin >> colmnSelect;

    return 0;
}

