// carrots.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	char str[1000];
	while (cin >> a >> b) {
		while (a > 0) {
			cin >> str;
			a--;
		}
		cout << b;
	}

	return 0;
}