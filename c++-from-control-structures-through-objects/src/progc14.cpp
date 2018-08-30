// calculates how much money was made, and how much of that was sales tax
// SALES_TAX = 0.04

#include<iostream>

int main(){
	const double SALES_TAX = 0.04;
	double moneyCollected;
	std::string month, day, year;
	
	std::cout << "Programs calculates how much of profits goes towards sales tax\nMonth: ";
	std::cin >> month;
	std::cout << "Day: ";
	std::cin >> day;
	std::cout << "Year: ";
	std::cin >> year;
	std::cout << "Total made: ";
	std::cin >> moneyCollected;
	
	double taxProfit = moneyCollected * SALES_TAX;
	double storeProfit = moneyCollected - taxProfit;
	
	std::cout << "Tax: " << taxProfit << '\n';
	std::cout << "Profit: " << storeProfit << '\n';
	
	return 0;
}
