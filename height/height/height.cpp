/*
Height Ordering
https://open.kattis.com/problems/height
*/

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	int trials;
	int trialnum;
	int *heights = new int[20];

	cin >> trials;

	for (int z = 0; z < trials; z++)
	{
		cin >> trialnum;
		int sum = 0;

		for (int i = 0; i < 20; i++)
		{
			cin >> heights[i];
		}

		for (int i = 1; i < 20; i++)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (heights[j] > heights[i])
				{
					sum++;
				}
			}
		}

		cout << trialnum << " " << sum << endl;
	}

	return 0;
}