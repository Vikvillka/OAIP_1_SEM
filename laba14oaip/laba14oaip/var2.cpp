#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	
#include <iostream>
#include <stdlib.h>
using namespace std;
void fun1()
{ 
	setlocale(LC_ALL, "rus");
	int *ptr, *a;
	int n, i;
	cout << "Введите количество элементов в массиве: " << endl;
	cin >> n;
	ptr = (int*)malloc(n * sizeof(int));   //выделение памяти
	for (int i = 0; i < n; i++)
	{
		cout<<"["<<i<<"] = ";
		cin >> ptr[i];
	}
	int B;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
			if (ptr[i] < 0) 
			{
				B = ptr[i];
			}
	}
	for (int i = 0; i < n; i++){
		if (B != ptr[i])
			k++;
		else
		break;
	
	}
	printf("\n такое число k: ");
	cout<< k;
	free(ptr);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 3

void matrix(int a[][n]) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
int fun2()
{
	
	int a[n][n], i, j, iteration;
	int temp, max_i, max_j;
	srand(time(NULL));
	int size=10, ** A;
	A = new int* [size];
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			a[i][j] = rand() % 20 - 10;
		}
	}
	printf("Матрица:\n");
	matrix(a);

	max_i = 0;
	max_j = 1;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (a[i][j] > a[max_i][max_j]) {
				max_i = i;
				max_j = j;
			}
		}
	}
	for (i = max_j; i; i--) {
		for (j = 0; j < n; j++) {
			temp = a[j][i];
			a[j][i] = a[j][i - 1];
			a[j][i - 1] = temp;
		}
		printf("Меняем колонки %d и %d:\n", i, i + 1);
		matrix(a);
	}
	for (i = max_i; i; i--) {
		for (j = 0; j < n; j++) {
			temp = a[i][j];
			a[i][j] = a[i - 1][j];
			a[i - 1][j] = temp;
		}
		printf("Меняем строки %d и %d:\n", i, i + 1);
		matrix(a);
	}
	for (int k = 0; k < size; k++) //освобождение памяти
		delete[] A[k];
	delete[] A;
	return 0;
}
void main(){
	setlocale(LC_ALL, "rus");
	//fun1();
	fun2();
}


