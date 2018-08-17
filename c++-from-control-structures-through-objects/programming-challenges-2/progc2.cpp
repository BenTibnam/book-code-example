/*
 * Predicts the amount of revenue generated at 58% of sales when sales = 8.6 million
 * Programming Challenge 2.2
*/

#include<iostream>

int main(){
	double sales = 8600000, profitPercent = 0.58;
	double profit = sales * profitPercent;
	printf("profit from sales = %.2f\n", profit);
	return 0;
}
