/*
Oddities
https://open.kattis.com/problems/oddities
*/

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	int loops, x = 0;
	cin >> loops;

	for (int i = 0; i < loops; i++) {
		cin >> x;
		if (x % 2 == 0) {
			cout << x << " is even" << endl;
		}
		else {
			cout << x << " is odd" << endl;
		}
	}
	cin >> loops;
    return 0;
}