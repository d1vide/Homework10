#include "Header.h"

int main() {
	setlocale(0, "");
	Student first("Naumov", "Alexey", "", 18, true);
	first.print();
	Boss second("Ivanov", "Ivan", "", 30, 10);
	second.print();
	return 0;
}