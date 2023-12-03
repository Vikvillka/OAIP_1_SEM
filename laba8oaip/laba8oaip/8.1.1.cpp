#include <iostream>
void main()
{
	using namespace std;
	int b = 7, n = 200, i;
	double h, s = 0;
	double a = 4, h1, x, s1 = 0, s2 = 0, z;
	//metod 1
	h = (b - a) / n;
	x = a;
	do 
	{
		s += h * (pow(cos(x), 3) + pow(cos(x + h), 3)) / 2;
		x += h;
	}while (x <= (b - h));
	cout << "s = " << s << endl;
	
	//metod 2
	h1 = (b - a) / (2 * n);
	x = a + 2 * h1;
	for (i = 1; i < n; i++) 
	{
		s2 += pow(cos(x), 3);
		x += h1;
		s1 += pow(cos(x), 3);
		x += h1;
	}
	z = h1 / 3 * (pow(cos(a), 3) + 4 * pow(cos(a + h), 3) + 4 * s1 + 2 * s2 + pow(cos(b), 3));
	cout << "z= " << z << endl;
}