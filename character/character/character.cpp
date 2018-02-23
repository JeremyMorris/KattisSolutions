/*
Character Development
https://open.kattis.com/problems/character
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
	cout << fixed << setprecision(0) << (pow(2, n) - n - 1);
    return 0;
}