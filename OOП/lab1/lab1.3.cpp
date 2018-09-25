#include "pch.h"
#include <iostream>
using namespace std;

double Cnk(int N, int K)
{
	double Sum = 1;
	for (int i = 1; i <= K; i++)
		Sum *= (N - i + 1) / float(i);
	return Sum;
}

/*double Cnk(int N, int K)
{
	return (if (N < K) ? 0 : !K ? 1 : double(N - K + 1) / K * Cnk(N, K - 1));
}*/
int main()
{
	int n, i, j;
	cin >> n;
	for (j = 0; j <= n; ++j, cout << endl)
		for (i = 0; i <= j; ++i)
			cout << Cnk(j, i) << " ";
	cin.get();
	cin.get();
	return 0;
}