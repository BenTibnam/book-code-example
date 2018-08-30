// creates and displays a random number
#include<iostream>
#include<stdlib.h>
#include<ctime>

int main(){
	unsigned seed = time(0);
	srand(seed);

	// displaying some random numbers
	for(int i = 3; i > 0; i++) std::cout << (rand()%9);

	return 0;
}
