// pet.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int score;
	int max = 0;
	int sum=0;
	int jcount=0;
	int pcount = 0;
	int maxp;
	while(cin >> score){
		jcount++;
		sum += score;
		if (jcount == 4) {
			if (sum > max) {
				max = sum;
				maxp = pcount + 1;
			}
			sum = 0;
			jcount = 0;
			pcount++;
		}
		if (pcount == 5) {
			cout <<maxp<<" "<<max;
			jcount = 0;
			pcount = 0;
			sum = 0;
			max = 0;
		}
	}

    return 0;
}

