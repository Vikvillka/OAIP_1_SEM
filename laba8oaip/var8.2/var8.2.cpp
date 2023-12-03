#include <iostream>
void main()
{
    using namespace std;
    float x2, e = 0.0001, a = 1, b = 3;

    do {
        x2 = (a + b) / 2;
        if ((pow(x2, 3) + x2 - 4) * (pow(a, 3) + a - 4) <= 0)
            b = x2;
        else
            a = x2;
    } while (abs(a - b) > 2 * e);

    cout << "x= " << x2 << endl;
}