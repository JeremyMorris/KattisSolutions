/*
Tarifa
https://open.kattis.com/problems/tarifa
*/

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	int used = 0;
	int gain;
	int months;
	int temp;

	cin >> gain >> months;

	for (int i = 0; i < months; i++) {
		cin >> temp;
		used += temp;
	}

	cout << (gain * (months + 1)) - used;
	cin >> temp;
    return 0;
}