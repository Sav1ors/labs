#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int i = 0; //global var

int Fib(int i); 
int main()
{
	int n = 0;
	while (n < 1) {
		cout << "Please, enter a natural digit > 1: " << endl;
		cin >> n;
		system("cls");
	}
	while (i < n)
	{
		cout << Fib(i) << endl; 
		i++; //chetchik
	}
	cin.get();
	cin.get();
}

int Fib(int i)
{
	if (i < 1) return 0; // if i = 0 or < then Fib(0)
	if (i == 1) return 1; // if i = 1 then Fib(1)
	return Fib(i - 1) + Fib(i - 2); // if i = 2 or > then Fib(i - 1) + Fib(i - 2);
}
