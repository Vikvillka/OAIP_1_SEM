#include <iostream>
#include <iomanip> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A, B, C;
	cout << "Введите A ";
	cin >> A;
	cout << "Введите В ";
	cin >> B;
	cout << "Введите C ";
	cin >> C;
    if (A % 5==0 && B % 5==0 && C % 5==0)
		cout << "сумма = "<< A+B+C;
	else if (A % 5 == 0 && B % 5 == 0)
		cout << "сумма = "<< A + B;
	else if (A % 5 == 0 && C % 5 == 0)
		cout << "сумма = "<< A + C;
	else if (B % 5 == 0 && C % 5 == 0)
		cout << "сумма = "<< B + C;
	else
		cout << "ERROR";
}