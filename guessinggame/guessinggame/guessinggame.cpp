/*
Guessing Game
https://open.kattis.com/problems/guessinggame
*/

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void reset(int& min, int& max, bool& liar);

int main()
{
	bool endInput = false;
	bool liar = false;
	int min = 0;
	int max = 11;
	vector<pair<int, string>> input;

	while (true) {
		pair<int, string> temp;
		cin >> temp.first;

		if (temp.first == 0 && endInput) { break; }
		else { endInput = false; }
		getline(cin, temp.second);
		getline(cin, temp.second);
		input.push_back(temp);
		
		if (temp.second.compare("right on") == 0) { endInput = true; }
	}

	for (pair<int, string> val : input) {
		if (val.second.compare("too high") == 0) {
			if (val.first <= min) { liar = true; }
			if (val.first < max) max = val.first;
		}
		else if (val.second.compare("too low") == 0) {
			if (val.first >= max) { liar = true; }
			if (val.first > min) min = val.first;
		}
		else {
			if (val.first <= min || val.first >= max) { liar = true; }
			if (liar) {
				cout << "Stan is dishonest" << endl;
			}
			else {
				cout << "Stan may be honest" << endl;
			}
			reset(min, max, liar);
		}
	}

    return 0;
}

void reset(int& min, int& max, bool& liar) 
{
	min = 0;
	max = 11;
	liar = false;
}