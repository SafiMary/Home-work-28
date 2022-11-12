#pragma once
#include <string>

struct product {
	std::string name;
	int number = 0;
	int price{};
}; 
void print_prod(product &P);
void sell(product& P, int number);
int full_price(product& P);