// PPRemoveVowel.cpp : Defines the entry point for the console application.
//

/*
includes
namespace std

isVowel(); //function to tell if letter in string is a vowel

function to remove vowel


*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string strWord = "word";

bool isVowel(char chrVowel) {
	switch (chrVowel) {
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	case 'Y':
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'y':
		return true;
	default:
		return false;
	}
}

int main()
{

	bool isVowel();

	cout << "Enter a string: " << endl;
	cin >> strWord;
	
	//if (isVowel(strWord) == true)


    return 0;
}

