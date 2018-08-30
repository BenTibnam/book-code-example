#include<iostream>

int main(){
	int length, width, height, cost, custCost, profit;
	const double MANU_COST = 0.23, CUST_COST = 0.50;

	std::cout << "Enter length: ";
	std::cin >> length;

	std::cout << "Enter width: ";
	std::cin >> width;
	
	std::cout << "Enter height: ";
	std::cin >> height;

	int vol = length * width * height;
	cost = vol * MANU_COST;
	custCost = vol * CUST_COST;
	profit = custCost - cost;

	std::cout << "VOLUME: " << vol << "\nCOST: " << cost << "\nPAID: " << custCost << "\nPROFIT: " << profit << '\n';

	return 0;
}
