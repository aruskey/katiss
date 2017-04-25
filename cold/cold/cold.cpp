// cold.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a;
	while (cin >> a) {
		int sum = 0;
		int inp;
		for(int i =0;i < a;i++){
			cin >> inp;
			if (inp < 0) {
				sum += 1;
			}
		}
		cout << sum;
	}
    return 0;
}

