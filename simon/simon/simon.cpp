/*
Simon Says
https://open.kattis.com/problems/simon
*/

#include "stdafx.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string in;
	getline(cin, in);

	for (int i = 0; i < n; i++) {
		getline(cin, in);
		if (in.substr(0, 10).compare("simon says") == 0 && in.length() > 11) {
			cout << in.substr(11) << endl;
		}
		else {
			cout << endl;
		}
	}

	return 0;
}