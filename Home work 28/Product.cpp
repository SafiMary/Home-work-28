#include "Product.h"
#include <iostream>
#include <string>


void print_prod(product &P) {
	std::cout << "\nНазвание товара\n" << P.name << '\n';
	std::cout << "\nКоличество товара\n" << P.number << '\n';
	std::cout << "\nЦена за единицу\n" << P.price << '\n';
}
void sell(product& P, int num) {
	P.number -= num;
	std::cout << P.number;
}
int full_price(product& P) {
	int sum = 0;
	sum = P.number * P.price;
	return sum;
}

