#include <iostream>
#include <cstdlib>
#include <time.h>
int main()
{

    int ZeroMemory;
    int n;
    int A[10];   //��������
    int BoolArr[10];   //������ �����������
    int MinArr = 0; // ����������� ������������ �������
    int Min = 0;    //����������� ����������� ������� 

    for (int i = 0; i < n; i++)
        if (A[i] < MinArr)
            MinArr = A[i];

      //��������� ������
    for (int i = 0; i < n; i++)
        BoolArr[A[i] - MinArr] = true;
    int j = 0;
    while (BoolArr[j])
        j++;
    Min = j + MinArr;
}