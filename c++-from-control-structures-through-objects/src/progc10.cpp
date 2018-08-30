// calculates the preplacement cost of a building
// per = 0.8

#include<iostream>

int main(){
	const double INSURE_PERCENT = 0.8;
	double costOfBuilding;
	
	std::cout << "Program calculates the amount you should insure a building for based off the buildings cost\nBuilding cost: ";
	std::cin >> costOfBuilding;
	
	double insureAmount = costOfBuilding * INSURE_PERCENT;
	printf("Amount to insure: %.2f\n", insureAmount);
	
	return 0;
}
