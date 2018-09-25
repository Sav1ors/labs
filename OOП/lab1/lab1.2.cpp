#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int i, j = 0;
	cout << "Enter a number less than 100:" << endl;
	cin >> i;

	while (i > 100)
		{
		cout << "Enter a number less than 100:" << endl;
		cin >> i;
		}
	do
		{
			j = j + i % 10;
			i = i / 10;
		} while (i);
	cout << j;
	return 0;
}