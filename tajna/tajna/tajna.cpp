/*
Tajna
https://open.kattis.com/problems/tajna
*/

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> factors;
	string input;
	int rows, len, index = 0;
	cin >> input;
	len = input.length();

	for (int i = 1; i <= len; i++) {
		if (len % i == 0) { factors.push_back(i); }
	}

	if (factors.size() % 2 == 0) { rows = factors[(factors.size() / 2) - 1]; }
	else { rows = factors[(factors.size() / 2)]; }

	for (int i = 0; i < len; i++) {
		cout << input[index];
		index += rows;
		if (index >= len) { index -= len - 1; }
	}

    return 0;
}