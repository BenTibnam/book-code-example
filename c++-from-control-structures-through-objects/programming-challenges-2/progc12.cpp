/*
 * calculates the number of acres in 391876 sqft of land
 * Programming Challenge 12
*/

#include<iostream>

int main(){
	const int ACRE_IN_FEET = 43560;
	const int LAND_IN_SQFT = 391876;

	int acres = LAND_IN_SQFT / ACRE_IN_FEET;

	printf("%d\n", acres);

	return 0;
}
