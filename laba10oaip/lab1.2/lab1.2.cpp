//#include<locale.h>
//#include<stdlib.h>
//#include<stdio.h>
//#include <iostream>
//
//using namespace std;
//int input(const char* text) {
//	int num = 0;
//	printf(text);
//	scanf_s("%d", &num);
//	return num;
//}
//void printBinary(int value, const char* description) {
//	char buffer[33]{};
//	_itoa_s(value, buffer, 2);
//	printf("%s=%s\n", description, buffer);
//}
//int main() {
//	char tmp[33];
//	int tmpLength = 0;
//	setlocale(LC_CTYPE, "Russian");
//	int number = input("������� �����: ");
//	int bits = input("������� n: ");
//	int start = input("������� ��������� �������: ");
//	printBinary(number, "�����");
//	_itoa_s(number, tmp, 2);
//
//	for (int i = 0; i < size(tmp); i++)
//	{
//		if (tmp[i] != '�') {
//			tmpLength++;
//		}
//	}
//
//	int mask = ~(~(unsigned int(0)) << bits) << (start - bits) << (tmpLength - start);
//	printBinary(mask, "�����");
//	int result = number | mask;
//	printBinary(result, "���������");
//}



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
	

	

	int mask = ~(~(unsigned int(0)) << bits) << (start - bits) ;
	printBinary(mask, "�����");
	int result = number | mask;
	printBinary(result, "���������");
}

