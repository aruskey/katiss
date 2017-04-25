// tarifa.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int X, N;
	while (cin >> X >> N) {
		int monSum;
		int sum = X;
		for (int i = 0;i < N;i++) {
			cin >> monSum;
			sum += (X - monSum);
		}
		cout << (sum);
	}

    return 0;
}

