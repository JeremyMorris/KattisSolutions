/*
Bijele
https://open.kattis.com/problems/bijele
*/

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	int fullset[6] = { 1, 1, 2, 2, 2, 8 };
	int need[6];
	int temp;

	for (int i = 0; i < 6; i++) {
		cin >> temp;
		cout << fullset[i] - temp << " ";
	}
	
    return 0;
}