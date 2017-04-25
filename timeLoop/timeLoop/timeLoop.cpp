// timeLoop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	int a;
	while (cin >> a) {
		for (int i = 1; i < a+1; i++) {
			cout << i << " Abracadabra\n";
		}
	}
	return 0;
}

