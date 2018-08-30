// converts currencies
// YEN_PER_DOLLAR = 111.18684
// EURO_PER_DOLLAR = 0.855099

#include<iostream>

int main(){
	const double YEN_PER_DOLLAR = 111.18684;
	const double EURO_PER_DOLLAR = 0.855099;
	double firstRate, secondRate;
	double amount = 0.0;
	std::string opt = "";
	
	std::cout << "Convert Yen, Euros and USD between each other as they would be on 08/28/2018\n";
	while(opt != "q"){
		std::cout << "Enter first currency(usd/yen/euro): ";
		std::cin >> opt;
		firstRate = (opt == "usd") ? 1 : ((opt == "yen") ? YEN_PER_DOLLAR : EURO_PER_DOLLAR);
		
		std::cout << "Enter amount: ";
		std::cin >> amount;
		
		std::cout << "Enter second currency(usd/yen/euro): ";
		std::cin >> opt;
		secondRate = (opt == "usd") ? 1 : ((opt == "yen") ? YEN_PER_DOLLAR : EURO_PER_DOLLAR);
		
		amount = (amount * secondRate) / firstRate;
		std::cout << "out: " << amount << '\n';
		
		std::cout << "Continue?(y/n(q)) ";
		std::cin >> opt;
		
		if(opt == "n") opt = "q";
			
	}
	
	return 0;
}
