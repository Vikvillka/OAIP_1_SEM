#include <iostream>
#include <iomanip> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A, B, C;
	cout << "������� A ";
	cin >> A;
	cout << "������� � ";
	cin >> B;
	cout << "������� C ";
	cin >> C;
    if (A % 5==0 && B % 5==0 && C % 5==0)
		cout << "����� = "<< A+B+C;
	else if (A % 5 == 0 && B % 5 == 0)
		cout << "����� = "<< A + B;
	else if (A % 5 == 0 && C % 5 == 0)
		cout << "����� = "<< A + C;
	else if (B % 5 == 0 && C % 5 == 0)
		cout << "����� = "<< B + C;
	else
		cout << "ERROR";
}