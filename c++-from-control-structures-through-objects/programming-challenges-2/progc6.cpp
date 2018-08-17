/* finds annual pay based on period and amount paid during period
* Programming Challenge 2.6
*/

#include<iostream>

int main(){
	double period, amt;
	std::cout << "Period: ";
	std::cin >> period;
	std::cout << "Amount: ";
	std::cin >> amt;

	double total= period * amt;

	printf("Total annual pay = %.2f\n", total);
	return 0;
}
