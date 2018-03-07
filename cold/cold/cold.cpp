/*
Cold-puter Science
https://open.kattis.com/problems/cold
*/

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	int loops, val, count = 0;
	cin >> loops;

	for (int i = 0; i < loops; i++) {
		cin >> val;
		if (val < 0) { count++; }
	}

	cout << count;

    return 0;
}