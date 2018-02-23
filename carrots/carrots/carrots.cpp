/*
Solving for Carrots
https://open.kattis.com/problems/carrots
*/

#include "stdafx.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int loops, out;
	string irrelevant;
	cin >> loops >> out;

	for (int i = 0; i < loops; i++) {
		cin >> irrelevant;
	}

	cout << out;

    return 0;
}