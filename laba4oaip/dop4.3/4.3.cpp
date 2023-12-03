#include <iostream>
#include <iomanip> 
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b , p, q , r, s;
	cout << "Введите размеры участка (a,b)"<< endl;
	cin >> a;
	cin >> b;
	cout << "Введите размеры 1 дома (p,q)" << endl;
	cin >> p;
	cin >> q;
	cout << "Введите размеры 2 дома (r,s)" << endl;
	cin >> r;
	cin >> s;
    if ((a >= (p + r)) && (b >= q && b >= s))
		cout << " Можно построить 2 дома ";
    else if ((a >= (p + s)) && (b >= q && b >= r))
		cout << "Можно построить 2 дома ";
    else if ((a >= (q + r)) && (b >= p && b >= s))
		cout << "Можно построить 2 дома ";
    else if ((a >= (q + s)) && (b >= p && b >= r))
		cout << "Можно построить 2 дома" ;
    else
		cout << "Нельзя построить 2 дома";
}