/*
Permuted Arithmetic Sequence
https://open.kattis.com/problems/permutedarithmeticsequence
*/

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isArithmetic(vector<int> nums);
bool isPermuted(vector<int> nums, vector<int> unordered);

int main()
{
	vector<int> nums, unordered;
	int loops, seqSize, temp;
	bool arithmetic, permuted;

	cin >> loops;
	for (int i = 0; i < loops; i++) {
		nums.clear();
		unordered.clear();
		cin >> seqSize;
		for (int x = 0; x < seqSize; x++) {
			cin >> temp;
			nums.push_back(temp);
			unordered.push_back(temp);
		}

		sort(nums.begin(), nums.end());
		arithmetic = isArithmetic(nums);
		permuted = isPermuted(nums, unordered);

		if (!arithmetic) { cout << "non-"; }
		else if (permuted) { cout << "permuted "; }
		cout << "arithmetic" << endl;
	}

    return 0;
}

bool isArithmetic(vector<int> nums) {
	int diff = nums[0] - nums[1];	
	for (int i = 0; i < nums.size() - 1; i++) {
		if (nums[i] - nums[i + 1] != diff) { return false; }
	}
	return true;
}

bool isPermuted(vector<int> nums, vector<int> unordered) {
	int diff = abs(nums[0] - nums[1]);
	for (int i = 0; i < nums.size() - 1; i++) {
		if (abs(unordered[i] - unordered[i+1]) != diff) { return true; }
	}
	return false;
}