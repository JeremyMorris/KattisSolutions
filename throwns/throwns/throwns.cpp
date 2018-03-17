/*
Game of Throwns
https://open.kattis.com/problems/throwns

UNFINISHED: WRONG ANSWER
*/

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main()
{
	vector<string> orders;
	stack<int> lastActions;
	string temp;
	int numStudents, numOrders, numUndos, lastAction, currPos = 0;

	lastActions.push(0);
	cin >> numStudents >> numOrders;
	for (int i = 0; i < numOrders; i++) {
		cin >> temp;
		orders.push_back(temp);
		if (temp.compare("undo") == 0) {
			cin >> temp;
			orders.push_back(temp);
		}
	}

	for (int i = 0; i < orders.size(); i++) {
		if (orders[i].compare("undo") == 0) { 
			numUndos = atoi(orders[i + 1].c_str());
			for (int x = 0; x < numUndos; x++) {
				if (lastActions.size() == 0) { break; }
				lastAction = lastActions.top();
				lastActions.pop();

				currPos -= lastAction;
				if (currPos < 0) { currPos += numStudents; }
			}
			i++;
		}
		else {
			currPos += atoi(orders[i].c_str());
			lastAction = atoi(orders[i].c_str());
			lastActions.push(lastAction);
		}

		currPos = currPos % numStudents;
	}

	cout << currPos;

    return 0;
}