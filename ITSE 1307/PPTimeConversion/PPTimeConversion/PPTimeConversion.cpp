// Eric Quintero
// ITSE 1307
// 3-27-2018
// Converts time from 12hr to 24hr notation and vice versa.

#include "stdafx.h"
#include <iostream>
using namespace std;

int printMenu();
char getChoice();

int main()
{
    return 0;
}

int printMenu() {
	cout << "Please select which conversion you would like to do: " << endl;
	cout << "A) For 24 to 12 hour notation: " << endl;
	cout << "B) For 12 to 24 hour notation: " << endl;
	cout << "Enter your choice or enter 'Q' to quit the program." << endl;
	return 0;
}

char getChoice() {
	char chrChoice = ' ';
	printMenu();
	cin >> chrChoice;
	chrChoice = toupper(chrChoice);

	switch (chrChoice) {
	case 'A':
		cout << " ";
		break;
	}
}