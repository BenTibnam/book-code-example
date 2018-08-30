#include<iostream>

int main(){
	int first, second, product;
	std::cout << "Enter a number: ";
	std::cin >> first;
	std::cout << "Enter another number: ";
	std::cin >> second;
	product = first * second;
	std::cout << "The product of the numbers entered is: " << product << '\n';

	return 0;
}
