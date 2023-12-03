#include <iostream>

int main()
{
	
	//2.	Установить в 1 n битов в числе А влево от позиции p, заменить ими m битов числа В, начиная с пози-ции q.
	setlocale(LC_CTYPE, "Russian");
	int n, p, A, B, q;
	std::cout << "число A: "; std::cin >> A;
	std::cout << "число B: "; std::cin >> B;
	std::cout << "количество битов n: "; std::cin >> n;
	std::cout << "позиция p в числе А: "; std::cin >> p;
	std::cout << "позиция q в числе В: "; std::cin >> q;
	int maskA = 0, maskB = 0;
	for (int i = 1; i <= n; i++) {
		maskA <<= 1;
		maskA++;
		maskB <<= 1;
		maskB++;
	}
	maskA <<= p;
	maskB <<= q;
	char tmp[255];
	_itoa_s(A, tmp, 2); std::cout << "A = \t\t" << tmp << "\n";
	_itoa_s(B, tmp, 2); std::cout << "B = \t\t" << tmp << "\n";
	_itoa_s(maskA, tmp, 2); std::cout << "maskA = \t\t" << tmp << "\n";
	_itoa_s(maskB, tmp, 2); std::cout << "maskB = \t\t" << tmp << "\n";
	int copyfromA = (A & maskA) >> p;
	_itoa_s(A | maskA, tmp, 2); std::cout << "новое число A = \t" << tmp << "\n";
	_itoa_s(copyfromA, tmp, 2); std::cout << "выделенные биты = \t\t" << tmp << "\n";
	B = B & (~maskB);
	B = B | (copyfromA << q);
	_itoa_s(B, tmp, 2); std::cout << "новое число B = \t" << tmp << "\n";
	return 0;

}