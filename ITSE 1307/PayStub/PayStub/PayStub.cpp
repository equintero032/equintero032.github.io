// Eric Quintero
// ITSE 1307
// 2/13/2018
// PayStub HW

#include "stdafx.h"
#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string firstName = "first name";
	string lastName = "last name";
	float grossAmnt = 0.00;
	float incTax = 0.15;
	float stateTax = 0.00;
	float ssTax = 0.0575;
	float medicTax = .0275;
	float penPlan = .05;
	float healthIns = 75.00;
	float netPay = 0.00;


	cout << "Enter first name: "  << endl;
	cin >> firstName;
	cout << "Enter last name: " << endl;
	cin >> lastName;
	cout << "Enter gross pay: " << endl;
	cin >> grossAmnt;
	cout << firstName << lastName << endl;

	cout << "Gross Pay: " << grossAmnt << endl;

	incTax = grossAmnt * .15;
	cout << "Federal Tax: " << ".......... $" << incTax << endl;
	stateTax = grossAmnt * 0;
	cout << "State Tax: " << ".......... $" << stateTax << endl;
	ssTax = grossAmnt * .0575;
	cout << "Social Security: " << ".......... $" << ssTax << endl;
	medicTax = grossAmnt * .0275;
	cout << "Medicare/Medicade: " << ".......... $" << medicTax << endl;
	penPlan = grossAmnt * .05;
	cout << "Pension Plan: " << ".......... $" << penPlan << endl;
	cout << "Health Insurance: " << ".......... $" << healthIns << endl;
	//netPay = grossAmnt - incTax - stateTax;
	netPay = grossAmnt - incTax - stateTax - ssTax - medicTax - penPlan - healthIns;
	cout << "Net Pay: " << ".......... $" << netPay << endl;

	//cout << "Gross Amount: " << grossAmnt;

    return 0;
}

