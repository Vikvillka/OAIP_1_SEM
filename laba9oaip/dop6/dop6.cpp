#include <stdlib.h>
#include <time.h>
#include<iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    const int SIZE = 100, MIN = -100, MAX = 100;
    using namespace std;
    int a[SIZE];
    int pair = 0, sum;
    int i;
    srand(time(NULL));
    for (i = 0; i < SIZE; ++i) {
        a[i] = MIN + rand() % (MAX + 1 - MIN);
    }
    for (i = 0; i < SIZE; ++i) {
        if (a[i]>0 && a[i++]>0)
            sum=a[i]+a[i++];
    }
    cout << "массив: \n";
    for (i = 0; i < SIZE; ++i) {
        cout << " " << a[i];
    }
    cout << "\nsum= " << sum;

    return 0;
}