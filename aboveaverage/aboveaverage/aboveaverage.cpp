/*
Above Average
https://open.kattis.com/problems/aboveaverage
*/
#include "stdafx.h"

#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
	int loops;
	string temp;
	cin >> loops;
	getline(cin, temp);

	for (int i = 0; i < loops; i++) {
		double numScores, sum = 0, average, aboveAverage = 0;
		string line;
		vector<double> scores;
		
		getline(cin, line);

		istringstream iss(line);

		string temp;
		iss >> temp;
		numScores = atoi(temp.c_str());

		for (int i = 0; i < numScores; i++) {
			int s;
			iss >> s;
			scores.push_back(s);
		}

		for (double s : scores) { sum += s; }
		average = sum / numScores;
		for (double s : scores) { if (s > average) aboveAverage++; }
		aboveAverage = (aboveAverage / numScores) * 100;

		cout << fixed << setprecision(3) << aboveAverage << "%" << endl;
	}
	return 0;
}