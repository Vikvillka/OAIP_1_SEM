//#include <iostream> 
//#include <bitset>
//using namespace std;
//
//
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//    //������� 8(2) 2.  (345, 234) ������� 3 ���� ����� �, ������� � ������� n, � �������� � ����� �, ������� � ������� m
//    char tmp[33];
//    int A, B, n, m;
//
//    cout << "������� A: ", cin >> A;
//    cout << "������� B: ", cin >> B;
//    cout << "������� n: ", cin >> n;
//    cout << "������� m: ", cin >> m;
//
//    _itoa_s(A, tmp, 2);
//    cout << "����� A: " << tmp << endl;
//
//    _itoa_s(B, tmp, 2);
//    cout << "����� B: " << tmp << endl;
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
//    //������� 8(1) 1.  ���������� � ���� ������ ������ �������� ��� ������ ����� �
//    int pos = 0;
//    int A;
//    cout << "������� �" << endl;
//    cin >> A;
//    cout << "�����: " << bitset<16>(A) << endl;
//    for (int i = 0; i < 6; i++)
//    {
//
//        bool new_bit = 0;
//        A = (A & ~(0x1 << pos)) | (new_bit << pos);
//
//        pos += 3;
//    }
//
//    cout << "���������: " << bitset<16>(A) << endl;
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
	printf("������� ����� ");
	scanf_s("%d", &a);

	if ((a & 3) == 0) {
		printf("����� %d  ������ �������\n", a);
	}
	else {
		printf("����� %d �� ������ �������\n", a);
	}
}
