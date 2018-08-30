// calculates gas mileage
#include<iostream>

int main(){
	int maxGallons, milesOnFullTank;
	std::cout << "How many gallons can your tank hold? ";
	std::cin >> maxGallons;
	std::cout << "How many miles can you get per a full tank? ";
	std::cin >> milesOnFullTank;
	
	double mpg = static_cast<double>(milesOnFullTank) / maxGallons;
	
	std::cout << "Car MPG: " << mpg << " miles/gallon\n"; 
	
	return 0;
}
