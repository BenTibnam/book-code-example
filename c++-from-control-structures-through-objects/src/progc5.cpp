// calculates the percentage of male to females per a given class

#include<iostream>

int main(){
	int amtMales = 0, amtFemales = 0;
	std::cout << "This program calculates the percentage of males and females in a class\nMales: ";
	std::cin >> amtMales;
	std::cout << "Females: ";
	std::cin >> amtFemales;
	
	// calculating percentages	
	int total = amtMales + amtFemales;	
	double perMale = (double) amtMales / (double) total * 100;
	double perFemale = (double) amtFemales / (double) total * 100;
	
	std::cout << "MALES: " << perMale << "%\nFEMALES: " << perFemale << "%\nTotal: " << total << "\n";
	
	return 0;
}
