// display ASCII value of character

#include<iostream>

int main(){
	char letter;
	std::cout << "Enter a single character: ";
	std::cin >> letter;

	int asciiCharacter = static_cast<int>(letter);
	std::cout << "The ASCII value for \"" << letter << "\" is " << asciiCharacter << '\n';

	return 0;
}
