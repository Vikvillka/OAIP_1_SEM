//#include <iostream> 
//#include <bitset>
//using namespace std;
//
//int main() {
//    setlocale(LC_CTYPE, "Russian");
//    //������� 8(1) 1.  ���������� � ���� ������ ������ �������� ��� ������ ����� �
//    int pos = 0;
//    int A;
//    cout << "������� �" << endl;
//    cin >> A;
//    cout << "�����: " << bitset<8>(A) << endl;
//    for (int i = 0; i < 6; i++)
//    {
//        bool new_bit = 0;
//        A = (A & ~(0x1 << pos)) | (new_bit << pos);
//        pos += 3;
//    }
//    cout << "���������: " << bitset<8>(A>>1) << endl;
//    return 0;
//}
#include<locale.h>
#include<stdlib.h>
#include<stdio.h>
#include <iostream>

using namespace std;
int input(const char* text) {
	int num = 0;
	printf(text);
	scanf_s("%d", &num);
	return num;
}
void printBinary(int value, const char* description) {
	char buffer[33]{};
	_itoa_s(value, buffer, 2);
	printf("%s=%s\n", description, buffer);
}
int main() {
	//char tmp[33];
	//int tmpLength = 0;

	setlocale(LC_CTYPE, "Russian");

	int number = input("������� �����: ");
	int bits = input("������� n: ");
	int start = input("������� ��������� �������: ");
	printBinary(number, "�����");




	int mask = ~(~(unsigned int(0)) << bits) << start-1;
	printBinary(mask, "�����");
	int result = number | mask;
	printBinary(result, "���������");
}