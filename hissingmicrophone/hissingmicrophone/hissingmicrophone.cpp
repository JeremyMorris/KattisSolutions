/*
Hissing Microphone
https://open.kattis.com/problems/hissingmicrophone
*/

#include "stdafx.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	cin >> input;

	if (input.find("ss") != -1) cout << "hiss";
	else cout << "no hiss";

    return 0;
}