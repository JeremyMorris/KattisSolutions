/*
I've Been Everywhere, Man
https://open.kattis.com/problems/everywhere
*/

#include "stdafx.h"

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	int loops, trips;
	set<string> cities;
	string temp;

	cin >> loops;
	for (int i = 0; i < loops; i++) {
		cities.clear();

		cin >> trips;
		for (int x = 0; x < trips; x++) {
			cin >> temp;
			cities.insert(temp);
		}
		trips = cities.size();

		cout << trips << endl;
	}

    return 0;
}