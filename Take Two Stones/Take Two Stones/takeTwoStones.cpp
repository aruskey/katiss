// Take Two Stones.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include <iostream>
using namespace std;


int main()
{
	long a;
	while (cin >> a) {
		if (a % 2 == 1) {
			cout << "Bob";
		}
		else{
			cout << "Alice";
		}
	}

    return 0;
}

