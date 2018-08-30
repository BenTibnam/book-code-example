// convert celsius to fahrenheit converter

#include<iostream>

double ctof(double c){
	return ((9.0/5.0) * c) + 32.0;
}

double ftoc(double f){
	return (f-32.0)/(9.0/5.0);
}

int main(){
	char opt;
	double n;
	
	std::cout << "Tempture converter\ntype f for celsius to fahrenheit\ntype c for fahrenheit to celsius\npress h to display this message\n";
	while(opt != 'q'){
		std::cout << "> ";
		std::cin >> opt;
		
		if(opt == 'q') continue;
		else if(opt == 'f' || opt == 'c'){
			std::cout << "Enter temp in " << ((opt == 'f') ? 'c' : 'f') << ": ";
			std::cin >> n;
			
			if(opt == 'f') n = ctof(n);
			else if(opt == 'c') n = ftoc(n);
			
			printf("%.2f\n", n);
		}else if(opt == 'h') std::cout << "Tempture converter\ntype f for celsius to fahrenheit\ntype c for fahrenheit to celsius\npress h to display this message\n";
		else std::cout << "ERR: invalid option\n";
	}
	
	return 0;	
}
