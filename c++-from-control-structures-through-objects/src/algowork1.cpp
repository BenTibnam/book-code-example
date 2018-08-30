// retail grants max credit

#include<iostream>

int main(){
	int maxCredit, usedCredit, curCredit;
	std::cout << "Enter the max amount of credit: ";
	std::cin >> maxCredit;
	std::cout << "Enter used credit: ";
	std::cin >> usedCredit;
	
	curCredit = maxCredit - usedCredit;
	std::cout << "Current credit is " << curCredit << '\n';

	return 0;
}
