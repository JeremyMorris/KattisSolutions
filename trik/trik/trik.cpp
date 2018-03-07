/*
Trik
https://open.kattis.com/problems/trik
*/

#include "stdafx.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string moves;
	int position = 1;
	cin >> moves;

	for (char move : moves) {
		if (move == 'A') {
			if (position != 3) { position = 3 - position; }
		}
		else if (move == 'B') {
			if (position != 1) { position = 5 - position; }
		}
		else {
			if (position != 2) { position = 4 - position; }
		}
	}

	cout << position;

    return 0;
}