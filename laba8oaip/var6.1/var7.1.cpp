#include <iostream>
int main()
{
    using namespace std;
    
    double a1 = 5, b1 = 11, n1 = 200, S1 = 0, h1 = 0, x1 = 0, s3 = 0, s4 = 0;
    h1 = (b1 - a1) / n1;
    x1 = a1;
    do
    {
        S1 = S1 + (h1 * ((exp(x1) + 2) + (exp(x1 + h1) + 2))) / 2;
        x1 = x1 + h1;
    } while
        (x1 < (b1 - h1));
   
    cout << "s= " << S1 << endl;

    int i;
    double h;
    h1 = (b1 - a1) / (2 * n1);
    x1 = a1 + 2 * h1;
    for (i = 1; i < n1; i++) {
        s3 += (exp(x1) + 2);
        x1 += h1;
        s4 += (exp(x1) + 2);
        x1 += h1;
    }
    S1 = (h1 / 3.0) * ((exp(a1) + 2) + 4 * (exp(a1 + h1) + 2) + 4 * s3 + 2 * s4 + (exp(b1) + 2));
    
    cout << "z= " << S1 <<endl;
}