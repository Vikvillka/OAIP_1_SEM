#include <iostream>
using namespace std;
int main()
{
	//1.	��������� ������� �������� ���������, ������ �� ���� ����� �.
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int long a;
	cin >> a;
	_itoa_s(a, tmp, 2);
	if ((a & 1) == 0) cout << "����� ������ ����" << endl;
	else cout << "����� �� ������ ����" << endl;
}