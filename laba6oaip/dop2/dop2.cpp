#include<iostream>
#include<conio.h>

void main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    int T = 0, a = 0, b = 0, c = 0, d = 0, R = 100;
    for (a; a <= 2; a++) {
        for (b = 0; b <= 5; b++) {
            for (c = 0; c <= 20; c++) {
                for (d = 0; d <= 50; d++) {
                    if (R == (a * 50 + b * 20 + c * 5 + d * 2))
                        T++;
                }
            }
        }
    }
    cout<<"способов набора - "<< T+1<<endl;
}