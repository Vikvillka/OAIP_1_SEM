#include <iostream>

using namespace std;

void main()
{
	//1.	������� 4 ���� ����� A, ������� � ������ �� ����� ������, � �������� �� � ����� B ������.
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, maskA = 480;
	int maskB = ~maskA >> 5;
	cout << "������ ����� = "; cin >> A;
	cout << "������ ����� = "; cin >> B;
	_itoa_s(A, tmp, 2); cout << "A = " << tmp << endl;
	_itoa_s(B, tmp, 2); cout << "B = " << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "����� ��� �: " << tmp << endl;
	_itoa_s((A & maskA) >> 5, tmp, 2);
	cout << "���������� ���� �: " << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 5)), tmp, 2);
	cout << " ��������� B = " << tmp << endl;
}

