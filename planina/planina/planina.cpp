/*
Planina
https://open.kattis.com/problems/planina
*/

#include "stdafx.h"

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	cin >> n;

	cout << fixed << setprecision(0) << pow((sqrt(pow(4, n)) + 1), 2);
	cin >> n;

    return 0;
}