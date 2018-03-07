// Eric Quintero
// ITSE 1307
// 3/6/2018
// Asks user for three numbers and outputs them in descending order

/*
#includes
using namespace std;

initialize variables

cout << "ask for numbers"
cin >> numbers

cout << "numbers in descending order"

if statements for each combination of outputs
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int intOne = 0;
	int intTwo = 0;
	int intThree = 0;

	cout << "Please Enter three numbers:" << endl;
	cin >> intOne >> intTwo >> intThree;

	cout << "Numbers in descending order:" << endl;

	if (intOne > intTwo && intTwo > intThree && intOne > intThree) {
		cout << intOne << " | " << intTwo << " | " << intThree << endl;
	}
	else if (intOne > intTwo && intOne > intThree && intTwo < intThree) {
		cout << intOne << " | " << intThree << " | " << intTwo << endl;
	}
	else if (intTwo > intOne && intTwo > intThree && intOne > intThree) {
		cout << intTwo << " | " << intOne << " | " << intThree << endl;
	}
	else if (intTwo > intOne && intTwo > intThree && intThree > intOne) {
		cout << intTwo << " | " << intThree << " | " << intOne << endl;
	}
	else if (intThree > intOne && intThree > intTwo && intOne > intTwo) {
		cout << intThree << " | " << intOne << " | " << intTwo << endl;
	}
	else if (intThree > intOne && intThree > intTwo && intTwo > intOne) {
		cout << intThree << " | " << intTwo << " | " << intOne << endl;
	}
	else { cout << "End" << endl; }
    return 0;
}

