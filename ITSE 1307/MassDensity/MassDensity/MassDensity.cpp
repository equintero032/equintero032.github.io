// Eric Quintero
// 2/19/2018
//ITSE 1307
// Calculates volume after reading in mass and density input .dat file and outputs answer to .txt file

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string strFileName = "input.dat";
	string strLine1 = "";
	string strLine2 = "";

	ifstream dataInput;
	dataInput.open(strFileName);
	dataInput >> strLine1;
	dataInput >> strLine2;


	cout << strLine1 
		<< strLine2 << endl;
	
	dataInput.close();

    return 0;
}

