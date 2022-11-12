#include "Product.h"

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	product k{"milk", 67, 50};
	print_prod(k);
	cout << "Введите число на которое снижается число товаров: \n";
	cin >> n;
	cout << "Остаток товаров после продажи: \n";
	sell(k, n);
	cout << "\nСтоимость оставшихся товаров: " << full_price(k);
	
	
	return 0;
}