/*
Pot
https://open.kattis.com/problems/pot
*/

#include "stdafx.h"

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	string input;
	double sum = 0;
	int loops;

	cin >> loops;

	for (int i = 0; i < loops; i++) {
		cin >> input;
		int len = input.length();
		sum += pow(atoi((input.substr(0, len - 1).c_str())), atoi((input.substr(len - 1, 1).c_str())));
	}

	cout << fixed << setprecision(0) << sum;

    return 0;
}