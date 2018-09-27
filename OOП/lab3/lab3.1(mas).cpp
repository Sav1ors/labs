
#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;
const int i = 100;
const int j = 100;

int main()
{
	int n = 1000, k = 0, m = 0, a[i][j];
	while (n > 100) {
		cout << "Please, enter a natural digit < 100: " << endl;
		cin >> n;
		system("cls");
	}
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j) {
			a[i][j] = k;
			k++;
			if (a[i][j] > 0) {
				m++;
			}
		}

	/*for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j) {
			if (a[i][j] > 0) {
				m++;
			}
		}*/

	cout << m << endl;

	cin.get();
	cin.get();
	return 0;
}