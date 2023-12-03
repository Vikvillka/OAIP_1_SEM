#include<iostream>
void main()
{
	using namespace std;
	int i = 0;
	double x[5] = { -2, 6, 1.1, 2.7, 4 }, m = 5, z, a=0;
	for (i = 0; i < 5; i++)
    {
		a += pow((x[i] - 2), 2);
	}
	z = 8 + x[2] + a;
	cout << "z = " << z << endl;
	int j = 0, max=0;
	double x1[5] = { 9, 2.7,4.1,6,12 }, p, y=0, b=0;
	for (j = 0; j < 5; j++) 
	{
		if (max < x1[j]) 
		{
			max = x1[j];
		}
		y += pow(x1[j], 2) + 1;
	}
  p = y + max;
	cout << "p = " << p << endl;
}
