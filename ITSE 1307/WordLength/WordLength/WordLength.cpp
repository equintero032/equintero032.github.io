// WordLength.cpp : Defines the entry point for the console application.
//

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

