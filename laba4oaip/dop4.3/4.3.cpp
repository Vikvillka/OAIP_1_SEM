#include <iostream>
#include <iomanip> 
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b , p, q , r, s;
	cout << "������� ������� ������� (a,b)"<< endl;
	cin >> a;
	cin >> b;
	cout << "������� ������� 1 ���� (p,q)" << endl;
	cin >> p;
	cin >> q;
	cout << "������� ������� 2 ���� (r,s)" << endl;
	cin >> r;
	cin >> s;
    if ((a >= (p + r)) && (b >= q && b >= s))
		cout << " ����� ��������� 2 ���� ";
    else if ((a >= (p + s)) && (b >= q && b >= r))
		cout << "����� ��������� 2 ���� ";
    else if ((a >= (q + r)) && (b >= p && b >= s))
		cout << "����� ��������� 2 ���� ";
    else if ((a >= (q + s)) && (b >= p && b >= r))
		cout << "����� ��������� 2 ����" ;
    else
		cout << "������ ��������� 2 ����";
}