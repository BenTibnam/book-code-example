// calculates full value of a retail transaction

#include<iostream>

int main(){
	double sub, tax, total;
	std::cout << "Enter the subtotal of transaction: ";
	std::cin >> sub;
	std::cout << "Enter the tax of transaction: ";
	std::cin >> tax;
	
	total = sub * (1 + tax);

	std::cout << "SUBTOTAL: " << sub << "\n";
	std::cout << "TAX: " << (sub * tax) << "\n";
	std::cout << "TOTAL: " << total << '\n';

	return 0;
}
