/*
Almost Perfect
https://open.kattis.com/problems/almostperfect
*/

#include "stdafx.h"

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long x;
	while (cin >> x)
	{
		long sum = 1;
		int sq = sqrt(x);

		for (int i = 2; i <= sq; i++) {
			if (x % i == 0) {
				sum += i;
				if (i * i != x) { sum += x / i; }
			}
		}

		if (sum == x) { cout << x << " perfect" << endl; }
		else if (abs(x - sum) <= 2) { cout << x << " almost perfect" << endl; }
		else { cout << x << " not perfect" << endl; }
	}

    return 0;
}