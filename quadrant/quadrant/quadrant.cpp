/*
Quadrant Selection
https://open.kattis.com/problems/quadrant
*/

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	int x, y, n = 0;
	cin >> x >> y;

	if (x < 0) { n++; }
	if (y < 0) { n++; }

	switch (n) 
	{
	case 0:
		cout << 1;
		break;
	case 1:
		if (x < 0) { cout << 2; }
		else { cout << 4; }
		break;
	case 2:
		cout << 3;
		break;
	}

    return 0;
}