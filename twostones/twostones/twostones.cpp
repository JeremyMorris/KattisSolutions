/*
Take Two Stones
https://open.kattis.com/problems/twostones
*/

#include "stdafx.h"

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	// If the number of stones is even, Bob wins
	if (n % 2 == 0) {
		cout << "Bob";
	}
	else {
		cout << "Alice";
	}

    return 0;
}