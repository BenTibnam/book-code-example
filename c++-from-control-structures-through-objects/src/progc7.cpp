// caclculate money made and ways of disturbution for a movie where the theater get 10% of profits
// sorry for the spelling mistakes, I just really don't care to fix them

#include<iostream>
#include<string>

int main(){
	const double ADULT_TICK_PRICE = 10.00;
	const double CHILD_TICK_PRICE = 6.00;
	const double PERCENT_TO_THEATER = 0.10;
	
	std::string movieName = "UNDEFINED";
	int adultSold = 0, childSold = 0;
	
	std::cout << "Calculates profits of movie earnings\nName: ";
	getline(std::cin, movieName);
	std::cout << "Adult tickets sold: ";
	std::cin >> adultSold;
	std::cout << "Child tickets sold: ";
	std::cin >> childSold;
	
	// calculating earnings;
	double totalEarnings = (ADULT_TICK_PRICE * adultSold) + (CHILD_TICK_PRICE * childSold);
	double theaterProfits = totalEarnings * PERCENT_TO_THEATER;
	double producersProfits = totalEarnings - theaterProfits;
	std::fixed;
	std::cout << "\"" << movieName << "\"\n";
	printf("Total profits: %.2f \n", totalEarnings);
	printf("Theater profits: %.2f\n", theaterProfits);
	printf("Producer's profits: %.2f\n", producersProfits);
	
	std::cout << "Now you know why a buket of popcorn cost $5\n";
	
	return 0;
}
