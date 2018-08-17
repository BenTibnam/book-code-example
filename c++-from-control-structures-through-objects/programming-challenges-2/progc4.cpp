/*
 * computes cost w/ tax and tip of a restarut bill costing 88.67, with 6.25 sales tax
 * and 20 percent tip
 * Programming Challenge 4
*/

#include<iostream>

int main(){
	double meal = 88.67, salesTax = 0.0625, tip = 0.2;
	double additionalCost = (meal * salesTax) + (meal * tip);
	double totalCost = meal + additionalCost;

	printf("Additional Fees: %.2f\nTotal Bill: %.2f\n", additionalCost, totalCost);
	return 0;
}
