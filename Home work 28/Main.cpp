#include "Product.h"

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	product k{"milk", 67, 50};
	print_prod(k);
	cout << "������� ����� �� ������� ��������� ����� �������: \n";
	cin >> n;
	cout << "������� ������� ����� �������: \n";
	sell(k, n);
	cout << "\n��������� ���������� �������: " << full_price(k);
	
	
	return 0;
}