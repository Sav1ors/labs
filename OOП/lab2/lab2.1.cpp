//77 (B)
#include "pch.h"
#include <iostream>
#include <cmath> 
using namespace std;

void lab_77(int a);
int i = 1;

int main()
{
	int n;
	cout << "Enter a natural digit: ";
	cin >> n;
	lab_77(n);
	return 0;
}

void lab_77(int a) {
	double K = 1;
	while (i <= a) {
		double k = (1 + (1 / pow(i, 2)));
		i++;
		K *= k;
	}
	cout << K;
	cin.get();
	cin.get();
}