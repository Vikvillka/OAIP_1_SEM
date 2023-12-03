#include<locale.h>
#include<stdlib.h>
#include<stdio.h>
//Ввести целое число A.Извлечь 3 бита числа A, 
//начиная со второго по счету справа, и вставить их 
//в число B, начиная с первого бита по счету справа.

using namespace std;
int input(const char* text) {
	int num = 0;
	printf(text);
	scanf_s("%d", &num);
	return num;
}
void printBinary( const char* description ,int value) {
	char buffer[33]{};
	_itoa_s(value, buffer, 2);
	printf("%s=%s\n", description, buffer);
}
int main() {
	setlocale(LC_CTYPE, "Russian");

	int maskA = 0b111 << 2;
	int maskB = ~maskA ;
	int a = input("Введите число a: ");
	int b = input("Введите число b: ");
	printBinary("a = ", a);
	printBinary("b = ", b);

	printBinary("Маска для a = ", maskA);
	printBinary("Маска для b = ", maskB);

	int dedicated = (a & maskA)>>1;
	int cleaned = b & maskB;
	int result = cleaned | dedicated;
	printBinary("Выделенные биты a = ", dedicated);
	printBinary("Выделенные биты b = ", cleaned);
	printBinary("Результат = ", result);
}


