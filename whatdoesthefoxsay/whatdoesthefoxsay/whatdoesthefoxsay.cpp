/*
What does the fox say?
https://open.kattis.com/problems/whatdoesthefoxsay
*/

#include "stdafx.h"

#include <sstream>
#include <iostream>
#include <list>

using namespace std;

int main()
{
	int loops;
	string x;
	cin >> loops;
	getline(cin, x);

	for (int i = 0; i < loops; i++) {
		string temp, line;
		list<string> foxWords;
		list<string> otherAnimals;
		bool endAnimals = false;

		getline(cin, line);
		istringstream iss(line);
		while (!iss.eof()) {
			iss >> temp;
			foxWords.push_back(temp);
		}
		
		while (!endAnimals) {
			getline(cin, line);
			istringstream stream(line);
			stream >> temp;
			stream >> temp;
			if (temp.compare("does") == 0) { endAnimals = true; }
			else {
				stream >> temp;
				otherAnimals.push_back(temp);
			}
		}

		for (string s : otherAnimals) {
			foxWords.remove(s);
		}
		
		for (string s : foxWords) {
			cout << s << " ";
		}

		cout << endl;
	}

    return 0;
}