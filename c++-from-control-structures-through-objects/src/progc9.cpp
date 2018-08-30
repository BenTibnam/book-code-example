// report calories consumed in n number of cookies
// 1 cookie = 100 calories

#include<iostream>
int main(){
	const int CAL_PER_COOKIE = 100;
	int amtEaten = 0;
	
	std::cout << "Programs calculates how many calories are consumed based on the amount of cookies eaten\nCookies eaten: ";
	std::cin >> amtEaten;
	
	int totalCal = CAL_PER_COOKIE * amtEaten;
	std::cout << "You consumed a total of: " << totalCal << " calories\n";
	
	return 0;
}
