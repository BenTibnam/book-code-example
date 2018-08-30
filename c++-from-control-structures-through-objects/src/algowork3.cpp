// enter in three games score's and find the average

#include<iostream>

int main(){
	int g1 = 0, g2 = 0, g3 = 0;
	std::cout << "enter in a score and press enter, continue until calculation is displayed\n";
	std::cin >> g1 >> g2 >> g3;
	int avg = (g1 + g2 + g3) / 3;

	std::cout << "AVG SCORE: " << avg << '\n';

	return 0;
}
