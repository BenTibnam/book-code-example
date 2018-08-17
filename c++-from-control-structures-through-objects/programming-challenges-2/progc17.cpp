/*
* calculate and display stock price, commision and total
*/

#include<iostream>

int main(){
	double shares, price;
	const double COMMISSION = 0.02;
	
	std::cout << "How many shares are you buying: ";
	std::cin >> shares;

	std::cout << "What are their price: ";
	std::cin >> price;

	std::cout << "Total price before commission: " << (shares * price) << "\n";
	std::cout << "Total commission: " << ((shares*price) * COMMISSION) << "\n";
	std::cout << "Total: " << ((shares*price) + (shares*price *COMMISSION)) << "\n";

	return 0;
}
