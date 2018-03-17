/*
Mia
https://open.kattis.com/problems/mia
*/

#include "stdafx.h"

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	pair<int, int> p1, p2;
	int p1Score, p2Score;

	while (true) {
		cin >> p1.first >> p1.second >> p2.first >> p2.second;
		if (p1.first == 0 && p1.second == 0 && p2.first == 0 && p2.second == 0) { break; }

		p1Score = 0, p2Score = 0;
		if (p1.first + p1.second == 3) { p1Score = 2; }
		if (p2.first + p2.second == 3) { p2Score = 2; }
		if (p1Score == 2 && p2Score == 2) { 
			cout << "Tie." << endl;
			continue;
		}

		if (p1.first == p1.second) { p1Score = 1; }
		if (p2.first == p2.second) { p2Score = 1; }
		if (p1Score == 1 && p2Score == 1) {
			if (p1.first > p2.first) { cout << "Player 1 wins." << endl; }
			else if (p1.first < p2.first) { cout << "Player 2 wins." << endl; }
			else { cout << "Tie." << endl; }
			continue;
		}

		if (p1Score != p2Score) {
			if (p1Score > p2Score) { cout << "Player 1 wins." << endl; }
			if (p2Score > p1Score) { cout << "Player 2 wins." << endl; }
			continue;
		}

		int p1Val = (max(p1.first, p1.second) * 10) + min(p1.first, p1.second);
		int p2Val = (max(p2.first, p2.second) * 10) + min(p2.first, p2.second);
		if (p1Val > p2Val) { cout << "Player 1 wins." << endl; }
		if (p2Val > p1Val) { cout << "Player 2 wins." << endl; }
		if (p1Val == p2Val) { cout << "Tie." << endl; }
	}
	
    return 0;
}