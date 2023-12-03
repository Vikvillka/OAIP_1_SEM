#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    float a = 1, b = 3, n = 200, s = 0, h = 0, x = 0, s1 = 0, s2 = 0;
    int i = 1;
    h = (b - a) / n;
    x = a;
    do {
        s = s + h * ((pow(x, 3) - 1) + pow(x + h, 3) - 1) / 2;
        x += h;
    } while (x <= (b - h));
   
    cout << "s=" << s << endl;
   
    h = (b - a) / (2 * n);
    x = a + 2 * h;
    s1 = 0, s2 = 0;
    for (i = 1; i < n; i++)
    {
        s2 += (pow(x, 3) - 1);
        x += h;
        s1 += (pow(x, 3) - 1);
        x += h;
    }
    s = (h / 3) * ((pow(a, 3) - 1) + 4 * (pow((a + h), 3) - 1) + (4 * s1) + (2 * s2) + (pow(b, 3) - 1));
   
    cout << "s=" << s << endl;
}

