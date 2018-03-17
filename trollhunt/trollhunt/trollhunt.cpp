/*
Troll Hunt
https://open.kattis.com/problems/trollhunt
*/

#include "stdafx.h"

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double bridges;
	int knights, minGroup, groups;
	cin >> bridges >> knights >> minGroup;
	groups = knights / minGroup;

	cout << (int)ceil((bridges - 1) / groups);
	cin >> knights;

    return 0;
}