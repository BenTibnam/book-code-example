/*
* calculates and displays transaction information
* Programming Challenge 2.8
*/

#include<iostream>

int main(){
	const double SALES_TAX = 0.07;
	double itemOne = 15.95, itemTwo = 24.95, itemThree = 6.95, itemFour = 12.95, itemFive = 3.95;
	double subtotal = itemOne + itemTwo + itemThree + itemFour + itemFive;
	double tax = subtotal * SALES_TAX;
	double totat = subtotal + tax;

	// printing out the information in a reciept like manner
	printf("My Store\nItem 1 \t\t %.2f\nItem 2 \t\t %.2f\nItem 3 \t\t %.2f\nItem 4 \t\t %.2f\nItem 5 \t\t %.2f\n\nSubtotal:\t%.2f\nTax:\t%.2f\nTotal:\t%.2f\n", itemOne, itemTwo, itemThree, itemFour, itemFive, subtotal, tax, totat);
	return 0;
}
