/*
 * displays stats on energy drink consumption
 * Programming Challenge 2.18
*/

#include<iostream>

int main(){
	const int AMT_SURVEYED = 16500;
	const double PERCENT_BUY_ENERGY = 0.15;
	const double PERCENT_BUY_CITRUS_ENERGY = 0.58;
	
	int totalEnergy = AMT_SURVEYED * PERCENT_BUY_ENERGY;
	int totalCitrus = totalEnergy * PERCENT_BUY_CITRUS_ENERGY;

	printf("Total who buy energy drinks: %d\n", totalEnergy);
	printf("Total who buy citrus energy drinks %d\n", totalCitrus);

	return 0;
}
