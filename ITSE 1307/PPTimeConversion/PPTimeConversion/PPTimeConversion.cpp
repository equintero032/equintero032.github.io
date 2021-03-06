// Eric Quintero
// ITSE 1307
// 4/17/2018
// Converts time from 12hr to 24hr notation and vice versa.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int printMenu();
char getChoice();

int getTotalMinutes(int intHours, int intMinutes) {
	return (intHours * 60) + intMinutes;
}

int getHours(int intTotalMinutes) {
	return intTotalMinutes / 60;
}

int getMinutes(int intTotalMinutes) {
	return intTotalMinutes % 60;
}

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