#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x, E;
	cin >> x;
	cin >> E;
	
	float s, result = 0;
	int f = 1;
	int k = 0;

	while (true) {
		s = (pow(-1, k + 1)) / (f * 2 * k + 1);
		if (k) {
			if (abs(s) < E) {
				break;
			}
			f *= k;
		}
		result += s;
		k++;
	}
	cout << result;


	cin.get();
	cin.get();
	return 0;
}