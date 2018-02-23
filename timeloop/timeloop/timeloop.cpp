/*
Stuck In A Time Loop
https://open.kattis.com/problems/timeloop
*/

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	int count;
	cin >> count;

	for (int i = 1; i <= count; i++) {
		cout << i << " Abracadabra" << endl;
	}

    return 0;
}