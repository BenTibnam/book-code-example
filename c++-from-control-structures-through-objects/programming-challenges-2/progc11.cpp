/*
* calculates the distance of mpg
*/

#include<iostream>

int main(){
	const double MPG_HIGHWAY = 28.9;
	const double MPG_TOWN = 23.5;
	const double TANK_GAL = 20;
	
	double highwayDistance = MPG_HIGHWAY * TANK_GAL;
	double townDistance = MPG_TOWN * TANK_GAL;

	printf("Higway Distance: %.2f\nTown Distance: %.2f\n", highwayDistance, townDistance);

	return 0;
}
