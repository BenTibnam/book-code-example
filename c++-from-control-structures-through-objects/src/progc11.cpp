// calculates payments that goes towards a car to display monthly car payments

#include<iostream>
double promptAndReturn(std::string prompt){
	double d = 0;
	std::cout << prompt;
	std::cin >> d;
	
	return d;
}

int main(){
	double loanPayment, insurance, gas, oil, tires, maintenance;	// monthly payments
	std::cout << "Program calculates the monthly payment for a car based off different monthly payments\n";
	loanPayment = promptAndReturn("Load Payment: ");
	insurance = promptAndReturn("Insurance: ");
	gas = promptAndReturn("Gas: ");
	oil = promptAndReturn("Oil: ");
	tires = promptAndReturn("Tires: ");
	maintenance = promptAndReturn("Maintenance: ");
	
	double totalMonthlyPayment = loanPayment + insurance + gas + oil + tires + maintenance;
	
	printf("Total montly payment: $%.2f\n", totalMonthlyPayment);
	
	return 0;
}
