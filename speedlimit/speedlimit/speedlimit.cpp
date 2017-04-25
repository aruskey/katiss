// speedlimit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int start;
	int time, speed;
	
	while(cin >> start){
		if (start == -1) {
			break;
		}
			int sumD = 0;
			int past = 0;
			for (int i = 0;i < start;i++) {
				cin >> speed >> time;
				sumD += speed * (time - past);
				past = time;
			}
			cout << sumD << " miles\n";
	}

	return 0;
}

