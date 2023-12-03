#include <stdlib.h>
#include <time.h>
#include<iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    const int SIZE = 50, MIN=0, MAX=10;
    using namespace std;
    int a[SIZE];
    int pair = 0;
    int i;
    srand(time(NULL));
    for (i = 0; i < SIZE; ++i) {
        a[i] = MIN + rand() % (MAX + 1 - MIN);
    }
    for (i = 1; i < SIZE; ++i) {
        if (a[i - 1] == a[i])
            ++pair;
    }
    cout <<"массив: \n";
    for (i = 0; i < SIZE; ++i) {
        cout << " " << a[i];
    }
    cout << "\nпар= " << pair;

    return 0;
}