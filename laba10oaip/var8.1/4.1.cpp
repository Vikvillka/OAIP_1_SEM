//#include <iostream> 
//#include <bitset>
//using namespace std;
//
//
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//    //вариант 8(2) 2.  (345, 234) Извлечь 3 бита числа А, начиная с позиции n, и вставить в число В, начиная с позиции m
//    char tmp[33];
//    int A, B, n, m;
//
//    cout << "Введите A: ", cin >> A;
//    cout << "Введите B: ", cin >> B;
//    cout << "Введите n: ", cin >> n;
//    cout << "Введите m: ", cin >> m;
//
//    _itoa_s(A, tmp, 2);
//    cout << "Число A: " << tmp << endl;
//
//    _itoa_s(B, tmp, 2);
//    cout << "Число B: " << tmp << endl;
//
//    B ^= 7 << m;
//    B |= ((A & (7 << n)) << n) << m;
//    _itoa_s(B, tmp, 2);
//
//    cout << "B=" << tmp << endl;
//    return 0;
//}

//int funk1() {
//    setlocale(LC_CTYPE, "Russian");
//    //вариант 8(1) 1.  Установить в ноль каждый третий значащий бит целого числа А
//    int pos = 0;
//    int A;
//    cout << "Введите А" << endl;
//    cin >> A;
//    cout << "Число: " << bitset<16>(A) << endl;
//    for (int i = 0; i < 6; i++)
//    {
//
//        bool new_bit = 0;
//        A = (A & ~(0x1 << pos)) | (new_bit << pos);
//
//        pos += 3;
//    }
//
//    cout << "Результат: " << bitset<16>(A) << endl;
//    return 0;
//}
//
//int main()
//{
//    //funk2();
//    funk1();
//}
#include<locale.h>
#include<stdio.h>

using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");

	int  a = 0;
	printf("введите число ");
	scanf_s("%d", &a);

	if ((a & 3) == 0) {
		printf("число %d  кратно четырем\n", a);
	}
	else {
		printf("число %d не кратно четырем\n", a);
	}
}
