/*
Nasty Hacks
https://open.kattis.com/problems/nastyhacks
*/

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	int loops;
	cin >> loops;
	int r, e, c;
	int benefit;

	for (int i = 0; i < loops; i++) {
		cin >> r >> e >> c;
		benefit = e - r;
		
		if (benefit > c) {
			cout << "advertise" << endl;
		}
		else if (benefit == c) {
			cout << "does not matter" << endl;
		}
		else {
			cout << "do not advertise" << endl;
		}
	}

    return 0;
}