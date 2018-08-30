// dice program
#include<iostream>
#include<stdlib.h>
#include<ctime>

int dice(){
	 const int MIN = 1;
	 const int MAX = 5;

	 srand(time(0));
	 int roll = (int)((rand() % MAX) + 1);
	 return roll;
}

int main(){
	std::cout << dice() << '\n';
	return 0;
}
