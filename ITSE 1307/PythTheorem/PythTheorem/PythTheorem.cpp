// Eric
// ITSE 1307
// 2/15/2018
// Pythagorean theorem HW

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double dblNumOne = 9;
	double dblNumTwo = 3;
	double dblNumThree = sqrt(pow(dblNumOne, 2) + pow(dblNumTwo, 2)); // formula for pythagorean theorem

	cout << dblNumThree << endl; // output result of formula

	return 0;
}