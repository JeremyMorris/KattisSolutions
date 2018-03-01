/*
ICPC Tutorial
https://open.kattis.com/problems/tutorial
*/

#include "stdafx.h"

#include <iostream>
#include <cmath>

using namespace std;

int factorial(double n, double max);

int main()
{
	double maxOperations, n, operations;
	int complexity;
	cin >> maxOperations >> n >> complexity;

	switch (complexity)
	{
	case 1:	// O(n!)
		operations = factorial(n, maxOperations);
		break;
	case 2:	// O(2^n)
		operations = pow(2, n);
		break;
	case 3: // O(n^4)
		operations = pow(n, 4);
		break;
	case 4: // O(n^3)
		operations = pow(n, 3);
		break;
	case 5: // O(n^2)
		operations = pow(n, 2);
		break;
	case 6: // O(nlog2n)
		operations = (log2(n) * n);
		break;
	case 7:	// O(n)
		operations = n;
		break;
	}

	if (operations > maxOperations || operations < 0) { cout << "TLE"; }
	else { cout << "AC"; }
    return 0;
}

int factorial(double n, double max) {
	double f = n;
	if (n == 0) return 1;
	while (n > 1) {
		n--;
		f *= n;
		if (f > max) {
			f += max;
			break;
		}
	}
	return f;
}