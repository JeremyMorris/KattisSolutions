// UNFINISHED :: TIME LIMIT EXCEEDED

/*
Palindromes
https://open.kattis.com/problems/palindromes
*/

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void findPalindromes(vector<string> &palindromes, string s, int i, int j);

int main()
{
	vector<string> palindromes;
	string s;
	string sub;
	int loops, start, end;
	getline(cin, s);
	cin >> loops;

	for (int i = 0; i < loops; i++) {
		palindromes.clear();
		cin >> start >> end;
		sub = s.substr(start - 1, end - start + 1);

		for (int i = 0; i < sub.length(); i++) {
			findPalindromes(palindromes, sub, i, i + 1);	// Even length palindromes
			findPalindromes(palindromes, sub, i, i);		// Odd length palindromes
		}

		cout << palindromes.size() << endl;
	}

	return 0;
}

void findPalindromes(vector<string> &palindromes, string s, int i, int j) {
	while (i >= 0 && j < s.length() && s[i] == s[j]) {
		palindromes.push_back(s.substr(i, j - i + 1));
		i--;
		j++;
	}
}