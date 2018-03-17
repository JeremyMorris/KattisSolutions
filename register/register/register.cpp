/*
Primary Register
https://open.kattis.com/problems/register
*/

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	int reg[8];
	int operations = 0;

	for (int i = 0; i < 8; i++) { cin >> reg[i]; }

	operations += (18 - reg[7]) * 510510;
	operations += (16 - reg[6]) * 30030;
	operations += (12 - reg[5]) * 2310;
	operations += (10 - reg[4]) * 210;
	operations += (6 - reg[3]) * 30;
	operations += (4 - reg[2]) * 6;
	operations += (2 - reg[1]) * 2;
	operations += (1 - reg[0]);

	cout << operations;

    return 0;
}