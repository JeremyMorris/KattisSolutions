/*
Sibice
https://open.kattis.com/problems/sibice
*/

#include "stdafx.h"

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int matches, w, h, match;
	double diag;
	cin >> matches >> w >> h;

	diag = sqrt((w * w) + (h * h));

	while (matches > 0) {
		cin >> match;
		if (match <= diag) { cout << "DA" << endl; }
		else { cout << "NE" << endl; }
		matches--;
	}
	
    return 0;
}