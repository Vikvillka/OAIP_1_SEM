﻿#include <iostream>

int main() {
	using namespace std;
	setlocale(LC_CTYPE, "Russian");

	int  number, n, min = 1, * ukazatel_na_min;

	ukazatel_na_min = &min;

	/*Ввод натуральных чисел*/
	cout << "Введите количество = ";
	cin >> n;

	int* A = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "Введите число = ";
		cin >> number;
		if (number <= 0) {
			cout << "Не натуральное число" << endl;
			i -= 1;
		}
		A[i] = number;
	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++)
		{
			if (min == A[i]) {
				min += 1;
			}
		}
	}

	cout << *ukazatel_na_min;
}
