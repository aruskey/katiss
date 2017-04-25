// oddities.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num;
	int tester[20];
	while (cin >> num) {
		for (int i = 0;i <num;i++) {
			cin >> tester[i];
		}
		for (int i = 0;i < num;i ++) {
			if ((tester[i] % 2) == 0) {
				cout << tester[i] << " is even\n";
			}
			else {
				cout << tester[i] << " is odd\n";
			}
		}
	}
    return 0;
}

