/*
Batter Up
https://open.kattis.com/problems/batterup
*/

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	double loops, temp, total = 0;
	cin >> loops;

	for (int i = 0; i < loops; i++) {
		cin >> temp;
		if (temp == -1) {
			loops--;
			i--;
			continue;
		}
		total += temp;
	}

	cout << total / loops;

    return 0;
}