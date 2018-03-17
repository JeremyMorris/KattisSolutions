/*
iBoard
https://open.kattis.com/problems/iboard
*/

#include "stdafx.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	int ones, zeroes;

	while (getline(cin, input)) {
		ones = 0;
		zeroes = 0;

		for (char c : input) {
			for (int i = 1; i < 8; i++) {
				if ((c & (1 << (7 - i))) >> (7 - i) == 0) { zeroes++; }
				else { ones++; };
			}
		}

		if (ones % 2 == 1 || zeroes % 2 == 1) { cout << "trapped" << endl; }
		else { cout << "free" << endl; }
	}
	
    return 0;
}