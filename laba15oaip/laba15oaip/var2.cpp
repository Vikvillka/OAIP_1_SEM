#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void matrix();            //прототип
void FinalSTR(char* str);
int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "Russian");
	int choice;
	do
	{
		cout << "Выберите вариант работы" << endl;
		cout << "1 - задание 1" << endl;//Ввести вещественные числа в массив А[n, m] (n, m > 0) и ко всем числам каждой строки  прибавить единицу.
		cout << "2 - задание 2" << endl;//. Дана строка. Все русские буквы привести к верхнему регистру, латинские  заменить символом «?». Вывести результат на экран.
		cout << "3 - выход" << endl;
		cin >> choice;
		switch (choice)
		{
		
		case 1:  matrix();
			break;
		case 2: 
			char finalstr[60];
			SetConsoleCP(1251);
			SetConsoleOutputCP(1251);
			cin >> finalstr;
			FinalSTR(finalstr);
			break;
		case 3:  break;
		}
	} while (choice != 3);
}
void matrix()
{
	int** A, row, col, i, j, m;
	cout << "Введите число строк матрицы ";
	cin >> row;
	cout << "Введите чиcло столбцов ";
	cin >> col;
	A = new int* [row];
	for (i = 0; i < row; i++)
		A[i] = new int[col];
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
		{
			cout << "Введите A[" << i << "],[" << j << "]= ";
			cin >> *(*(A + i) + j);
		}
	
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++) 
		{
			if (*(*(A + i) + j) != 0)
				A[i][j]++;
			else
				break;
		}
	cout << "Результат=" << endl;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++)
		{
			cout << *(*(A + i) + j) << " ";
		}
		cout << endl;
	}
		delete A[i];
	delete[] A;
}
void FinalSTR(char* str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'а' && str[i] <= 'я')
		{
			str[i] -= 32;
		}
	}
	for (int i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = '?';
	}
	cout << str<<endl;
}
