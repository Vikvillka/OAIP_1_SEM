#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float p=0, Q, v, n;
	cout << "Прибыль за 1 день ";
	cin >> p;
	cout << "Введите заданное значение Q ";
	cin >> Q;
	n = 1;
	while (p <= Q)
	{
		n++;
		p += p*3/100;
	}
	cout << "На " << n << " день выручка составит " << p << " рублей" << endl;
}
