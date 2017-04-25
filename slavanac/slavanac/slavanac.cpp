// slavanac.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b) {
		if (b > 44) {
			cout << a << " " << b - 45;
		}
		else{
			if (a != 0) {
				cout << a - 1 << " " << (15 + b);
			}
			else {
				cout << 23 << " " << (15 + b);
			}
		}
	}
	return 0;

}
