/*
* calculates miles per gallon
* Programming Challenge 10
*/

#include<iostream>

int main(){
	double tankTotal, maxMiles;
	std::cout << "Gallons of gas tank can hold: ";
	std::cin >> tankTotal;

	std::cout << "Miles that can be driven on a full tank: ";
	std::cin >> maxMiles;

	double mpg = maxMiles / tankTotal;
	printf("%.2f MPG\n", mpg);

	return 0;
}
