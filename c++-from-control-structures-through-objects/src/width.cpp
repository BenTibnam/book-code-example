#include<iostream>

// calculates the area of a rectangle based on user data
int main(){
	int area, width, length;
	std::cout << "Enter width: ";
	std::cin >> width;
	std::cout << "Enter length: ";
	std::cin >> length;
	area = width * length;
	std::cout << "Area: " << area << '\n';
	return 0;
}
