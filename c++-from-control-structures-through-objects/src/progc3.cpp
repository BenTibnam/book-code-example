// gets the average of five test scores

#include<iostream>

int main(){
	double s1, s2, s3, s4, s5;
	std::cout << "Program calculates the average of five test scores\nEnter in five scores\n";
	std::cin >> s1 >> s2 >> s3 >> s4 >> s5;
	int avg = (s1 + s2 + s3 + s4 + s5) / 5;
	std::cout << "Average Test Score: " << avg << '\n';
	
	return 0;
}
