/*
Best Compromise
https://open.kattis.com/problems/compromise
*/

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int loops, numPeople, topics, majority, zeroes;
	string input;	
	vector<vector<int>> people;
	vector<int> assignment;

	cin >> loops;

	for (int i = 0; i < loops; i++) {
		cin >> numPeople >> topics;
		majority = numPeople / 2;
		zeroes;
		assignment.clear();
		people.clear();

		for (int a = 0; a < numPeople; a++) {
			vector<int> temp;
			cin >> input;

			for (int b = 0; b < topics; b++) {
				temp.push_back(input[b] - '0');
			}

			people.push_back(temp);
		}

		for (int a = 0; a < topics; a++) {
			zeroes = 0;

			for (int b = 0; b < numPeople; b++) {
				if (people[b][a] == 0) zeroes++;
			}

			if (zeroes > majority) assignment.push_back(0);
			else assignment.push_back(1);
		}

		for (int a = 0; a < topics; a++) {
			cout << assignment[a];
		}

		cout << endl;
	}

    return 0;
}