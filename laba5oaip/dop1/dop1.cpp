#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float p=0, Q, v, n;
	cout << "������� �� 1 ���� ";
	cin >> p;
	cout << "������� �������� �������� Q ";
	cin >> Q;
	n = 1;
	while (p <= Q)
	{
		n++;
		p += p*3/100;
	}
	cout << "�� " << n << " ���� ������� �������� " << p << " ������" << endl;
}
