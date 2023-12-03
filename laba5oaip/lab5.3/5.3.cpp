#include <iostream>

void main()
{
	using namespace std;
	
	float j[4] = { 3, -6, 0.2, 2.8 }, a = 2 * pow(10, -3), b = 8.5, i = 2, y,z;
	int c ;
	for (c = 0; c < 4; c++);
	{ 
		do
	{
		y = sqrt(i * b - pow(b, 2) * a);
		z = y * tan(j[c] / 4) - exp(1 + b);
		cout << "z = " << z << "\t y = " << y << endl;
		i = i + 0.5;
	} 
	    while (i < 3);
	}
}


