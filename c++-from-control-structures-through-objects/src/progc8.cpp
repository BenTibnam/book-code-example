// calculates the how many widgets are on the pallet based on the weight of the pallot
// 1 Widget = 12.5lbs

#include<iostream>

int main(){
	const double WID_WEIGHT = 12.5;
	double palletWeight, totalWeight;
	
	std::cout << "Calculates how many widgets are on the pallet based off of weight\nEmpty Pallet(lbs): ";
	std::cin >> palletWeight;
	std::cout << "Full Pallet(lbs): ";
	std::cin >> totalWeight;
	
	double widgetWeight = totalWeight - palletWeight;
	
	std::cout << "Widget weight(lbs): " << widgetWeight << '\n';
	
	return 0;
}
