#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
		setlocale(LC_ALL, "rus");
		using namespace std;
		const int N = 10;
		int A[N], c, * pA = A, n, min = 10;
		int B[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		cout << endl << "������� " << N << " ��������� �������" << endl;

		for (int i = 0; i < N; i++)
		{
			cin >> *pA;
			if (*pA != B[i])
			{
				if (*pA < min)
				{
					min = *pA - 1;
				}
			}

		}
		cout << "����������� �������: " << min;

		return 0;
	}

	/*
	setlocale(LC_ALL, "rus");
	int n, k = 0;
	int i, chto;
	cout << "������� ������ ������� A " << endl;
	cin >> n;
	int* A = new int[n];
	cout << "������ �" << endl;
	for (i = 0; i < n; i++)
	{
		A[i] = rand() % 199;
		cout << A[i] << " ";
	}

	int min = A[0];
	for (int i = 0; i < n; ++i)
	{
		if (A[i] < min)
			min = *(A + i);
	}
	int max = 1;
	for (int i = 0; i < n; ++i)
	{
		if (A[i] > max)
			max = *(A + i);
	}
	cout << "\n���������� ������������� ����������� ����� �� " << min << " �� " << max;
		cout << " = " << min+1;
	}*/
	/*for (int i = 0; i < n; ++i) {
		if (min + 1 != *(A + i))
			chto = *(A + i);
		cout << chto << "\n ";
	}
	*/
	
	//cout << "������� ������������������ �" << endl;
	//for (i = 0; i < n; i++)
	//{
	//	cin >> A[i];
	//}
	//int min = A[0];
	//for (int i = 0; i < n; ++i)
	//{
	//	if (A[i] < min )
	//	{
	//		if (A[i] + 1 != min + 1) {
	//			min = *(A+i);

	//		}
	//		
	//	}
	//}
	//cout << min;
	//
	////int Min = 0;   //����������� ����������� �����
	////for (int i = 0; i < n - 1; i++)
	////{
	////	if ((A[i + 1] - A[i]) > 1)
	////	{
	////		Min = A[i] + 1;
	////		break;
	////	}
	////}
	//
	//cout << "����������� ������������� ����������� ����� � ������������������ "<<min+1;



	