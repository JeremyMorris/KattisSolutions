/*
Happy Happy Prime Prime
https://open.kattis.com/problems/happyprime
*/

#include "stdafx.h"

#include<iostream>

using namespace std;

int main()
{
	bool *sieve = new bool[10001];
	for (int i = 0; i < 10001; i++)
	{
		sieve[i] = ((i % 2) == 1);
	}
	for (int i = 3; i < 10001; i++)
	{
		if (sieve[i])
		{
			for (int j = i * 2; j < 10001; j += i)
			{
				sieve[j] = false;
			}
		}
	}
	sieve[1] = false;
	sieve[2] = true;

	int trials;
	int trialnum;
	int num;
	int orignum;
	cin >> trials;
	for (int z = 0; z < trials; z++)
	{
		cin >> trialnum;
		cin >> num;
		orignum = num;
		bool isPrime = sieve[num];

		if (!isPrime)
		{
			cout << trialnum << " " << num << " NO" << endl;
			continue;
		}

		bool happy = false;
		int count = 1;

		while (!happy)
		{
			if (count >= 1000)
			{
				break;
			}
			if (num == 1)
			{
				happy = true;
			}
			int tempnum = num;
			num = 0;
			while (tempnum > 0)
			{
				num += (tempnum % 10)*(tempnum % 10);
				tempnum /= 10;
			}
			count++;
		}

		if (happy)
		{
			cout << trialnum << " " << orignum << " YES" << endl;
		}
		else
		{
			cout << trialnum << " " << orignum << " NO" << endl;
		}
	}

	return 0;
}