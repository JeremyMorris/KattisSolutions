/*
Bard
https://open.kattis.com/problems/bard
*/

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
	int totalVillagers, nights, numPresent, temp, songIndex = 0;
	bool bard, knowsAll;
	cin >> totalVillagers >> nights;
	vector<set<int>> villagers;
	vector<int> present;
	for (int i = 0; i < totalVillagers - 1; i++) { 
		set<int> songs;
		villagers.push_back(songs); 
	}

	while (nights > 0) {
		present.clear();
		cin >> numPresent;
		bard = false;

		for (int i = 0; i < numPresent; i++) {
			cin >> temp;
			if (temp == 1) bard = true;
			else present.push_back(temp - 2);
		}
		
		if (bard) {
			for (int v : present) {
				villagers[v].insert(songIndex);
			}
			songIndex++;
		}
		else {
			for (int i = 0; i < present.size(); i++) {
				for (int z = 0; z < present.size(); z++) {
					if (i == z) continue;
					for (int song : villagers[present[i]]) {
						villagers[present[z]].insert(song);
					}
				}
			}
		}

		nights--;
	}

	present.clear();
	present.push_back(1);

	for (int i = 0; i < totalVillagers - 1; i++) {
		knowsAll = true;
		for (int z = 0; z < songIndex; z++) {
			if (!knowsAll) break;
			if (villagers[i].find(z) == villagers[i].end()) {
				knowsAll = false;
				break;
			}
		}

		if (knowsAll) present.push_back(i + 2);
	}

	for (int i : present) {
		cout << i << endl;
	}
	cin >> nights;

    return 0;
}