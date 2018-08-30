#include<iostream>

int main(){
	double pounds, kilo;
	std::cout << "enter weight in pounds: ";
	std::cin >> pounds;

	// converting to kilograms
	kilo = pounds / 2.2;

	std::cout << "you weigh: " << kilo << "kg\n";

	return 0;
}
