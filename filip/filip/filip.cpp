/*
Filip
https://open.kattis.com/problems/filip
*/

#include "stdafx.h"

#include <iostream>
#include <algorithm>

using namespace std;

int reverse(int start);

int main()
{
	int numOne = 0, numTwo = 0, temp;

	cin >> temp;
	numOne = reverse(temp);
	cin >> temp;
	numTwo = reverse(temp);

	cout << max(numOne, numTwo);

    return 0;
}

int reverse(int start) {
	int num = 0;
	
	while (start != 0) {
		num = (num * 10) + (start % 10);
		start /= 10;
	}

	return num;
}