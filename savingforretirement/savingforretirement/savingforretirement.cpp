/*
Saving For Retirement
https://open.kattis.com/problems/savingforretirement
*/

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	int bAge, bRet, bSave, bTotal, aAge, aSave, aRet;
	cin >> bAge >> bRet >> bSave >> aAge >> aSave;

	bTotal = bSave * (bRet - bAge);
	aRet = aAge;

	while (aSave * (aRet - aAge) <= bTotal) { aRet++; }

	cout << aRet;

    return 0;
}