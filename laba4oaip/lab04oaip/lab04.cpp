#include <iostream>
#include <iomanip> 
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	double A, B, C;
	cout << "������� A ";
	cin >> A;
	cout << "������� � ";
	cin >> B;
	cout << "������� C ";
	cin >> C;
	if (A == B) 
		cout << "���� ���� ������ �����";
	else if (A==C)
		cout << "���� ���� ������ �����";
	else if (B==C)
		cout << "���� ���� ������ �����";
	else 
		cout << "��� ���� ������ �����";
}
