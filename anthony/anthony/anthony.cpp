/*
Anthony and Cora
https://open.kattis.com/problems/anthony
**************
UNFINISHED TLE
**************
*/

#include "stdafx.h"

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

double p[2000];
double memoP[1000][2000];

double probability(int anthony, int cora, int round, double prob);

int main()
{
	int anthony, cora;
	double temp;

	cin >> anthony >> cora;
	int rounds = anthony + cora - 1;
	for (int i = 0; i < rounds; i++) {
		cin >> temp;
		p[i] = temp;
		for (int j = 0; j <= anthony; j++) {
			memoP[j][i] = -1;
		}
	}

	cout << fixed << setprecision(6) << probability(anthony, cora, 0, 1);
	cin >> temp;

    return 0;
}

double probability(int anthony, int cora, int round, double prob) {
	if (anthony == 0) { return 0; }
	if (cora == 0) { return 1; }
	
	if (memoP[anthony][round] >= 0) { return memoP[anthony][round]; }

	//if (round > 100) { return prob; }

	return memoP[anthony][round] = (p[round] * probability(anthony, cora - 1, round + 1, prob * p[round]) + 
		(1 - p[round]) * probability(anthony - 1, cora, round + 1, prob * (1-p[round])));
}