//Eric Quintero
// ITSE 1307
// 4/19/2018
// Aks user to input a string, removes the vowels from the string and outputs the new word.

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
string strNewWord = "newWord";
char charLetter = 'a';

bool isVowel(char charLetter) {
	switch (charLetter) {
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

int removeVowel() {

}

int main()
{
	cout << "Enter a string: " << endl;
	cin >> strWord;

	return 0;
}