/*
Judging Troubles
https://open.kattis.com/problems/judging
*/

#include "stdafx.h"

#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	unordered_map<string, int> dom;
	unordered_map<string, int> kat;
	int num, matches = 0;
	string temp;
	cin >> num;

	for (int i = 0; i < num; i++) {	// DOMJudge
		cin >> temp;
		if (dom.find(temp) == dom.end()) {
			dom.insert(pair<string, int>(temp, 1));
		}
		else {
			dom[temp]++;
		}
	}

	for (int i = 0; i < num; i++) {	// Kattis
		cin >> temp;
		if (kat.find(temp) == kat.end()) {
			kat.insert(pair<string, int>(temp, 1));
		}
		else {
			kat[temp]++;
		}
	}

	for (pair<string, int> val : dom) {
		if (kat.find(val.first) != kat.end()) { matches += min(val.second, kat[val.first]); }
	}
	
	cout << matches;

    return 0;
}