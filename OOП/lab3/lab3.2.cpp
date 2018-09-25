#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

const int n = 10;

int main()
{
	int h[n][n];
	
	// Заполняем матрицу случайными числами.
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			h[i][j] = rand() % 20 - 10;

	int sum[n], k = 0;  // sum - Массив, в котором будет хранится суvма нужных строк. k -  кол-во строк с эл. на главной диагонале, которые меньше нуля. 
	for (int i = 0; i < n; i++)
		sum[i] = 0;

		for (int i = 0; i < n; i++)
		{
			if (h[i][i] < 0)  // Если эл. на главной диагонале меньше ноля:
			{
				k++;  // Увеличить кол-во k на 1.
				for (int j = 0; j < n; j++)
					sum[i] += h[i][j];  // Просуммировать все эл. строки в i-й эл. массива суммы.
			}
		}

	// Вывод матрицы и результата.
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(3) << h[i][j] << ' ';
		cout << endl;
	}

	for (int i = 0; i < k; i++)
	{
		if (h[i][i] < 0)
			cout << "Sum of row #" << i << " = " << sum[i] << endl;
	}

	cin.get();
	cin.get();
	return 0;
}