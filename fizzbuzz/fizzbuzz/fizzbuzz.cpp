// fizzbuzz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	int X, Y, N;
	while (cin >> X >> Y >> N) {
		for (int i = 1;i <= N;i++) {
			if ((i % X) == 0 && (i%Y) == 0) {
				cout << "\nFizzBuzz";
			}
			else if (i%X == 0) {
				cout << "\nFizz";
			}
			else if (i%Y == 0){
				cout << "\nBuzz";
			}
			else {
				cout <<"\n"<< i;
			}
		}
	}

    return 0;
}

