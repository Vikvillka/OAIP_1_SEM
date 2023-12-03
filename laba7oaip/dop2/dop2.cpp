#include<iostream>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int n, a[5], i;
	for (int n = 0; n < 5; n++)
	{
		cout << "введите n последовательность " << endl;
		cin >> a[n];
	}
	for (int n = 4; n >= 0; n--)
	{
		if (a[n] < 0)
		{
			cout << "Номер последнего отрицательного элемента - " << n+1 << endl; break;
		}
	}
}