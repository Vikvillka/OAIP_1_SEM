#include<iostream>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int n, n1;
	cout << "введите сколько элементов в n последовательности " << endl;
	cin >> n1;
	double x = 0;
	for(n=1; n<=n1; n++)
	{
		if (n % 2 == 0) 
		{
			x += n;
	    }
	}
	cout<< "сумма= " << x << endl;
}