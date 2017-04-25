// pot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	int a;
	int exp;
	while (cin >> a) {
		int p[10] = { 0 };
		int sum = 0;
		for (int i = 0;i < a; i++) {
			cin >> p[i];
			exp = p[i] % 10;
			if (exp != p[i]){
				sum += pow(p[i]/10,exp);
			}
		}
		cout << sum;
	}

    return 0;
}

