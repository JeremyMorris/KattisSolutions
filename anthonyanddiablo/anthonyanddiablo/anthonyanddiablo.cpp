/*
Anthony and Diablo
https://open.kattis.com/problems/anthonyanddiablo
*/

#include "stdafx.h"

#include <iostream>

using namespace std;

const double pi = 3.14159265358979323846;

int main()
{
	double minArea, perimeter;
	cin >> minArea >> perimeter;

	double area = (perimeter * perimeter) / (4 * pi);

	if (area >= minArea) { cout << "Diablo is happy!"; }
	else { cout << "Need more materials!"; }

    return 0;
}