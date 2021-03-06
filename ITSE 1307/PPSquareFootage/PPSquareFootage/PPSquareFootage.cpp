// Eric Quintero
// ITSE 1307
// 3/13/2018
// Accepts inputs for square footage and base price of each house. It will then output the house model(s) with the least cost per sq ft.

/*
#includes
using namespace std;

initialize variables
sqft
baseprice
Price per sqft

cout << enter square footage and base price of each house model
cin >> sq ft and base price of each model

formula for sqft cost

if/if else for each house model

*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int intSqftCol = 0;
	int intSqftSplit = 0;
	int intSqftSingle = 0;
	int intBaseCol = 0;
	int intBaseSplit = 0;
	int intBaseSingle = 0;
	double dblPriceCol = 0;
	double dblPriceSplit = 0;
	double dblPriceSingle = 0;
	
	cout << "Enter sq ft and base price of colonial model: " << endl;
	cin >> intSqftCol >> intBaseCol;
	cout << "Enter sq ft and base price of split-level model: " << endl;
	cin >> intSqftSplit >> intBaseSplit;
	cout << "Enter sq ft and base price of colonial model: " << endl;
	cin >> intSqftSingle >> intBaseSingle;

	dblPriceCol = intBaseCol / intSqftCol;
	dblPriceSplit = intBaseSplit / intSqftSplit;
	dblPriceSingle = intBaseSingle / intSqftSingle;

	cout << "Price per square foot for colonial model: $" << dblPriceCol << endl;


    return 0;
}

