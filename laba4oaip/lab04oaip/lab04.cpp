#include <iostream>
#include <iomanip> 
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	double A, B, C;
	cout << "Введите A ";
	cin >> A;
	cout << "Введите В ";
	cin >> B;
	cout << "Введите C ";
	cin >> C;
	if (A == B) 
		cout << "Есть пара равных чисел";
	else if (A==C)
		cout << "Есть пара равных чисел";
	else if (B==C)
		cout << "Есть пара равных чисел";
	else 
		cout << "Нет пары равных чисел";
}
