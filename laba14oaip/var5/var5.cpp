#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int fun1()
{
	//� ���������� �������, ��������� �� n ������������ ���������, ��������� ���������� ��������� �������, ������ 0, � ����� ��������� �������, ������������ ����� ������������ ��������.
	float* ptr, sum = 0.0;
	int i, n, min = 0, null = 0;

	printf("������� ������ �������: \n");
	scanf_s("%d", &n);
	ptr = (float*)malloc(n);

	for (i = 0; i < n; i++)
	{
		printf("������� ��������\n", i + 1);
		scanf_s("%f", ptr + i);

		if (ptr[i] == 0)
		{
			null++;
		}
	}

	printf("����� ��������� = 0: %d", null);

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

	printf("\n����� ����� ��� ��������� = %.1f\n", sum);

	return 0;
	free(ptr);
}
#include<iostream>
#include<ctime>

using namespace std;

void fun2()
{
	//���� ������������� ������������� �������. ���������� ���������� ��������, ���������� ���� �� ���� ����-��� ������� � ����� ������, � ������� ��������� ����� ������� ����� ���������� ���������.
	setlocale(LC_CTYPE, "Russian");
	int row, colum, null = 0, al = 0, al1 = 0, max = 0;

	cout << "������� ������ ";
	cin >> row;
	cout << "������� ������� ";
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

	cout << "���������� ��������, ���������� ���� �� ���� ������� ������� = " << null << endl;

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
		cout << "������, � ������� ��������� ����� ������� ����� ���������� ��������� = " << (max + 1) << endl;
	}
}
void main() {
	setlocale(LC_ALL, "Russian");
	//fun1();
	fun2();
}