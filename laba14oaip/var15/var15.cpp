#include <iostream>

using namespace std;
//� ���������� �������, ��������� �� n ������������ ���������, ��������� ���������� ��������� �������, ������� ���������� ��������� ����� �, 
//� ����� ����� ��������� �������, ������������� ����� �� - �������� �������������� ��������.
void dop15() {
    setlocale(LC_ALL, "Rus");
    int* A; int i, n, c, count = 0, sum = 0;

    cout << "������� ������ �������, n<30 " << endl;
    cin >> n;

    if (!(A = (int*)malloc(n * sizeof(int))))
    {
        puts("Not enough memory");
        return;
    }
    for (i = 0; i < n; i++)
    {
        cout << "������� ������� ������� - " << i + 1 << endl;
        cin >> A[i];
    }
    printf("\n������: \n", i + 1);
    for (i = 0; i < n; i++)
        printf("%d ", *(A + i));

    cout << "������� ����� c= "; cin >> c;
    for (i = 0; i < n; i++) {
        if (A[i] < c) count++;
    }
    cout << "���������� ���������, ������� ������, ��� �������� ����� -- " << count << endl << endl;

    int posl = A[0];
    for (i = 0; i < n; i++) {
        if (A[i] < 0) posl = i + 1;
    }
    for (i = posl; i < n; i++) {
        sum = sum + A[i];
    }
    if (posl == n) sum = 0;
    cout << "����� ��������� ����� ���������� �������������� �������� sum= " << sum << endl << endl;
}
//���������, ��� �� ������ ������� �������� ���� �� ���� ������� �������. ���� ���, �� �������� �������� ���� ������������� ��������� ������� �� �������.
void dop15_2() {
    setlocale(LC_ALL, "Rus");

    int count1 = 0, i, j, k, count2 = 0;
    const int m = 4, n = 4;
    int a[m][n] = { {0,-2, 3,-1}, {1, 9, -1, 5}, {2,0, 0,6}, {4, -8, 5,-3} };


    cout << "������� �� ���������:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << *(*(a + i) + j) << " ";
        }
        cout << endl;
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] == 0) count1++;
        }
        if (count1 == 0) count2++;
        count1 = 0;
    }

    if (count2 != 0) {
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                if (a[i][j] < 0) a[i][j] = 0;
            }
        }
    }

    cout << "������� ����� ���������:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << *(*(a + i) + j) << " ";
        }
        cout << endl;
    }

}

void main()
{
    setlocale(LC_ALL, "Rus");

    //dop15();

    dop15_2();
}