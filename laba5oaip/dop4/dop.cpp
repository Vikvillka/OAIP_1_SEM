#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	double n, i;
	cout << "������� ����� k" << endl;
	cin >> k;
	for (i = 0; i < 1000; i++)
	{
	    n = pow(2, i);
		if (i+1 == k) break;
	}
	cout << n << " - ������� ������������������ ��� ������� " << k << endl;
}