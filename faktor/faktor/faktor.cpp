/*
Faktor
https://open.kattis.com/problems/faktor
*/

#include "stdafx.h"

#include <iostream>

int main()
{
	int a, i;
	std::cin >> a >> i;
	std::cout << a * (i - 1) + 1;

    return 0;
}