// Eric Quintero
// ITSE 1307
// 2/15/2018
// VCARD HW

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string strFileName = "address.vcard";
	ofstream fileAddress;
	string strFirst = "Doctor";
	string strLast = "Professor";
	string strOrg = "Cobra";
	string strTitle = "Grunt";
	string strCellPhone = "(555)-555-5555";
	string strHomeAddress = "500 Del Perro Heights Apt.4";
	string strCity = "Los Santos";
	string strState = "San Andreas";
	string strCountry = "United States of America";
	string strVehicle = "Osiris";
	string strHair = "Brown";
	string strWeapon = "Minigun";
	string strReputation = "Kingpin";
	string strRank = "214";
	

	string strEmail = "notadrugrunner@mail.com";

	fileAddress.open(strFileName);
	fileAddress << "BEGIN:VCARD" << endl;
	fileAddress << "VERSION:2.1" << endl;
	fileAddress << "N:" << strLast << ";" << strFirst << ";;" << endl;
	fileAddress << "FN:" << strFirst << strLast << endl;
	fileAddress << "ORG:" << strOrg << endl;
	fileAddress << "TITLE:" << strTitle << endl;
	fileAddress << "TEL;CELL;VOICE:" << strCellPhone << endl;
	fileAddress << "ADR;HOME:" << ";" << strHomeAddress << ";" << strCity << ";" << strState << ";" << strCountry << endl;
	fileAddress << "EMAIL:" << strEmail << endl;
	fileAddress << "CAR:" << strVehicle << endl;
	fileAddress << "HAIR:" << strHair << endl;
	fileAddress << "WEAPON:" << strWeapon << endl;
	fileAddress << "REPUTATION:" << strReputation << endl;
	fileAddress << "RANK:" << strRank << endl;
	fileAddress << "END:VCARD" << endl;
	fileAddress.close();

	cout << "Wrote " << strFileName << endl; //verifies that vcard was written successfully

    return 0;
}

