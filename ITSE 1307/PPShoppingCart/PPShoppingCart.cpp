// PPShoppingCart.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int intShipping = 10;
	int intNumItems = 0;
	double dblPrice = 0;
	double dblPriceTotal = 0;

	/*cout << "Enter the number of items purchased: " << endl;
	cin >> intNumItems;
	cout << "Enter the price of each item: " << endl;*/

	if (dblPriceTotal > 200)
	{
		intShipping = 0;
	}

	do 
	{
		cout << "Enter the number of items purchased: " << endl;
		cin >> intNumItems;
	} while (intNumItems <= 0);

    return 0;
}

