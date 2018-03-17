/*
Ladder
https://open.kattis.com/problems/ladder
*/

#include "stdafx.h"

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	double h, v;
	cin >> h >> v;

	cout << (int)ceil(h / sin((v * 3.14159265359) / 180));

    return 0;
}