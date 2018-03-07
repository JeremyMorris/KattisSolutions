/*
Snapper Chain (Hard)
https://open.kattis.com/problems/snapperhard
*/

#include "stdafx.h"

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int loops, plug, snaps;
	cin >> loops;

	for (int i = 1; i <= loops; i++) {
		bool on = true;
		string binary, output = "ON";
		cin >> plug >> snaps;

		binary = bitset<32>(snaps).to_string();

		for (int x = 1; x <= plug; x++) {
			if (binary.substr(binary.length() - x, 1).compare("0") == 0) {
				on = false;
				output = "OFF";
				break;
			}
		}

		cout << "Case #" << i << ": " << output << endl;
	}

	return 0;
}