// this program asks for name and city using getline()

#include<iostream>
#include<string>

int main(){
	std::string name, city;
	std::cout << "name: ";
	getline(std::cin, name);
	std::cout << "city: ";
	getline(std::cin, city);
	std::cout << "Hello " << name << " from " << city << ".\n";

	return 0;
}
