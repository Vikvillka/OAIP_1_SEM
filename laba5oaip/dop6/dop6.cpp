#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");   
    long long k,  a = 0;
    cout << "������� �����: ";
    cin >> k;
    cout << endl;
    while (k > 0)
    {
        if (k % 10!= 3 && k % 10 != 6)
        {
            a *= 10;
            a += k % 10;
        }
        k /= 10;
    }
    cout << "���������� �����: ";
    while (a > 0)
    {
        cout << a % 10;
        a /= 10;
    }
    return 0;
}

