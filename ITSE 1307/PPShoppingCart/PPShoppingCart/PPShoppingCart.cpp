// Eric Quinter
// ITSE 1307
// 3-22-18
// Prompts user for input of number of items and price of each. Then outputs the total billing amount. (Must use a loop)

/*
#includes
using namespace std;

int intShipping = 10;


cout << prompt user for input
cin >> price of each item and number of each item ordered

x++ loop for number of items, stops when x = intNumItems

calculate the price and check if shipping applies to it


*/
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int intNumItems = 0;
	int intItemCounter = 0;
	int intShipping = 10 * intNumItems;
	double dblPrice = 0;
	double dblPriceItems = 0;
	double dblPriceTotal = 0;

	cout << "Enter the number of items purchased: " << endl;
	cin >> intNumItems;

	 while (intItemCounter < intNumItems) {
		cout << "Enter the price of the item: " << endl;
		cin >> dblPrice;

		intItemCounter++;
	} 

	if (dblPriceItems > 200)
		intShipping = 0;
	else (intShipping = 10 * intNumItems);

	dblPriceTotal = dblPriceItems + intShipping;

	return 0;
}


