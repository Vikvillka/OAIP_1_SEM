#include <iostream>

void main()
{
    using namespace std;
    int n, a= 2;
    cout << "N = ";
    cin >> n;
    cout << n << " = 1";
    while (n > 1)
    {
        while (n % a == 0)
        {
            cout << " * " << a;
            n = n / a;
        }
        a++;
    }
}