// finds the volume of a cylinder
// formula = pi * radius^2 * height
#include<iostream>
#include<cmath>

int main(){
	double volume, radius, height;
	const double PI = 3.14159;

	std::cout << "Enter the radius of the cylinder: ";
	std::cin >> radius;

	std::cout << "Enter the height of the cylinder: ";
	std::cin >> height;

	volume = PI * pow(radius, 2.0) * height;
	std::cout << "The volume of the cylinder is: " << volume << '\n';

	return 0;
}
