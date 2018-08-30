// following is an example of a static cast
#include<iostream>

int main(){
	double number = 3.32;
	int val = static_cast<int>(number);
	
	std::cout << "number: " << number;
	std::cout << "\nval: " << val << "\n";

	return 0;
}
