#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

const int index = 100;
const int jndex = 100;
int main()
{
	int n = 1000, max = 1;
	int a[index][jndex];
	while (n > 100) {
		cout << "Please, enter a natural digit < 100: " << endl;
		cin >> n;
	}
	srand((time(0)));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			a[i][j] = rand() % 9 + 1;
		}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << ' ';
		cout << endl;
	}

	for (int j = 0; j < n; j++)
		for (int i = j; i < n; i++) {
			if (a[i][j] > max) {
				max = a[i][j];
			}
		}

	cout << max << endl;

	cin.get();
	cin.get();
	return 0;
}