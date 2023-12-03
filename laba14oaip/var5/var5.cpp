#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int fun1()
{
	//В одномерном массиве, состоящем из n вещественных элементов, вычислить количество элементов массива, равных 0, и сумму элементов массива, расположённых после минимального элемента.
	float* ptr, sum = 0.0;
	int i, n, min = 0, null = 0;

	printf("Введите размер массива: \n");
	scanf_s("%d", &n);
	ptr = (float*)malloc(n);

	for (i = 0; i < n; i++)
	{
		printf("Введите элементы\n", i + 1);
		scanf_s("%f", ptr + i);

		if (ptr[i] == 0)
		{
			null++;
		}
	}

	printf("Число элементов = 0: %d", null);

	for (i = 1; i < n; i++)
	{
		if (ptr[min] > ptr[i])
		{
			sum = 0.0;
			min = i;
		}
		else
		{
			sum += ptr[i];
		}
	}

	printf("\nсумма после мин элементов = %.1f\n", sum);

	return 0;
	free(ptr);
}
#include<iostream>
#include<ctime>

using namespace std;

void fun2()
{
	//Дана целочисленная прямоугольная матрица. Определить количество столбцов, содержащих хотя бы один нуле-вой элемент и номер строки, в которой находится самая длинная серия одинаковых элементов.
	setlocale(LC_CTYPE, "Russian");
	int row, colum, null = 0, al = 0, al1 = 0, max = 0;

	cout << "Введите строки ";
	cin >> row;
	cout << "Введите колонки ";
	cin >> colum;

	srand(time(0));

	int** A = new int* [row];

	for (int i = 0; i < row; i++)
	{
		A[i] = new int[colum];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			A[i][j] = rand() % 10;
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	for (int j = 0; j < colum; j++)
	{
		for (int i = 0; i < row; i++)
		{
			if (A[i][j] == 0)
			{
				null++;
				break;
			}
		}
	}

	cout << "Количество столбцов, содержащих хотя бы один нулевой элемент = " << null << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			if (A[i][j] == A[i][j + 1])
			{
				al++;
			}
		}
		if (al > al1)
		{
			al1 = al;
			max = i;
		}
	}
	if (max > 0)
	{
		cout << "Строка, в которой находится самая длинная серия одинаковых элементов = " << (max + 1) << endl;
	}
}
void main() {
	setlocale(LC_ALL, "Russian");
	//fun1();
	fun2();
}