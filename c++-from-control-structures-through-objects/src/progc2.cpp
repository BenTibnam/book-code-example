// displays money made by seats sold

#include<iostream>
#include<iomanip>

int main(){
	const double CLASS_A_COST = 15.00, CLASS_B_COST = 12.00, CLASS_C_COST = 9.00;
	int classASold, classBSold, classCSold;
	
	// getting the tickets sold
	std::cout << "Tickets Sold\n";
	std::cout << "Class A: ";
	std::cin >> classASold;
	std::cout << "Class B: ";
	std::cin >> classBSold;
	std::cout << "Class C: ";
	std::cin >> classCSold;
	
	int total = (classASold * CLASS_A_COST) + (classBSold * CLASS_B_COST) + (classCSold * CLASS_C_COST);
		
	std::cout << "Total made\n";
	std::cout << "Class A: $" << std::showpoint << std::setprecision(2) << (classASold * CLASS_A_COST) << '\n';
	std::cout << "Class B: $" << (classBSold * CLASS_B_COST) << '\n';
	std::cout << "Class C: $" << (classCSold * CLASS_C_COST) << '\n';
	std::cout << "Total Earnings: " << total << '\n';
	
	return 0;
}
