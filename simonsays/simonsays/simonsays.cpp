/*
Simon Says
https://open.kattis.com/problems/simonsays
*/

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<string> input;
	string in;
	getline(cin, in);

	for (int i = 0; i < n; i++) {
		getline(cin, in);
		input.push_back(in);
	}

	for (string i : input) {
		if (i.substr(0, 10).compare("Simon says") == 0) {
			cout << i.substr(11) << endl;
		}
	}

    return 0;
}