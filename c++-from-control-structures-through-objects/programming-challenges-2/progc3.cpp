/*
* Computes the total sales tax on an item that is $95
* Programming Challenge 2.3
*/

#include<iostream>

int main(){
	double item = 95.0, stateTax = 0.04, federalTax = 0.02;
	double total = item + (item * stateTax) + (item * federalTax);
	printf("Total Tax: %.2f\nTotal cost: %.2f\n", ((item * stateTax) + (item * federalTax)), total);

	return 0;
}
