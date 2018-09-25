#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n = 1;
	int k = 1;
	cout << "Enter a natural digit: ";
	cin >> n;
	while (k <= n) {
		k *= 2;
	}
	cout << k;



	cin.get();
	cin.get();
}