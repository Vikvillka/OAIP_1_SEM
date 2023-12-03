#include <iostream>
#include <cstdlib>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));
	setlocale(LC_ALL, "rus");
	using namespace std;
	int sum, *pab;
	int n, nB;
	int i;
	cout << "Введите размер массива A и B " << endl;
	cin >> n;
	int *A=new int[n];
	cout << "Массив А" << endl;
	for (i = 0; i < n; i++)
	{
		A[i] = rand() % 10;
		cout << A[i] << " ";
	}
	cout <<"\nМассив B" << endl;
	int *B = new int[n];
	for (i = 0; i < n; i++)
	{
		B[i] = rand() % 10;
		cout << B[i] << " ";
	}
	cout << "\nСумма элементов массивов" << endl;
	for (i = 0; i < n; i++)
	{
		sum = *(A+i) + *(B+i);
		cout << sum << " ";
	}
	
}
