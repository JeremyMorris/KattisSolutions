/*
Palindrome Substring
https://open.kattis.com/problems/palindromesubstring
*/

#include "stdafx.h"

#include <iostream>
#include <string>
#include <set>

using namespace std;

void findPalindromes(set<string> &palindromes, string s, int i, int j);

int main()
{
	set<string> palindromes;

	while (!cin.eof()) {
		palindromes.clear();

		string s;
		getline(cin, s);

		for (int i = 0; i < s.length(); i++) {
			findPalindromes(palindromes, s, i, i + 1);	// Even length palindromes
			findPalindromes(palindromes, s, i, i);		// Odd length palindromes
		}

		for (string palindrome : palindromes)
		{
			cout << palindrome << endl;
		}

		cout << endl;
	}

    return 0;
}

void findPalindromes(set<string> &palindromes, string s, int i, int j) {
	while (i >= 0 && j < s.length() && s[i] == s[j]) {
		if (i != j) palindromes.insert(s.substr(i, j - i + 1));
		i--;
		j++;
	}
}