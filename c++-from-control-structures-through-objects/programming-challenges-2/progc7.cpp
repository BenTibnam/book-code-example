/*
 * calculate amount sea level rises if each year it raises 1.5 mm
*/

#include<iostream>

int main(){
	const double YEARLY_RAISE_MM = 1.5;
	int years;
	char option;

	do{
		std::cout << "How many years: ";
		std::cin >> years;
		printf("Ocean has risen %.1f\nAgain(y/n): ", YEARLY_RAISE_MM * years);
		std::cin >> option;
		if(option != 'y') break;
		else continue;
	}while(1);


	return 0;
}
