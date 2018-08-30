#include<iostream>
#include<iomanip>

int main(){
	int v = 321, v2 = 4325, v3 = 59;
	
	std::cout << std::setw(4) << v << std::setw(4) << v2 << std::setw(4) << v3 << '\n';

	return 0;
}
