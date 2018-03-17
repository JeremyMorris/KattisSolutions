/*
A Towering Problem
https://open.kattis.com/problems/towering
*/

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int boxes[6];
	int sum = 0, heightOne, heightTwo, currHeight;
	vector<int> towerOne, towerTwo;

	for (int i = 0; i < 6; i++) {
		cin >> boxes[i];
	}
	cin >> heightOne >> heightTwo;

	for (int i = 0; i < 6; i++) { sum += boxes[i]; }

	for (int a = 0; a < 6; a++) {
		for (int b = a + 1; b < 6; b++) {
			for (int c = b + 1; c < 6; c++) {
				currHeight = boxes[a] + boxes[b] + boxes[c];
				if (currHeight == heightOne && (sum - currHeight) == heightTwo) {
					towerOne.push_back(boxes[a]);
					towerOne.push_back(boxes[b]);
					towerOne.push_back(boxes[c]);
					for (int i = 0; i < 6; i++) {
						if (i != a && i != b && i != c) { towerTwo.push_back(boxes[i]); }
					}
					
					sort(towerOne.begin(), towerOne.end());
					sort(towerTwo.begin(), towerTwo.end());
					for (int i = towerOne.size() - 1; i >= 0; i--) { cout << towerOne[i] << " "; }
					for (int i = towerTwo.size() - 1; i >= 0; i--) { cout << towerTwo[i] << " "; }

					return 0;
				}
			}
		}
	}
}