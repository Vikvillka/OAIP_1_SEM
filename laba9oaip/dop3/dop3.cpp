#include <iostream>
#include <cstdlib>
#include <time.h>
int main()
{

    int ZeroMemory;
    int n;
    int A[10];   //исходник
    int BoolArr[10];   //массив регистраций
    int MinArr = 0; // минимальный существующий элемент
    int Min = 0;    //минимальный пропущенный элемент 

    for (int i = 0; i < n; i++)
        if (A[i] < MinArr)
            MinArr = A[i];

      //почистили массив
    for (int i = 0; i < n; i++)
        BoolArr[A[i] - MinArr] = true;
    int j = 0;
    while (BoolArr[j])
        j++;
    Min = j + MinArr;
}