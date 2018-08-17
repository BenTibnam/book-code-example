/*
* display the profit of a circut board company
*/

#include<iostream>

int main(){
	const double boardPrice = 14.95;
	int sold;
	
	std::cout << "How many boards were sold: ";
	std::cin >> sold;

	double cost = boardPrice * sold;
	printf("Total Profit: $%.2f\n", cost);

	return 0;
}
