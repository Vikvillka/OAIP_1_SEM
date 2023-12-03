#include<iostream>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
    int s = 0;
    for (int n = 0; n < 200; n += 3)
        s += n;
    cout << "сумма= " << s;
}