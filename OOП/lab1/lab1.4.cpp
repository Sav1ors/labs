#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	float a, a2, a5, a17;
	cin >> a;
	a2 = a * a; //1 a^2
	a5 = a2 * a2 * a; //2 a^5
	a17 = a5 * a5 * a5 * a2; //3 a^17
	cout << "a^2 = " << a2 << endl;
	cout << "a^5 = " << a5 << endl;
	cout << "a^17 = " << a17 << endl;
	


	cin.get();
	cin.get();
}