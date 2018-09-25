#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int k = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			if (sin((pow(i, 2) + pow(j, 2)) / n) > 0)
				++k;

	cout << "positive element = " << k;

	cin.get();
	cin.get();
	return 0;
}