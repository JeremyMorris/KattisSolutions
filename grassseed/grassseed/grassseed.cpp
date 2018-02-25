/*
Grass Seed Inc.
https://open.kattis.com/problems/grassseed
*/

#include "stdafx.h"

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double cost;
	int numLawns;
	double l, w;
	double total = 0;

	cin >> cost >> numLawns;

	for (int i = 0; i < numLawns; i++) {
		cin >> w >> l;
		total += (w * l) * cost;
	}

	cout << fixed << setprecision(7) << total;

    return 0;
}