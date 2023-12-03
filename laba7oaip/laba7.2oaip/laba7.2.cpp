#include<iostream>
void main()
{
	using namespace std;
	int i;
	double  n = 5, d = 12.5 * pow(10, -4), x = 0, a[5] = { 0.8, 4, -7, 2, 0.91 }, h;
	for (i = 0; i < 5; i++)
	{
		x += pow(a[i], 2);
	}
	h = d + x;
	cout << "h = " << h << endl;
    
	int j, z = 0;
	double x1[5] = { 1, 2.7, 4.7, 6, 10 } , y=1, l=0;
	for (j = 0; j < 5; j++)
	{
		if (z < x1[j]) 
		{
			z = x1[j];
		}
	   l+= pow(x1[j],2);
	}
	y = z *l;
	
	cout << "y = " << y << endl;
}


 