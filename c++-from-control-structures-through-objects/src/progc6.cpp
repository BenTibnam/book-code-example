// adjusts ingredients for cookies depending on the amount being made

#include<iostream>
#include<string>
#include<stdlib.h>

int main(){
	const double C_SUGAR_PER_COOKIE = 1.5 / 48;
	const double C_BUTTER_PER_COOKIE = 1.0 / 48;
	const double C_FLOUR_PER_COOKIE = 2.75 / 48;
	int cookiesBaked;
	
	std::cout << "How many cookies are you baking;
	std::cin >> cookiesBaked;
	
	double sugar = C_SUGAR_PER_COOKIE * cookiesBaked;
	double butter = C_BUTTER_PER_COOKIE * cookiesBaked;
	double flour = C_FLOUR_PER_COOKIE * cookiesBaked;
	
	std::cout << "You need " << sugar << " cups of sugar\n" << butter << " cups of butter\n" << flour << " cups of flour\n";
	
	return 0;
}
