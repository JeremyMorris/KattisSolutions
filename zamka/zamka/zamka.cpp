/*
Zamka
https://open.kattis.com/problems/zamka
*/

#include "stdafx.h"

#include <iostream>

using namespace std;

bool digitSum(int num, int goal);

int main()
{
	int low, high, goal;
	cin >> low >> high >> goal;

	for (int i = low; i <= high; i++) {
		if (digitSum(i, goal)) {
			cout << i << endl;
			break;
		}
	}

	for (int i = high; i >= low; i--) {
		if (digitSum(i, goal)) {
			cout << i << endl;
			break;
		}
	}

    return 0;
}

bool digitSum(int num, int goal) {
	int i = 0;
	
	while (num > 0) {
		i += num % 10;
		num /= 10;
	}

	return (i == goal);
}