/*
Vauvau
https://open.kattis.com/problems/vauvau
*/

#include "stdafx.h"

#include <iostream>

using namespace std;

int oneCalm, twoCalm, oneMad, twoMad;

void calcAttacks(int &i);

int main()
{
	int p, m, g;

	cin >> oneMad >> oneCalm >> twoMad >> twoCalm;
	oneCalm += oneMad;
	twoCalm += twoMad;

	cin >> p >> m >> g;
	calcAttacks(p);
	calcAttacks(m);
	calcAttacks(g);

	int results[3] = { p, m, g };
	for (int i : results) {
		switch (i) 
		{
			case 2: 
				cout << "both" << endl;
				break;
			case 1:
				cout << "one" << endl;
				break;
			case 0:
				cout << "none" << endl;
				break;
		}
	}

    return 0;
}

void calcAttacks(int &i) {
	int minOne = i % oneCalm, minTwo = i % twoCalm;
	i = 0;
	if (minOne <= oneMad && minOne != 0) { i++; }
	if (minTwo <= twoMad && minTwo != 0) { i++; }
}