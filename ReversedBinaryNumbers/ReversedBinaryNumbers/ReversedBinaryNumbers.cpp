// ReversedBinaryNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	int in;
	while (cin >> in) {
		int i = 0;
		int sum=0;
		int digit[200] = { 0 };
		while (in > 1) {
			digit[i] = in % 2;
			in = in / 2;
			i++;
		}
		digit[i] = 1;
		for(int a = 0;a < (i+1);a++) {
			sum += long(pow(2, (i-a)))*digit[a];
		}
		cout << sum;
	}

    return 0;
}

