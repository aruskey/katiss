// trik.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char str[50] = { 0 };
	while (cin >> str) {
		int i = 0;
		int temp;
		char solu[3] = { 'A', 'B', 'C' };
		while(str[i] != 0){
			if (str[i] == 'A') {
				temp = solu[0];
				solu[0] = solu[1];
				solu[1] = temp;
			}
			else if (str[i] == 'B') {
				temp = solu[1];
				solu[1] = solu[2];
				solu[2] = temp;
			}
			else if (str[i] == 'C') {
				temp = solu[0];
				solu[0] = solu[2];
				solu[2] = temp;
			}
			i++;
		}
		i = 0;
		while (solu[i] != 'A') {
			i++;
		}
		cout << i+1;
	}

    return 0;
}

