#include <iostream>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int a[6] = { 11, 13, 17, 19, 23, 31 }, b, x, y, z, y1, n = 0;
	do
	{
		b = a[n] * a[n];
		x = b / 100;
		y1 = b / 10;
		y = y1 % 10;
		z = b % 10;
		n++;
		if (x < y && y < z)
		{
			cout <<"Такое число -"<< b << endl;
		}
	} while (n < 6);
}