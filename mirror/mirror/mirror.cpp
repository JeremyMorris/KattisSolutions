/*
Mirror Images
https://open.kattis.com/problems/mirror
*/

#include "stdafx.h"

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int loops, row, col;
	char ch;
	stack<char> mirror;
	string input;
	cin >> loops;

	for (int i = 1; i <= loops; i++) {
		cin >> row >> col;

		for (int x = 0; x < row; x++) {
			cin >> input;
			for (char c : input) {
				mirror.push(c);
			}
		}

		cout << "Test " << i << endl;
		for (int x = 0; x < row; x++) {
			for (int y = 0; y < col; y++) {
				cout << mirror.top();
				mirror.pop();
			}
			cout << endl;
		}
		cout << endl;
	}

    return 0;
}