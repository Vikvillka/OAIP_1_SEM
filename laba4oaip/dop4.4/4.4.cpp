#include <iostream>
#include <iomanip> 
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	int r, d, D, a, r1;
	cout << "Введите r шара ";
	cin >> r;
	cout << "Введите диагонали ромба " << endl;
	cin >> d ;
	cin >> D ;
    a = sqrt(d * d / 4 + D * D / 4);
    r1 = d * D / 4 / a;
	if (r <= r1)
		cout << "Шар с радиусом " << r << " пройдёт через ромб";
	else
		cout << "Шар с радиусом " << r << " не пройдёт";
}