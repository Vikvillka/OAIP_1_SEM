#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	float i[3] = { 2,1,8.3 }, y, z, a = 2 * pow(10, -3), b = 8.5, n = 2;
	
	for (int c = 0; c < 3; c++)
	{   
		y = sqrt(i[c] * b - pow(b, 2) * a);
		z = y * tan(n / 4) - exp(1 + b);
		cout << "z = " << z << "\t y = " << y << endl;
    }
}
