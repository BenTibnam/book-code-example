/*
 * calculates tempture if raises by 2%
*/

#include<iostream>

typedef struct temps{
	std::string name;
	int temp;
}temp;

int main(){
	const double raise = 0.02;
	temp temps[] = {{"NYC", 85}, {"Denver", 88}, {"Phoniex", 106}};
	
	for(temp t : temps){
		t.temp += (t.temp * raise);
		std::cout << t.name << ": " << t.temp << '\n';
	}

	return 0;
}
