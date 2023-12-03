#include <iostream>
#include <iomanip>


using namespace std;

//int f2() {
//    int m[32][32];
//    int n;
//    cout << "Введите n - ";
//    cin >> n;
//    cout << endl << "Матрица - " << endl;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            m[i][j] = 1 + (j + 1 + i + 1) % n;
//
//            cout << " " << *(*(m + i) + j);
//            if (j == n - 1)
//                printf("\n");
//        }
//    }
//    return 0;
//}
//
//int funk3()
//    {
//        /*Путем перестановки элементов квадратной вещественной матрицы добиться того, чтобы ее максимальный элемент находился в левом верхнем углу,
//        следующий по величине  в позиции (2, 2), следующий  в позиции (3, 3) и т. д., заполнив таким образом всю главную диагональ.*/
//
//        int n, i, j;
//        cout << "n: ";
//        cin >> n;
//        float** arr = new float* [n];
//        float max;
//        int i_max, j_max, count;
//        for (i = 0; i < n; ++i)
//        {
//            arr[i] = new float[n];
//            for (j = 0; j < n; ++j)
//            {
//                arr[i][j] = (rand() % 300);
//                cout << arr[i][j] << "  ";
//
//                if (((!i) && (!j)),  (arr[i][j] > max))
//                {
//                    max = arr[i][j];
//                    i_max = i;
//                    j_max = j;
//                }
//            }
//            cout << endl;
//        }
//        cout << endl;
//
//        arr[i_max][j_max] = arr[0][0];
//        arr[0][0] = max;
//        for (count = 1; count < n; ++count)
//        {
//            max = arr[0][1];
//            for (i = 0; i < n; ++i) {
//                for (j = 0; j < n; ++j) {
//                    if (((i != j),  ((i >= count) && (j >= count))) && (arr[i][j] > max))
//                    {
//                        max = arr[i][j];
//                        i_max = i;
//                        j_max = j;
//                    }
//                }
//            }
//            arr[i_max][j_max] = arr[count][count];
//            arr[count][count] = max;
//        }
//
//        for (i = 0; i < n; ++i)
//        {
//            for (j = 0; j < n; ++j)
//            {
//                cout << arr[i][j] << "  ";
//            }
//            cout << endl;
//        }
//        //return 0;
//    }
#include <iostream> 
#include <ctime>

    using namespace std;
    void funk1()
    {
        setlocale(LC_CTYPE, "rus");
        int n, m, buf;

        cout << "n: ";
        cin >> n;
        m = n * 2;

        int** arr = new int* [m];
        srand((unsigned)time(NULL));

        for (int i = 0; i < m; i++)
        {
            arr[i] = new int[m];
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                arr[i][j] = -10 + rand() % 20;
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }

        cout << endl;

        cout << "Новая матрица: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i < n && j < n) {
                    buf = arr[i][j];
                    arr[i][j] = arr[i + n][j + n];
                    arr[i + n][j + n] = buf;
                    cout << arr[i][j] << "\t";
                }
                else if (i < n && j >= n && j < m) {
                    buf = arr[i][j];
                    arr[i][j] = arr[i + n][j - n];
                    arr[i + n][j - n] = buf;
                    cout << arr[i][j] << "\t";
                }
                else
                    cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
    }


int main() {
    setlocale(LC_ALL, "RUSSIAN");
   
    //f2();
    //funk3();
    funk1();
}
