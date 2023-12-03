#include <iostream>

void main()
{
	using namespace std;
	double y, z, a = 2 * pow(10, -3), b = 8.5, n = 2, i = 1;
	while (i < 3.5)
	{
		y = sqrt(i * b - pow(b, 2) * a);
		z = y * tan(n / 4) - exp(1 + b);
		cout << "z = " << z << "\t y = " << y << endl;
		i = i + 0.5;
	}
}

