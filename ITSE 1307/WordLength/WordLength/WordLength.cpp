// Eric Quinter
// ITSE 1307
// 2/13/2018
// Word Length HW

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strWord = "String";

	cout << "Type a string: " << endl;
	getline(cin, strWord);
	cout << "Word length of " << strWord << " is: " << strWord.length() << endl;
	
    return 0;
}

