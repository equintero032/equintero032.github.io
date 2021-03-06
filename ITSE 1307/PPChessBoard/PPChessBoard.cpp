// Eric Quintero
// ITSE 1307
// 4-17-2018
// Prints a chess board with the pieces in the appropriate spots.

#include "stdafx.h"
#include <iostream>
using namespace std;

/*
includes

2D array

print '*' in array spaces

for loop{
replace front rows of each player with 'p' and 'P'

replace back row with appropriate pieces
}
*/

const int intMaxGrid = 8;
char aryBoard[8][8];


int main()
{
	for (int intYPrint = 0; intYPrint < intMaxGrid; intYPrint++) {
		for (int intXPrint = 0; intXPrint < intMaxGrid; intXPrint++) {
			aryBoard[intXPrint][intYPrint] = '*';
		}
	}
	
	for (int intYPrint = 0; intYPrint < intMaxGrid; intYPrint++) {
		for (int intXPrint = 0; intXPrint < intMaxGrid; intXPrint++) {
			aryBoard[intXPrint][1] = 'p';
			aryBoard[intXPrint][6] = 'P';
			aryBoard[0][0] = 'r';
			aryBoard[7][0] = 'r';
			aryBoard[0][7] = 'R';
			aryBoard[7][7] = 'R';
			aryBoard[1][0] = 'n';
			aryBoard[6][0] = 'n';
			aryBoard[1][7] = 'N';
			aryBoard[6][7] = 'N';
			aryBoard[2][0] = 'b';
			aryBoard[5][0] = 'b';
			aryBoard[2][7] = 'B';
			aryBoard[5][7] = 'B';
			aryBoard[3][0] = 'q';
			aryBoard[3][7] = 'Q';
			aryBoard[4][0] = 'k';
			aryBoard[4][7] = 'K';
		}
	}

	for (int intYPrint = 0; intYPrint < intMaxGrid; intYPrint++) {
		for (int intXPrint = 0; intXPrint < intMaxGrid; intXPrint++) {
			cout << aryBoard[intXPrint][intYPrint];
		}
		cout << endl;
	}
	
    return 0;
}
