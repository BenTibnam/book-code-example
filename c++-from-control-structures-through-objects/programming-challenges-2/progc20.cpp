/*
 * calculates how many cans of paint are needed for a fence
*/

#include<iostream>

int main(){
	const int FENCE_WIDTH_FT = 100;
	const int FENCE_HEIGHT_FT = 6;
	const int SQFT_BY_CAN = 340;

	int areaToCover = FENCE_WIDTH_FT * FENCE_HEIGHT_FT;
	double cansNeed = (double)areaToCover / SQFT_BY_CAN;

	printf("You need %.2f cans\n", cansNeed);

	return 0;
}
