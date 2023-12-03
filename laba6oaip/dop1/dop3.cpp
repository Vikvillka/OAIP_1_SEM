#include <iostream>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int n = 1;
	double a, b, C1, C2;
	cout << "¬ведите количество воды в 1 сосуде" << endl;
	cin >> C1;
	cout << "¬ведите количество воды во 2  сосуде" << endl;
	cin >> C2;
	do 
	{
		a = C1 / 2;
		C1 = C1 - a;
		C2 = C2 + a;
		b = C2 / 2;
		C2 = C2 - b;
		C1 = a + b;
		n++;
	} while (n < 12);
	cout<< "C1 = " << C1 << " C2 = " << C2 << endl;
}