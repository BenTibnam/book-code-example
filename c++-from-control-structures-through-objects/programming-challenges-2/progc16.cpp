/*
* Draws a diamond 
*/

#include<iostream>

int main(){
	const int CHAR_SPOTS = 7;
	int sideSpace = 3;
	int stars = 1;
	
	// going through 4 rows
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < sideSpace; j++) std::cout << " ";
		for(int j = 0; j < stars; j++) std::cout << "*";
		for(int j = 0; j < sideSpace; j++) std::cout << " ";
		std::cout << '\n';
		sideSpace--;
		stars+=2;
	}

	sideSpace = 1;
	stars = 5;

	// going down the final 3
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < sideSpace; j++) std::cout << " ";
		for(int j = 0; j < stars; j++) std::cout << "*";
		for(int j = 0; j < sideSpace; j++) std::cout << " ";
		std::cout << '\n';
		sideSpace++;
		stars-=2;
	}

	return 0;
}
