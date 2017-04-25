// bijele.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int pieces[5];
	for (int i = 0; i < 6;i++) {
		cin >> pieces[i];
	}
	pieces[0] = 1 - pieces[0];
	pieces[1] = 1 - pieces[1];
	pieces[2] = 2 - pieces[2];
	pieces[3] = 2 - pieces[3];
	pieces[4] = 2 - pieces[4];
	pieces[5] = 8 - pieces[5];
	//cout << pieces[0] + " " << pieces[1] + " " << pieces[2] + " " << pieces[3] + " " << pieces[4] + " " << pieces[5];

    return 0;
}

