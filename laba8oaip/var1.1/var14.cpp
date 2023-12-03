#include <iostream>
void main()
{
	using namespace std;
	double h, x, s = 0, a = 1, b = 4, n = 200;
	h = (b - a) / n;
	x = a;
	for (x; x < (b - h); x += h)
	{
		s = s + h * (x * exp(4) + 4 + (x + h) * exp(4) + 4);
		x = x + h;
	}
	cout << "s = " << s << endl;
	
	int i = 1;
	double s1 = 0, s2 = 0, z;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	for (i; i < n; i++)
	{
		s2 += x * exp(4) + 4;
		x += h;
		s1 += x * exp(4) + 4;
		x += h;
	}
	z = (a * exp(4) + 4 + 4 * ((a + h) * exp(4) + 4) + 4 * s1 + 2 * s2 + b * exp(4) + 4) * h / 3;
	cout << "z = " << z << endl;
}


